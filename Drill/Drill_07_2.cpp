/**************************************************************************
*
*   Drill
	[2] 하나의 파일에 네임스페이스(namespace) X, Y, Z를 정의하여 
    다음의 main() 함수가 올바르게 동작하도록 하라:
    
    ```cpp
    int main()
    {
        X::var = 7;
        X::print(); // X의 var 출력

        using namespace Y;
        var = 9;
        print(); // Y의 var 출력

        {
            using Z::var;
            using Z::print;
            var = 11;
            print(); // Z의 var 출력
        }

        print(); // Y의 var 출력
        X::print(); // X의 var 출력
    }
    ```
    각 네임스페이스는 var라는 이름의 변수와 print()라는 이름의 함수를 정의해야 하며, 
    print()는 해당 var 값을 cout을 사용하여 출력해야 한다.
*
**************************************************************************/