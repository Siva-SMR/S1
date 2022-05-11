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
                <tr><td>
                        <p>Name</p>
                    </td>
                    <td>
                        <input type="text" name="name">
                    </td>
                </tr>
                <tr>
                    <td>
                        <p>Contact</p>
                    </td>
                    <td>
                        <input type="text" name="con">
                    </td>
                </tr>
                <tr>
                    <td>
                        <p>E-Mail</p>
                    </td>
                    <td>
                        <input type="text" name="mail">
                    </td>
                </tr>
                <tr>
                    <td>
                        <p>Username</p>
                    </td>
                    <td>
                        <input type="text" name="usn">
                    </td>
                </tr>
                <tr>
                    <td>
                        <p>Password</p>
                    </td>
                    <td>
                        <input type="text" name="psw">
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

if(isset($_POST["fn"]))
    {
        $name=$_POST["name"];
        $contact=$_POST["con"];
        $email=$_POST["mail"];
        $user=$_POST["usn"];
        $pass=$_POST["psw"];
        $nme=preg_match('/^[A-Za-z]+$/',$name);
        $conc=preg_match('/(6|7|8|9)\d{9}/',$contact);
        $m=preg_match('/^[a-z0-9._%+-]+@[a-z0-9.-]+\.[a-z]{2,4}$/',$email);
        $c=preg_match('@[A-Z]@',$pass);
        $s=preg_match('@[a-z]@',$pass);
        $n=preg_match('@[0-9]@',$pass);
        if($name=="")
        {
            echo "<br>Name must be filled out";  
        }
        else if($nme==0)
        {
            echo "<br>Name should not contain numbers or special characters";
        }
        else{
            echo $name;
        }
        if($contact=="")
        {
            echo "<br>Number must be filled out";
        }
        else if($conc==0)
        {
            echo "<br>Invalid input";
        }
        else{
            echo "<br>",$contact;
        }
        if($email=="")
        {
            echo "<br>E-Mail must be filled out";
        }
        else if($m==0)
        {
            echo "<br>Invalid input";
        }
        else{
            echo "<br>",$email;
        }
        if($user!="")
        {
            echo "<br>",$user;    
        }
        else{
            echo "<br>Username must be filled out!";
        }
        if($pass=="" || strlen($pass)<8)
        {
            echo "<br>Password must contain 8 characters";
        }
        else{
            if($c==0 || $s==0 || $n==0)
            {
                echo "<br>Password must contain a Capital Letter, Small Letter, and a Number";
            }
            else{
                echo "<br>".$pass;
            }
        }
        
        
        
    }
?>