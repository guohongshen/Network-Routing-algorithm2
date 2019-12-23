#include<iostream>
#include<fstream>
#include<windows.h>
#include"NetTopo.h"
using namespace std;
void menu();
int main(void)
{
    int i,j,cost;
    int t,v;
    int v1,v2;
    int dist[100];
    int path[100];
    NetTopo G;
    ifstream fin;


    while(1)
    {
        cout << "ͬ������ 2" << endl;
        menu();
        int choice;
        cout<<"������ѡ�";
        cin>>choice;
        switch(choice)
        {
        case 1:
            fin.open("Vertex.txt",ios::in);
            //cout<<'*'<<endl;
            while(fin>>i)
            {
                G.insertVertex(i);
                //cout<<i<<endl;
            }


            fin.close();
            fin.open("NetTopo.txt",ios::in);
            while(fin>>i>>j>>cost)
            {
                G.insertEdge(G.getVertexPos(i),G.getVertexPos(j),cost);
                //cout<<'*'<<endl;
            }

            fin.close();
            cout<<endl;
            cout<<"         ����ɹ���"<<endl<<endl;
            //cin>>v;
            //cout<<G.getDegree(G.getVertexPos(v))<<endl;
            system("pause");
            system("cls");
            break;
        case 2:
            cout<<"�������µĶ�����Ϣ��";
            cin>>v;
            if(G.insertVertex(v))
            {
                cout<<endl;
                cout<<"         ����ɹ���"<<endl<<endl;
            }
            else
            {
                cout<<endl;
                cout<<"         ����ʧ�ܣ�"<<endl<<endl;
            }
            system("pause");
            system("cls");
            break;
        case 3:
            cout<<"������Ҫ��ӵıߵ�����������Ȩֵ��";
            cin>>v1>>v2>>cost;
            G.insertEdge(G.getVertexPos(v1),G.getVertexPos(v2),cost);

            cout<<endl;
            cout<<"         ��ӳɹ���"<<endl<<endl;
            system("pause");
            system("cls");
            break;
        case 4:
            cout<<"������Ҫɾ���Ķ��㣺";
            cin>>v;
            if(G.removeVertex(G.getVertexPos(v)))
            {
                cout<<endl;
                cout<<"         ɾ���ɹ���"<<endl<<endl;
            }
            else
            {
                cout<<endl;
                cout<<"         ɾ��ʧ�ܣ�"<<endl<<endl;
            }
            system("pause");
            system("cls");
            break;
        case 5:
            cout<<"������Ҫɾ���ıߵ��������㣺";
            cin>>v1>>v2;

            if(G.removeEdge(G.getVertexPos(v1),G.getVertexPos(v2)))
            {
                cout<<endl;
                cout<<"         ɾ���ɹ���"<<endl<<endl;
            }
            else
            {
                cout<<endl;
                cout<<"         ɾ��ʧ�ܣ�"<<endl<<endl;
            }

            system("pause");
            system("cls");
            break;
        case 6:
            cout<<"������Ҫ��ѯ·�ɱ��·�����ţ�";
            cin>>t;
            v=G.getVertexPos(t);
            if(v==-1)
            {
                cout<<"         �����ڴ�·������"<<endl;
                system("pause");
                system("cls");
                break;
            }
            G.ShortestPath(v,dist,path);
            G.printRoutingTable(v,dist,path);

            system("pause");
            system("cls");
            break;
        }
    }
}
