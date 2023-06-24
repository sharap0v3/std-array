#include <iostream>
#include <vector>
using namespace std;

void vectorPrint(vector <int> ivec)
{
	cout << "Вектор: ";
	for (size_t i = 0; i < ivec.size(); i++)
	{
		cout << "[" << ivec[i] << "]";
	}
	cout << " Размер вектора: " << ivec.size() << "\n";
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
	cout << "Заполнение вектора: \n";
	vectorPrint(ivec);


	ivec.pop_back();
	cout << "\nУдаление последнего элемента вектора: \n";
	vectorPrint(ivec);


	ivec.push_back(rand() % 10);
	ivec.insert(ivec.begin(), rand() % 10);
	cout << "\nДобавление элементoв в начале и конце вектора: \n";
	vectorPrint(ivec);

	return 0;
}
