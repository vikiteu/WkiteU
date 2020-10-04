<!DOCTYPE html>
<html lang="en">
 
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <canvas width="400" height="400">
    </canvas>
    <script>
        var wk=document.querySelector('canvas');
        var ctx=wk.getContext('2d');  
        cr('#75d38d',1.2,3);
        cr('pink',3,4.2);
        cr('#98a6a7',4.2,1.5*Math.PI);
        cr('#6bb3c5',1.5*Math.PI,2*Math.PI+1.2);


       function cr(color,fd,zd){
        ctx.beginPath();
        ctx.moveTo(200,200);
        ctx.arc(200,200,180,fd,zd); 
        ctx.closePath();
        ctx.fillStyle=color;
        ctx.fill();
        }
    </script>
</body>
</html>
