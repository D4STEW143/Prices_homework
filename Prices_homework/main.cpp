#include <iostream>
using namespace std;

//#define TASK_1 //������ 1
//#define TASK_2 //������ 2
//#define TASK_3 //������ 3
//#define TASK_4 //������ 4
//#define ZADACHI

void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef TASK_1
	cout << "�������������� ����� � �������� ������." << endl;

	double fractional_number; //��������� ���������� ��� �������� �����
	int unfractional_number; //��������� ���������� ����� ����� �������� �����

	cout << "������� ������� ����� ��� �������������� (��� ���������� ������ ����������� �����): " << endl;
	cin >> fractional_number; 

	unfractional_number = fractional_number; //����������� ��� ������������� ������� � �����, ���������� ������� �����.

	double part_after_dot = (fractional_number - unfractional_number) * 100; //��� ������ ������� �������� ������� ����� � ���� �����

	cout << fractional_number << "\t ���:\t" << unfractional_number << "\t������\t" << part_after_dot << "\t������.";
	//�� ����� �� ���� �� ��������� ��� ������� ���������� � ��������� ��������� cout.
	

#endif

#ifdef TASK_2

	double note_price;
	double pencil_price;
	double check_sum;
	int note_count;
	int pencil_count;

	cout << "���������� ��������� �������" << endl;
	cout << "������� �������� ������:" << endl;
	cout << "���� �������:" << endl;
	cin >> note_price;
	cout << "������� ���������� ��������:" << endl;
	cin >> note_count;
	cout << "������� ���� ���������:" << endl;
	cin >> pencil_price;
	cout << "������� ���������� ����������:" << endl;
	cin >> pencil_count;
	check_sum = (note_count * note_price) + (pencil_count * pencil_price);
	cout << "����� ��������� �������:\t" << check_sum << "\t������.";

#endif

#ifdef TASK_3

	double notepad_price;
	double cover_price;
	int complect_count;
	double total_price;
	cout << "���������� ��������� �������" << endl;
	cout << "������� �������� ������: " << endl;
	cout << "��������� �������: " << endl;
	cin >> notepad_price;
	cout << "������� ��������� �������: " << endl; 
	cin >> cover_price;
	cout <<  "������� ���������� ���������� (��): " << endl;
	cin >> complect_count;
	total_price = (notepad_price * complect_count) + (cover_price * complect_count);
	cout << "����� ���� ����� ���������: \t" << total_price << "\t������.";

#endif

#ifdef TASK_4
	double distance;
	double fuel_consumption;
	double fuel_price;
	double fuel_per_distance;
	double total_price;
	cout << "����������� ��������� ������� �� ���� � �������." << endl;
	cout << "��������� �� ���� (��): " << endl;
	cin >> distance;
	cout << "������ ������� (������ �� 100 ��): " << endl;
	cin >> fuel_consumption;
	cout << "���� ����� ������� (���): " << endl;
	cin >> fuel_price;
	fuel_per_distance = (distance * fuel_consumption) / 100;
	total_price = (fuel_per_distance * fuel_price) * 2;
	cout << "������� �� ���� � �������� ��������� �:\t";
	cout << total_price <<"\t������.";
	//������ 3 ����� ����� �������, �� ���� ��� ��� ���������
#endif

#ifdef ZADACHI

	/*
	������ ��������� ������ ��� ������������ ����������� :
	1.
	int i = 3;
	i = ++i + ++i;
	cout << i << endl;	//��� ����� �������� �� �����?
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

	// ������ 1 - ����� �������� 10;
	// ������ 2 - ����� �������� 8;
	// ������ 3 - ����� �������� 14;
	// ������ 4 - ����� �������� 18;
	// ������ 5 - ����� �������� 26;

	
	

#endif

}