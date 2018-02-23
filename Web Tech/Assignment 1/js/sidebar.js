let headerString = '• Welcome to the super awesome Object Orientated Programming tutorial website!';
let headerStringLength = headerString.length;
let navOpen = true;
let interval;

let counter = headerStringLength;

function toggleNav() {
    console.log(`Nav currently open: ${navOpen}`)
    if (navOpen) {
        document.getElementById("sidenav").style.width = "0";
        document.getElementById("mainContent").style.marginLeft = "0";
        navOpen = false;
    } else {
        document.getElementById("sidenav").style.width = "240px";
        document.getElementById("mainContent").style.marginLeft = "240px";
        navOpen = true;
    }
}

$(document).ready(function () {
    interval = setInterval(animateHeader, 20);
});

function animateHeader() {
    if (counter === 0) clearInterval(interval);

    $('#titleText').text(headerString.substring(0, headerStringLength - counter));
    counter--;
}