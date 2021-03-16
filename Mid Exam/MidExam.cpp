//Ratuwongo, Enrico
// Paralel : A

#include <iostream>
#include <string.h>

using namespace std;


class student{
	private:
		int Att, Quis, Ass, Mid, Final, Grade;
		char name[100];	
	public:
		
		Student(){
		Att = Quis = Ass = Mid = Final = Grade = 0;
		}
void Input(){		
		cout << "Name\t\t:";
		cin >> name;
		cout << "Attendance\t:"; 
		cin >> Att;
		cout << "Quiz\t\t:"; 
		cin >> Quis;
		cout << "Assignment\t:"; 
		cin >> Ass;
		cout << "Mid Exam\t:"; 
		cin >> Mid;
		cout << "Final Exam\t:"; 
		cin >> Final;
		} 
						
void Hasil()
{
		cout << name <<"\t"; Totalnilai();
		}
		
void Totalnilai(){
	Grade = ((Att*10)/100) + ((Quis*10)/100) + ((Ass*20)/100) + ((Mid*30)/100) + ((Final*30)/100);
	
	cout << Grade <<" " ;
			
		if (Grade>=91 && Grade<=100){
				cout << "(A)";
		}
		else if (Grade>=85 && Grade<=90){
				cout << "(A-)";
			}
		else if (Grade>=82 && Grade<=84){
				cout << "(B+)";
			}
		else if (Grade>=78 && Grade<=81){
				cout << "(B)";
			}
		else if (Grade>=75 && Grade<=77){
				cout << "(B-)";
			}
		else if (Grade>=70 && Grade<=74){
				cout << "(C+)";
			}
		else if (Grade>=67 && Grade<=69){
				cout << "(C)";
			}
		else if (Grade>=60 && Grade<=66){
				cout << "(C-)";
			}
		else if (Grade>=40 && Grade<=59){
				cout << "(D)";
			}	
		else if (Grade>=0 && Grade<=39){
				cout << "(F)";
			} cout << endl;
		}
};

int main () {
	
	int sum = 0;
	
	cout << "-------------------------------" <<endl;
	cout<< "Welcome To Grading System v1.0" << endl;
	cout<< "--------------------------------" << endl;
	cout << "Input number of student : "; 
	cin >> sum; cout << "\n";
	
	
	student Set[sum];
	
	
	for (int i=0; i<sum; i++) {
		cout << "Enter Grade for student " << i+1 << "\n";
		Set[i].Input(); cout << "\n";
	} cout << "\n";
	cout <<"---------------\n";
	cout<<" Student Grade : \n";
	cout <<"---------------\n";
	for (int i=0; i<sum; i++) {
		Set[i].Hasil();
	}
	
	return 0;
}
