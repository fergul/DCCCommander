#ifndef __DCCHARDWARE_H__
#define __DCCHARDWARE_H__

#ifdef __cplusplus
extern "C"
{
#endif
void dcc_init(int (*getNextPacketfunc)(uint8_t **));
int dcc_bytes_left();
void dcc_send_bytes(uint8_t *bytes, uint8_t len);
int getNextPacket();
#ifdef __cplusplus
}
#endif

#endif //__DCCHARDWARE_H__