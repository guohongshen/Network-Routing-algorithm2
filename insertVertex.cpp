#include"NetTopo.h"

//������뺯��
bool NetTopo::insertVertex(int v)
{
	if (numVertices == maxVertices)//·�ɼ����Ѵﵽ��󣬲����ٲ���
		return false;
	VerticesList[numVertices] = v;//����б����
	++numVertices;//���������
};