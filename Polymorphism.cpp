// #include <iostream>
// using namespace std;
// class King{
//   public:
//   void Pro(int a, int b){
//     cout<<a*b<<endl;
//   }
//   void Pro(int a, int b, int c, int d, int e){
//     cout<<(a+b+c+d+e);
//   }
// };
// int main(){
//   King k;
//   k.Pro(10, 20);
//   k.Pro(10, 20, 30, 40, 50);
//   return 0;
// }

//example of operator overloading
// #include <iostream>
// using namespace std;
// class Overload{
//   private:
//   int n1;
//   int n2;
//   public:
//   Overload(int num1, int num2){
//     int res;
//     n1=num1;
//     n2=num2;
//     res=n1-n2;
//     cout<<"res : "<<res<<endl;
//   }
//   void operator-(){
//     n1=-n1;
//     n2=-n2;
//   }
//   void display(){
//     cout<<"n1 : "<<n1<<endl;
//     cout<<"n2 : "<<n2<<endl;
//   }
// };
// int main(){
//   Overload o1(6, 7);
//   -o1;
//   o1.display();
//   return 0;
// }

//Function Overriding
// #include <iostream>
// using namespace std;
// class Parent{
//   public:
//   void print(int a){
//     cout<<"This is the function of the base class"<<endl;
//   }
// };
// class child : public Parent{
//   public:
//   void print(){
//     cout<<"This is the function of the derived class"<<endl;
//   }
// };
// int main(){
//   child obj;
//   obj.print();
//   return 0;
// }

//Virtual Function
// #include <iostream>
// using namespace std;
// class Base{
//   public:
//   virtual void print(){
//     cout<<"This is the function of the base class"<<endl;
//   }
// };
// class Derived : public Base{
//   public:
//   void print(){
//     cout<<"This is the function of the derived class"<<endl;
//   }
// };
// int main(){
//   Base* b;
//   Derived d;
//   b=&d;
//   b->print();
//   return 0;
// }