#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
	if(argc == 1)
	{
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
	}
	else
	{
		for(int i = 1; i < argc; i++)
		{
			string str(argv[i]);
			for(size_t j = 0; j < str.length(); j++)
				cout << (char)toupper(str[j]);
		}
		cout << endl;
	}
	return (0);
}
