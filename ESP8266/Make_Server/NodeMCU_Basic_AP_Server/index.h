 //the HTML of the web page
char page[] PROGMEM = R"=====(

<!DOCTYPE html>
<html>
  <head>
    <link rel="icon" href="https://flink.apache.org/img/logo/png/1000/flink_squirrel_1000.png" type="image/x-icon">
    <title>NodeMCU</title>
  </head>
  <body>
<h1>Simple NodeMCU Web Server</h1>
<p>
  <a href="LEDOn"><button class="btn1">ON</button></a>
  <a href="LEDOff"><button class="btn2">OFF</button></a>
</p>
  </body>
</html>

<style>
body{
    font: 15px sans-serif;
    padding:0;
    margin:0;
    background-color:#F8F8F8;
}
h1{
  margin-top: 20px;
  padding: 0;
  text-align:center;
}
p{
  text-align:center;
}
button{
  width:150px;
  height:50px;
  font-size:20px;
  color:white;
  border-radius:10px;
  transition: 0.2s ease;
}
button:hover{
 opacity: .80;
    transition: 0.2s ease; 
}
.btn1{
  background-color:green;
}
.btn2{
  background-color:red;
}
</stle>


)=====";
