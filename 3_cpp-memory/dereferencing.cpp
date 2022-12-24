#include<iostream>
using namespace std;

int main()
{
    int num=7;
    int *p =&num;
    int value_in_num =*p;
    *p=42;
    return 0;
}
//So, given a pointer, a level of indirection can be removed by preceding the variable with an asterisk.

//When you actually use the variable, if you prepend it with an asterisk, then that variable will remove the level of indirection.

//You'll dereference the memory address and get the actual value.