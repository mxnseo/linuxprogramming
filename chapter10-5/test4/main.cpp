#include <iostream> // 헤더 파일 선언
using namespace std; // 네임 스페이스 이름 생략

int main() { // 메인 함수 선언
	int arr[3][3] = { {-5, 2, 35}, {-20, 5, 100}, {-75, 5, -25} }; // 3x3 크기의 2차원 배열 생성

	for (int i = 0; i < 3; i++) { // 배열을 반복문을 통해 접근
		for (int j = 0; j < 3; j++) {
			if (arr[i][j] < 0) { // 배열 원소 값이 음수일 경우
				arr[i][j] = 0; // 0 대입
			}
			else { // 아닌 경우 (양수)
				arr[i][j] = 255; // 255 대입
			}
		}
	}

	cout << "수정행렬" << endl; // 결과 출력
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr[i][j] << "         ";
		} cout << endl;
	}

	return 0; // 0 반환 후 종료
}
