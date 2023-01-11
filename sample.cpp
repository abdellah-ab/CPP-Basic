#include <iostream>
#include <fstream>
#include <stdlib.h>
#define buffer 3
using namespace std;

int main() {

	struct {
		struct {
			string fname, lname;
		}name;
		int id;
		double tr_id;
	}list[buffer];

	ofstream fp("database.txt");
	system("CLS");

	// for(int i=0; i<buffer; i++) {
	// 	cout << "---Data Entry Interface---" << endl;
	// 	cout << "Input profile " << i+1 << " ID: ";
	// 	cin >> list[i].id;
	// 	cout << "Input profile " << i+1 << " income: ";
	// 	cin >> list[i].inc;
	// 	fp << list[i].id << " | " << list[i].inc << endl;
	// 	system("CLS");
	// }

	return 0;
}