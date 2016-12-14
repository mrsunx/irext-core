/**************************************************************************************************
Filename:       irda_main.h
Revised:        Date: 2016-11-05
Revision:       Revision: 1.0

Description:    This file provides main entry for irda decoder

Revision log:
* 2016-11-05: created by strawmanbobi
**************************************************************************************************/

#ifndef IRDA_DECODER_IRDA_MAIN_H
#define IRDA_DECODER_IRDA_MAIN_H

#ifdef __cplusplus
extern "C"
{
#endif

extern struct ir_bin_buffer *pirda_buffer;

extern INT8 irda_ac_file_open(const char *file_name);

extern INT8 irda_tv_file_open(const char *file_name);

#ifdef __cplusplus
}
#endif
#endif //IRDA_DECODER_IRDA_MAIN_H
