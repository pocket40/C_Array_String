#include <iostream>
#include <cstring> // strlen() �Լ��� ����ϱ� ���ؼ�

using namespace std;

int main()
{
	const int Size = 15;
	char name1[Size];  // ���ִ� �迭
	char name2[Size] = "C++programing"; // ���ڿ� ����� �ʱ�ȭ�� �迭

	cout << "�ȳ��ϼ���! ����" << name2;
	cout << "�Դϴ�! ������ ��� �ǽó���?\n";

	//cin >> name1; //cin ������Է��� �޾Ƽ� �����ϴ� �Լ� // ������ �������� ����
	//cin.getline(name1, Size); // ������ �����ؼ� ����
	cin.get(name1, Size);//������ �����ؼ� ����

	cout << "��, " << name1 << "��, ����� �̸���";
	cout << strlen(name1) << " ���Դϴٸ�\n"; // strlen(������) - ���ڿ��� ���̸� ���ϴ� �Լ�
	cout << sizeof(name1) << " ����Ʈ ũ���� �迭�� ����Ǿ����ϴ�.\n"; // sizeof(������) - ������ ����Ʈ ũ�⸦ ���ϴ� �Լ�
	
	cout << "�̸���" << name1[0] << "�ڷ� �����ϴ±���.\n";
	name2[3] = '\0';
	cout << "�� �̸��� ó�� �� ���ڴ� ������ �����ϴ�: ";
	cout << name2 << endl;

	return 0;
}