#include <iostream>
using namespace std;
double tax=0; //系统收到的交易税
class NPC
{      
       int role;//角色类型，1：农夫,2：矿工
       char skill;//技能，'c':种植，是农夫的技能，'d'：挖掘，是矿工的技能
       double gold;//金币数量
       double corn;//谷物数量
public:
       NPC(int _r);//构造函数，新对象的角色值为_r,技能和角色配套，金币和谷物数量都为0
       void work();//工作。角色为农夫，谷物数量增加1000；角色为矿工，金币数量增加5
       void trade(NPC &p);//交易。交易双方必须为不同类型角色,且农夫的谷物不少于200，矿工的金币不少于4.5
              //交易后，农夫的谷物减少200，金币增加4,矿工的金币减少4，谷物增加200。双方各自缴纳0.5个金币的税
       double get_corn();//返回corn的值
       double get_gold();//返回gold的值
       char get_skill();//返回技能
};
NPC::NPC(int _r)
{
    role=_r;
    if(_r==1)skill='c';
    if(_r==2)skill='d';
    gold=0;
    corn=0;
}
void NPC::work()
{
    if(role==1)corn+=1000;
    if(role==2)gold+=5;
}
void NPC::trade(NPC &p)
{
    int flag=0;
    if(role==1)
    {
        if(corn>=200&&p.gold>=4.5)flag=1;
    }
    else if(role==2)
    {
        if(gold>=4.5&&p.corn>=200)flag=1;
    }
    if(flag)
    {
        if(role==1)
        {
            corn-=200;
            gold+=4;
            p.corn+=200;
            p.gold-=4;
            gold-=0.5;
            p.gold-=0.5;
            tax+=1;
        }
        else if(role==2)
        {
            p.corn-=200;
            p.gold+=4;
            corn+=200;
            gold-=4;
            gold-=0.5;
            p.gold-=0.5;
            tax+=1;
        }
    }
}
double NPC::get_corn()
{
    return corn;
}
double NPC::get_gold()
{
    return gold;
}
char NPC::get_skill()
{
    return skill;
}
int main()
{
       NPC NP1(1),NP2(2);
       for (int i=0;i<3;i++) NP1.work();
       NP2.work();
       cout<<"NP1.skill:"<<NP1.get_skill()<<'\t'<<"NP1.corn:"<<NP1.get_corn()<<'\t'
       <<"NP1.gold:"<<NP1.get_gold()<<endl;
       cout<<"NP2.skill:"<<NP2.get_skill()<<'\t'<<"NP2.corn:"<<NP2.get_corn()<<'\t'
       <<"NP2.gold:"<<NP2.get_gold()<<endl;
       for (int i=0;i<2;i++)
       {     
              cout<<"trade_"<<i+1<<"----------------------------"<<endl;
              NP1.trade(NP2);
              cout<<"NP1.skill:"<<NP1.get_skill()<<'\t'<<"NP1.corn:"<<NP1.get_corn()
                     <<'\t'<<"NP1.gold:"<<NP1.get_gold()<<endl;
              cout<<"NP2.skill:"<<NP2.get_skill()<<'\t'<<"NP2.corn:"<<NP2.get_corn()
                     <<'\t'<<"NP2.gold:"<<NP2.get_gold()<<endl;
              cout<<"tax:"<<tax<<endl;
       }
       return 0;
}