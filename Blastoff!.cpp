

#include <iostream>
using namespace std;

int main()
{
	int userNum;
	int i;

	cout << "Please enter a number: ";
	cin >> userNum;  //Holds the starting number for countdown

	for (i = userNum; i >= 0;--i) {  //This starts the countdown loop
		
		cout << i << endl;

	}
	cout << "Blastoff!" << endl;
}
