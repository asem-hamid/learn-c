# Dynamic Scoping

<!--- C Do not use dynamic scoping. Here we will use examples as theoretical -->

1)
![image](https://github.com/asem-hamid/learn-c/assets/155321064/b05123be-d1f6-4c4d-b364-2fcedfe3ea74)

2)
![image](https://github.com/asem-hamid/learn-c/assets/155321064/66832b24-cd6c-44d7-95c7-b82c05308677)

3)
![image](https://github.com/asem-hamid/learn-c/assets/155321064/168b4b2e-ffdf-452f-bccd-362732bc9251)

### Dynamic scoping means the variable value will be searched first in the same code block, and if that fails, it will search the calling  function of that code block.

In that  example, fun2 has no definition of  variable a, so it searches the calling  function of fun2  which is fun1 , than it finds fun1 don't have definition of  variable a , 
so it searches the calling  function of fun1  which is main , and it finds the local variable int a = 10 .

Reference : https://youtu.be/-7Hz3iriV6w?si=D02pIQuCaM7EL5h-
