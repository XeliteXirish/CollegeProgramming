const TEMP = 1;
const LIGHT = 2;
const WIND = 3;
/**
 * Had to not do a lot of this because the Mysql database was done wrong
 */
let allData;
let allCharts = window.allCharts = []; // Used so we can update all themes easily

function getTempLocationData(location) {
    return [
        {x: new Date(2016, 2), y: 1700},
        {x: new Date(2016, 3), y: 2600},
        {x: new Date(2016, 4), y: 1000},
        {x: new Date(2016, 5), y: 1400},
        {x: new Date(2016, 6), y: 900},
        {x: new Date(2016, 7), y: 1000},
        {x: new Date(2016, 8), y: 1200},
        {x: new Date(2016, 9), y: 5000},
        {x: new Date(2016, 10), y: 1300},
        {x: new Date(2016, 11), y: 2300},
        {x: new Date(2017, 0), y: 2800},
        {x: new Date(2017, 1), y: 1300}
    ];
    let results = [];
    if (location === 1) {
        allData.forEach(val => {
            if (val.Location_ID == 1 && val.Sensor_Type == TEMP) {
                results.push({
                    x: val.Date, y: val.Location_Name
                })
            }
        });
        return results;

    } else if (location === 2) {
        allData.forEach(val => {
            if (val.Location_ID == 2 && val.Sensor_Type == TEMP) {
                results.push({
                    x: val.Date, y: val.Location_Name
                })
            }
        });
        return results;
    } else if (location === 3) {
        allData.forEach(val => {
            if (val.Location_ID == 3 && val.Sensor_Type == TEMP) {
                results.push({
                    x: val.Date, y: val.Location_Name
                })
            }
        });
        return results;
    }
}

function getLightLocationData(location) {
    return [
        {x: new Date(2017, 0), y: 12},
        {x: new Date(2017, 1), y: 15},
        {x: new Date(2017, 2), y: 12},
        {x: new Date(2017, 3), y: 17},
        {x: new Date(2017, 4), y: 20},
        {x: new Date(2017, 5), y: 21},
        {x: new Date(2017, 6), y: 24},
        {x: new Date(2017, 7), y: 19},
        {x: new Date(2017, 8), y: 22},
        {x: new Date(2017, 9), y: 25},
        {x: new Date(2017, 10), y: 21},
        {x: new Date(2017, 11), y: 19}
    ]
}

function getWindLocationData(location) {
    return [
        {x: new Date(2017, 10, 1), y: 63},
        {x: new Date(2017, 10, 2), y: 69},
        {x: new Date(2017, 10, 3), y: 65},
        {x: new Date(2017, 10, 4), y: 70},
        {x: new Date(2017, 10, 5), y: 71},
        {x: new Date(2017, 10, 6), y: 65},
        {x: new Date(2017, 10, 7), y: 73},
        {x: new Date(2017, 10, 8), y: 96},
        {x: new Date(2017, 10, 9), y: 84},
        {x: new Date(2017, 10, 10), y: 85},
        {x: new Date(2017, 10, 11), y: 86},
        {x: new Date(2017, 10, 12), y: 94},
        {x: new Date(2017, 10, 13), y: 97},
        {x: new Date(2017, 10, 14), y: 86},
        {x: new Date(2017, 10, 15), y: 89}
    ]
}

function loadTemperatureChart() {
    let chart = new CanvasJS.Chart("tempChart", {
        zoomEnabled:true,
        theme: 'light1',
        animationEnabled: true,
        title: {
            text: "Campus Temperature"
        },
        axisY: {
            includeZero: true
        },
        toolTip: {
            shared: true
        },
        legend: {
            fontSize: 13
        },
        data: [{
            type: "splineArea",
            showInLegend: true,
            name: "C-Block",
            xValueFormatString: "DD MMM YYYY",
            dataPoints: getTempLocationData(1)
        },
            {
                type: "splineArea",
                showInLegend: true,
                name: "Canteen",
                dataPoints: getTempLocationData(2)
            },
            {
                type: "splineArea",
                showInLegend: true,
                name: "Linc Building",
                dataPoints: getTempLocationData(3)
            }]
    });

    allCharts.push(chart);
    chart.render();
}

function loadLightChart() {
    let chart = window.temp = new CanvasJS.Chart("lightChart", {
        zoomEnabled: true,
        theme: 'light1',
        animationEnabled: true,
        title: {
            text: "Campus Light Level Data"
        },
        axisY: {
            title: "Light Level",
            valueFormatString: "#0",
        },
        legend: {
            cursor: "pointer"
        },
        toolTip: {
            shared: true
        },
        data: [{
            type: "area",
            name: "C-Block",
            markerSize: 5,
            showInLegend: true,
            xValueFormatString: "MMMM",
            dataPoints: getLightLocationData(0)
        }, {
            type: "area",
            name: "Canteen",
            markerSize: 5,
            showInLegend: true,
            dataPoints: getLightLocationData(1)
        }, {
            type: "area",
            name: "Linc Building",
            markerSize: 5,
            showInLegend: true,
            dataPoints: getLightLocationData(2)
        }]
    });

    allCharts.push(chart);
    chart.render();
}

function loadWindChart() {
    let chart = window.temp = new CanvasJS.Chart("windChart", {
        zoomEnabled: true,
        theme: 'light1',
        animationEnabled: true,
        title: {
            text: "Campus Wind Speed Report"
        },
        axisX: {
            valueFormatString: "DD MMM"
        },
        axisY: {
            title: "Wind Speed",
            suffix: "KM/hr",
            minimum: 30
        },
        toolTip: {
            shared: true
        },
        legend: {
            cursor: "pointer",
            verticalAlign: "bottom",
            horizontalAlign: "left",
            dockInsidePlotArea: true
        },
        data: [
            {
                type: "line",
                showInLegend: true,
                name: "C-Block",
                markerType: "square",
                xValueFormatString: "DD MMM, YYYY",
                color: "#F08080",
                yValueFormatString: "#,##0K",
                dataPoints: getWindLocationData(0)
            }, {
                type: "line",
                showInLegend: true,
                name: "Canteen",
                lineDashType: "dash",
                yValueFormatString: "#,##0K",
                dataPoints: getWindLocationData(1)
            }, {
                type: "line",
                showInLegend: true,
                name: "Linc Building",
                lineDashType: "dash",
                yValueFormatString: "#,##0K",
                dataPoints: getWindLocationData(2)
            }]
    });

    allCharts.push(chart);
    chart.render();
}

window.onload = () => {
    fetch('./api.php').then((resp) => resp.json()).then(res => {

        allData = res;

        loadTemperatureChart();
        loadWindChart();
        loadLightChart();
    })
};