#include<iostream>
using namespace std;
int main(){
   cout<< "hello world" <<endl ;


   double  d = 5;
 int size = sizeof(d);
 cout<< "size of d: " << size <<endl ; 

char ch = 123;
cout<< ch <<endl ;
//max value 127

 int a = 4 , b = 5 ;
  bool first = (a==b);
   bool second = (a<b);
   bool third = (a>b);
   bool fourth = (a!=b);
   bool fifth = (a<=b);
  cout<< first <<endl;
  cout<< second <<endl;
  cout<< third <<endl;
  cout<< fourth <<endl;
  cout<< fifth <<endl;

int f = 3 , g = 2 ;
bool r1 = (f==4 && g==2);
bool r2 = (f==10 || g==2);
bool r3 = !(f==g);
 
cout<< r1 << r2 << " " << r3 ;

return 0 ;
}