function mouseOver(picture) {
    if (picture == 1) {
        document.getElementById('pic1').setAttribute('src', './images/link1_over.png');
    }else if (picture == 2) {
        document.getElementById('pic2').setAttribute('src', './images/link2_over.png');
    }else if (picture == 3) {
        document.getElementById('pic3').setAttribute('src', './images/link3_over.png');
    }
}

function mouseLeave(picture) {
    if (picture == 1) {
        document.getElementById('pic1').setAttribute('src', './images/link1.png');
    }else if (picture == 2) {
        document.getElementById('pic2').setAttribute('src', './images/link2.png');
    }else if (picture == 3) {
        document.getElementById('pic3').setAttribute('src', './images/link3.png');
    }
}