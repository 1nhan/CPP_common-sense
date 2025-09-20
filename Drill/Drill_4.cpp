/************************************************************************
*		
*	Drill
*   다음은 25개의 코드 조각(code fragment)입니다.
    각 조각은 아래의 스캐폴딩(scaffolding) 코드에 삽입되도록 설계되었습니다 :
    ```cpp
    #include <iostream>
    #include <stdexcept>
    #include <string>
    
    int main()
    try {
        << 여기에 여러분의 코드가 들어갑니다 >>
            return 0;
    }
    catch (exception& e) {
        cerr << "error: " << e.what() << '\n';
        return 1;
    }
    catch (...) {
        cerr << "Oops: unknown exception!\n";
        return 2;
    }
    ```
    각 코드 조각에는 0개 이상의 오류가 포함되어 있습니다.
    여러분의 과제는 각 프로그램에서 모든 오류를 찾아 제거하는 것입니다.
    오류를 제거한 후에는 프로그램이 컴파일되고 실행되며, 
    "Success!"라는 출력을 생성해야 합니다.
    오류를 발견했다고 생각하더라도, 
    반드시 원래의(수정되지 않은) 코드 조각을 입력하고 테스트해야 합니다.
    여러분이 오류를 잘못 추측했을 수도 있고, 
    눈에 띄지 않는 오류가 더 있을 수도 있기 때문입니다.
    이 드릴의 목적 중 하나는 컴파일러가 다양한 종류의 오류에 어떻게 반응하는지 
    체험하는 것입니다. 스캐폴딩 코드를 25번 반복해서 입력하지 마십시오.
    이는 복사 및 붙여넣기(cut and paste) 또는 유사한 “기계적” 방법으로 
    처리해야 할 작업입니다.
    또한, 문제를 단순히 문장을 삭제하는 방식으로 해결하지 마십시오.
    반드시 몇 글자를 변경하거나 추가하거나 삭제하는 방식으로 수정해야 합니다.
    
    코드 조각 목록
    ```cpp
    [1] Cout << "Success!\n";
    [2] cout << "Success!\n;
    [3] cout << "Success" << !\n"
    [4] cout << success << ’\n’;
    [5] string res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
    [6] vector<int> v(10); v(5) = 7; if (v(5) != 7) cout << "Success!\n";
    [7] if (cond) cout << "Success!\n"; else cout << "Fail!\n";
    [8] bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n";
    [9] string s = "ape"; boo c = "fool" < s; if (c) cout << "Success!\n";
    [10] string s = "ape"; if (s == "fool") cout << "Success!\n";
    [11] string s = "ape"; if (s == "fool") cout < "Success!\n";
    [12] string s = "ape"; if (s + "fool") cout < "Success!\n";
    [13] vector<char> v(5); for (int i = 0; 0 < v.size(); ++i); cout << "Success!\n";
    [14] vector<char> v(5); for (int i = 0; i <= v.size(); ++i); cout << "Success!\n";
    [15] string s = "Success!\n"; for (int i = 0; i < 6; ++i) cout << s[i];
    [16] if (true) then cout << "Success!\n"; else cout << "Fail!\n";
    [17] int x = 2000; char c = x; if (c == 2000) cout << "Success!\n";
    [18] string s = "Success!\n"; for (int i = 0; i < 10; ++i) cout << s[i];
    [19] vector v(5); for (int i = 0; i <= v.size(); ++i); cout << "Success!\n";
    [20] int i = 0; int j = 9; while (i < 10) ++j; if (j < i) cout << "Success!\n";
    [21] int x = 2; double d = 5 / (x−2); if (d == 2 * x + 0.5) cout << "Success!\n";
    [22] string<char> s = "Success!\n"; for (int i = 0; i <= 10; ++i) cout << s[i];
    [23] int i = 0; while (i < 10) ++j; if (j < i) cout << "Success!\n";
    [24] int x = 4; double d = 5 / (x−2); if (d = 2 * x + 0.5) cout << "Success!\n";
    [25] cin << "Success!\n";
    ```
*
*************************************************************************/
