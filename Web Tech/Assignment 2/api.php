<?php

ini_set('display_errors', '1');
error_reporting(E_ALL);

$servername = "localhost";
$username = "webtech";
$password = "webtech";
$database = "webtech";

$connection = mysqli_connect($servername, $username, $password) or die("Error connecting");
mysqli_select_db($connection, $database) or die ("no database");

$sql = "SELECT * FROM ((sensor INNER JOIN sensors ON sensor.Sensor_Type = sensors.Sensor_Type) INNER JOIN location ON sensor.Location_ID = location.Location_ID);";

$result = mysqli_query($connection, $sql) or die("Error in Selecting " . mysqli_error($connection));

$emparray = array();
while ($row = mysqli_fetch_assoc($result)) {
    $emparray[] = $row;
}

echo json_encode($emparray);
mysqli_close($connection);