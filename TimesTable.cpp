#include <iostream>
using namespace std;
int main()
{

	int numChoice;
	do {
		cout << "\nTimes table up to what number: ";
		cin >> numChoice;
		for (int i = 1; i <= numChoice; i++)
		{

			cout << "\n";
			for (int c = 1; c <= numChoice; c++)

			{

				cout << "\t" << i * c;
			}

		}

	} while (numChoice != 15);
	
	cout << "\n\n\n\n";
	return 0;
}
