#include<stdio.h>
int main()
{
    int choice,id;
    printf("---KYC verification system---\n");
    printf("1.pan number\n");
    printf("2. aadhar number\n");
    printf("3.appar id\n");
    printf("4.driving licence\n");
    printf("5.passport\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case1://pan
        printf("pan verified\n");
        break;
        case2://aadhar
        printf("aadhar verified\n");
        break;
        case3://appar
        printf("appar is verified\n");
        break;
        case4://driving licence
        printf("driving licence is verified\n");
        break;
        case5://passport
        printf("passport is verified\n");
        break;
        default:
        printf("not verified\n");
    }
    return 0;
}
    }
}
