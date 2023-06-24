#include <iostream>
#include <vector>
using namespace std;

void vectorPrint(vector <int> ivec)
{
	cout << "������: ";
	for (size_t i = 0; i < ivec.size(); i++)
	{
		cout << "[" << ivec[i] << "]";
	}
	cout << " ������ �������: " << ivec.size() << "\n";
}


int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	vector <int> ivec;

	for (size_t i = 0; i < 5; i++)
	{
		ivec.push_back(rand() % 10);
	}
	cout << "���������� �������: \n";
	vectorPrint(ivec);


	ivec.pop_back();
	cout << "\n�������� ���������� �������� �������: \n";
	vectorPrint(ivec);


	ivec.push_back(rand() % 10);
	ivec.insert(ivec.begin(), rand() % 10);
	cout << "\n���������� �������o� � ������ � ����� �������: \n";
	vectorPrint(ivec);

	return 0;
}
