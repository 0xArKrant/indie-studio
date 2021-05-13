// REQUIRED
const express = require("express");
const mongoose = require("mongoose");
require('dotenv').config({path: __dirname + '/.env'})
const server = express();

const userRoutes = require("./routes/user");

// DB Config
const db = require("./config/mongo").mongoURI;

// Express body parser
server.use(
  express.urlencoded({
    extended: true,
  })
);

// Connect to MongoDB
mongoose
  .connect(db, {
    useNewUrlParser: true,
    useUnifiedTopology: true,
    useCreateIndex: true,
  })
  .then(() => console.log("MongoDB Connected"))
  .catch((err) => console.log(err));
mongoose.set("useFindAndModify", false);

server.use((req, res, next) => {
  res.header("Access-Control-Allow-Origin", "*");
  res.header(
    "Access-Control-Allow-Headers",
    "Origin, X-Requested-With, Content-Type, Accept, Authorization"
  );
  if (req.method === "OPTIONS") {
    res.header("Access-Control-Allow-Methods", "PUT, POST, PATCH, DELETE, GET");
    return res.status(200).json({});
  }
  next();
});

server.use("/user", userRoutes);

server.use((req, res, next) => {
  const error = new Error("Not found");
  error.status = 404;
  next(error);
});

server.use((error, req, res, next) => {
  res.status(error.status || 500);
  res.json({
    error: {
      message: error.message,
    },
  });
});

const PORT = process.env.PORT || 5000;
server.listen(PORT, console.log(`Server started on port ${PORT}`));
