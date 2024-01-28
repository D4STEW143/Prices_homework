#include <iostream>
using namespace std;

//#define TASK_1 //Задача 1
//#define TASK_2 //Задача 2
//#define TASK_3 //Задача 3
//#define TASK_4 //Задача 4
//#define ZADACHI

void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef TASK_1
	cout << "Преобразование числа в денежный формат." << endl;

	double fractional_number; //объявляем переменную для дробного числа
	int unfractional_number; //объявляем переменную целой части дробного числа

	cout << "Введите дробное число для преобразования (для разделения частей используйте точку): " << endl;
	cin >> fractional_number; 

	unfractional_number = fractional_number; //преобразуем при инициализации дробное в целое, отбрасывая дробную часть.

	double part_after_dot = (fractional_number - unfractional_number) * 100; //при помощи формулы получаем дробную часть в виде целой

	cout << fractional_number << "\t это:\t" << unfractional_number << "\tрублей\t" << part_after_dot << "\tкопеек.";
	//по моему мы пока не проходили как вывести переменную в строковом выражении cout.
	

#endif

#ifdef TASK_2

	double note_price;
	double pencil_price;
	double check_sum;
	int note_count;
	int pencil_count;

	cout << "Вычисление стоимости покупки" << endl;
	cout << "Введите исходные данные:" << endl;
	cout << "Цена тетради:" << endl;
	cin >> note_price;
	cout << "Введите количество тетрадей:" << endl;
	cin >> note_count;
	cout << "Введите цену карандаша:" << endl;
	cin >> pencil_price;
	cout << "Введите количество карандашей:" << endl;
	cin >> pencil_count;
	check_sum = (note_count * note_price) + (pencil_count * pencil_price);
	cout << "Общая стоимость покупки:\t" << check_sum << "\tрублей.";

#endif

#ifdef TASK_3

	double notepad_price;
	double cover_price;
	int complect_count;
	double total_price;
	cout << "Вычисление стоимости покупки" << endl;
	cout << "Введите исходные данные: " << endl;
	cout << "Стоимость тетради: " << endl;
	cin >> notepad_price;
	cout << "Введите стоимость обложки: " << endl; 
	cin >> cover_price;
	cout <<  "Введите количество комплектов (шт): " << endl;
	cin >> complect_count;
	total_price = (notepad_price * complect_count) + (cover_price * complect_count);
	cout << "Общая цена всего комплекта: \t" << total_price << "\tрублей.";

#endif

#ifdef TASK_4
	double distance;
	double fuel_consumption;
	double fuel_price;
	double fuel_per_distance;
	double total_price;
	cout << "Выччисление стоимости поездки на дачу и обратно." << endl;
	cout << "Растояние до дачи (км): " << endl;
	cin >> distance;
	cout << "Расход бензина (литров на 100 км): " << endl;
	cin >> fuel_consumption;
	cout << "Цена литра бензина (руб): " << endl;
	cin >> fuel_price;
	fuel_per_distance = (distance * fuel_consumption) / 100;
	total_price = (fuel_per_distance * fuel_price) * 2;
	cout << "Поездка на дачу и обратной обойдется в:\t";
	cout << total_price <<"\tрублей.";
	//выдает 3 знака после запятой, не знаю как это исправить
#endif

#ifdef ZADACHI

	/*
	Решить следующие задачи без испльзования компилятора :
	1.
	int i = 3;
	i = ++i + ++i;
	cout << i << endl;	//Что будет выведено на экран?
	//------------------------------------------------
	2.
	int i = 3;
	i = i++ + ++i;
	cout << i << endl;
	//------------------------------------------------
	3.
	int i = 3;
	i = i++ + 1 + ++i * 2;
	cout << i << endl;
	//------------------------------------------------
	4.
	int i = 3;
	i = i++ + 1 + ++i *= 2;
	cout << i << endl;
	//------------------------------------------------
	5.
	int i = 3;
	i += i++ + 1 + ++i *= 2;
	cout << i << endl;
	*/

	// Задача 1 - будет выведено 10;
	// Задача 2 - будет выведено 8;
	// Задача 3 - будет выведено 14;
	// Задача 4 - будет выведено 18;
	// Задача 5 - будет выведено 26;

	
	

#endif

}