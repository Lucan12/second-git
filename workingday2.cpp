
#include <iostream>
#include <string>
using namespace std;

#define PERSON_NUM 5

typedef struct {
    char name[20];
    char sex;
    int age;
    double height;
    double weight;
} person_t;

struct so1
{
    string str; 
    int a; 
    int b; 
};
struct so2
{
    string str; 
    int a;
    int b; 
};
so1 number1(so1 s1, so2 s2)
{
    so1 s3; 
    s3.str = s1.str + s2.str; 
    s3.a = s1.a + s2.a; 
    s3.b = s1.b + s2.b;

    return s3; 
}
int main() {
    struct so1 s1 = { "Thanh ",1,2 }; 
    struct so2 s2 = { "Tung",3,4 };
    cout << "struct a is " << number1(s1, s2).a << endl; 
    cout << "struct b is " << number1(s1, s2).b << endl; 
    cout << "struct Str is " << number1(s1, s2).str << endl; 
    return 0;
}