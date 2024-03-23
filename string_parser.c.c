/*

This question was asked during a technical assessment as part of the interview process for the Junior Embedded Developer role at Signotron India Pvt Ltd. 
Write a C program to parse a string containing colon-separated values and extract substrings along with their respective numeric values. 
The string follows the pattern "string1:number1:string2:number2", where "string1" and "string2" are alphanumeric strings and "number1" and "number2" are integer values. 
Parse the string and print each substring followed by its corresponding integer value. 
Implement this program in C/C++.

*/ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Define the input string
    char str[100] = "ABCD:145:ABDCD:12345";

    // Define variables to store substrings and their corresponding numeric values
    char str1[10] = "", str2[10] = "", str3[10] = "", str4[10] = "";
    int aa, bb, cc, dd = 0;
    int a[3];
    int count = 0;
    int len = strlen(str);

    // Find the positions of colons in the string
    for (int i = 0; i < len; i++) {
        if (str[i] == ':') {
            a[count] = i;
            count++;
        }
    }

    // Extract substrings and their corresponding numeric values
    for (int i = 0; i < a[0]; i++) {
        str1[i] = str[i];
    }
    for (int i = a[0] + 1; i < a[1]; i++) {
        str2[bb] = str[i];
        bb++;
    }
    for (int i = a[1] + 1; i < a[2]; i++) {
        str3[cc] = str[i];
        cc++;
    }
    for (int i = a[2] + 1; i < len; i++) {
        str4[dd] = str[i];
        dd++;
    }

    // Print the extracted substrings and their corresponding numeric values
    printf("%s\n", str1);
    printf("%d\n", atoi(str2));
    printf("%s\n", str3);
    printf("%d\n", atoi(str4));

    return 0;
}

