#include <stdio.h>

void csdn()
{
    printf("CSDN-->");
}

void yueluqu()
{
    printf("��´��-->");
    csdn();
}

void changsha()
{
    printf("��ɳ-->");
    yueluqu();
}

void hunan()
{
    printf("����-->");
    changsha();
}

void china()
{
    printf("�й�-->");
    hunan();
}

int main(int argc, char** argv)
{
    china();
    printf("https://www.csdn.net/");

    return 0;
}