//   Armstrong number 

# include <stdio.h>
# include <math.h>

int main(){




    int number, originalNumber, remainder, result = 0, n = 0;

    // Prompt the user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number;

    // Count the number of digits
    while (originalNumber != 0) {
        originalNumber /= 10;
        ++n;
    }

    originalNumber = number;

    // Calculate the sum of each digit raised to the power of the number of digits
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    // Check if the number is an Armstrong number
    if (result == number) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

return 0;
}
