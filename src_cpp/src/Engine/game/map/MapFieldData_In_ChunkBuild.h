/*
 * ========== MapFieldData_In_ChunkBuild.h =================
 *                          -- tpr --
 *                                        CREATE -- 2019.04.27
 *                                        MODIFY -- 
 * ----------------------------------------------------------
 */
#ifndef TPR_MAP_FIELD_DATA_IN_CHUNK_BUILD_H
#define TPR_MAP_FIELD_DATA_IN_CHUNK_BUILD_H

//-------------------- Engine --------------------//
#include "fieldKey.h"
#include "sectionKey.h"
#include "fieldBorderSetId_t.h"
#include "IntVec.h"


//-- 仅用于 atom 只读数据传输 --
class MapFieldData_In_ChunkBuild{
public:
    fieldKey_t      fieldKey {};
    sectionKey_t    ecoObjKey {};
    size_t          densityIdx {};
    fieldBorderSetId_t  fieldBorderSetId {};
    IntVec2         nodeMPos {};
};


#endif 
