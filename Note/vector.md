# Vector 배열
C++에서 배열(파이썬에선 list) <br>
(특정 자료형만 수용가능)


## 해더파일 가져오기
```cpp
#include <vector>
```

## 선언
- 빈 배열 선언
```cpp
vector<자료형> 배열명;
// 예) vector<int> arr;
// = (파이썬) arr = []
```
- 기본 요소 포함 선언
```cpp
vector<자료형> 배열명 {values};
// 예) vector<int> arr {1, 2};
// = (파이썬) arr = [1, 2]
```

- n차원 배열 선언
```cpp
vector<vector<자료형>> 배열명; // 2차원 배열
// 2차원 배열 예) vector<vector<int>> arr {{5, 0}, {3, 0}, {1, 0}};
// = (파이썬) arr = [[5, 0], [3, 0], [1, 0]]
```

## 명령어
### push_back( value )
```cpp
vector<int> vec;
vec.push_back(1);
// vec = {1}
// = (파이썬) vec = [1]
```
맨 뒤에 value 추가 <br>
(파이썬에선 list.append())

### clear( )
```cpp
vector<int> vec;
vec.clear();
// {}
```
리스트 비우기

### size( )
```cpp
vector<int> vec = {1};
vec.size();
// 1
```
리스트 크기(길이) 구하기 <br>
(파이썬에선 len(list))
