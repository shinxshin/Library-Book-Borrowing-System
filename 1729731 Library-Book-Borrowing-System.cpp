
#include <iostream>
#include <sstream>

using namespace std;


int main(){
	
	int i = 0, j = 0, m = 0,n = 0;
	stringstream Library;
	string members;
	string choice[20];
	string membersname[12][2] = {{"kazuya", "5.00"}, {"kito", "10.00"}, {"elizabeth", "1.50"}, {"sakuta", "5.50"}, {"rimuru", "0.00"}, {"hinata", "5.50"},{"akane", "0.00"},
								{"sulaiman", "3.50"}, {"amin", "10.00"}, {"ikmal", "7.50"},{"fadhil", "0.00"},{"lalatina", "0.00"}};				
	float debt[12];
	string books[11] = 	{"Digital Fortress","Deception Point","Angels & Demons","The Da Vinci Code","The Lost Symbol","Percy Jackson & the Olympians","Inferno","The Kane Chronicles",
						"Tres Navarre series","The Maze of Bones","The Hobbit",};					

	cout << "Welcome to Shinzz Library-Book-Borrowing-System" << endl;
	cout << "Enter your name : ";
	cin >> members;
	
	for (i = 0; i < 12; i++){
		if (members == membersname[i][0]){
			break;
		}
		else if (i == 11){
			cout << "You are not a members.Please head to the counter to have your membership" ;
			return 0;
		}
	}
	Library << membersname[i][1];
	Library >> debt[i];
	
	cout << "Hello " << membersname[i][0] << "\n\n";
	if (debt[i] > 0){
		cout << "YOU HAVE AN OUTSATNDING CHARGE FROM YOUR PREVIOUS BORROW = RM " << debt[i] << endl;
		cout << "Please clear your OUTSTANDING charge at the counter to continue borrowing from our Library" << endl;
		return 0;
	}
	
	cout << "List of our available books" << endl;
	
	for (j = 0; j < 11; j++){
		cout << "[" << j << "]" << books[j] << endl;
	}
	
	cout << "\nEnter the book number (enter 00 to confirm): " ;
	
	while (choice[m] != "00"){
		cin >> choice[m];
		Library << choice[m];
		if (choice[m] == "00"){
			break;
		}
		else {
		}
		m++;
	}
	
	if (m > 4){
		cout << "You have exceeded the number of book that wanted to borrow.[max book is 4] " << endl;
		return 0;
	}
	else {
		cout << "These are the books number that you want to borrow: " << endl;
		
	for (j = 0; j < m; j++){
		cout << choice[j] << endl;
	
		}
		
	}
	cout << "\nYour borrowing term for the book is 1 month" ;
	return 0;
}
	
	


