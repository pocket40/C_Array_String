#include <iostream>

using namespace std;

int main()
{
	//C++���� ���ڿ��� �ٷ�� ��� �� �ϳ��� string
	/*
	C��Ÿ�Ϸ� string ��ü�� �ʱ�ȭ�� �� �ִ�.
	cin�� ����Ͽ� string ��ü�� Ű���� �Է��� ������ �� �ִ�.
	cout�� ����Ͽ� string ��ü�� ���÷����� �� �ִ�.
	�迭 ǥ�⸦ ����Ͽ� string ��ü�� ����Ǿ� �ִ� �������� �������� ������ �� �ִ�.

	�迭�� �ٸ� �迭�� ��°�� ������ �� ����.
	>> string������ �̰��� ����!
	*/

	char char1[20];
	char char2[20] = "jauar";
	string str1;
	string str2 = "panda";
	//char1 = char2; // Ʋ����
	str1 = str2; // �´�
	//cout << str1 << endl;
	cout << str1[0] << endl;

	return 0;
}