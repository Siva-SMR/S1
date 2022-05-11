<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Electricity bill</title>
</head>
<body>
    <center>
        <form method="POST">
            <div>
                <table style="border: 2px solid black; padding: 15px">
                    <tr>
                        <td>
                            Enter your meter number:
                            <input type="number" name="meter">
                        </td>
                    </tr>
                    <tr>
                        <td>
                            Enter no.of.units consumed:
                            <input type="number" name="unit">
                        </td>
                    </tr>
                    <tr>
                        <td>
                            Enter the category:
                            <select name="tariff">
                                <option>Rural</option>
                                <option>Residential</option>
                                <option>Commercial</option>
                            </select>
                        </td>
                    </tr>
                    <tr>
                        <td>
                            <button name="fn">Submit</button>
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
    $n1=$_POST['meter'];
    $n2=$_POST['unit'];
    $n3=$_POST['tariff'];
    if($n3=="Rural")
    {
        if($n2>0&&$n2<=50)
        {
            $ec=5;
            $pay=(($n2*.25)+$ec);
        }
        elseif($n2>50&&$n2<=100)
        {
            $ec=5;
            $pay=(($n2*.50)+$ec);
        }
        elseif($n2>100&&$n2<=150)
        {
            $ec=5;
            $pay=(($n2*.75)+$ec);
        }
        elseif($n2>150&&$n2<=200)
        {
            $ec=5;
            $pay=(($n2*1)+$ec);
        }
        elseif($n2>200&&$n2<=300)
        {
            $ec=5;
            $pay=(($n2*2)+$ec);
        }
        elseif($n2>300&&$n2<=500)
        {
            $ec=5;
            $pay=(($n2*3)+$ec);
        }
        echo "Your meter number: ".$n1;
        echo "<br>";
        echo "No.of.unit consumed: ".$n2;
        echo "<br>";
        echo "Extra charge: ".$ec;
        echo "<br>";
        echo "Your total pay: ".$pay;
    }
    if($n3=="Residential")
    {
        if($n2>0&&$n2<=50)
        {
            $ec=15;
            $pay=(($n2*.50)+$ec);
        }
        elseif($n2>50&&$n2<=100)
        {
            $ec=15;
            $pay=(($n2*1)+$ec);
        }
        elseif($n2>100&&$n2<=150)
        {
            $ec=15;
            $pay=(($n2*1.75)+$ec);
        }
        elseif($n2>150&&$n2<=200)
        {
            $ec=15;
            $pay=(($n2*2.50)+$ec);
        }
        elseif($n2>200&&$n2<=300)
        {
            $ec=15;
            $pay=(($n2*3)+$ec);
        }
        elseif($n2>300&&$n2<=500)
        {
            $ec=15;
            $pay=(($n2*5)+$ec);
        }
        echo "Your meter number: ".$n1;
        echo "<br>";
        echo "No.of.unit consumed: ".$n2;
        echo "<br>";
        echo "Extra charge: ".$ec;
        echo "<br>";
        echo "Your total pay: ".$pay;
    }
    if($n3=="Commercial")
    {
        if($n2>0&&$n2<=50)
        {
            $ec=30;
            $pay=(($n2*1)+$ec);
        }
        elseif($n2>50&&$n2<=100)
        {
            $ec=30;
            $pay=(($n2*2)+$ec);
        }
        elseif($n2>100&&$n2<=150)
        {
            $ec=30;
            $pay=(($n2*3)+$ec);
        }
        elseif($n2>150&&$n2<=200)
        {
            $ec=30;
            $pay=(($n2*4)+$ec);
        }
        elseif($n2>200&&$n2<=300)
        {
            $ec=30;
            $pay=(($n2*5)+$ec);
        }
        elseif($n2>300&&$n2<=500)
        {
            $ec=30;
            $pay=(($n2*7)+$ec);
        }
        echo "Your meter number: ".$n1;
        echo "<br>";
        echo "No.of.unit consumed: ".$n2;
        echo "<br>";
        echo "Extra charge: ".$ec;
        echo "<br>";
        echo "Your total pay: ".$pay;
    }
}
?>