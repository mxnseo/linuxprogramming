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
		st.push_back(s); // 요소 삽입
	}
	sort(st.begin(), st.end(), std::greater<string>()); // 내림차순 정렬
	it = st.begin(); // 첫번째 요소가 가장 나중에 나오는 단어

	cout << "사전에서 제일 뒤에 나오는 단어는 " << *it << endl; // 출력

	return 0;
}
