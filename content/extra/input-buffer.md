# Input Buffer in C

When using scanf to read input in C, the function reads the input up to the first whitespace character, 
which is usually a newline character '\n'. When reading a char immediately after reading other types (such as int or float), 
the leftover newline character from the previous input can cause issues. The scanf for the char will read 
this newline instead of waiting for a new character input. This is why clearing the input buffer is essential.

## Clearing the Input Buffer

When the user inputs an integer or a floating-point number and presses Enter, 
the Enter key generates a newline character ('\n'). This newline character remains in the input buffer. 
If you do not clear the input buffer before reading a character, 
the scanf for charVar will read this leftover newline instead of waiting for a new character input.

To clear Input Buffer :

```c

while (fgetchar() != '\n');

```

ensures that all characters up to and including the newline are removed from the buffer, so the next input operation starts with a clean buffer.

## Example

Here's an example with clearing the Input Buffer :

```c

#include <stdio.h>

int main() {
    int integerVar;
    float floatVar;
    char charVar;

    // Input for integer
    printf("Enter an Integer: ");
    scanf("%d", &integerVar);

    // Input for float
    printf("Enter a floating point value: ");
    scanf("%f", &floatVar);

    // Clear the input buffer
    while (fgetchar() != '\n');

    // Input for char
    printf("Enter a Character: ");
    scanf("%c", &charVar);

    // Print the values
    printf("The integer value: %d\n", integerVar);
    printf("The floating point value: %f\n", floatVar);
    printf("The character value: %c\n", charVar);

    return 0;
}

```

The output will be :

```

Enter an Integer: 42
Enter a floating point value: 3.14
Enter a Character: A
The integer value: 42
The floating point value: 3.140000
The character value: A

```

Here's an example without clearing the Input Buffer :

```c

#include <stdio.h>

int main() {
    int integerVar;
    float floatVar;
    char charVar;

    // Input for integer
    printf("Enter an Integer: ");
    scanf("%d", &integerVar);

    // Input for float
    printf("Enter a floating point value: ");
    scanf("%f", &floatVar);



    // Input for char
    printf("Enter a Character: ");
    scanf("%c", &charVar);

    // Print the values
    printf("The integer value: %d\n", integerVar);
    printf("The floating point value: %f\n", floatVar);
    printf("The character value: %c\n", charVar);

    return 0;
}

```

The output will be :

```

Enter an Integer: 10
Enter a floating point value: 3.14
Enter a Character: The integer value: 10
The floating point value: 3.140000
The character value: 

```

## Why Clearing the Input Buffer is Necessary

Without clearing the input buffer, the program would not correctly wait for 
a character input after reading the integer and float. Instead, it would immediately 
read the leftover newline character, leading to incorrect or unexpected behavior.

By including the buffer clearing step, you ensure that each input operation works as intended, 
providing a better user experience and avoiding common pitfalls in C input handling.

## Practical Use

Clearing the input buffer is a common practice in C programming, 
especially when dealing with mixed input types. This technique ensures that your 
programs handle user input correctly and robustly, avoiding potential bugs and 
unexpected behaviors related to leftover characters in the input buffer.

> Always make sure to clear the input buffer after using `scanf()` if you plan to use `scanf("%c")`, `getchar()`, `gets()`, or `fgets()` afterward.
