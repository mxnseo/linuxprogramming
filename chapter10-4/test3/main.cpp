#include <iostream> // 헤더 파일 선언
#include <vector> 
#include <algorithm> 
#include <string>
using namespace std; // 네임 스페이스 이름 생략

int main() { // 메인 함수 정의
	vector<string> st;
	vector<string>::iterator it;
	for (int i = 0; i < 5; i++) {
		string s;
		cout << "문자열을 입력하세요: ";
		cin >> s;
		st.push_back(s); // 원소 삽입
	}

	cout << "사전에서 나오는 순서" << endl;
	sort(st.begin(), st.end()); // 오름차순 정렬
	for (it = st.begin(); it < st.end(); it++) { // 출력
		cout << *it << endl;
	}

	return 0;
}
