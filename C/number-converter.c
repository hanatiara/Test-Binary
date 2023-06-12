#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int dec = 0;
    char bin[7] = "0";
    int choice = 0;
    char hex[7] = "0";

    printf("1. Decimal to Binary\n");
    printf("2. Binary to Decimal\n");
    printf("3. Decimal to Hexadecimal\n");
    printf("4. Hexadecimal to Decimal\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Insert decimal number here:\n");
        scanf("%d", &dec);
        DecToBinary(dec);
        break;

    case 2:
        printf("Insert binary number here:\n");
        scanf("%s", &bin);
        BinaryToDec(bin);
        break;

    case 3:
        printf("Insert decimal number here:\n");
        scanf("%d", &dec);
        DecTohex(dec);

    case 4:
        printf("Insert Hexadecimal number here:\n");
        scanf("%s", &hex);
        HexToDec(hex);
        break;

    default:
        break;
    }
    scanf("");
    return 0;
}

int DecToBinary(int number) {
    int result[7];
    int lastDigit = 0;

    if (number == 0) return 0;
    for (int i = 1; i <=8; i++)
    {
        lastDigit = number % 2;
        number = number / 2;

        result[8-i] = lastDigit;
        
    }
    for (int j=0;j<8;j++) {
        printf("%d", result[j]);
    }
    printf(" \n");
    
}


int BinaryToDec(const char* bit) {
    int conv = 0 ;
    int result = 0;
    int power = 0;
    int length = strlen(bit);
    int index = length - 1; // index in C starts from 0

    while(index >= 0) {
        conv = bit[index] - '0';
        result += pow(2, power) * conv;
        index = index - 1;
        power++;
    }
    printf("%d", result);
}

int DecTohex(int number) {
    int result[7] = {0};
    char lastDigit = 0;

    if (number == 0) return 0;
    for (int i = 0; i <= 7; i++)
    {
        lastDigit = hexChecker(number % 16);
        number = number / 16;
        result[7-i] = lastDigit;
    }
    for (int j=0;j<=7;j++) {
        printf("%c", result[j]);
    }
    printf(" \n");
}

int hexChecker(int hex) {
    switch (hex)
    {
    case 10:
        return 65;
        break;
    case 11:
        return 66;
        break;
    case 12:
        return 67;
        break;
    case 13:
        return 68;
        break;
    case 14:
        return 69;
        break;
    case 15:
        return 70;
        break;
    default:
        return (48 + hex);
        break;
    }
}

int HexToDec(const char* hex) {
    int conv = 0 ;
    int result = 0;
    int power = 0;
    int length = strlen(hex);
    char temp;
    int index = length - 1; // index in C starts from 0

    while(index >= 0) {
        temp = toupper(hex[index]);
        conv = decChecker(temp);
        result += pow(16, power) * conv;
        index = index - 1;
        power++;
    }
    printf("%d", result);
}

int decChecker(int hex) {
    switch (hex)
    {
    case 65:
        return 10;
        break;
    case 66:
        return 11;
        break;
    case 67:
        return 12;
        break;
    case 68:
        return 13;
        break;
    case 69:
        return 14;
        break;
    case 70:
        return 15;
        break;
    default:
        return (hex - 48);
        break;
    }
}