#ifndef CARYLL_TABLE_OTL_GPOS_MARK_TO_LIGATURE_H
#define CARYLL_TABLE_OTL_GPOS_MARK_TO_LIGATURE_H

#include "otl-private.h"

void delete_lig_attachment(otl_MarkToLigatureBase *att);
void otl_delete_gpos_markToLigature(otl_Subtable *subtable);
otl_Subtable *otl_read_gpos_markToLigature(const font_file_pointer data, uint32_t tableLength, uint32_t subtableOffset,
                                           const otfcc_Options *options);
json_value *otl_gpos_dump_markToLigature(const otl_Subtable *st);
otl_Subtable *otl_gpos_parse_markToLigature(const json_value *_subtable, const otfcc_Options *options);
caryll_Buffer *otfcc_build_gpos_markToLigature(const otl_Subtable *_subtable);
#endif