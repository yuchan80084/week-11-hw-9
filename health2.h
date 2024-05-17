#pragma once
using namespace std;
class CHealth {
public:
   // constructors
   CHealth() { nCHealth++; age = 20; beat5min = temp5min = nullptr; MemNum = 0; };
   CHealth(int a);
   // destructor
   ~CHealth();
   // member data
   static int nCHealth;
   float height, cel, faren, beat, pressure;
   float BMIvalue, healthAge;
   float* beat5min, * temp5min;
   int MemNum;
   // member functions (methods)
   void measure();
   void measure(int);
   int  run5min();  // -1 emmergency

private:
   // private member data
   int age;
   float weight;
   // private member function
   void cel2faren() { faren = cel * 9.0 / 5.0 + 32.0; }
   void faren2cel();
   void GetHealthAge() { healthAge = beat / pressure; }
   void GetBMI();
   void GetHeight();
};
