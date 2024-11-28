// RecursiveTest.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

//1부터 n까지의 합을 반환하는 함수
int sum_iterative(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	return sum;
}
//1부터 n까지의 합을 반환하는 재귀 함수
int sum_recursive(int n) {
	//if (n == 0) return n;
	if (n < 1) return 0;
	else if (n == 1) return 1;

	return sum_recursive(n - 1) + n;
}
// n! 구하는 함수 : n * (n-1) * (n-2) * .... * 3 * 2 * 1
int factorial(int n) {
	if (n <= 0) return 1;

	return n * factorial(n - 1);
}

// 피보나치 수열 구하는 함수 : 1, 1, 2, 3, 5, ...
// n번째 위치한 피보나치 수열값 구하기 n-1 + n-2
long long fibo(int n) {
	if (n < 1) return 0;
	if (n == 1) return 1;

	return fibo(n - 1) + fibo(n - 2);
}

//HELLO 뒤집기
/*
f(HELLO)
					f(ELLO) + H
				f(LLO) + E
			f(LO) + L
		f(O) + L
	O
*/
string reverse(const string& str) {
	if (str.length() == 0)
		return "";

	return reverse(str.substr(1)) + str[0];
}

//최대 공약수 18,24
/*
gcd(24,18) > gcd(18,24%18) -> gcd(18,6) -> gcd(6,18%6) -> gcd(6,0) -> 6
*/

//최대 공약수
//int gcd(int a, int b) {
//	if (b == 0) return a;
//
//	return gcd(b, a % b);
//}
//최소 공배수
//int lcm(int a, int b) {
//	return a * b / gcd(a, b);
//}

template <typename T>
void print_vector(const vector<T> vec) {
	for (auto& e : vec) {
		cout << e << ", ";
	}
	cout << endl;
}
void permutation(vector<int>& vec, int k) {
	if (k == vec.size() - 1) {
		print_vector(vec);
		return;
	}

	for (int i = k; i < vec.size(); i++) {
		swap(vec[k], vec[i]);		//자리바꾸기
		permutation(vec, k + 1);	//재귀호출
		swap(vec[k], vec[i]);		//제자리 돌리기
	}
}
int main()
{
	cout << sum_iterative(100) << endl;
	cout << sum_recursive(100) << endl;
	cout << factorial(10) << endl;
	//cout << fibo(50) << endl;
	cout << reverse("HELLO") << endl;
	cout << gcd(24, 18) << endl;
	cout << lcm(24, 18) << endl;

	vector<int> vec{ 1,2,3,4 };
	permutation(vec, 0);
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.

