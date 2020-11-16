
#include "storage.h"
#include <chrono>
#include <iostream>
#include <string>
#include <fstream>


using namespace std;

storage box(30000001);

unsigned long key(string word)
{
	unsigned long hash = 5381;
	int c;

	int i = 0;
	while (c = word[i++])
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return hash % 30000001;
}

string extractTweet(string myline) {
	
	string tweet;
	string secString = myline;
	int i = 0;

	while (myline[i] != NULL)
	{
		if (myline[i] == '"' && myline[i + 1] == ',' && myline[i + 2] == '"')
		{

			tweet = myline.substr(i + 3);

		}
		i++;
	}

	tweet = tweet.substr(0, tweet.length() - 1);

	return tweet;
}

void divAndInsert(string myline) {

	int start = 0;
	int end = 0;
	string keeper;

	while (start < myline.length())
	{
		if ((int) myline[start] >= 65 && (int) myline[start] <= 122)
		{
			end = start;
			while (((int)myline[end] >= 65 && (int)myline[end] <= 122) || (myline[end] == '\'' && myline[end + 1] == 't'))
			{
				end++;
			}
			keeper = myline.substr(start, end - start);
			
			box.insert(key(keeper), keeper);
			start = end;
		
		}
		
		start++;
	}
	
}

int main() {

	auto start = std::chrono::high_resolution_clock::now();

	ifstream inFile;

	inFile.open("training.1600000.processed.noemoticon.csv");

	if (!inFile.is_open()) {
		cout << "ERROR: File open" << endl;
	}
	else
	{
		cout << "File succesfully opened" << endl;
	}
	
	string line;

	while (inFile.good())
	{

		getline(inFile, line);

		divAndInsert(extractTweet(line));

	}

	cout << "----------------------------------------------" << endl;
	box.printTopWithTxtStoppers(15);
	cout << "----------------------------------------------" << endl;
	
	auto finish = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double> elapsed = finish - start;
	std::cout << "Elapsed time: " << elapsed.count() << " s\n";
	system("pause");
	return 0;


}

