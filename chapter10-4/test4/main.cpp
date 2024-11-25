#include <iostream> // 헤더 파일 선언
#include <vector> 
#include <algorithm> 
#include <string>
using namespace std; // 네임 스페이스 이름 생략

class Student { // 클래스 구현부
	string name; // 멤버 변수 선언
	int score;
public: // 접근 지정자
	Student(string name = "", int score = 0) { // 생성자 정의
		this->name = name; // 값 대입
		this->score = score;
	}

	bool operator < (Student& st) { // 연산자 함수 정의
		return score < st.score; 
	}

	void show() {
		cout << "최우수 학생은" << endl; // 출력
		cout << "이름: " << name << endl;
		cout << "성적: " << score << endl;
	}
};

int main() { // 메인 함수 정의
	vector<Student> st; // Student(클래스)형 벡터 생성
	vector<Student>::iterator it; // 이터레이터 생성, 최대값 가리킴

	for (int i = 0; i < 3; i++) { // 반복문을 통해 값 입력 받음
		string name; int score;
		cout << "이름과 성적을 입력: ";
		cin >> name >> score;
		Student s(name, score); // 새로운 클래스 객체 생성해서
		st.push_back(s); // 벡터의 요소로 넣어줌
	}

	it = max_element(st.begin(), st.end()); // 최대값 구하는 함수

	it->show();

	return 0;

}
