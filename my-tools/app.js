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
* paste the offer sdp from the server console into the second textarea in a browser 'paste remote description'
* then in the first textarea in a browser copy 'copy local description' and paste it into the server console
* Notes. after paste into the server console 'enter' and see if thre are parser errors of some kind
*/
