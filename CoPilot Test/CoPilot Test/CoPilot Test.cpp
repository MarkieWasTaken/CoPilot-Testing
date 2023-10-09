

#include <iostream>
using namespace std;
int main()
{
	string beseda;
	char crka;
	int total = 0;
	cout << "(NO SPACES) Insert a word : ";
	cin >> beseda;
	cout << "ENTER A LETTER: ";
	cin >> crka;
	for(int i = 0; i < beseda.length(); i++)
	{
		if (beseda[i] == crka || beseda[i] == toupper(crka))
		{
			cout << crka << "  PLACE -> " << (i+1) << endl;
			total++;
		}
		
	}
	if(total == 0)
	{
		cout << "LETTER IS NOT IN THIS STRING" << endl;
	}
	else
	{
		cout << "LETTER APPEARS " << total << "x" << endl;
	}
}

