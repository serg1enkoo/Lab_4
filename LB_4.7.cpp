#include <iostream> 
#include <iomanip>  

using namespace std; 

int main() { 
    // ��������� �'��� ������ ���� double ��� ��������� �������� �������
    double value1, value2, value3, value4, value5;

    // �������� ����� �� ����������� �� �������� �'��� �������
    cout << "Enter five values: ";

    // ������� �'��� �������, �������� ������������, � �������� �� � ������� ����
    cin >> value1 >> value2 >> value3 >> value4 >> value5;

    // ������������ ���������� ������ ������ ��� ����� � ��������� �����
    cout << fixed;

    // �������� value1 � ���� ���������� ������
    cout << setprecision(1) << value1 << endl;

    // �������� value2 � ����� ����������� �������
    cout << setprecision(2) << value2 << endl;

    // �������� value3 � ������� ����������� �������
    cout << setprecision(6) << value3 << endl;

    // �������� value4 � ����� ����������� ������� (���������)
    cout << setprecision(2) << value4 << endl;

    // �������� value5 �� ���� �����, �������� ���� �� int ��� ��������� ������� �������
    cout << static_cast<int>(value5) << endl;

    return 0; // ��������� 0, ��� ������� �� ������ ���������� ��������