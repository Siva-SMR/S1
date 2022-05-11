<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>New Form</title>
</head>
<body>
    <center>
        <form method="POST">
            <div>
                <table style="border: 2px solid black; padding: 15px">
                    <tr>
                        <td>
                            <p>Username</p>
                        </td>
                        <td>
                            <input type="text" name="user" required>
                        </td>
                    </tr>
                    <tr>
                        <td>
                            <p>Password</p>
                        </td>
                        <td>
                            <input type="password" name="pass" required>
                        </td>
                    </tr>
                    <tr>
                        <td>
                            <p>Name</p>
                        </td>
                        <td>
                            <input type="text" name="name" required>
                        </td>
                    </tr>
                    <tr>
                        <td>
                            <p>Contact</p>
                        </td>
                        <td>
                            <input type="number" name="contact" required>
                        </td>
                    </tr>
                    <tr>
                        <td>
                            <p>E-Mail</p>
                        </td>
                        <td>
                            <input type="text" name="mail" required>
                        </td>
                    </tr>
                    <tr>
                        <td>
                            <button name="fn">SUBMIT</button>
                        </td>
                    </tr>
                </table>
            </div>
        </form>
    </center>
</body>
</html>

<?php

$username = $_POST['user'];
$password = $_POST['pass'];
$name = $_POST['name'];
$contact = $_POST['contact'];
$mail = $_POST['mail'];

if(!empty($username) || !empty($password) || !empty($name) || !empty($contact) || !empty($mail)) {

    $host = "localhost";
    $dbusername = "root";
    $dbpassword = "";
    $dbname = "co5";

    $conn = new mysqli($host, $dbusername, $dbpassword, $dbname);
    if(!$conn) {
        die('Connect Error'. mysqli_connect_error());
    }
    else{
        $INSERT = "INSERT Into `p1` (user, pass, name, contact, mail) values('$username', '$password', '$name', '$contact', '$mail')";
        if($conn->query($INSERT)===TRUE) {
            echo "Data has been added";

            $sqlreturn = "SELECT * FROM `p1` WHERE mail='$mail' and pass='$password'";
            $result = $conn->query($sqlreturn);

        if($result->num_rows > 0) {
        
            while($row = $result->fetch_assoc())
            {
                echo"<table align='center' cellpadding='12' width='50%' border>";
                echo"<tr><td>Username</td><td>" . $row["user"]."</td></tr>";
                echo"<tr><td>Password</td><td>" . $row["pass"]."</td></tr>";
                echo"<tr><td>Name</td><td>" . $row["name"]."</td></tr>";
                echo"<tr><td>Contact</td><td>" . $row["contact"]."</td></tr>";
                echo"<tr><td>E-mail</td><td>" . $row["mail"]."</td></tr>";
                echo"</table>";
            }
        }
        else{
            echo "Error: " . $sqlreturn . "<br>" . mysqli_error($conn);
        }
        }
        
        $conn->close();
    }

}
else{
    echo "All field are required";
    die();
}
?>
