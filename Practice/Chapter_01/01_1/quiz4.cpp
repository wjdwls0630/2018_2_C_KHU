#include <iostream>
int CalSalary(int userinput){
  return (int)(50+userinput*0.12)
}
int main(void)
{
    int userinput;

    while(1){
        std::cout<<"판매 금액을 만원 단위로 입력(-1 to end): ";
        std::cin>>userinput;
        if (userinput==-1)
            break;
        std::cout << "이번 달 급여: "<<CalSalary(userinput)<<"만원\n";

      }
    std::cout<<"프로그램을 종료합니다."<<std::endl;

    return 0;

}
