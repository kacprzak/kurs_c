<html>
  <head>
    <title>cw11-02</title>
  <body>
    <table border="1">
<?php
for ($i = 1; $i <= 10; ++$i) {
  echo '<tr>';
  for ($j = 1; $j <= 10; ++$j) {
    echo '<td>';
    echo $i*$j;
    echo '</td>';
  }
  echo '</tr>';
}
?>    
    </table>
  </body>
</html>