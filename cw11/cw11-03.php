<?php
$liczba1 = $_GET['liczba1'];
$liczba2 = $_GET['liczba2'];
$dzialanie = $_GET['dzialanie'];
?>
<html>
  <head>
    <title>cw11-03 - Wynik</title>
  </head>
  <body>
<?php
echo $liczba1 . ' ' . $dzialanie . ' ' . $liczba2 . ' = ';

switch($dzialanie)
{
case '+':
  echo $liczba1 + $liczba2;
  break;
case '-':
  echo $liczba1 - $liczba2;
  break;
case '*':
  echo $liczba1 * $liczba2;
  break;
case '/':
  echo $liczba1 / $liczba2;
  break;
}
?>
  </body>
</html>

