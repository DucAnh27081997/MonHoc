#include "MonHoc.h"

void main()
{ 
	MonHoc *mh = new MonHoc();
	mh->Nhap();
	mh->Xuat();

	MonChuyenNganh *mcn = new MonChuyenNganh();
	mcn->Nhap();
	mcn->Xuat();
	cout << endl;
	system("pause");
}