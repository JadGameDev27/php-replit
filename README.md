# PHP Replit
PHP Bin For Repl.it

Example Usage (express, php-express) : 
```js
const express = require("express");
var app = express();

var phpExpress = require('php-express')({
  binPath: './php'
});

app.set('views', './web');
app.engine('php', phpExpress.engine);
app.set('view engine', 'php');

app.all(/.+\.php$/, phpExpress.router);
app.listen(3000, () => {
  console.log("Server Online!");
})
```

![Example Files and Folders](https://i.ibb.co/2kfsy6m/image-2022-04-11-232024284.png)



Main Link : https://hype-bot.jadgamedev27.repl.co/php.zip
