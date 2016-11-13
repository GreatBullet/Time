#include<iostream>
#include<iomanip>
#include<ctime>
// time && Date && Day
#include<string>
using namespace std;

int main()
{
	while(1){
		system("cls");
		time_t now;
		struct tm nowL;
		string df[7] = { "Sonntag", "Montag","Dienstag",
			"Mittwoch","Donnerstag","Freitag","Samstag" };
		now = time(NULL);
		nowL = *localtime(&now);
		cout << setfill('0');
		cout << setw(2) << nowL.tm_mday << ".";
		cout << setw(2) << nowL.tm_mon + 1 << ".";
		cout << setw(2) << nowL.tm_year + 1900 << " ";
		cout << setw(2) << nowL.tm_hour << ":";
		cout << setw(2) << nowL.tm_min << ":";
		cout << setw(2) << nowL.tm_sec << endl;
		cout << df[nowL.tm_wday] << endl;
		cout << "Tag "<< nowL.tm_yday + 1 << " des Jahres 2016" << endl;
		_sleep(31);
	}
	system("Pause");
	return 0;
}