var line;

while( line = readline()) {
    var arr = line.split(" ");
    var no = parseInt(arr[0]);
    var prob = parseInt(arr[1]);
    
    for(let i = 0; i < no; i++) {
        line = readline();
    }
    
    print(prob);
}