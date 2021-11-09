#include <iostream>
using namespace std;

class rational_number
{
	public:
		rational_number(int x,int y)
		{
			numerator=x;
			denominator=y;

		}
		void jia(rational_number p)  // 加
		{
			cout<<"则两个有理数做加法为：";
			cout<<numerator<<"/"<<denominator<<"+"<<p.numerator<<"/"<<p.denominator<<"=";
			cout<<(numerator*p.denominator+denominator*p.numerator)<<"/"<<(denominator*p.denominator)<<endl;
		}

		void jian(rational_number p)  //  减
		{
			cout<<"则两个有理数做减法为：";
			cout<<numerator<<"/"<<denominator<<"-"<<p.numerator<<"/"<<p.denominator<<"=";
			cout<<(numerator*p.denominator-denominator*p.numerator)<<"/"<<(denominator*p.denominator)<<endl;
		}

		void cheng(rational_number p)  //  乘
		{
			cout<<"则两个有理数做乘法为：";
			cout<<numerator<<"/"<<denominator<<"*"<<p.numerator<<"/"<<p.denominator<<"=";
			cout<<(numerator*p.numerator)<<"/"<<(denominator*p.denominator)<<endl;
		}

		void chu(rational_number p)  //  除
		{
			cout<<"则两个有理数做除法为：";
			cout<<numerator<<"/"<<denominator<<"/"<<p.numerator<<"/"<<p.denominator<<"=";
			cout<<(numerator*p.denominator)<<"/"<<(denominator*p.numerator)<<endl;
		}

		void printf() //打印输出有理数
		{
			cout<<numerator<<"/"<<denominator<<endl;
		}

		void yunsuan(char op,rational_number p)  //运算选择判断函数
		{
			switch (op)
			{
			case '+':
			    jia(p);
				break;
			case '-':
				jian(p);
				break;
			case '*':
				cheng(p);
				break;
			case '/':
				 chu(p);
				break;
			default:
				break;
			}

		}

	~rational_number(){}

	private:
		int numerator,denominator;  //分子，分母

};

int main()
{
	int x,y;
	char op;

	cout<<"请输入第一个有理数的分子和分母:";
	cin>>x>>y;
	rational_number p1(x,y);
	cout<<"则该有理数为：";
	p1.printf();


	cout<<"请输入第二个有理数的分子和分母:";
    cin>>x>>y;
	rational_number p2(x,y);
	cout<<"则该有理数为：";
	p2.printf();

	cout<<"请输入两个有理数要做的运算的运算符号：";
	cin>>op;
	p1.yunsuan(op,p2);
	cout<<endl;

}

