let locations = []; // TODO fetch from database


function getTempLocationData(location) {
    return [
        { label: "apple",  y: 10  },
		{ label: "orange", y: 15  },
    ]
}

function getLightLocationData(location) {
    return [
        { x: new Date(2000, 0), y: 3289000 },
        { x: new Date(2001, 0), y: 3830000 },
        { x: new Date(2002, 0), y: 2009000 },
        { x: new Date(2003, 0), y: 2840000 },
    ]
}

function getWindLocationData() {
    return [		
        { x: new Date(2014, 00, 01), y: 850 },
        { x: new Date(2014, 01, 01), y: 889 },
        { x: new Date(2014, 02, 01), y: 890 },
        { x: new Date(2014, 03, 01), y: 899 },
        { x: new Date(2014, 04, 01), y: 903 },
        { x: new Date(2014, 05, 01), y: 925 },
        { x: new Date(2014, 06, 01), y: 899 },
        { x: new Date(2014, 07, 01), y: 875 },
        { x: new Date(2014, 08, 01), y: 927 },
        { x: new Date(2016, 05, 01), y: 1150 }
    ]
}

function loadTemperatureChart() {
    let chart = new CanvasJS.Chart("tempChart", {
        zoomEnabled:true,
        backgroundColor: (isDarkThemeEnabled ? '#333' : '#fff'),
        animationEnabled: true,
        title: {
            text: "Campus Temperature Data"
        },
        data: [
        {
            type: "column",
            name: 'Location 1',   
            showInLegend: true,       
            dataPoints: getTempLocationData(0)
        },
        {
            type: 'column',
            name: 'Location 2',
            showInLegend: true,
            dataPoints: getTempLocationData(1)
        }
        ]
    });
    chart.render();
}

function loadLightChart() {
    var chart = new CanvasJS.Chart("lightChart", {
        animationEnabled: true,
        title: {
            text: "Campus Light Level"
        },
        axisX: {
            valueFormatString: "DDD",
            minimum: new Date(2017, 1, 5, 23),
            maximum: new Date(2017, 1, 12, 1)
        },
        axisY: {
            title: "Number of Messages"
        },
        legend: {
            verticalAlign: "top",
            horizontalAlign: "right",
            dockInsidePlotArea: true
        },
        toolTip: {
            shared: true
        },
        data: [{
            name: "Received",
            showInLegend: true,
            legendMarkerType: "square",
            type: "area",
            color: "rgba(40,175,101,0.6)",
            markerSize: 0,
            dataPoints: getLightLocationData(0)
        },
        {
            name: "Sent",
            showInLegend: true,
            legendMarkerType: "square",
            type: "area",
            color: "rgba(0,75,141,0.7)",
            markerSize: 0,
            dataPoints: getLightLocationData(1)
        }]
    });
    chart.render();
    
}

function loadWindChart() {
}

window.onload = function() {
    loadTemperatureChart();
    loadLightChart();
}

function getLightData() {

}