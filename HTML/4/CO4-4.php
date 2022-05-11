<?php
$players=array("MS DHONI","Rahul Dravid","Sachin Tendulkar","Sourav Ganguly","Virender Sehwag","Yuvraj Singh","Sunil Gavaskar","Anil Kumble","Srikkanth","Virat Kohli","Suresh Raina");   
echo "<table align='center' style='border: 2px solid black' cellspacing='10' <tr><th>No</th><th>Name</th></tr>>";
foreach($players as $key=>$value)
{
    echo "<tr><th>",$key+1,"</th><th>$value</th></tr>";
}
echo "</table>";
?>
