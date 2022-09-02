// =================================================================
//
// File: main.cpp
// Author:
// Date:
//
// =================================================================
#include <iostream>
#include <sstream>
#include <algorithm>
#include <fstream>
#include "header.h"
#include "search.h"
#include "bubble.h"
#include "selection.h"
#include "insertion.h"

using namespace std;

int main(int argc, char* argv[]) {
	ifstream inputFile;
	ofstream outputFile;
	int n = 0, ni = 0, q = 0, qs= 0;
	int bub = 0, sel = 0;

	inputFile.open(argv[1]);
	outputFile.open(argv[2]);
	
	inputFile >> n;
	vector <int> v(n);

	for (int i = 0; i < n; i++){
		inputFile >> ni;
		v[i] = ni;
	}
	vector <int> vc = v;
	outputFile << bubbleSort(vc) << " ";
	
	vc = v;

	outputFile << selectionSort(vc) << " ";

	vc = v;

	outputFile << insertionSort(vc) << "\n\n";

	inputFile >> q;

	int *a;
	int *b;
	for (int i = 0; i < q; i++){
		inputFile >> qs;
		a = sequentialSearch(vc,qs);
		b = binarySearch(vc,qs);
		outputFile << a[0] << " " << a[1] << " " << b[1] << endl;

	}	
	
	inputFile.close();
  	
	outputFile.close();
  	
	return 0;
}
