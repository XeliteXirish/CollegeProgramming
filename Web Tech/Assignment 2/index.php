<head>
    <title>Home &bull;&nbsp;Smart Campus</title>

    <?php
    include("./partials/header.php");
    ?>
</head>

<body>

<div class="navbar">

    <?php
    include("./partials/nav-title.php");
    ?>

    <div class="nav-list">
        <a href="./index.php" class="nav-item is-active">Home</a>
        <a href="./about.php" class="nav-item">About</a>
        <button onclick="toggleTheme();" title="Change theme!">&#9776;</button>
    </div>
</div>

<div class="content">
    <div class="columns">
        <div class="column" id="tempChart"></div>

        <div class="column" id="lightChart"></div>

        <div class="column" id="windChart"></div>
    </div>

    <br><br><br><br><br>

    <div class="sensorInfo">
        <h1 class="sensorTitle" style="border-bottom: 1px solid dodgerblue">&bull;&nbsp;ITB Smart Campus Sensors - </h1>
        <br>
        <p style="border-bottom: 1px solid dodgerblue">There are 3 different sensor locations spread around the campus,
            each with 3 environmental sensors:</p><br>
        <div class="columns">
            <div class="column">
                &bull;&nbsp;<b>C-Block</b>:
                <ul>
                    <li>Temperature Sensor</li>
                    <li>Wind Speed Monitor</li>
                    <li>Light Level Sensor</li>
                </ul>
            </div>
            <br><br><br>
            <div class="column">
                &bull;&nbsp;<b>Canteen</b>:
                <ul>
                    <li>Temperature Sensor</li>
                    <li>Wind Speed Monitor</li>
                    <li>Light Level Sensor</li>
                </ul>
            </div>
            <br><br><br>
            <div class="column">
                &bull;&nbsp;<b>Link Building</b>:
                <ul>
                    <li>Temperature Sensor</li>
                    <li>Wind Speed Monitor</li>
                    <li>Light Level Sensor</li>
                </ul>
            </div>
        </div>
    </div>

</div>

<script src="./js/charts.js"></script>
<?php
include ("./partials/footer.php");
?>
</body>

