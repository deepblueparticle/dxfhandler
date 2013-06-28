/*
*	Implementation of dxliib for DXF handling
*	Autor : FLopez
*/

#ifndef DXFHANDLE_H
#define DXFHANDLE_H

#include "3rdParty/dxflib/src/dl_writer_ascii.h"
#include "3rdParty/dxflib/src/dl_dxf.h"
// </Includes>

class DxfExport;
class DxfImport;

class DxfHandle : public DL_creationAdapter{
	virtual void addLine(const DL_LineData& line);
	virtual void createDxfFile();

	void DxfHandle::addLine(const DL_LineData& linea){

	}

	int DxfHandle::createDxfFile(){
		DL_Dxf dxf;
		DL_Codes::version exportVersion = DL_Codes::AC1015;
		DL_WriterA* dw = dxf.out("archivoNuevo.dxf", exportVersion);
		if(dw==NULL){
			printf("%s\n Cannot open 'archivoNuevo.dxf for writing");
			return 0;
		}
		return 1;
	}

};

#endif