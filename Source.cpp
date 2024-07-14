# include <iostream>
# include <iomanip>

using namespace std;

int main()
{
	int count = 1;

	cout << endl;

	for (int j = 0; j < 9; j++)
	{
		for (int i = 0; i < 5-count; i++)    // print Space
		{
			cout << " ";
		}
		
		for (int k = 0; k < ((count-1)*2+1); k++)    // print Asterisks
		{
			cout << "*";
		}

		if (j < 4)                
		{
			count += 1;
		}

		if (j >= 4)
		{
			count -= 1;
		}

		cout << endl;
	}
	
}
