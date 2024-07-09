# Bitwise Operator

### Bitwise operator use to play with binary numbers

## There are many types of bitwise operator

```

1. & - AND
2. | - OR
3. ^ - XOR
4. ~ - NOT
5. << - left shift
6. >> - right shift

```

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

## |  - OR

![image](https://github.com/asem-hamid/learn-c/assets/155321064/330bb0e8-ded2-49c3-8b44-969289c52c2e)

```c
#include <stdio.h>

int main(){

 int a = 6;   // 6 = 0000 0110
 int b = 12; // 12 = 0000 1100
 int c ;
 
 c =  a | b ;
 printf("a OR b is %d\n", c); // 14

return 0;
}
```

```

output : a OR b is 14

```

## ^ - XOR

If both bits are 1 or 0 , the output will be 0

![image](https://github.com/asem-hamid/learn-c/assets/155321064/d0f6a857-379f-4c39-a561-a6192db4359e)



```c
#include <stdio.h>

int main(){

 c =  a ^ b ;
 printf("a XOR b is %d\n", c); // 10

return 0;
}
```

```

output : a XOR b is 10

```

## ~  - NOT

![image](https://github.com/asem-hamid/learn-c/assets/155321064/11768e83-ee26-459b-b17e-26407dcce2b1)

```c
#include <stdio.h>

int main(){

 int d =   7 ;
 printf("d NOT is %d\n", ~d); // -8

return 0;
}
```

```

output : d NOT is -8

```

## << - left shift

```c
#include <stdio.h>

int main(){

 int e = 3;
 printf("e left shift by 1 is %d\n", e<<1); // 6

return 0;
}
```

```

output : e left shift by 1 is 6

```

![image](https://github.com/asem-hamid/learn-c/assets/155321064/7b6ac3aa-6d39-45ab-9611-d22c1130a3e1)

![image](https://github.com/asem-hamid/learn-c/assets/155321064/77250653-fc27-46c9-a4f1-9ab82160640d)

## >> - right shift

```c
#include <stdio.h>

int main(){

 int f = 3;
 printf("f right shift by 1 is %d\n", f>>1); // 1

return 0;
}
```

```

output : f right shift by 1 is 1

```

![image](https://github.com/asem-hamid/learn-c/assets/155321064/dc828da5-caa7-4c5c-93c8-7cdb8b43122e)

![image](https://github.com/asem-hamid/learn-c/assets/155321064/40c905e9-3936-4449-bfe6-99325d499c2d)

# DIFFERENCE BETWEEN BITWISE AND LOGICAL OPERATORS

```c
#include <stdio.h>

int main(){

char x = 1, y = 2; //x = 1(0000 0001), y = 2(0000 0010)

if(x&y) //1&2 = 0(0000 0000)

printf("Result of x&y is 1");

if(x&&y) //1&&2 = TRUE && TRUE = TRUE = 1

printf("Result of x&&y is 1");

return 0;
}
```

```
output : Result of x&&y is 1  

```
