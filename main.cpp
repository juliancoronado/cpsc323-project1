#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string text;

int main()
{
	// Temp variable will only be used in the main
	string temp;
	ifstream infile("sample1");
	if (infile.is_open())
	{
		// runs while index is not at the end of the file
		while (!infile.eof())
		{
			// this will remove all the newline characters and put text into one line
			getline(infile, temp);
			temp += " ";
			text += temp;
		}
		infile.close();
	} else {
		// Displays error if file is unable to open
		cout << "Error: Unable to open file" << endl;
	}

	// We'll get back to this later
	/* //Now write results to file
	ofstream outfile;
	outfile.open("output1.txt");
	outfile << "Output:\n Token		Lexeme" << endl;
	//Below line is going to replaced by loop outputting
	//tokens and lexemes stored in struct1
	outfile << "keyword				while" << endl;
	outfile.close(); */

	cout << text << endl;
	//system("pause");
	return 0;
}
