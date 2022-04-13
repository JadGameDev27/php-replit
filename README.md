# PHP Replit
PHP Bin For Repl.it

How To Download : 

Open Repl.it Project Below **Team Folders** or **Multiplayer repls**

![Image](https://i.ibb.co/vQrrdLB/image-2022-04-11-232641992.png)

Then Find the **Shell Tab**

![Second Image](https://i.ibb.co/hD2zvkq/image-2022-04-11-233055855.png)

Type :
```shell
wget https://github.com/JadGameDev27/php-replit/releases/download/PHP/php.zip
unzip php.zip
```
You are ready to go!

Example Usage (express, php-express) : 
```js
const express = require("express");
var app = express();

var phpExpress = require('php-express')({
  binPath: './php/bin/php'
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
