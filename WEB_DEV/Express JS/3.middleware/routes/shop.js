const express = require('express')
const router = express.Router()

// define the home page route
router.get('/', (req, res) => {
  res.send('Shop home page')
})

// define the about route
router.get('/collection', (req, res) => {
  res.send('Tshirt pant kurti etc etc ........')
})

// define the about route
router.get('/product', (req, res) => {
  res.send('Welcome to our product repo');
})


// define the about route
router.get('/product/:slug', (req, res) => {
  res.send(`bring the product ${req.params.slug} from the store`);
})

module.exports = router
