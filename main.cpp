#include <iostream>
#include <string>

using namespace std;

const int MAX=30;
int student[MAX];
string name[MAX];
char choice;

void Menu(){
	cout << "*********************************" << endl;
	cout << "What do you want to do?" << endl;
	cout << "a) Add a Student" << endl;
	cout << "b) Set a Student's Grade" << endl;
	cout << "c) Print all grades" << endl;
	cout << "*********************************" << endl;
	cin >> choice;
}

void addStudent(int n){
	cout << "Enter student's name: ";
	cin >> name[n];
}
	
void setgrade(int x){
	cout << "Enter Student " << x+1 << "'s name: ";
	cin >> name[x];
	cout << "Enter " << name[x] << "'s grade: ";
	cin >> student[x];
	cout << endl;
}

void printGrades(int y){
	cout << name[y] << "'s grade is " << student[y] << endl;
}

int main(){
	
	int LEN;
	char again = 'Y' && 'y';
	
	do{
		Menu();
		
		switch(choice){
			case 'a':
			case 'A':
				addStudent();
				break;
				
			case 'b':
			case 'B':
				setGrade();
				for(int i=0; i<LEN; i++){
					setGrade(i);
				}
				break;
				
			case 'c':
			case 'C':
				for(int j=0; j<LEN; j++){
					printGrades();
				}
				
			default:
				cout << choice << " is not valid..." << endl;
		}
		
		cout << "\nDo you need to go again (Y/n)? ";
		cin >> again;
	}while('n' != again);
	
	
	
	
	return 0;
}