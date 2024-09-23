#include <iostream> 
#include <cmath>   

using namespace std; 

int main() { 
    // ��������� ���� ��� ��������� �������� �����
    int num1, num2;

    // �������� ����� �� ����������� �� �������� ���� ����� �����
    cout << "Enter two integers: ";

    // ������� ��� ������ ������������ �����
    cin >> num1 >> num2;

    // ����������, �� �� � ���� � ����� ��������, ��� �������� ����� �� ����
    if (num1 == 0 || num2 == 0) {
        cout << "Division by zero is not allowed." << endl; // �������� ����������� ��� �������
        return 1; // ��������� ��� ������� 1, ��� ������� �� �������
    }

    // ������������ ���� ����� �� float � ���������� �������� �������� (1 / �����)
    float reciprocal1 = 1.0f / static_cast<float>(num1);
    float reciprocal2 = 1.0f / static_cast<float>(num2);

    // ��������� ��������� epsilon ��� ��������� � ���������� ��������
    const float epsilon = 0.000001f;

    // ��������� ��� ������� ��������, ����������, �� ���� ��������� ������ ����� �� epsilon
    if (fabs(reciprocal1 - reciprocal2) < epsilon) {
        cout << "Results are equal (by 0.000001 epsilon)" << endl; // �������� ����������� ��� ��, �� ���������� ��� � ����� epsilon
    }
    else {
        cout << "Results are not equal (by 0.000001 epsilon)" << endl; // �������� ����������� ��� ��, �� ���������� �� ��� � ����� epsilon
    }

    return 0; // ��������� 0, ��� ������� �� ������ ���������� ��������
}