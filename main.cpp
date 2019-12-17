#include<iostream>
#include<fstream>
#include"NetTopo.h"
using namespace std;
int main(void)
{
    int i,j,cost;
    int t,v;
    int v1,v2;
    int dist[100];
    int path[100];
    NetTopo G;
    ifstream fin;

    cout<<"\t\t1�����ļ���������������Ϣ"<<endl<<endl;
    cout<<"\t\t2�������µĶ���"<<endl<<endl;
    cout<<"\t\t3�������µı�"<<endl<<endl;
    cout<<"\t\t4��ɾ��ָ������"<<endl<<endl;
    cout<<"\t\t5��ɾ��ָ����"<<endl<<endl;
    cout<<"\t\t6�����ָ��·������·�ɱ�"<<endl<<endl;
    while(1)
    {
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
            cout<<"����ɹ�"<<endl;
            break;
        case 2:
            cout<<"�������µĶ�����Ϣ��";
            cin>>v;
            if(G.insertVertex(v))
                cout<<"����ɹ���"<<endl;
            else
                cout<<"����ʧ�ܣ�"<<endl;
                break;

        case 3:
            cout<<"������Ҫ��ӵıߵ�����������Ȩֵ��";
            cin>>v1>>v2>>cost;
            G.insertEdge(G.getVertexPos(v1),G.getVertexPos(v2),cost);
            break;
        case 4:
            cout<<"������Ҫɾ���Ķ��㣺";
            cin>>v;
            if(G.removeVertex(G.getVertexPos(v)))
                cout<<"����ɹ���"<<endl;
            else
                cout<<"����ʧ�ܣ�"<<endl;
        case 5:
            cout<<"������Ҫɾ���ıߵ��������㣺"<<endl;
            cin>>v1>>v2;
            if(G.removeEdge(G.getVertexPos(v1),G.getVertexPos(v2)))
                cout<<"ɾ���ɹ���"<<endl;
            else
                cout<<"ɾ��ʧ�ܣ�"<<endl;
        case 6:
            cout<<"������Ҫ��ѯ·�ɱ��·�����ţ�";
            cin>>t;
            v=G.getVertexPos(t);
            if(v==-1)
            {
                cout<<"�����ڴ�·����"<<endl;
                break;
            }
            G.ShortestPath(v,dist,path);
            G.printRoutingTable(v,dist,path);
            break;
        }
    }
}
