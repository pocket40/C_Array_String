#include <iostream>

using namespace std;


int main() 
{
	//문자열 : 문자의 열  
	//char a[6] = { 'H', 'e','l','l','o','\0' };
	char a[] = "Hello"; // "" - 자동적으로 null문자가 있기떄문에 원한는 값이 나온다.
	//[] 을 통해서 문자열의 크기를 정할수 있다.

	//배열을 사용하는 규칙 >> index
	//char 문자열

	cout << a << endl;

	return 0;
}