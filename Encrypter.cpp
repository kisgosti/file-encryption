#include<iostream>
#include<fstream>

using namespace std;

int main() {
	// Declare and open files
	ifstream in;
	ofstream out;
	string in_name, out_name;
	cout << "Input file name: ";
	cin >> in_name;
	cout << "Output file name: ";
	cin >> out_name;
	in.open(in_name, ios::binary);
	out.open(out_name, ios::binary);
	// Set sum to 0
	unsigned char sum = 0;
	// Loop through the input file
	while (!in.eof()) {
		// Sum up all characters til this
		unsigned char tmp;
		in >> noskipws >> tmp;
		sum += tmp;
		// Save sum
		out << sum;
	}
	// Close files
	in.close();
	out.close();
}