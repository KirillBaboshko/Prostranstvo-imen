#include <iostream>
using namespace std;

//namespace combat
//{
//	void Fire()
//	{
//		cout << "Vistrel";
//	}
//}
//namespace exploration
//{
//	void Fire()
//	{
//		cout << "Ogon";
//	}
//}
//void Fire()
//{
//	cout << "tut";
//}

//namespace x
//{
//	void func1();
//}
//
//namespace x
//{
//	void func2();
//}
//
//namespace x
//{
//	void func1();
//	void func2();
//}

//namespace dragon
//{
//	int gold = 50;
//}
namespace organ
{
	string FIO;
	int day;
	int mounth;
	int year;
	string vstrecha;
	string mesto;
	string inform;
	string zametka;
	int minut;
	int chas;
	string Ludi;
}
using namespace organ;
int Proverkaday(int& day, int& mounth, int& yers)
{
	int r;
	bool t;
	while (1)
	{
		if (yers % 4 != 0 || yers % 100 == 0)
		{
			t = false;
		}
		else
		{
			t = true;
		}
		switch (mounth)
		{

		case 1:
		{
			r = 31;
			break;
		}
		case 2:
		{
			if (t == true)
			{
				r = 29;
			}
			else
			{
				r = 28;
			}
			break;
		}
		case 3:
		{
			r = 31;
			break;
		}
		case 4:
		{
			r = 30;
			break;
		}
		case 5:
		{
			r = 31;
			break;
		}
		case 6:
		{
			r = 30;
			break;
		}
		case 7:
		{
			r = 31;
			break;
		}
		case 8:
		{
			r = 31;
			break;
		}
		case 9:
		{
			r = 30;
			break;
		}
		case 10:
		{
			r = 31;
			break;
		}
		case 11:
		{
			r = 30;
			break;
		}
		case 12:
		{
			r = 31;
			break;
		}
		default:
		{
			break;

		}
		}
		if ((mounth <= 12 && mounth > 0) && (day <= r && day > 0))
		{
			break;
		}
		else
		{
			cout << "�� ����� �������� �������� ���,������ ��� ����.\n";
			cout << "������� ���� " << "\n";
			cin >> day;
			cout << "������� ����� " << "\n";
			cin >> mounth;
			cout << "������� ��� " << "\n";
			cin >> yers;
		}
	}
	return day, mounth, yers;
}
class Organayzer
{
public:
	Organayzer()
	{
		FIO = "Kirill Baboshko";
		day=0;
		mounth=0;
		year=0;
		vstrecha="";
		mesto = "";
		inform = "";
		zametka = "";
		minut=0;
		chas=0;
		Ludi = "";
	}
	void Set()
	{
			cout << "��������� ����:" << endl;
			cout << "������� ���� " << endl;
			cin >> day;
			cout << "������� ����� " << endl;
			cin >> mounth;
			cout << "������� ���" << endl;
			cin >> year;
			Proverkaday(day, mounth, year);

	}
	void Print()
	{
		cout<<
	}


};
void main()
{
	/*using dragon::gold;
	combat::Fire();
	exploration::Fire();
	Fire();
	cout << gold;*/



}