const Koa=require('koa');
const port=3000;
const serve=require('koa-static');
const app=new Koa();
//app.use(serve(__dirname+'../htdocs/webrtc'));
app.use(serve('../htdocs/webrtc'));
const servak=app.listen(port);
console.log(port);
/*
run ./peer-connection 1 host =>offer sdp?? 
* then in browser uncheck role 'offering'
* paste offer sdp into secont textarea 'paste remote description
* then in first textarea copy 'copy local description' and paste into the console
*/
