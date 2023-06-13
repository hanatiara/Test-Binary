def DecTobinary(number):
    if (number == 0): return 0
    result = ''
    lastdigit = 0
    for x in range (9):
        lastdigit = number % 2
        number = number // 2
        result = str(lastdigit) + result

    while(result[0] == '0'):
        result = result[1:]

    return result

def BinaryToDec(bit):
    result = 0
    power = 0

    for x in range (len(bit)):
        result += (2 ** power) * int(bit[-x])
        power = power + 1

    return result

def DecToHex(number):
    if (number == 0): return 0
    result = ''
    lastdigit = 0
    for x in range (9):
        lastdigit = number % 16
        number = number // 16
        result = str(toHex(lastdigit)) + result

    while(result[0] == '0'):
        result = result[1:]

    return result

def HexToDec(hex):
    result = 0
    power = 0
    
    for x in range (len(hex)):
        result += (16 ** power) * int(toDec(hex[-x].upper()))
        power = power + 1

    return result

def toDec(hex):
    match (hex):
        case ("A"):
            return 10
        case ("B"):
            return 11
        case ("C"):
            return 12
        case ("D"):
            return 13
        case ("E"):
            return 14
        case ("F"):
            return 15
        case default:
            return hex

def toHex(dec):
    match (dec):
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
        case default:
            return dec
        


print(DecTobinary(255))
# print(BinaryToDec("11011"))
# BinaryToDec("11111111")
print(DecToHex(3375))
# print(HexToDec("ff"))
