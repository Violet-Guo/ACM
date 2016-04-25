#include<cstdio>
#include<cstring>
#include<algorithm>
#include<stack> 
using namespace std;

stack<double> num;

int main() 
{
    int n, i;
    while(scanf("%d", &n)){
        char c;
        c = getchar();
        if(c=='\n' && n==0)
            break;
        
	num.push(n);
        
	c = getchar(); 
        
	double m;
        
        while(scanf("%d", &n)){
            if(c == '*'){
                m = num.top();
                m*=n;
                num.pop();
                num.push(m);    
            }
            else if(c == '/'){
                m = num.top();
                m/=n;
                num.pop();
                num.push(m);
            }
            else if(c == '+'){
                num.push(n);
            }
            else if(c == '-'){
                num.push(0-n);
            }
            
            if(getchar()=='\n')    //本行输入完毕 
                break;
            c = getchar();
        }
	 
        double sum = 0;
        
        while(!num.empty()){
            sum+=num.top();
            num.pop();         //使用完后栈一定要清空
        }
        printf("%.2lf\n", sum);

    } 
    return 0;
}
