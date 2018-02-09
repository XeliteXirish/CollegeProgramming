let navOpen = true;

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