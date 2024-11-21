#include <iostream> // 헤더 파일 선언
#include <vector> // 벡터 관련 헤더 파일 선언
using namespace std; // 네임 스페이스 이름 생략

int main() { // 메인 함수 선언
	vector<int> v; // 벡터 객체 생성
	vector<int>::iterator it; // 원소를 관리하는 포인터 클래스 객체 생성
	int num = 0;

	cout << "숫자를 입력하세요: ";
	for (int i = 0; i < 5; i++) {
		cin >> num;
		v.push_back(num);
	}

	cout << "초기 벡터 원소: ";
	for (it = v.begin(); it != v.end(); it++) { // 처음 원소로 초기화, 벡터 끝의 원소를 만날 때까지
		cout << *it << " "; // 출력
	}
	cout << endl;

	for (it = v.begin(); it != v.end();) {
		if (*it < 0) it = v.erase(it); // erase 함수를 사용하여 값이 음수라면 삭제
		else it++; // 지우고 또 넘어가면 인덱스가 맞지 않으니 안 지운 경우에만 위치 이동
	}

	double avg = 0;

	cout << "음수를 삭제 후 벡터 원소: ";
	for (it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
		avg += *it;

	}
	cout << endl << "평균값: " << avg / (double)v.size() << endl; // size 함수 사용하여 평균값 계산, 출력
	return 0;
}
