//
//  main.cpp
//  homework10
//
//  Created by 劉世翔 on 2019/4/12.
//  Copyright © 2019年 劉世翔. All rights reserved.
//

#include <iostream>
int main(int argc, const char * argv[])
{
    char jk;
    printf("請輸入英文字母:");
    scanf("%c",&jk);
    if((jk>='A')&&(jk<='Z')){
        jk+=32;
        printf("轉換為%c\n",jk);
    }
    else if((jk>='a')&&(jk<='z')){
        jk-=32;
        printf("轉換為%c\n",jk);
    }
    else{
        printf("你輸入的不是英文字母\n");
    }
    return 0;
}
