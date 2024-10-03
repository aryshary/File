#include <iostream>
#include "Windows.h"
#include <string>

using namespace std;

void File(string fileName) {
	string a;
	string b;
	string c;
	string d;
	string e;
	for (int i = 0; i < fileName.length(); i++) {
		if (i < fileName.find_last_of('\\')) a.push_back(fileName[i]);
		else if (i > fileName.find_last_of('\\')) c.push_back(fileName[i]);
	}
	for (int i = a.find_last_of('\\') + 1; i < a.length(); i++) {
		b.push_back(a[i]);
	}
	for (int i = 0; i < c.length(); i++) {
		if (i < c.find_last_of('.')) e.push_back(c[i]);
		else d.push_back(c[i]);
	}
	cout << "a) " << a << endl << "b) " << b << endl << "c) " << c << endl << "d) " << d << endl << "e) " << e << endl;
}

int main()
{
	string fileName{ "C:Step\\C++lesson_03\\Docs\\Less03.docx" };
	File(fileName);
	return 0;
}