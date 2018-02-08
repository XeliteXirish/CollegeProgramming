function openNav() {
    document.getElementById("sidenav").style.width = "240px";
    document.getElementById("mainContent").style.marginLeft = "240px";
    $("#navBtn").hide();
}

function closeNav() {
    document.getElementById("sidenav").style.width = "0";
    document.getElementById("mainContent").style.marginLeft = "0";
    $("#navBtn").show();
}