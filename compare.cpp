#include <iostream>
#include <string>
using namespace std;

bool compareStrings(string a, string b)
{
	int smallLength;
	bool firstIsShorter;
	if (a.length() > b.length())
	{
		smallLength = b.length();
		firstIsShorter = false;
	}
	else
	{
		smallLength = a.length();
		firstIsShorter = true;
	}

	for (int i =0; i<smallLength; i++)
	{
		if(a[i]!=b[i]) // if the letters are not the same
		{
			if (a[i]<b[i]) //a is first
			{
				return true;
			}
			//else
			return false;
		}
	}
	return firstIsShorter;
}


int main() {
	string word1 = "world";
	string word2 = "world";

  cout << "Hello World!\n";

	cout << compareStrings(word1,word2) <<endl;
	cout << (word1<=word2); //does the exact same thing as my compareStrings function
} 



//What about .compare? Well here's what it does:

/* .compare only checks the FIRST character to see if it's less than that of the other word's first character OR if the first word is shorter than the other...
It is much easier to just use the comparitors <, <=, ==, !=, >=, and > to check strings. But they are case sensitive, to adjust that we need to convert each letter to upper case.
