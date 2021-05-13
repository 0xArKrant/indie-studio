// REQUIRED
const express = require('express');
const mongoose = require('mongoose');
const passport = require('passport');
const flash = require('connect-flash');
const session = require('express-session');
const server = express();

// DB Config
const db = require('./config/mongo').mongoURI;

// Connect to MongoDB
mongoose.connect(db, {
        useNewUrlParser: true,
        useUnifiedTopology: true
    })
    .then(() => console.log('MongoDB Connected'))
    .catch(err => console.log(err));
mongoose.set('useFindAndModify', false);

// Express body parser
server.use(express.urlencoded({
    extended: true
}));

const PORT = process.env.PORT || 5000;
server.listen(PORT, console.log(`Server started on port ${PORT}`));