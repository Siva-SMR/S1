<html>
    <head>
        <title>Employee details</title>
    </head>
    <body>
        <form method="POST">
            <center>
            <table style="border: 2px solid black; padding: 15px">
                <tr>
                    <th>Employee Details</th>
                </tr>
                <tr>
                    <td>Employee Id</td>
                    <td><input type="text" name="emp_id"></td>
                </tr>
                <tr>
                    <td>Employee Name</td>
                    <td><input type="text" name="emp_name"></td>
                </tr>
                <tr>
                    <td>Job Name</td>
                    <td><input type="text" name="job_name"></td>
                </tr>
                <tr>
                    <td>Manager ID</td>
                    <td><input type="text" name="manager_id"></td>
                </tr>
                <tr>
                    <td>Salary</td>
                    <td><input type="text" name="salary"></td>
                </tr>
                <tr>
                    <td><center><input type="submit" name="submit"></center></td>
                </tr>
            </table>
            </center>
        </form>
    </body>
</html>
<?php
    $servername = "localhost";
    $username = "root";
    $password = "";
    $database="lab";
    $conn = mysqli_connect($servername, $username, $password, $database);
    if (!$conn)
    {
        die("Connection failed: " . mysqli_connect_error());
    }
    if(isset($_POST["submit"]))
    {
        $empId=$_POST["emp_id"];
        $empName=$_POST["emp_name"];
        $jobName=$_POST["job_name"];
        $managerId=$_POST["manager_id"];
        $salary=$_POST["salary"];
        $sql="INSERT INTO employee (emp_id, emp_name, job_name, manager_id, salary) VALUES ('$empId', '$empName', '$jobName', '$managerId', '$salary')";
        if ($conn->query($sql) === TRUE)
        {
             echo"<script>alert ('Details added successfully!');</script>";
        }
        else
        {
            echo "Error: " . $sql . "<br>" . mysqli_error($conn);
        }
    }
    $sqlreturn = "SELECT * FROM employee WHERE salary>35000 ORDER BY salary;";
    $result = $conn->query($sqlreturn);
    if ($result->num_rows > 0)
    {
        echo"<table align='center' cellpadding='8' width='50%'>";
        echo"<tr><th colspan='2'><center>Employee List whose salary  greater than 35000</center></th></tr>";
        echo"<tr><td style='background:grey; color:white;'>Employee Name</td><td style='background:grey; color:white;'>Salary</td></tr>";
        while($row = $result->fetch_assoc())
        {
            echo"<tr><td>".$row["emp_name"]."</td><td>" . $row["salary"]."</td></tr>";        
        }
        echo"</table>";
    }
    else
    {
        echo "Error: " . $sqlreturn . "<br>" . mysqli_error($conn);
    }
    mysqli_close($conn);
?>
