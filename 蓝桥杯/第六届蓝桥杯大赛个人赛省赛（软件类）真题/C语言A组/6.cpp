#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int a[13];    
    int cnt = 0;
    int ans = 0;
    for(a[0] = 0; a[0]<=4; a[0]++)
    {
        for(a[1] = 0; a[1]<=4; a[1]++)
        {
            for(a[2] = 0; a[2]<=4; a[2]++)
            {
                for(a[3] = 0; a[3]<=4; a[3]++)
                {
                    for(a[4] = 0; a[4]<=4; a[4]++)
                    {
                        for(a[5] = 0; a[5]<=4; a[5]++)
                        {
                            for(a[6] = 0; a[6]<=4; a[6]++)
                            {    
                                for(a[7] = 0; a[7]<=4; a[7]++)
                                {
                                    for(a[8] = 0; a[8]<=4; a[8]++)
                                    {
                                        for(a[9] = 0; a[9]<=4; a[9]++)
                                        {
                                            for(a[10] = 0; a[10]<=4; a[10]++)
                                            {
                                                for(a[11] = 0; a[11]<=4; a[11]++)
                                                {
                                                    for(a[12] = 0; a[12]<=4; a[12]++)
                                                    {
                                                        if(a[0]+a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]+a[8]+a[9]+a[10]+a[11]+a[12]==13)
                                                        {
                                                            cnt++;
                                                            ans = cnt;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }    
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
