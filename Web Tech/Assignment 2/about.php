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
        <a href="./index.php" class="nav-item">Home</a>
        <a href="./about.php" class="nav-item is-active">About</a>
        <button onclick="toggleTheme();" title="Change theme!">&#9776;</button>
    </div>
</div>

<div class="content">

    <div class="about">
        <h3 class="aboutHeader">
            What is this website you might ask?
        </h3>
        <p class="aboutInfo">
            ITB has just launched a user friendly and simple web based tool called the “Smart Campus”. The web
            tool is located at www.itb-smartcampus.ie . The Web site allows users to access real-time campus
            environmental and other data through a Web client in a Web browser. Users of the Web site also
            have the ability to dynamically select how and what data they would like to view. Using a clever mix
            of Web2.0 technologies users can view historical data for their chosen preferences.For example,
            users may wish to graph the campus temperature versus time for the past seven days using the
            interactive jQuery based graphing tool. Or even graph together the campus temperature, footfall
            data at two different locations for the same time period to compare the difference.

            <br><br><br>

            The Smart Campus tool is the front end to a robust and reliable relational database that allows
            historical campus data to be stored and recalled through SQL commands via server-based scripts.
            These scripts can feed the data back to the Web client front end based on specific user preferences.
            By the default the Web client will display the last data from the database.

            <br><br><br>

            The database stores data as it is arrives from various sources, or reporting systems. The database
            captures data from at least 3 different sensor stations located at 1) C-Block Entrance light 2)
            Canteen Pier 3) LINC. The monitoring stations house various sensors. The sensor data from these are then
            exposed on a
            REST endpointed located at /api.php!
        </p>
    </div>

</div>

<?php
include("./partials/footer.php");
?>
</body>

