dbPassword = `mongodb+srv://${process.env.DB_USER}:${process.env.DB_PASSWORD}@${process.env.DB_CLUSTER}/${process.env.DB_COLLECTIONS}?retryWrites=true&w=majority`;

module.exports = {
    mongoURI: dbPassword,
};
