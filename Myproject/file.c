#include <stdio.h>

#define MAX 10000



int main(void)
{
    //// 파일 입출력
    // 파일에 어떤 데이터를 저장
    // 파일에 저장된데이터를 불러오기

    // fputs, fgets 쌍
    char line[MAX]; // char line[10000]

    // ====file write====
    // FILE * file = fopen("./test.txt", "wb"); // 
    // if (file ==NULL)
    // {
    //     printf("file open fail error");
    //     return 1;

    // }

    // fputs("write text using fputs\n", file);

    // fclose(file);


    // ====file read ======
    // FILE * file = fopen("./test.txt", "rb");
    // if (file ==NULL)
    // {
    //     printf("file open fail error");
    //     return 1;

    // }

    // while (fgets(line, MAX, file) != NULL)
    // {
    //     printf("%s",line);
    // }

    // fclose(file);
    // return 0;

    // file write
    // int num[6] = {0,};
    // int bonus = 0;
    // char str1[MAX];
    // char str2[MAX];

    // FILE * file = fopen("./test.txt", "wb");
    // if (file ==NULL)
    // {
    //     printf("file open fail error");
    //     return 1;

    // }

    // //rotto number save

    // fprintf(file,"%s, %d %d %d %d %d %d\n", "sellect number", 1,2,3,4,5,6);
    // fprintf(file,"%s, %d\n", "bonus number", 7);

    // fclose(file);

    // file read

    int num[6] = {0,};
    int bonus = 0;
    char str1[MAX];
    char str2[MAX];

    FILE * file = fopen("./test.txt", "rb");
    if (file ==NULL)
    {
        printf("file open fail error");
        return 1;

    }

    //rotto number save

    fscanf(file,"%s, %d %d %d %d %d %d\n", str1, 
                                            &num[0], &num[1], &num[2], &num[3], &num[4], &num[5]);
    printf("%s, %d %d %d %d %d %d\n", str2, 
                                            num[0], num[1], num[2], num[3], num[4], num[5]);
  
    fscanf(file,"%s, %d\n", str2, &bonus);
    printf("%s, %d\n",str2, bonus);
    
    fclose(file);



    return 0;

}