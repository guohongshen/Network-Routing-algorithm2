#include"NetTopo.h"
//��ӡ·�ɱ�
void NetTopo::printRoutingTable(int v,int dist[],int path[])
{
    cout<<endl;
    if(getDegree(v)==0)
    {
        cout<<"��·�����Ѵ������жϿ���"<<endl<<endl;
        return;
    }
    cout<<"·����"<<VerticesList[v]<<"��·�ɱ����£�"<<endl;
    cout<<"\tĿ������"<<"\t��һ��"<<endl;
    for(int i=0;i<numVertices;++i)
    {
        if(i!=v&&getDegree(i)>0)
        {
            int k=i;
            while(path[k]!=v)
            {
                k=path[k];
            }
            cout<<"\t  "<<VerticesList[i]<<"\t\t  "<<VerticesList[k]<<endl;
        }
        else if(i==v)
        {
            cout<<"\t  "<<VerticesList[i]<<"\t\t  "<<"ֱ��"<<endl;
        }
    }
}
