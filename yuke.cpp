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
		void jia(rational_number p)  // ��
		{
			cout<<"���������������ӷ�Ϊ��";
			cout<<numerator<<"/"<<denominator<<"+"<<p.numerator<<"/"<<p.denominator<<"=";
			cout<<(numerator*p.denominator+denominator*p.numerator)<<"/"<<(denominator*p.denominator)<<endl;
		}

		void jian(rational_number p)  //  ��
		{
			cout<<"������������������Ϊ��";
			cout<<numerator<<"/"<<denominator<<"-"<<p.numerator<<"/"<<p.denominator<<"=";
			cout<<(numerator*p.denominator-denominator*p.numerator)<<"/"<<(denominator*p.denominator)<<endl;
		}

		void cheng(rational_number p)  //  ��
		{
			cout<<"���������������˷�Ϊ��";
			cout<<numerator<<"/"<<denominator<<"*"<<p.numerator<<"/"<<p.denominator<<"=";
			cout<<(numerator*p.numerator)<<"/"<<(denominator*p.denominator)<<endl;
		}

		void chu(rational_number p)  //  ��
		{
			cout<<"������������������Ϊ��";
			cout<<numerator<<"/"<<denominator<<"/"<<p.numerator<<"/"<<p.denominator<<"=";
			cout<<(numerator*p.denominator)<<"/"<<(denominator*p.numerator)<<endl;
		}

		void printf() //��ӡ���������
		{
			cout<<numerator<<"/"<<denominator<<endl;
		}

		void yunsuan(char op,rational_number p)  //����ѡ���жϺ���
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
		int numerator,denominator;  //���ӣ���ĸ

};

int main()
{
	int x,y;
	char op;

	cout<<"�������һ���������ķ��Ӻͷ�ĸ:";
	cin>>x>>y;
	rational_number p1(x,y);
	cout<<"���������Ϊ��";
	p1.printf();


	cout<<"������ڶ����������ķ��Ӻͷ�ĸ:";
    cin>>x>>y;
	rational_number p2(x,y);
	cout<<"���������Ϊ��";
	p2.printf();

	cout<<"����������������Ҫ���������������ţ�";
	cin>>op;
	p1.yunsuan(op,p2);
	cout<<endl;

}

