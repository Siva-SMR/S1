<html>
    <head>
        <title>New Registration</title>
    </head>
    <body>
        <form method="POST">
            <table align="center"  >
                <tr>
                    <td><label>Name</label></td>
                    <td><input type="text" id="name" name="name" pattern="[A-Za-z]{3,}" required></td>
                </tr>
                <tr>
                    <td><label>Age</label></td>
                    <td><input type="text" id="age" name="age" pattern="[0-9]{1,}" required></td>
                </tr>
                <tr>
                    <td><label>Contact</label></td>
                    <td><input type="text" id="contact" name="contact" required></td>
                </tr>
                <tr>
                    <td><label>Address</label></td>
                    <td><textarea id="address" pattern="[A-Za-z]{5,}" name="address" rows="3" required></textarea></td>
                </tr>
                
                <tr>
                   <td><input type="submit" name="submit"></td>
                </tr>
            </table>
        </form>
    </body>
</html>
<?php
    $servername = "localhost";
    $username = "root";
    $password = "";
    $database="c03";
    $conn = mysqli_connect($servername, $username, $password, $database);
    if(isset($_POST["submit"]))
    {
        $name=$_POST["name"];
        $age=$_POST["age"];
        $contact=$_POST["contact"];
        $address=$_POST["address"];
       
        $sql = "INSERT INTO one (name, age, contact, address) VALUES ('$name', '$age', $contact, '$address')";
        if ($conn->query($sql) === TRUE)
        {
             echo"<script>alert ('Details added successfully!');"
                . "window.location.href='details.php'</script>";
        }
        else
        {
            echo "Error: " . $sql . "<br>" . mysqli_error($conn);
        }
        mysqli_close($conn);
    }
?>

