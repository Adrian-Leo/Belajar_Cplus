#include "iostream" 
using namespace std; 
  
class A 
{ 
    int a, b; 
    public: 
    void add(int x, int y) 
    { 
        a=x;b=y; 
        cout<<(a+b)<<endl; 
    } 
}; 
  
class B : public A 
{ 
    public: 
    void print(int x, int y) 
    { 
        add(x, y); 
    } 
}; 
  
int main() { 
   B b1; 
   b1.print(5, 6); 
} 
