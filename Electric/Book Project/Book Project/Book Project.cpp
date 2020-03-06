#include <iostream>
#include<iomanip>
#include <fstream>
using namespace std;

std::string getFileContents(std::ifstream&);

int main()
{
	system("COLOR F3");
	bool replay = true;
	while (replay) {
		const float COST_PER_HOUR = 0.0475; //Cost per killowatt hour IN dollars
		const float SUPERCHARGE = 0.10; //The percentage of Supercharge that user will have to pay
		const float UTILITY_TAX = 0.03; //The percentage of Utility Tax that the user will have to pay
		const int SPACE_NUM = 10;

		double KWHIN = 0.0;

		//Outputing the constants for the user
		cout << "Cost per killowatt hour in cents: " << COST_PER_HOUR << endl;
		cout << "Percentage of Supercharge: " << SUPERCHARGE << endl;
		cout << "Percentage of Utility Tax: " << UTILITY_TAX << endl;

		//Giving a dash indent for formatting
		cout << setfill(' ') << setw(26) << " " << endl;
		cout << setfill('-') << setw(26) << " " << endl;
		cout << setfill(' ') << setw(26) << " " << endl;

		//Taking the input from user for how many Killowatts per hour used
		cout << "Enter KWH used: ";
		cin >> KWHIN;

		//Giving a dash indent for formatting
		cout << setfill(' ') << setw(26) << " " << endl;
		cout << setfill('-') << setw(26) << " " << endl;
		cout << setfill(' ') << setw(26) << " " << endl;

		//Outputing the stats
		cout << setiosflags(ios::fixed | ios::showpoint) << setprecision(2);
		cout << setiosflags(ios::left) << setfill(' ') << setw(13) << "Base: " << resetiosflags(ios::left) << setw(4) << "$" << setw(6) << (float)(KWHIN * COST_PER_HOUR) << endl;
		cout << setiosflags(ios::left) << setfill(' ') << setw(10) << "Supercharge: " << resetiosflags(ios::left) << setw(4) << setw(4) << "$" << setw(6) << (float)((KWHIN * COST_PER_HOUR) * SUPERCHARGE) << endl;
		cout << setiosflags(ios::left) << setfill(' ') << setw(10) << "Utility Tax: " << resetiosflags(ios::left) << setw(4) << "$" << setw(6) << (float)((KWHIN * COST_PER_HOUR) * UTILITY_TAX) << endl;
		cout << setfill('_') << setw(26) << " " << endl;
		double total = (float)(((KWHIN * COST_PER_HOUR) * UTILITY_TAX) + ((KWHIN * COST_PER_HOUR) * SUPERCHARGE) + (KWHIN * COST_PER_HOUR));
		cout << setiosflags(ios::left) << setfill(' ') << setw(13) << "Total: " << resetiosflags(ios::left) << setw(4) << "$" << setw(6) << total << endl;
		cout << setfill(' ') << setw(26) << " " << endl;
		cout << setfill(' ') << setw(26) << " " << endl;
		cout << setfill(' ') << setw(26) << " " << endl;

		cout << "Your payment is due on: ";
		char sdate[9];

		_strdate_s(sdate);

		/*
		for (int i = 0; i <= 9; i++) {
			if (i == 3) {
				cout << char(double(sdate[i]) + 1);
			}
			else {
				cout << sdate[i];
			}
		}
		*/
		cout << "02/01/20" << endl;

		cout << "Payment after 02/01/20: ";
		cout << "55.43";



		cout << setfill(' ') << setw(26) << " " << endl;
		cout << setfill(' ') << setw(26) << " " << endl;
		cout << setfill(' ') << setw(26) << " " << endl;
		cout << setfill(' ') << setw(26) << " " << endl;
		cout << setfill(' ') << setw(26) << " " << endl;

		cout << "            ***        ***             " << '\n';
		cout << "            ***        ***             " << '\n';
		cout << "    __                          __     " << '\n';
		cout << "      __                      __       " << '\n';
		cout << "         ____________________       " << '\n';

		cout << setfill(' ') << setw(26) << " " << endl;
		cout << setfill(' ') << setw(26) << " " << endl;
		cout << setfill(' ') << setw(26) << " " << endl;
		cout << setfill(' ') << setw(26) << " " << endl;
		cout << setfill(' ') << setw(26) << " " << endl;

		cout << "Type R if you want to run again:  ";
		string repl;
		cin >> repl;
		if (repl == "r" || repl == "R") {
			replay = true;
		}
		else {
			replay = false;
		}
		cout << setfill(' ') << setw(26) << " " << endl;
		cout << setfill('-') << setw(26) << " " << endl;
		cout << setfill(' ') << setw(26) << " " << endl;
	}

	return 0;
}
