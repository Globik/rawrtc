const Koa=require('koa');
const port=3000;
const serve=require('koa-static');
const app=new Koa();
//app.use(serve(__dirname+'../htdocs/webrtc'));
app.use(serve('../htdocs/webrtc'));
const servak=app.listen(port);
console.log(port);
