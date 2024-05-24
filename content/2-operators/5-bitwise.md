# Bitwise Operator

## Bitwise operator use to play with binary numbers

## There are many types of bitwise operator

1. & - AND
1. | - OR
1. ^ - XOR
1. ~ - NOT
1. << - left shift
1. >> - right shift

## & - AND

![image](https://github.com/asem-hamid/learn-c/assets/155321064/a5e8550a-ddb3-4794-86b3-90622a830291)

```c
#include <stdio.h>

int main(){

 int a = 6;   // 6 = 0000 0110
 int b = 12; // 12 = 0000 1100
 int c ;
 
 c =  a & b ;
 printf("a AND b is %d\n", c); // 4

return 0;
}
```

```

output : a AND b is 4

```
