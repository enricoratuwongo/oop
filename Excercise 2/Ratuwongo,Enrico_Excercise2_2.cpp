#include <iostream>
#include <conio.h>

using namespace std;

char button();

class tollBooth
{
 private:
  unsigned int numCars;
  double amount;
 public:
  tollBooth()
  {
   numCars = 0;
   amount = 0;
  }
   void noPayCar()
   {
   numCars++;
  }
  void payingCar()
  {
   numCars++;
   amount+=0.50;
  }
  void display() 
  {
   cout << "Jummlah mobil : " << numCars << endl;
   cout << "Total uang : " << amount << endl;
  }
};

int main(){
 
 tollBooth booth;
 char key;
 key=button();
 
 while(key!='3'){
  switch(key){
   case('1'):
    cout << "Membayar" << endl << endl;
    booth.payingCar();
    key = button();
    break;
   case('2'):
    cout << "Tidak membayar" << endl << endl;
    booth.noPayCar();
    key = button();
    break;
   case('3'):
    cout << "Hasil :" << endl << endl;
    break;
   default:
    cout << "Error!" << endl;
  }
 }
 booth.display();
}

char button(){
 char i;
 cout << "Tekan '1' untuk membayar" << endl;
 cout << "Tekan '2' untuk lewat tanpa membayar" << endl;
 cout << "Tekan '3' untuk melihat hasil" << endl;
 cout << "Tentukan pilihan anda:" << endl;
 i = getch();
 return i;
}

