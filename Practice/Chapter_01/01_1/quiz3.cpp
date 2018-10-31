#include <iostream>

int main(void)
{
    int usernum;
    std::cout<<"몇 단을 출력하시겠습니까? : ";
    std::cin>>usernum;

    std::cout<<usernum<<"단\n";
    for(int i = 1; i < 10; i++)
    {
        std::cout<<usernum*i<<std::endl;
    }
    
    return 0;
}
