[![PPP3](https://img.shields.io/badge/PPP3-Programming%20Principles%20%26%20Practice-blue)](https://www.stroustrup.com/programming.html)
[![Author](https://img.shields.io/badge/Bjarne%20Stroustrup-C%2B%2B%20Creator-blue)](https://www.stroustrup.com/)
[![Language: C++](https://img.shields.io/badge/Language-C++latest-blue)](https://en.cppreference.com/w/)

이 저장소는 Inhan의 "Programming Principles and Practice Using C++ (PPP3)" 학습을 위한 개인 노트, 연습문제 풀이, 예제 코드를 모아 둔 공간입니다. 목표는 C++ 기초를 탄탄히 하고 실습을 통해 게임 개발과 소프트웨어 개발에 필요한 역량을 쌓는 것입니다.

#### 목차
- [프로젝트 개요](#프로젝트-개요)
- [폴더 구조](#폴더-구조)
- [빠른 시작](#빠른-시작)
- [기여 방법](#기여-방법)
- [라이선스](#라이선스)

---

## 프로젝트 개요
이 리포지토리는 PPP3 교재를 바탕으로 한 개인 학습 자료입니다. 각 장에서 정리한 요약(note), 문제 풀이(drill/exercises), 용어 정리(terms), 리뷰 노트(review) 등을 포함합니다.

## 폴더 구조
- note/ : 장별 요약 및 핵심 개념 정리
- Drill/ : 연습 문제 풀이 및 코드 연습
- Terms/ : C++ 및 프로그래밍 용어 정리
- Review/ : 복습용 정리 및 중요 포인트
- Exercises/ : 교재 기반 예제와 연습문제

(각 폴더에 README.md를 추가하여 세부 내용을 기록해 두면 더 편리합니다.)

## 빠른 시작
- 요구사항: C++17 이상(권장 최신 표준), GNU/Clang 또는 MSVC 컴파일러
- 예제 실행: 각 예제 폴더로 이동하여 사용 중인 빌드 시스템(CMake, Makefile, 또는 단일 파일 컴파일)을 사용해 빌드하고 실행하세요.

예: 단일 파일을 컴파일하는 경우
```bash
# Linux / macOS (g++)
g++ -std=c++17 -O2 example.cpp -o example
./example

# Windows (MSVC - Developer Command Prompt)
cl /std:c++17 example.cpp
``` 

※ 특정 예제에 대한 빌드 스크립트(CMake 등)가 필요하면 추가해 드리겠습니다.

## 기여 방법
외부 기여 환영합니다. 간단한 가이드:
1. 이슈로 개선 아이디어나 버그 제보를 해 주세요.
2. 기능 추가/버그 수정은 포크 후 브랜치를 만들어 PR을 보내 주세요.
3. PR에는 변경 내용 설명과 재현 방법(또는 빌드 방법)을 적어 주세요.

향후: CONTRIBUTING.md, ISSUE_TEMPLATE, PR_TEMPLATE 등을 추가해 기여 프로세스를 명확히 할 예정입니다.

## 라이선스
이 프로젝트는 MIT 라이선스로 배포됩니다. 자세한 내용은 LICENSE 파일을 참고하세요.

---

[![Author](https://img.shields.io/badge/1nhan-yellow)](https://github.com/1nhan)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow)](https://github.com/1nhan/CPP_common-sense/blob/main/LICENSE)
