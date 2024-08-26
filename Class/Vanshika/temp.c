// What is the output of following code snippet?
#include <stdio.h>
int main()
{
    char *ptr = "AppliedCourse";
    printf("%c\n", *&*&*ptr);
    return 0;
}

// It will print A
// It will print AppliedCourse
// Compile error
// It will print some garbage Value 

// Explanation
/*
The operator is used for dereferencing and the operator & is used to get the address. These operators cancel out effect of each other when used one after another. We can apply them alternatively any no. of times.  In the above code, ptr is a pointer to first character of string A. *ptr gives us A, &ptr gives address of A, *&*ptr again A, &&ptr address of A, and finally *&*&*ptr gives 'A
*/
