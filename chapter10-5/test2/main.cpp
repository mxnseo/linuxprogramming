#include <iostream> // 헤더 파일 선언
#include <vector>
#include <algorithm>
using namespace std; // 네임 스페이스 이름 생략

int main() { // 메인 함수 선언
	int std[3][3]; // 3x3 크기의 2차원 배열 생성
	vector<double> total; // 성적을 모두 더한 값을 저장할 벡터
	vector<double>::iterator it;
	for (int i = 0; i < 3; i++) { // 입력 받기 위한 반복문 
		int sum = 0;
		cout << i + 1 << "번째 학생의 국어, 영어, 수학, 성적을 입력: ";
		for (int j = 0; j < 3; j++) {
			cin >> std[i][j];
			sum += std[i][j];
		}
		total.push_back(sum / 3); // 값 더한 것들을 push_back 함수로 벡터에 삽입
	}
	
	it = max_element(total.begin(), total.end()); // 이터레이터로 최대값 구하는 함수 호출 후 가리킴
	// 결과 출력
	cout << "최우수 학생은 " << distance(total.begin(), it) + 1 << "번째 학생이고 평균 점수는 " << *it << "점이다." << endl;
	return 0; // 0 반환 후 종료
}
