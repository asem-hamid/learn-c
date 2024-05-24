# include <stdio.h>

int main(){

// +=  First addition than assignment
// -=  First subtraction than assignment
// *=  First multiplication than assignment
// /=  First division than assignment
// %=  First modulus than assignment
// <<=  First bitwise left shift than assignment
// >>=  First bitwise right shift than assignment
// &=  First bitwise AND than assignment
// |=  First bitwise OR than assignment
// Λ=  First bitwise XOR than assignment


int a = 5;
int b = 4;
int c = 3;

a += b ; // a = a+b 
printf("%d\n",a); // 9
a -= c ; // a = a-c
printf("%d\n",a); // 6
a *= b ; // a = a*b 
printf("%d\n",a); // 24
a /= c ; // a = a/c 
printf("%d\n",a); // 8
a %= c ; // a = a%c
printf("%d\n",a); // 2
a <<= c ; // a = a<<c
printf("%d\n",a); // 16
a >>= c ; // a = a>>c
printf("%d\n",a); // 2
a &= c ; // a = a&c
printf("%d\n",a); // 2
a |= c ; // a = a|c
printf("%d\n",a); // 3
a ^= c ; // a = a6c
printf("%d\n",a); // 0

return 0;
}
