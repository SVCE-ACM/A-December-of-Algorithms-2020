// create a text file and type your inputs
// use 'node filename.js < inputfilename.txt' command to run locally

//imports
const https = require('https');

//getting inputs from stdin
process.stdin.resume();
process.stdin.setEncoding('utf8');

var username = "";

process.stdin.on('data', function(chunk){
  username += chunk;
});

process.stdin.on('end', function() {
    // get JSON data of fake users
    https.get('https://jsonplaceholder.typicode.com/users', (resp) => {
        let data = "";
        // A chunk of data has been recieved.
        resp.on('data', (chunk) => {
            data += chunk;
        });
        // The whole response has been received. Find the result
        resp.on('end', () => {
            // check valid or not
            isValidUser(username, data);
        });
    }).on("error", (err) => {
        console.log("Error: " + err.message);
    });
});

function isValidUser(username, data) {
    var jsonData = JSON.parse(data);
    var names = [];
    for(let i = 0;i < jsonData.length;i++){
        names.push(jsonData[i]["username"]);
    }

    // *ECMA JS regex* -,.,_,alphanumeric
    //non-space,non-newline with 1 to 20 chars
    // ^ - start of word, $ end of word
    var pattern = new RegExp("^[-\._a-zA-Z0-9]{1,20}$");
    if(!pattern.test(username)){
        console.log("The username is not valid.\n");
        return;
    }

    for(let i = 0;i < names.length;i++){
        if(username == names[i]){
            console.log("The username is valid but not available.\n");
            return;
        }
    }

    console.log("The username is valid and available.\n");
    return;

}
