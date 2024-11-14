#include <iostream> // 헤더 파일 선언
using namespace std; // 네임 스페이스 이름 생략

template <class T> // 템플릿 선언 키워드, 매개 변수 T 선언
T getmax(T arr[], int length) { // T 자료형으로 이루어진 함수 정의
	T max = arr[0]; // 최대값을 배열의 0번째 인덱스로 지정
	for (int i = 1; i < length; i++) { // 반복분으로 배열 순환
		if (max < arr[i]) max = arr[i]; // 최대값 비교
	}
	return max; // 최대값 리턴
}

int main() { // 메인 함수 선언
	int a[5] = { -5, 10, 30, 20, 6 }; // 여러 자료형의 배열 선언
	double b[4] = { 3.14, 1.5, -6.0, 0.5 };
	char c[3] = { 'a', 'x', 'p' };

	cout << "정수 배열의 최대값은 " << getmax(a, 5) << endl; // 함수 호출
	cout << "실수 배열의 최대값은 " << getmax(b, 4) << endl;
	cout << "문자 배열의 최대값은 " << getmax(c, 3) << endl;

	return 0; // 0 반환 후 종료
}

