//���캯��
NetTopo::NetTopo(int sz)
{
    maxVertices=sz;//������󶥵���
    numVertices=0;//��ǰ����������Ϊ0
    numEdges=0;//��ǰ��������Ϊ0
    VerticesList=new int[maxVertices];//�������������

    Edge=(int **)new int*[maxVertices];//�����ڽӾ���
    for(int i=0;i<maxVertices;++i)
        Edge[i]=new int[maxVertices];
    //�ڽӾ����ʼ��
    for(int i=0;i<maxVertices;++i)
        for(int j=0;j<maxVertices;++j)
    {
        Edge[i][j]=((i==j)? 0:inf);
    }
}
