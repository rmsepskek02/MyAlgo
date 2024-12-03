// SetMapTest.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//



#include <iostream>
#include <set>
#include <string>
#include <map>

using namespace std;

//map 활용
int main() {
	//
	map<string, int> fruits;
	fruits.insert({ "apple", 1000 });
	fruits.insert({ "banana", 1500 });
	fruits["orange"] = 3000;
	fruits["grape"] = 4000;
	fruits["lemon"] = 5000;

	fruits["apple"] = 2000;

	fruits.erase("apple");

	for (auto [name, price] : fruits) {
		cout << name << " is " << price << " won " << endl;
	}
}

//
//
//int main()
//{
//	set<int> odds{ 1,7,5,3,9 };
//	for (auto n : odds) {
//		cout << n << ", ";
//	}
//	cout << endl;
//	set<int, greater<>> evens{ 2,4,6,8 };
//	evens.insert(10);
//	evens.insert(2);
//
//	if (evens.find(4) != evens.end()) {
//		cout << "END" << endl;
//	}
//
//	for (auto n : evens) {
//		cout << n << ", ";
//	}
//	cout << endl;
//	using psi = pair<string, int>;
//	set<psi> managers{ {"Amelia",29} ,{"Noah",25} ,{"Olivia",31} ,{"Sophia",40} };
//	managers.insert({ "George", 35 });
//
//	psi person1 = { "Noah",55 };
//	if (managers.find(person1) != managers.end()) {
//		cout << person1.first << " is a manager" << endl;
//	}
//	else {
//		cout << person1.first << " is not a manager" << endl;
//	}
//
//	managers.erase({ "Sophia",40 });
//	managers.erase({ "Olivia",30 });
//
//	for (auto m : managers) {
//		cout << m.first << "(" << m.second << ")";
//	}
//}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
