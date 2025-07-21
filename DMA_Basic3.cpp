#include<iostream>
using namespace std;
class OneClassHaveAllPrimaryDataTypeDMAAllocation
{
    private:
        int *p = NULL;
        int a=0;
        char *pp = NULL;
        char cc='0';
        float *fp = NULL;
        float f =0;
    public :
        void input_function()
        {
            cout<<"enter int number"<<endl;
            cin>>a;
            cout<<"enter char number"<<endl;
            cin>>cc;
            cout<<"enter float number"<<endl;
            cin>>f;
        }
        void DMA_function()
        {
            p = new int;
            p = &a;
            pp = new char;
            pp =&cc;
            fp = new float;
            fp =&f;
        }
        void display()
        {
            cout<<a<<ends<<*p<<endl;
            cout<<cc<<ends<<*pp<<endl;
            cout<<f<<ends<<*fp<<endl;
        }
};

int WinMain()
{
    OneClassHaveAllPrimaryDataTypeDMAAllocation OCHAPDTD;
    OCHAPDTD.input_function();
    OCHAPDTD.DMA_function();
    OCHAPDTD.display();
}