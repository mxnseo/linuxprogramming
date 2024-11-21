#include <iostream> // 헤더 파일 선언
#include <vector> // 벡터 관련 헤더 파일 선언
using namespace std; // 네임 스페이스 이름 생략

int main() { // 메인 함수 선언
	vector<string> v; // 벡터 객체 생성
	string str; // 벡터에 변수를 저장할 변수
	for (int i = 0; i < 5; i++) { // 5개의 문자열 저장
		cout << "문자열을 입력하세요: ";
		cin >> str;
		v.push_back(str); // push_back 함수로 벡터에 저장
	}
	string min = v[0]; // 최소값을 벡터 첫번째 원소로 초기화
	for (int i = 1; i < 4; i++) { // 반복문을 돌며 최대 최소 비교 후 대입
		if (v[i] < min) min = v[i];
	}
	cout << "사전에서 제일 뒤에 나오는 단어는 " << min << "입니다." << endl; // 결과 출력
	return 0; // 0 반환 후 종료
}
