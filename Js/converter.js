function DecToBinary(num) {
    if (num === 0) return 0;
    result = '';
    lastDigit = 0;
    for(let x=0;x<8;x++) {
        lastDigit = num % 2;
        num = Math.trunc(num / 2);
        result = parseInt(lastDigit) + result;
    }

    while(result.charAt(0) === '0') {
        result = result.substring(1);
    }

    return result;
}

function BinaryTodec(bit) {
    result = 0;

    for(let power=0;power<bit.length;power++){
        result += (2 ** power) * parseInt(bit.slice(-1));
        bit = bit.substring(-1);
    }

    return result;
}

function DecToHex(num) {
    if (num === 0) return 0;
    result = '';
    lastDigit = 0;
    for(let x=0;x<8;x++) {
        lastDigit = num % 16;
        num = Math.trunc(num / 16);
        result = toHex(parseInt(lastDigit)) + result;
    }

    while(result.charAt(0) === '0') {
        result = result.substring(1);
    }

    return result;
}

function HexToDec(hex) {
    result = 0;
    for(let power=0;power<hex.length;power++){
        result += (16 ** power) * parseInt(toDec(hex.slice(-1)));
        hex = hex.substring(-1);
    }

    return result;
}

function toDec(hex) {
    switch (hex) {
        case ("A"):
            return 10;
        case ("B"):
            return 11;
        case ("C"):
            return 12;
        case ("D"):
            return 13;
        case ("E"):
            return 14;
        case ("F"):
            return 15;
        default:
            return hex;
    }
        
}

function toHex(dec) {
    switch (dec) {
        case (10):
            return "A"
        case (11):
            return "B"
        case (12):
            return "C"
        case (13):
            return "D"
        case (14):
            return "E"
        case (15):
            return "F"
        default:
            return dec;
    }
        
}

console.log(DecToBinary(255));
// console.log(BinaryTodec('11111111'));
console.log(DecToHex(255));
console.log(HexToDec("FF"))