const fs = require('fs');
const path = require('path');
const chalk = require('chalk');

let removedFiles = 0;
let removeExtensions = require('./extensions');

function run(startPath, shouldDelete){

    if (!fs.existsSync(startPath)) return;

    let files = fs.readdirSync(startPath);
    for(var i = 0; i < files.length; i++){

        var filename = path.join(startPath, files[i]);
        var stat = fs.lstatSync(filename);

        if (stat.isDirectory()){

            run(filename, shouldDelete); //recurse

        } else if (removeExtensions.some(ext => {
            return filename.endsWith(ext);
        })) {

            // Check if it has an extension
            let extensionArray = filename.split('.');
            let extension = extensionArray[extensionArray.length - 1];
            if (extension){
                console.log(chalk.red('[Found] - '), filename);
                if (shouldDelete) fs.unlink(filename, err => {
                    // Dont do anything with the error, coding 101
                })
                removedFiles++;
            }
        };
    };
};


run(`${__dirname}/../`, process.env.delete || false);