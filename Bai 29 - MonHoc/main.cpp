#include "MonHoc.h"

void main()
{ 
	// day la comment
	MonHoc *mh = new MonHoc();
	mh->Nhap();
	mh->Xuat();

	MonChuyenNganh *mcn = new MonChuyenNganh();
	mcn->Nhap();
	mcn->Xuat();
	cout << endl;
	system("pause");
}