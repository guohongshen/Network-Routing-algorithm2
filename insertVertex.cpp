#include"NetTopo.h"

//������뺯��
bool NetTopo::insertVertex(int v)
{
    for(int i=0;i<numVertices;++i)
    {
        if(VerticesList[i]==v)
            return false;
    }
	if (numVertices == maxVertices)//·�ɼ����Ѵﵽ��󣬲����ٲ���
		return false;
	VerticesList[numVertices] = v;//����б����
	++numVertices;//���������
};
