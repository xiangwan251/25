
<!DOCTYPE html>
<html>
<head>
<style> 
div
{
  width:90px;
  height:90px;
  position:relative;
  background:blue;
  animation:myrabbit 5s infinite;
}

@keyframes myrabbit
{
    0% {background:blue;left:0px;top:0px;border:60px solid yellow;}
  25% {background:yellow;left:200px;top:0px;border:60px solid yellow;}
  50%{background:green;left:200px;top:200px;border:60px solid yellow;}
  75%{background:purple;left:0px;top:200px;border:60px solid yellow;}
  100%{background:red;left:0px;top:0px;border:60px solid yellow;}
}
</style>
</head>
<body>
<div></div>
</body>
</html>