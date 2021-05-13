dbPassword = `mongodb+srv://${DB_USER}:${DB_PASS}@${DB_CLUSTER}/${DB_COLLECTIONS}?retryWrites=true&w=majority`

module.exports = {
    mongoURI: dbPassword
};