<?php
$servername = "localhost";
$username = "root";
$password = "";
$database="c03";
$conn = mysqli_connect($servername, $username, $password, $database);
$sql = "SELECT name, age, contact, address FROM `one`;
$result = $conn->query($sql);

if ($result->num_rows > 0)
{

  while($row = $result->fetch_assoc())
  {
    echo " - Name: " . $row["name"].  " - Age: " . $row["age"].  " - Contact: " . $row["contact"].  " - Address: " . $row["address"].;
  }
} 
else
{
  echo "0 results";
}
?>