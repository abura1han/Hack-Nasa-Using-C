#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char website[] = "site.com";
/* 
    give int as parameter 
    it will print the massage

    code list : 
    230 : run warning, 
    231 : collecting informaion, 
    232 : give the security code, 
    233 : accessing massage, 
    234 : destroying massage, 
    235 : finishing massage
*/
void getMassage(int code)
{
    switch (code)
    {
    case 230:
        system("color 0a");
        printf("\nThis application will destroy websites.\nDo you really want to run the application ? (y) or (n) : ");
        break;

    case 231:
        printf("\nCollecting Information from %s.....", website);
        break;

    case 232:
        printf("\nSecurity Code : 30402");
        break;

    case 233:
        printf("\nAccessing Database of %s.....", website);
        break;

    case 234:
        printf("\nDestroying %s.....", website);
        break;

    case 235:
        printf("\nSuccessfully Erased. %s", website);
        break;
    default:
        printf("working\n");
        break;
    }
}

/*
    give int as parameter 
    it will show the progress bar
*/
void getProgress(void)
{
    printf("\n");
    for (int i = 0; i < 24; i++)
    {
        sleep(1);
        printf("==");
    }
    printf("\n");
}

int main()
{
    //necessary variable
    char command;
    int secCode = 0;

    // clear the terminal
    system("cls");

    // warning massage
    getMassage(230);
    scanf("%c", &command);
    if (command == 'y')
    {
        // website url
        printf("Enter Website URL : ");
        scanf("%s", &website);
        // collecting information
        getMassage(231);
        getProgress();
        sleep(1);
        // security code
        getMassage(232);

        while (secCode != 30402)
        {
            printf("\nEnter The Security Code : ");
            scanf("%d", &secCode);
        }
        getMassage(233);
        getProgress();
        sleep(1);
        // destroying massage
        getMassage(234);
        getProgress();
        // funny massage
        getMassage(235);
    }

    getchar();

    return 0;
}
