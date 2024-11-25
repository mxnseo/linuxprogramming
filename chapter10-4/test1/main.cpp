#include <iostream> // 헤더 파일 선언
#include <vector> 
#include <algorithm> 
using namespace std; // 네임 스페이스 이름 생략

int main() { // 메인 함수 정의
	vector<int> v; // int형 벡터 선언
	vector<int>::iterator it; // 벡터 위치 가리킬 이터레이터 선언
	int num;
	cout << "정수 4개를 입력하시오: "; // 정수 입력 받음
	for (int i = 0; i < 4; i++) {
		cin >> num;
		v.push_back(num); // push_back() 함수로 벡터에 요소 삽입
	}

	it = max_element(v.begin(), v.end()); // 최대값 가리킴
	cout << "최대값은 " << distance(v.begin(), it) << "번째 값 " << *it << endl;
	it = min_element(v.begin(), v.end()); // 최소값 가리킴
	cout << "최소값은 " << distance(v.begin(), it) << "번째 값 " << *it << endl;

	sort(v.begin(), v.end()); // 오름차순 정렬
	cout << "오름차순 결과는 ";
	for (it = v.begin(); it < v.end(); it++) {
		cout << *it << ' '; // 결과 출력
	} cout << endl;

	sort(v.begin(), v.end(), std::greater<int>()); // 내림차순 정렬
	cout << "내림차순 결과는 "; 
	for (it = v.begin(); it < v.end(); it++) { // 결과 출력
		cout << *it << ' ';
	} cout << endl;

	return 0;
}
