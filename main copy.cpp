/*
* Program: main.cpp (Assignment 7P: Pointers - Project 16.1)
* Author: Matt Aaron Magnaye
* Instructor: Professor David Harden
* Date: 07/08/2023
* Description: This assignment will give you a chance to perform some simple tasks with pointers.
*/
#include <iostream>
using namespace std;

    // 11. Write a function with the following signature: void noNegatives(int *x). The function
    //     should accept the address of an int variable. If the value of this integer is
    //     negative then it should set it to zero.
    //     Place the prototype for this function above the main function, and the definition
    //     below main().
void noNegatives(int *x);

    // 21. Write a function named 'swap' that accepts two pointers to integers as arguments, and
    //     then swaps the contents of the two integers. Do not use any reference parameters.  Do
    //     not use C++'s swap() function.   Place the function prototype for swap() above the main()
    //     function, and place the definition of swap() below main().
void swap(int* ptr1, int* ptr2);

int main() {
    // 1. Create two integer variables named x and y.
    int x;
    int y;

    // 2. Create an int pointer named p1.
    int* p1;

    // 3. Store the address of x in p1.
    p1 = &x;

    // 4. Use only p1 (not x) to set the value of x to 99.
    *p1 = 99;

    // 5. Using cout and x (not p1), display the value of x.
    cout << "5: x contains: " << x << endl;

    // 6. Using cout and the pointer p1 (not x), display the value of x.
    cout << "6: x contains: " << *p1 << endl;

    // 7. Store the address of y into p1.
    p1 = &y;

    // 8. Use only p1 (not y) to set the value of y to -300.
    *p1 = -300;

    // 9. Create two new variables: an int named temp, and an int pointer named p2. Make p2
    //    point to x.
    int temp;
    int* p2 = &x;

    // 10. Use only temp, p1, and p2 (not x or y) to swap the values in x and y.
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;


    // 12. Invoke the function twice: once with the address of x as the argument, and once with
    //     the address of y.  Use x or y for the argument (not p1 or p2).
    noNegatives(&x);
    noNegatives(&y);

    // 13. Use p2 to display the values in x and y.
    cout << "#13: x is: " << *p2 << " and y is: " << *p1 << endl;

    // 14. Create an int array named 'a' with two elements. Make p2 point to the first element
    //     of a.
    int a[2];
    p2 = &a[0];

    // 15. Use only p2 and x (not a) to initialize the first element of a with the value of x.
    *p2 = x;

    // 16. Use only p2 and y (not a) to initialize the second element of a with the value of y.
    //     Leave p2 pointing to the first element of a. Don't use pointer arithmetic.
    *(p2 + 1) = y;

    // 17. Using cout and p2 only, display the address of the first element in a.
    cout << "#17: The address of the first element is " << p2 << endl;

    // 18. Using cout and p2 only, display the address of the second element in a. Leave p2
    //     pointing to the first element of a. Don't use pointer arithmetic.
    cout << "#18: The address of the second element is " << p2 + 1 << endl;

    // 19. Use p1, p2, and temp to swap the values in the two elements of array 'a'.
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    // 20. Display the values of the two elements.
    cout << "#20: The first element in a[] is " << a[0] << " and the second element in a[] is " << a[1] << endl;

    // 22. Invoke your swap() function with the addresses of x and y (using the address-of
    //     operator in the arguments), then print their values.  (x should be 99, y should be 0).
    swap(&x, &y);
    cout << "#22: Now, x contains: " << x << " and y contains: " << y << endl;

    // 23. Invoke your swap function with the address of the two elements in array 'a', then
    //     print their values.  (a[0] should be 0, a[1] should be 99).
    swap(&a[0], &a[1]);
    cout << "#23: Now, a[0] contains: " << a[0] << " and a[1] contains: " << a[1] << endl;

    return 0;
}

// 11. Definition of noNegatives() below main().
void noNegatives(int* x) {
    if (*x < 0)
        *x = 0;
}

// 21. Definition of swap() below main().
void swap(int* ptr1, int* ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
