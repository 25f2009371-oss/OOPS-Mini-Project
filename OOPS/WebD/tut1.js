let a = parseFloat(prompt("Enter number 1"));
let b = parseFloat(prompt("Enter number 2"));
let op = prompt("Enter operation: ");

function opr(a, b, op) {
    let result;
    if (op == "+") {result = a + b;} 
    else if (op == "-"){result = a - b;} ;
    else if (op == "*") {result = a * b;} 
    else if (op == "/") {result = a / b;} 
    else {result = "Error";}
    return result;
}
let s = opr(a, b, op);
document.write(a,' ',op, ' ',b,'=',s)