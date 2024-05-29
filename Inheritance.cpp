// Single Inheritance
// #include <iostream>
// using namespace std;
// class Beverage{
// public:
// void drinks(){
//   cout<<"All drinks are available"<<endl;
// }
// };
// class coffee: public Beverage{
// public:
// void mocha(){
//   cout<<"Mocha is the best"<<endl;
// }
// };
// int main(){
//   coffee c;
//   c.drinks();
//   c.mocha();
// }

// // Multiple Inheritance
// #include <iostream>
// using namespace std;
// class party{
// public:
// int meals;
// void food(){
//   cout<<"Enter the number of meals: ";
//   cin>>meals;
// }
// };

// class drinks{
// public:
// int drink;
// void Liquor(){
//   cout<<"Enter the number of drinks: ";
//   cin>>drink;
// }
// };

// class Bill: public party, public drinks{
// int total_meals;
// int total_drinks;
// int total_bill;
// public:
// void total(){
//   total_meals = meals * 50;
//   total_drinks = drink * 20;
//   total_bill = total_meals + total_drinks;
//   cout<<"Total bill is: "<<total_bill<<endl;
// }
// };

// int main(){
//   Bill b;
//   b.food();
//   b.Liquor();
//   b.total();
//   return 0;
// }


// Multilevel Inheritance
// #include <iostream>
// using namespace std;

// class chem{
//   public:
//   int marks1;

//   void chem_marks(){
//     cout<<"Enter the marks of chemistry: ";
//     cin>>marks1;
//   }
// };

// class Physics : public chem{
//   public:
//   int marks2;
//   void physics_marks(){
//     cout<<"Enter the marks of physics: ";
//     cin>>marks2;
//   }
// };

// class Maths: public Physics
// {
//   public:
//   int marks3;
//   int total;
//   void maths_marks(){
//     cout<<"Enter the marks of maths: ";
//     cin>>marks3;
//   }
//   void result(){
//     total=marks1+marks2+marks3;
//     cout<<total<<endl;
//   }
// };

// int main(){
//   Maths m;
//   m.chem_marks();
//   m.physics_marks();
//   m.maths_marks();
//   m.result();

//   return 0;
// }