#include "kernel/types.h" //一些数据类型声明
#include "user/user.h" //用户可以使用的系统调用声明

int main(int argc, char* argv[])
{
    if (argc != 2){  //命令行参数不为2
    	//也可以调用write
       fprintf(2, "Usage: sleep <num> \n"); //将提示信息写入标准错误端
       exit(1);	 //退出，参数1表示非正常退出
    }
    int number = atoi(argv[1]); //将字符串转为整数
    sleep(number); //调用系统调用sleep
    exit(0); //正常退出
}
