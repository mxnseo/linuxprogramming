#include <iostream> // 헤더 파일 선언
#include <vector> // 벡터 관련 헤더 파일 선언
using namespace std; // 네임 스페이스 이름 생략

int main() { // 메인 함수 선언
	vector<int> v; // 벡터 객체 생성
	int num = 0; // 벡터에 숫자를 저장할 변수
	cout << "정수 4개를 입력하시오: ";
	for (int i = 0; i < 4; i++) { // 4개의 숫자 저장
		cin >> num;
		v.push_back(num); // push_back 함수로 벡터에 저장
	}
	int max = v[0]; // 최대값과 최소값을 벡터 첫번째 원소로 초기화
	int min = v[0];
	for (int i = 1; i < 4; i++) { // 반복문을 돌며 최대 최소 비교 후 대입
		if (v[i] > max) max = v[i];
		if (v[i] < min) min = v[i];
	}
	cout << "최대값은 " << max << ", 최소값은 " << min << "입니다." << endl; // 결과 출력
	return 0; // 0 반환 후 종료
}
