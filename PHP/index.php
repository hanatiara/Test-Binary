<?php 
    function DecToBinary($number)
    {
        if ($number == 0) return 0;
        $result = '';
        $lastDigit = 0;
        for($i=1;$i<=16;$i++){
            $lastDigit = $number % 2;
            $number = $number / 2;
            
            $result = $lastDigit . $result;
                        
        }
        while($result[0] == '0') {
            $result = substr($result, 1);
        }
        return $result;

    }

    function BinaryToDec($bit) 
    {
        $result = 0;
        $power = 0;
        while($bit != '') {
            $result += pow(2, $power) * (int)substr($bit, -1);
            $bit = substr($bit, 0, -1);
            $power++;
        }
        return $result;
    }

    function DecToHex($number)
    {
        if ($number == 0) return 0;
        $result = '';
        $lastDigit = 0;
        for($i=1;$i<=4;$i++){
            $lastDigit = $number % 16;
            $number = $number / 16;
            
            $result = hexChecker($lastDigit) . $result;
                        
        }
        while($result[0] == '0') {
            $result = substr($result, 1);
        }
        return $result;

    }

    function HexToDec($hex) {
        $result = 0;
        $power = 0;
        while($hex != '') {
            $result += pow(16, $power) * (int) decChecker(substr($hex, -1));
            $hex = substr($hex, 0, -1);
            $power++;
        }
        return $result;
    }

    function decChecker($hex){
        switch ($hex) {
            case 'A' :
                return 10;
                break;
            case 'B' :
                return 11;
                break;
            case 'C' :
                return 12;
                break;
            case 'D' :
                return 13;
                break;
            case 'E' :
                return 14;
                break;
            case 'F' :
                return 15;
                break;
            default :
                return $hex;
                break;
        }
    }

    function hexChecker($hex){
        switch ($hex) {
            case 10 :
                return 'A';
                break;
            case 11 :
                return 'B';
                break;
            case 12 :
                return 'C';
                break;
            case 13 :
                return 'D';
                break;
            case 14 :
                return 'E';
                break;
            case 15 :
                return 'F';
                break;
            default :
                return $hex;
                break;
        }
    }

    function stringChecker($string, $offset){
        return substr($string, $offset);
    }
    // echo DecToHex('00');
    echo HexToDec('FFF');
    // echo hexChecker(13);
    // echo BinaryToDec('11011');
    // echo BinaryToDec(100);
    // echo substr('1', 0, -1);
    // echo stringChecker('002', 1);
?>