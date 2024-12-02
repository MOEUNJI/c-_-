#include <stdio.h>
main(void) {

    printf("===============중첩for문===============\n");
    /*
    for(초기값; 조건식; 증감식){
        for(초기값; 조건식; 증감식){
            실행할 코드;
        }
    }
*/

    int firstFor;
    int secondFor;

    for (firstFor = 1; firstFor <= 3; firstFor++) { // 바깥 반복문
        // firstFor는 1부터 시작해 3까지 증가한다.
        // firstFor는 행을 나타낸다
        for (secondFor = 1; secondFor <= 2; secondFor++) { // 안쪽 반복문
            // secondFor 는 매번 바깥쪽 반복문(i)가 실행될 때 안쪽 반복문도 작동한다.
            // secondFor 는 1부터 시작해서 2까지 증가한다.
            // secondFor 는 열을 나타낸다
            printf("%d 행 %d 열 \n", firstFor, secondFor);
            // 현재 행과 열의 값을 출력한다.
        }
        printf("\n");
        // 한 행이 끝날때마다 빈줄을 추가한다.
    }
    // j가 column처럼 보이는 이유는 i가 1일때 j는 1,2까지 늘어나는것이다.
    // 다음으로 i가 2일때 j는 2에 대한 1과 2가 실행되는것!
    // 우리가 작성한 태그는 매번 j값이 출력될때마다 줄바꿈을 추가하고 있으므로 출력이 세로로 된 것


	return 0;

}