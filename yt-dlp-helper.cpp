#include <iostream>
#include <cstring>
#include <conio.h>
#include <windows.h>

using namespace std;

int main()
{
	string a, b, c;
	cout << "Please input URL : ";
	getline(cin, a);
	cout << endl;
	system(("yt-dlp -F " + a).c_str());
	cout << endl << "Please input ID : ";
	getline(cin, b);
	cout << "Please input format : ";
	getline(cin, c);
	system("cls");
	cout << "Please input ID : " << b << endl << "Please input format : " << c << endl << endl;
	b = "yt-dlp -f" + b + " " + a + " --merge-output-format " + c;
	system(b.c_str());
	getch();
	return 0;
}
