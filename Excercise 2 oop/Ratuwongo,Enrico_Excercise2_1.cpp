
#include <iostream>
#include <conio.h>

using namespace std;

class employee
	{
 private:
  int empnum;
  float compensation;
 public:
  void inputData()
  {
   cout << "Masukan employee number : ";
   cin >> empnum;
   cout << "Masukan compensation employee : " ;
   cin >> compensation;
  }
  void display()
  {
   cout << "Employee number " << empnum << endl;
   cout << "Enployee Salary " << compensation << endl;
  }
};

int main()
{
 
 employee emp_1, emp_2, emp_3;
 cout << "Masukan data untuk employee 1" << endl;
 emp_1.inputData();
 cout << "Masukan data untuk employee 2" << endl;
 emp_2.inputData();
 cout << "Masukan data untuk employee 3" << endl;
 emp_3.inputData();
 cout << "Hasil :" << endl;
 emp_1.display();
 emp_2.display();
 emp_3.display();
 
}

