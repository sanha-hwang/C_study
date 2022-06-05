#define _CRT_SECURE_NO_WARNING

#include <stdio.h>
#include <string.h>

// 비밀번호를 입력받아서
// 맞는 경우 비밀 일기를 읽어와서 보여주고 , 계속 작성하도록 합니다
// 틀린 경우 경오 메시지를 표시하고 종료합니다.

#define MAX 10000




int main(void)
{
    // fgets, fputs 활용
    char line[MAX];
    char contents[MAX];
    char password[20];
    char c; // 비밀번호 입력할 때 키값 확인용 (마스킹)

    printf("'비밀일기'에 오신 것을 환영합니다.\n");
    printf("비밀번호를 입력하세여\n");

    //getchar() / getch()의 차이?
    // getchar() : 엔터를 입력받아야 동작을합니다.
    //getch() : 키 입력 시 바로바로 동작을 합니다
    int i = 0;
    while(1)
    {
        c = getch();
        if(c == 0) // enter ->비밀번호 입력 종료
        {
            password[i] = '\n';
            break;
        }
        else // 비밀번호 입력중
        {
            printf("*");
            password[i] = c;
        }
        i++;
    }

    printf("\n\n === 비밀번호 확인 중... ===\n\n");
    if (strcmp(password, "skehzheld") == 0) // 비밀번호 일치, 문자열 비교
    {
        printf(" == 비밀번호 확인 완료 == \n\n");
        char * filename = "./project_text.txt";
        FILE * file = fopen(filename, "a+b"); //a+b : 파일이 없으면 build, 있으면 append
        if (file == NULL)
        {
            printf("file read error");
            return 1;

        }
        while (fgets(line, MAX, file) != NULL)
        {
            printf("%s", line);
        }
        printf("\n\n 내용을 계속 작성하세요, 종료하시려면 EXIT 를 입력하세요 \n\n");

        while(1)
        {
            scanf("%[^\n]",contents); // 새줄(\n)이 나오지 전까지 읽어드림
            getchar(); // 버퍼에 남아잇는 \n를 삭제하기 위해 enter입력 (\n) Flush처리 , 즉 삭제

            if (strcmp(contents, "EXIT") == 0)
            {
                printf("비밀일기 입력을 종료합니다.\n\n");
                break;
            }
            fputs(contents, file);
            fputs("\n", file); // enter를 위에서 무시처리하였으므로 임의로 추가   
        }
        fclose(file);
    }
    else // 비밀번호 틀린 경우
    {
        printf("=== 비밀번호가 틀렸습니다. === \n\n");
        printf("갺 당신 누구야!! 감히 내 일기장을 !!! \n\n");
    }
    return 0;
}