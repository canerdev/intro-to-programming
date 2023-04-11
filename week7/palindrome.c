#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// ******************* reversed version *******************

int findLength(int num) {
    int i = 1; 

    while (num > 9) {
        num = num / 10;
        i++;
    }

    return i;
}

int reverse(int num) {
    int reversedNumber = 0, len;
    len = findLength(num);

    for (int i = 0; i < len; i++) {
        reversedNumber = (reversedNumber * 10) + (num % 10);
        num = num / 10;
    }

    return reversedNumber;
}

int main() {
    int number, reversedNumber;
    
    printf("Enter a number or (-1) to quit: ");
    scanf("%d", &number);

    if (number == -1)
        return EXIT_SUCCESS;
    
    reversedNumber = reverse(number);

    if (number == reversedNumber)
        printf("This number is a palindrome.\n");
    else
        printf("This number is not a palindrome.\n");

    return EXIT_SUCCESS;
}



// ******************* without reversing the number *******************

// int numDigits(int number) {
//     int i = 1; 

//     while (number > 9) {
//         number = number / 10;
//         i++;
//     }

//     return i;
// }

// int digitsPlace(int number, int place) {
//     int digit;
//     int length_of_number = numDigits(number);

//     for (int i = 0; i < length_of_number - place; i++) {
//         number = number / 10;
//     }
//     digit = number % 10;

//     return digit;
// }

// bool isPalindrome(int number) {
//     int length_of_number = numDigits(number);

//     for (int i = 1; i < length_of_number + 1; i++) {
//         if (digitsPlace(number, i) != digitsPlace(number, length_of_number - i + 1))
//             return false;
//     }

//     return true;
// }

// int main() {
//     int number;

//     while (true) {
//         printf("Enter a number or (-1) to quit: ");
//         scanf("%d", &number);

//         if (number == -1)
//             break;
//         else if (isPalindrome(number))
//             printf("This number is a palindrome.\n");
//         else if (!isPalindrome(number))
//             printf("This number is not a palindrome.\n");
//     }
    
//     return EXIT_SUCCESS;
// }