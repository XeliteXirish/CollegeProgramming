function mouseOver(picture) {
    if (picture == 1) {
        $("#pic1").setAttribute('src', './images/link1_over.png');
    }else if (picture == 2) {
        $("#pic2").setAttribute('src', './images/link2_over.png');
    }else if (picture == 3) {
        $("#pic3").setAttribute('src', './images/link3_over.png');
    }
}

function mouseLeave(picture) {
    if (picture == 1) {
        $("#pic1").setAttribute('src', './images/link1.png');
    }else if (picture == 2) {
        $("#pic2").setAttribute('src', './images/link2.png');
    }else if (picture == 3) {
        $("#pic3").setAttribute('src', './images/link3.png');
    }
}