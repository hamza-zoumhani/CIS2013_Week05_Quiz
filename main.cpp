#include <iostream>
#include <string>

using namespace std;
int h;
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
	h++;
}
	
void setGrade(int x){
	cout << "Enter " << name[x] << "'s grade: ";
	cin >> student[x];
	cout << endl;
}

void printGrades(int y){
	cout << name[y] << "'s grade is " << student[y] << endl;
}

int main(){
	
	char again = 'Y' && 'y';
	
	do{
		Menu();
		
		switch(choice){
			case 'a':
			case 'A':
				addStudent(h);
				break;
				
			case 'b':
			case 'B':
				for(int i; i<=h; i++){
					setGrade(i);
				}
				
				
			case 'c':
			case 'C':
				for(int j=0; j<MAX; j++){
					printGrades(j);
				}
				break;
				
			default:
				cout << choice << " is not valid..." << endl;
		}
		
		cout << "\nDo you need to go again (Y/n)? ";
		cin >> again;
	}while('n' != again);
	
	
	
	
	return 0;
}