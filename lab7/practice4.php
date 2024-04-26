<html>  
<body>  
<table border ="1">
<?php    
$x = 1;
$size = $_POST['size'];
echo "<tr>";
echo "<th></th>";

    while($x <= $size) {
        echo "<th> $x </th>";
        $x++;
    }
echo "</tr>";
$x = 1;

while($x <= $size) {  
    echo "<tr>";
    echo "<td> $x </td>";
    $y = 1;

    while($y <= $size) {
        echo "<td>" .$x*$y. "</td>";
        $y++;
    }
    
    echo "</tr>";  
  $x++;  
}   
?>    
</table>  
</body>  
</html>  