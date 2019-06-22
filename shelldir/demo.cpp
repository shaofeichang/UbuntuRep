#include<iostream>
#include<string.h>
//#include"head.h"
using namespace std;
extern void printHello();
int main()
{
    printHello();
    char buff1[10] = "Hello";
    char buff2[10] = "Hello";
    cout<<"strcmp: "<<strcmp(buff1,buff2)<<endl;
    cout<<"memcmp: "<<memcmp(buff1,buff2,strlen(buff1))<<endl;
    const char* ptr1 = "Hello";
    const char* ptr2 = "Hello";
    cout<<"strcmp: "<<strcmp(ptr1,ptr2)<<endl;
    cout<<"memcmp: "<<memcmp(ptr1,ptr2,strlen(ptr1))<<endl;
    cout<<"Helloworld"<<endl;
    cout<<"HelloWorld"<<endl;
    system("pause");
    return 0;
}