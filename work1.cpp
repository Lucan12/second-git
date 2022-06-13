#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;

 float oneday(int a, int b)
{
    return a * b;
}
 void swap(int a, int b)
 {
     int c = a; 
     a = b; 
     b = c; 
}
 void show(char arr[])
 {
     int kilomett = strlen(arr); 
     for (int i = 0; i < kilomett; i++)
     {
         cout << arr[i] << " "; 
     }
 }
int main() {
    char mang[] = {'1','2','3','4','5','6'}; 
    float (*fake)(int, int);
    fake = oneday; 
    char name[] = "nguyen thanh tung";
    int a, b; 
    cout << "a = "; 
    cin >> a; 
    cout << "b = "; 
    cin >> b; 
    cout << fake(a, b) << endl; 
    cout << strlen(name);
    cout << "sau khi hoan doi la :" << endl; 
    swap(a, b); 
    cout << "a = " << a << endl; 
    cout << "b = " << b << endl;
    cout << "do dai mang:" << strlen(mang); 
}
