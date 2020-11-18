<?php
$arr=array(10,20,30,40,50);
$key=40;
for($i=0;$i<=sizeof($arr);$i++)
{
	if($key==$arr[$i])
		break;
}
if($i<sizeof($arr))
{$i=$i+1;
echo("Element found at position:".$i);
}else
echo "Element not found";
?> 