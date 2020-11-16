#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <string>

using namespace std;

class storage {
private:
	int * status;
	string * list;
	int length;
	int maxSize;
public:
	storage(int initialSize);

	
	bool isStopWordWithTxt(string)const;
	bool isFull();
	void insert(long long int, string&);
	
	
	void printTopWithTxtStoppers(int = 10)const;


	int getLength();
	int getMaxSize();
	~storage();
};