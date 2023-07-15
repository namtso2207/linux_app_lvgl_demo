#include "home_ui.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
    #define LV_ATTRIBUTE_MEM_ALIGN
#endif



unsigned char background_png[] = {
  0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
  0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x03, 0x15, 0x00, 0x00, 0x02, 0x25,
  0x08, 0x06, 0x00, 0x00, 0x00, 0xa3, 0x10, 0xd5, 0x13, 0x00, 0x00, 0x00,
  0x01, 0x73, 0x52, 0x47, 0x42, 0x00, 0xae, 0xce, 0x1c, 0xe9, 0x00, 0x00,
  0x00, 0x04, 0x73, 0x42, 0x49, 0x54, 0x08, 0x08, 0x08, 0x08, 0x7c, 0x08,
  0x64, 0x88, 0x00, 0x00, 0x0b, 0x20, 0x49, 0x44, 0x41, 0x54, 0x78, 0x9c,
  0xed, 0xd7, 0x31, 0x0d, 0xc0, 0x30, 0x10, 0xc0, 0xc0, 0x24, 0xc3, 0xf3,
  0x67, 0xdc, 0x70, 0xa8, 0x87, 0xaa, 0xd2, 0x1d, 0x02, 0xaf, 0xde, 0x33,
  0xf3, 0x2c, 0x00, 0x00, 0x80, 0x97, 0xce, 0xd7, 0x01, 0x00, 0x00, 0xc0,
  0xbf, 0x99, 0x0a, 0x00, 0x00, 0x20, 0x31, 0x15, 0x00, 0x00, 0x40, 0x62,
  0x2a, 0x00, 0x00, 0x80, 0xc4, 0x54, 0x00, 0x00, 0x00, 0x89, 0xa9, 0x00,
  0x00, 0x00, 0x12, 0x53, 0x01, 0x00, 0x00, 0x24, 0xa6, 0x02, 0x00, 0x00,
  0x48, 0x4c, 0x05, 0x00, 0x00, 0x90, 0x98, 0x0a, 0x00, 0x00, 0x20, 0x31,
  0x15, 0x00, 0x00, 0x40, 0x62, 0x2a, 0x00, 0x00, 0x80, 0xc4, 0x54, 0x00,
  0x00, 0x00, 0x89, 0xa9, 0x00, 0x00, 0x00, 0x12, 0x53, 0x01, 0x00, 0x00,
  0x24, 0xa6, 0x02, 0x00, 0x00, 0x48, 0x4c, 0x05, 0x00, 0x00, 0x90, 0x98,
  0x0a, 0x00, 0x00, 0x20, 0x31, 0x15, 0x00, 0x00, 0x40, 0x62, 0x2a, 0x00,
  0x00, 0x80, 0xc4, 0x54, 0x00, 0x00, 0x00, 0x89, 0xa9, 0x00, 0x00, 0x00,
  0x12, 0x53, 0x01, 0x00, 0x00, 0x24, 0xa6, 0x02, 0x00, 0x00, 0x48, 0x4c,
  0x05, 0x00, 0x00, 0x90, 0x98, 0x0a, 0x00, 0x00, 0x20, 0x31, 0x15, 0x00,
  0x00, 0x40, 0x62, 0x2a, 0x00, 0x00, 0x80, 0xc4, 0x54, 0x00, 0x00, 0x00,
  0x89, 0xa9, 0x00, 0x00, 0x00, 0x12, 0x53, 0x01, 0x00, 0x00, 0x24, 0xa6,
  0x02, 0x00, 0x00, 0x48, 0x4c, 0x05, 0x00, 0x00, 0x90, 0x98, 0x0a, 0x00,
  0x00, 0x20, 0x31, 0x15, 0x00, 0x00, 0x40, 0x62, 0x2a, 0x00, 0x00, 0x80,
  0xc4, 0x54, 0x00, 0x00, 0x00, 0x89, 0xa9, 0x00, 0x00, 0x00, 0x12, 0x53,
  0x01, 0x00, 0x00, 0x24, 0xa6, 0x02, 0x00, 0x00, 0x48, 0x4c, 0x05, 0x00,
  0x00, 0x90, 0x98, 0x0a, 0x00, 0x00, 0x20, 0x31, 0x15, 0x00, 0x00, 0x40,
  0x62, 0x2a, 0x00, 0x00, 0x80, 0xc4, 0x54, 0x00, 0x00, 0x00, 0x89, 0xa9,
  0x00, 0x00, 0x00, 0x12, 0x53, 0x01, 0x00, 0x00, 0x24, 0xa6, 0x02, 0x00,
  0x00, 0x48, 0x4c, 0x05, 0x00, 0x00, 0x90, 0x98, 0x0a, 0x00, 0x00, 0x20,
  0x31, 0x15, 0x00, 0x00, 0x40, 0x62, 0x2a, 0x00, 0x00, 0x80, 0xc4, 0x54,
  0x00, 0x00, 0x00, 0x89, 0xa9, 0x00, 0x00, 0x00, 0x12, 0x53, 0x01, 0x00,
  0x00, 0x24, 0xa6, 0x02, 0x00, 0x00, 0x48, 0x4c, 0x05, 0x00, 0x00, 0x90,
  0x98, 0x0a, 0x00, 0x00, 0x20, 0x31, 0x15, 0x00, 0x00, 0x40, 0x62, 0x2a,
  0x00, 0x00, 0x80, 0xc4, 0x54, 0x00, 0x00, 0x00, 0x89, 0xa9, 0x00, 0x00,
  0x00, 0x12, 0x53, 0x01, 0x00, 0x00, 0x24, 0xa6, 0x02, 0x00, 0x00, 0x48,
  0x4c, 0x05, 0x00, 0x00, 0x90, 0x98, 0x0a, 0x00, 0x00, 0x20, 0x31, 0x15,
  0x00, 0x00, 0x40, 0x62, 0x2a, 0x00, 0x00, 0x80, 0xc4, 0x54, 0x00, 0x00,
  0x00, 0x89, 0xa9, 0x00, 0x00, 0x00, 0x12, 0x53, 0x01, 0x00, 0x00, 0x24,
  0xa6, 0x02, 0x00, 0x00, 0x48, 0x4c, 0x05, 0x00, 0x00, 0x90, 0x98, 0x0a,
  0x00, 0x00, 0x20, 0x31, 0x15, 0x00, 0x00, 0x40, 0x62, 0x2a, 0x00, 0x00,
  0x80, 0xc4, 0x54, 0x00, 0x00, 0x00, 0x89, 0xa9, 0x00, 0x00, 0x00, 0x12,
  0x53, 0x01, 0x00, 0x00, 0x24, 0xa6, 0x02, 0x00, 0x00, 0x48, 0x4c, 0x05,
  0x00, 0x00, 0x90, 0x98, 0x0a, 0x00, 0x00, 0x20, 0x31, 0x15, 0x00, 0x00,
  0x40, 0x62, 0x2a, 0x00, 0x00, 0x80, 0xc4, 0x54, 0x00, 0x00, 0x00, 0x89,
  0xa9, 0x00, 0x00, 0x00, 0x12, 0x53, 0x01, 0x00, 0x00, 0x24, 0xa6, 0x02,
  0x00, 0x00, 0x48, 0x4c, 0x05, 0x00, 0x00, 0x90, 0x98, 0x0a, 0x00, 0x00,
  0x20, 0x31, 0x15, 0x00, 0x00, 0x40, 0x62, 0x2a, 0x00, 0x00, 0x80, 0xc4,
  0x54, 0x00, 0x00, 0x00, 0x89, 0xa9, 0x00, 0x00, 0x00, 0x12, 0x53, 0x01,
  0x00, 0x00, 0x24, 0xa6, 0x02, 0x00, 0x00, 0x48, 0x4c, 0x05, 0x00, 0x00,
  0x90, 0x98, 0x0a, 0x00, 0x00, 0x20, 0x31, 0x15, 0x00, 0x00, 0x40, 0x62,
  0x2a, 0x00, 0x00, 0x80, 0xc4, 0x54, 0x00, 0x00, 0x00, 0x89, 0xa9, 0x00,
  0x00, 0x00, 0x12, 0x53, 0x01, 0x00, 0x00, 0x24, 0xa6, 0x02, 0x00, 0x00,
  0x48, 0x4c, 0x05, 0x00, 0x00, 0x90, 0x98, 0x0a, 0x00, 0x00, 0x20, 0x31,
  0x15, 0x00, 0x00, 0x40, 0x62, 0x2a, 0x00, 0x00, 0x80, 0xc4, 0x54, 0x00,
  0x00, 0x00, 0x89, 0xa9, 0x00, 0x00, 0x00, 0x12, 0x53, 0x01, 0x00, 0x00,
  0x24, 0xa6, 0x02, 0x00, 0x00, 0x48, 0x4c, 0x05, 0x00, 0x00, 0x90, 0x98,
  0x0a, 0x00, 0x00, 0x20, 0x31, 0x15, 0x00, 0x00, 0x40, 0x62, 0x2a, 0x00,
  0x00, 0x80, 0xc4, 0x54, 0x00, 0x00, 0x00, 0x89, 0xa9, 0x00, 0x00, 0x00,
  0x12, 0x53, 0x01, 0x00, 0x00, 0x24, 0xa6, 0x02, 0x00, 0x00, 0x48, 0x4c,
  0x05, 0x00, 0x00, 0x90, 0x98, 0x0a, 0x00, 0x00, 0x20, 0x31, 0x15, 0x00,
  0x00, 0x40, 0x62, 0x2a, 0x00, 0x00, 0x80, 0xc4, 0x54, 0x00, 0x00, 0x00,
  0x89, 0xa9, 0x00, 0x00, 0x00, 0x12, 0x53, 0x01, 0x00, 0x00, 0x24, 0xa6,
  0x02, 0x00, 0x00, 0x48, 0x4c, 0x05, 0x00, 0x00, 0x90, 0x98, 0x0a, 0x00,
  0x00, 0x20, 0x31, 0x15, 0x00, 0x00, 0x40, 0x62, 0x2a, 0x00, 0x00, 0x80,
  0xc4, 0x54, 0x00, 0x00, 0x00, 0x89, 0xa9, 0x00, 0x00, 0x00, 0x12, 0x53,
  0x01, 0x00, 0x00, 0x24, 0xa6, 0x02, 0x00, 0x00, 0x48, 0x4c, 0x05, 0x00,
  0x00, 0x90, 0x98, 0x0a, 0x00, 0x00, 0x20, 0x31, 0x15, 0x00, 0x00, 0x40,
  0x62, 0x2a, 0x00, 0x00, 0x80, 0xc4, 0x54, 0x00, 0x00, 0x00, 0x89, 0xa9,
  0x00, 0x00, 0x00, 0x12, 0x53, 0x01, 0x00, 0x00, 0x24, 0xa6, 0x02, 0x00,
  0x00, 0x48, 0x4c, 0x05, 0x00, 0x00, 0x90, 0x98, 0x0a, 0x00, 0x00, 0x20,
  0x31, 0x15, 0x00, 0x00, 0x40, 0x62, 0x2a, 0x00, 0x00, 0x80, 0xc4, 0x54,
  0x00, 0x00, 0x00, 0x89, 0xa9, 0x00, 0x00, 0x00, 0x12, 0x53, 0x01, 0x00,
  0x00, 0x24, 0xa6, 0x02, 0x00, 0x00, 0x48, 0x4c, 0x05, 0x00, 0x00, 0x90,
  0x98, 0x0a, 0x00, 0x00, 0x20, 0x31, 0x15, 0x00, 0x00, 0x40, 0x62, 0x2a,
  0x00, 0x00, 0x80, 0xc4, 0x54, 0x00, 0x00, 0x00, 0x89, 0xa9, 0x00, 0x00,
  0x00, 0x12, 0x53, 0x01, 0x00, 0x00, 0x24, 0xa6, 0x02, 0x00, 0x00, 0x48,
  0x4c, 0x05, 0x00, 0x00, 0x90, 0x98, 0x0a, 0x00, 0x00, 0x20, 0x31, 0x15,
  0x00, 0x00, 0x40, 0x62, 0x2a, 0x00, 0x00, 0x80, 0xc4, 0x54, 0x00, 0x00,
  0x00, 0x89, 0xa9, 0x00, 0x00, 0x00, 0x12, 0x53, 0x01, 0x00, 0x00, 0x24,
  0xa6, 0x02, 0x00, 0x00, 0x48, 0x4c, 0x05, 0x00, 0x00, 0x90, 0x98, 0x0a,
  0x00, 0x00, 0x20, 0x31, 0x15, 0x00, 0x00, 0x40, 0x62, 0x2a, 0x00, 0x00,
  0x80, 0xc4, 0x54, 0x00, 0x00, 0x00, 0x89, 0xa9, 0x00, 0x00, 0x00, 0x12,
  0x53, 0x01, 0x00, 0x00, 0x24, 0xa6, 0x02, 0x00, 0x00, 0x48, 0x4c, 0x05,
  0x00, 0x00, 0x90, 0x98, 0x0a, 0x00, 0x00, 0x20, 0x31, 0x15, 0x00, 0x00,
  0x40, 0x62, 0x2a, 0x00, 0x00, 0x80, 0xc4, 0x54, 0x00, 0x00, 0x00, 0x89,
  0xa9, 0x00, 0x00, 0x00, 0x12, 0x53, 0x01, 0x00, 0x00, 0x24, 0xa6, 0x02,
  0x00, 0x00, 0x48, 0x4c, 0x05, 0x00, 0x00, 0x90, 0x98, 0x0a, 0x00, 0x00,
  0x20, 0x31, 0x15, 0x00, 0x00, 0x40, 0x62, 0x2a, 0x00, 0x00, 0x80, 0xc4,
  0x54, 0x00, 0x00, 0x00, 0x89, 0xa9, 0x00, 0x00, 0x00, 0x12, 0x53, 0x01,
  0x00, 0x00, 0x24, 0xa6, 0x02, 0x00, 0x00, 0x48, 0x4c, 0x05, 0x00, 0x00,
  0x90, 0x98, 0x0a, 0x00, 0x00, 0x20, 0x31, 0x15, 0x00, 0x00, 0x40, 0x62,
  0x2a, 0x00, 0x00, 0x80, 0xc4, 0x54, 0x00, 0x00, 0x00, 0x89, 0xa9, 0x00,
  0x00, 0x00, 0x12, 0x53, 0x01, 0x00, 0x00, 0x24, 0xa6, 0x02, 0x00, 0x00,
  0x48, 0x4c, 0x05, 0x00, 0x00, 0x90, 0x98, 0x0a, 0x00, 0x00, 0x20, 0x31,
  0x15, 0x00, 0x00, 0x40, 0x62, 0x2a, 0x00, 0x00, 0x80, 0xc4, 0x54, 0x00,
  0x00, 0x00, 0x89, 0xa9, 0x00, 0x00, 0x00, 0x12, 0x53, 0x01, 0x00, 0x00,
  0x24, 0xa6, 0x02, 0x00, 0x00, 0x48, 0x4c, 0x05, 0x00, 0x00, 0x90, 0x98,
  0x0a, 0x00, 0x00, 0x20, 0x31, 0x15, 0x00, 0x00, 0x40, 0x62, 0x2a, 0x00,
  0x00, 0x80, 0xc4, 0x54, 0x00, 0x00, 0x00, 0x89, 0xa9, 0x00, 0x00, 0x00,
  0x12, 0x53, 0x01, 0x00, 0x00, 0x24, 0xa6, 0x02, 0x00, 0x00, 0x48, 0x4c,
  0x05, 0x00, 0x00, 0x90, 0x98, 0x0a, 0x00, 0x00, 0x20, 0x31, 0x15, 0x00,
  0x00, 0x40, 0x62, 0x2a, 0x00, 0x00, 0x80, 0xc4, 0x54, 0x00, 0x00, 0x00,
  0x89, 0xa9, 0x00, 0x00, 0x00, 0x12, 0x53, 0x01, 0x00, 0x00, 0x24, 0xa6,
  0x02, 0x00, 0x00, 0x48, 0x4c, 0x05, 0x00, 0x00, 0x90, 0x98, 0x0a, 0x00,
  0x00, 0x20, 0x31, 0x15, 0x00, 0x00, 0x40, 0x62, 0x2a, 0x00, 0x00, 0x80,
  0xc4, 0x54, 0x00, 0x00, 0x00, 0x89, 0xa9, 0x00, 0x00, 0x00, 0x12, 0x53,
  0x01, 0x00, 0x00, 0x24, 0xa6, 0x02, 0x00, 0x00, 0x48, 0x4c, 0x05, 0x00,
  0x00, 0x90, 0x98, 0x0a, 0x00, 0x00, 0x20, 0x31, 0x15, 0x00, 0x00, 0x40,
  0x62, 0x2a, 0x00, 0x00, 0x80, 0xc4, 0x54, 0x00, 0x00, 0x00, 0x89, 0xa9,
  0x00, 0x00, 0x00, 0x12, 0x53, 0x01, 0x00, 0x00, 0x24, 0xa6, 0x02, 0x00,
  0x00, 0x48, 0x4c, 0x05, 0x00, 0x00, 0x90, 0x98, 0x0a, 0x00, 0x00, 0x20,
  0x31, 0x15, 0x00, 0x00, 0x40, 0x62, 0x2a, 0x00, 0x00, 0x80, 0xc4, 0x54,
  0x00, 0x00, 0x00, 0x89, 0xa9, 0x00, 0x00, 0x00, 0x12, 0x53, 0x01, 0x00,
  0x00, 0x24, 0xa6, 0x02, 0x00, 0x00, 0x48, 0x4c, 0x05, 0x00, 0x00, 0x90,
  0x98, 0x0a, 0x00, 0x00, 0x20, 0x31, 0x15, 0x00, 0x00, 0x40, 0x62, 0x2a,
  0x00, 0x00, 0x80, 0xc4, 0x54, 0x00, 0x00, 0x00, 0x89, 0xa9, 0x00, 0x00,
  0x00, 0x12, 0x53, 0x01, 0x00, 0x00, 0x24, 0xa6, 0x02, 0x00, 0x00, 0x48,
  0x4c, 0x05, 0x00, 0x00, 0x90, 0x98, 0x0a, 0x00, 0x00, 0x20, 0x31, 0x15,
  0x00, 0x00, 0x40, 0x62, 0x2a, 0x00, 0x00, 0x80, 0xc4, 0x54, 0x00, 0x00,
  0x00, 0x89, 0xa9, 0x00, 0x00, 0x00, 0x12, 0x53, 0x01, 0x00, 0x00, 0x24,
  0xa6, 0x02, 0x00, 0x00, 0x48, 0x4c, 0x05, 0x00, 0x00, 0x90, 0x98, 0x0a,
  0x00, 0x00, 0x20, 0x31, 0x15, 0x00, 0x00, 0x40, 0x62, 0x2a, 0x00, 0x00,
  0x80, 0xc4, 0x54, 0x00, 0x00, 0x00, 0x89, 0xa9, 0x00, 0x00, 0x00, 0x12,
  0x53, 0x01, 0x00, 0x00, 0x24, 0xa6, 0x02, 0x00, 0x00, 0x48, 0x4c, 0x05,
  0x00, 0x00, 0x90, 0x98, 0x0a, 0x00, 0x00, 0x20, 0x31, 0x15, 0x00, 0x00,
  0x40, 0x62, 0x2a, 0x00, 0x00, 0x80, 0xc4, 0x54, 0x00, 0x00, 0x00, 0x89,
  0xa9, 0x00, 0x00, 0x00, 0x12, 0x53, 0x01, 0x00, 0x00, 0x24, 0xa6, 0x02,
  0x00, 0x00, 0x48, 0x4c, 0x05, 0x00, 0x00, 0x90, 0x98, 0x0a, 0x00, 0x00,
  0x20, 0x31, 0x15, 0x00, 0x00, 0x40, 0x62, 0x2a, 0x00, 0x00, 0x80, 0xc4,
  0x54, 0x00, 0x00, 0x00, 0x89, 0xa9, 0x00, 0x00, 0x00, 0x12, 0x53, 0x01,
  0x00, 0x00, 0x24, 0xa6, 0x02, 0x00, 0x00, 0x48, 0x4c, 0x05, 0x00, 0x00,
  0x90, 0x98, 0x0a, 0x00, 0x00, 0x20, 0x31, 0x15, 0x00, 0x00, 0x40, 0x62,
  0x2a, 0x00, 0x00, 0x80, 0xc4, 0x54, 0x00, 0x00, 0x00, 0x89, 0xa9, 0x00,
  0x00, 0x00, 0x12, 0x53, 0x01, 0x00, 0x00, 0x24, 0xa6, 0x02, 0x00, 0x00,
  0x48, 0x4c, 0x05, 0x00, 0x00, 0x90, 0x98, 0x0a, 0x00, 0x00, 0x20, 0x31,
  0x15, 0x00, 0x00, 0x40, 0x62, 0x2a, 0x00, 0x00, 0x80, 0xc4, 0x54, 0x00,
  0x00, 0x00, 0x89, 0xa9, 0x00, 0x00, 0x00, 0x12, 0x53, 0x01, 0x00, 0x00,
  0x24, 0xa6, 0x02, 0x00, 0x00, 0x48, 0x4c, 0x05, 0x00, 0x00, 0x90, 0x98,
  0x0a, 0x00, 0x00, 0x20, 0x31, 0x15, 0x00, 0x00, 0x40, 0x62, 0x2a, 0x00,
  0x00, 0x80, 0xc4, 0x54, 0x00, 0x00, 0x00, 0x89, 0xa9, 0x00, 0x00, 0x00,
  0x12, 0x53, 0x01, 0x00, 0x00, 0x24, 0xa6, 0x02, 0x00, 0x00, 0x48, 0x4c,
  0x05, 0x00, 0x00, 0x90, 0x98, 0x0a, 0x00, 0x00, 0x20, 0x31, 0x15, 0x00,
  0x00, 0x40, 0x62, 0x2a, 0x00, 0x00, 0x80, 0xc4, 0x54, 0x00, 0x00, 0x00,
  0x89, 0xa9, 0x00, 0x00, 0x00, 0x12, 0x53, 0x01, 0x00, 0x00, 0x24, 0xa6,
  0x02, 0x00, 0x00, 0x48, 0x4c, 0x05, 0x00, 0x00, 0x90, 0x98, 0x0a, 0x00,
  0x00, 0x20, 0x31, 0x15, 0x00, 0x00, 0x40, 0x62, 0x2a, 0x00, 0x00, 0x80,
  0xc4, 0x54, 0x00, 0x00, 0x00, 0x89, 0xa9, 0x00, 0x00, 0x00, 0x12, 0x53,
  0x01, 0x00, 0x00, 0x24, 0xa6, 0x02, 0x00, 0x00, 0x48, 0x4c, 0x05, 0x00,
  0x00, 0x90, 0x98, 0x0a, 0x00, 0x00, 0x20, 0x31, 0x15, 0x00, 0x00, 0x40,
  0x62, 0x2a, 0x00, 0x00, 0x80, 0xc4, 0x54, 0x00, 0x00, 0x00, 0x89, 0xa9,
  0x00, 0x00, 0x00, 0x12, 0x53, 0x01, 0x00, 0x00, 0x24, 0xa6, 0x02, 0x00,
  0x00, 0x48, 0x4c, 0x05, 0x00, 0x00, 0x90, 0x98, 0x0a, 0x00, 0x00, 0x20,
  0x31, 0x15, 0x00, 0x00, 0x40, 0x62, 0x2a, 0x00, 0x00, 0x80, 0xc4, 0x54,
  0x00, 0x00, 0x00, 0x89, 0xa9, 0x00, 0x00, 0x00, 0x12, 0x53, 0x01, 0x00,
  0x00, 0x24, 0xa6, 0x02, 0x00, 0x00, 0x48, 0x4c, 0x05, 0x00, 0x00, 0x90,
  0x98, 0x0a, 0x00, 0x00, 0x20, 0x31, 0x15, 0x00, 0x00, 0x40, 0x62, 0x2a,
  0x00, 0x00, 0x80, 0xc4, 0x54, 0x00, 0x00, 0x00, 0x89, 0xa9, 0x00, 0x00,
  0x00, 0x12, 0x53, 0x01, 0x00, 0x00, 0x24, 0xa6, 0x02, 0x00, 0x00, 0x48,
  0x4c, 0x05, 0x00, 0x00, 0x90, 0x98, 0x0a, 0x00, 0x00, 0x20, 0x31, 0x15,
  0x00, 0x00, 0x40, 0x62, 0x2a, 0x00, 0x00, 0x80, 0xc4, 0x54, 0x00, 0x00,
  0x00, 0x89, 0xa9, 0x00, 0x00, 0x00, 0x12, 0x53, 0x01, 0x00, 0x00, 0x24,
  0xa6, 0x02, 0x00, 0x00, 0x48, 0x4c, 0x05, 0x00, 0x00, 0x90, 0x98, 0x0a,
  0x00, 0x00, 0x20, 0x31, 0x15, 0x00, 0x00, 0x40, 0x62, 0x2a, 0x00, 0x00,
  0x80, 0xc4, 0x54, 0x00, 0x00, 0x00, 0x89, 0xa9, 0x00, 0x00, 0x00, 0x12,
  0x53, 0x01, 0x00, 0x00, 0x24, 0xa6, 0x02, 0x00, 0x00, 0x48, 0x4c, 0x05,
  0x00, 0x00, 0x90, 0x98, 0x0a, 0x00, 0x00, 0x20, 0x31, 0x15, 0x00, 0x00,
  0x40, 0x62, 0x2a, 0x00, 0x00, 0x80, 0xc4, 0x54, 0x00, 0x00, 0x00, 0x89,
  0xa9, 0x00, 0x00, 0x00, 0x12, 0x53, 0x01, 0x00, 0x00, 0x24, 0xa6, 0x02,
  0x00, 0x00, 0x48, 0x4c, 0x05, 0x00, 0x00, 0x90, 0x98, 0x0a, 0x00, 0x00,
  0x20, 0x31, 0x15, 0x00, 0x00, 0x40, 0x62, 0x2a, 0x00, 0x00, 0x80, 0xc4,
  0x54, 0x00, 0x00, 0x00, 0x89, 0xa9, 0x00, 0x00, 0x00, 0x12, 0x53, 0x01,
  0x00, 0x00, 0x24, 0xa6, 0x02, 0x00, 0x00, 0x48, 0x4c, 0x05, 0x00, 0x00,
  0x90, 0x98, 0x0a, 0x00, 0x00, 0x20, 0x31, 0x15, 0x00, 0x00, 0x40, 0x62,
  0x2a, 0x00, 0x00, 0x80, 0xc4, 0x54, 0x00, 0x00, 0x00, 0x89, 0xa9, 0x00,
  0x00, 0x00, 0x12, 0x53, 0x01, 0x00, 0x00, 0x24, 0xa6, 0x02, 0x00, 0x00,
  0x48, 0x4c, 0x05, 0x00, 0x00, 0x90, 0x98, 0x0a, 0x00, 0x00, 0x20, 0x31,
  0x15, 0x00, 0x00, 0x40, 0x62, 0x2a, 0x00, 0x00, 0x80, 0xc4, 0x54, 0x00,
  0x00, 0x00, 0x89, 0xa9, 0x00, 0x00, 0x00, 0x12, 0x53, 0x01, 0x00, 0x00,
  0x24, 0xa6, 0x02, 0x00, 0x00, 0x48, 0x4c, 0x05, 0x00, 0x00, 0x90, 0x98,
  0x0a, 0x00, 0x00, 0x20, 0x31, 0x15, 0x00, 0x00, 0x40, 0x62, 0x2a, 0x00,
  0x00, 0x80, 0xc4, 0x54, 0x00, 0x00, 0x00, 0x89, 0xa9, 0x00, 0x00, 0x00,
  0x12, 0x53, 0x01, 0x00, 0x00, 0x24, 0xa6, 0x02, 0x00, 0x00, 0x48, 0x4c,
  0x05, 0x00, 0x00, 0x90, 0x98, 0x0a, 0x00, 0x00, 0x20, 0x31, 0x15, 0x00,
  0x00, 0x40, 0x62, 0x2a, 0x00, 0x00, 0x80, 0xc4, 0x54, 0x00, 0x00, 0x00,
  0x89, 0xa9, 0x00, 0x00, 0x00, 0x12, 0x53, 0x01, 0x00, 0x00, 0x24, 0xa6,
  0x02, 0x00, 0x00, 0x48, 0x4c, 0x05, 0x00, 0x00, 0x90, 0x98, 0x0a, 0x00,
  0x00, 0x20, 0x31, 0x15, 0x00, 0x00, 0x40, 0x62, 0x2a, 0x00, 0x00, 0x80,
  0xc4, 0x54, 0x00, 0x00, 0x00, 0x89, 0xa9, 0x00, 0x00, 0x00, 0x12, 0x53,
  0x01, 0x00, 0x00, 0x24, 0xa6, 0x02, 0x00, 0x00, 0x48, 0x4c, 0x05, 0x00,
  0x00, 0x90, 0x98, 0x0a, 0x00, 0x00, 0x20, 0x31, 0x15, 0x00, 0x00, 0x40,
  0x62, 0x2a, 0x00, 0x00, 0x80, 0xc4, 0x54, 0x00, 0x00, 0x00, 0x89, 0xa9,
  0x00, 0x00, 0x00, 0x12, 0x53, 0x01, 0x00, 0x00, 0x24, 0xa6, 0x02, 0x00,
  0x00, 0x48, 0x4c, 0x05, 0x00, 0x00, 0x90, 0x98, 0x0a, 0x00, 0x00, 0x20,
  0x31, 0x15, 0x00, 0x00, 0x40, 0x62, 0x2a, 0x00, 0x00, 0x80, 0xc4, 0x54,
  0x00, 0x00, 0x00, 0x89, 0xa9, 0x00, 0x00, 0x00, 0x12, 0x53, 0x01, 0x00,
  0x00, 0x24, 0xa6, 0x02, 0x00, 0x00, 0x48, 0x4c, 0x05, 0x00, 0x00, 0x90,
  0x98, 0x0a, 0x00, 0x00, 0x20, 0x31, 0x15, 0x00, 0x00, 0x40, 0x62, 0x2a,
  0x00, 0x00, 0x80, 0xc4, 0x54, 0x00, 0x00, 0x00, 0x89, 0xa9, 0x00, 0x00,
  0x00, 0x12, 0x53, 0x01, 0x00, 0x00, 0x24, 0xa6, 0x02, 0x00, 0x00, 0x48,
  0x4c, 0x05, 0x00, 0x00, 0x90, 0x98, 0x0a, 0x00, 0x00, 0x20, 0x31, 0x15,
  0x00, 0x00, 0x40, 0x62, 0x2a, 0x00, 0x00, 0x80, 0xc4, 0x54, 0x00, 0x00,
  0x00, 0x89, 0xa9, 0x00, 0x00, 0x00, 0x12, 0x53, 0x01, 0x00, 0x00, 0x24,
  0xa6, 0x02, 0x00, 0x00, 0x48, 0x4c, 0x05, 0x00, 0x00, 0x90, 0x98, 0x0a,
  0x00, 0x00, 0x20, 0x31, 0x15, 0x00, 0x00, 0x40, 0x62, 0x2a, 0x00, 0x00,
  0x80, 0xc4, 0x54, 0x00, 0x00, 0x00, 0x89, 0xa9, 0x00, 0x00, 0x00, 0x12,
  0x53, 0x01, 0x00, 0x00, 0x24, 0xa6, 0x02, 0x00, 0x00, 0x48, 0x4c, 0x05,
  0x00, 0x00, 0x90, 0x98, 0x0a, 0x00, 0x00, 0x20, 0x31, 0x15, 0x00, 0x00,
  0x40, 0x62, 0x2a, 0x00, 0x00, 0x80, 0xc4, 0x54, 0x00, 0x00, 0x00, 0x89,
  0xa9, 0x00, 0x00, 0x00, 0x12, 0x53, 0x01, 0x00, 0x00, 0x24, 0xa6, 0x02,
  0x00, 0x00, 0x48, 0x4c, 0x05, 0x00, 0x00, 0x90, 0x98, 0x0a, 0x00, 0x00,
  0x20, 0x31, 0x15, 0x00, 0x00, 0x40, 0x62, 0x2a, 0x00, 0x00, 0x80, 0xc4,
  0x54, 0x00, 0x00, 0x00, 0x89, 0xa9, 0x00, 0x00, 0x00, 0x12, 0x53, 0x01,
  0x00, 0x00, 0x24, 0xa6, 0x02, 0x00, 0x00, 0x48, 0x4c, 0x05, 0x00, 0x00,
  0x90, 0x98, 0x0a, 0x00, 0x00, 0x20, 0x31, 0x15, 0x00, 0x00, 0x40, 0x62,
  0x2a, 0x00, 0x00, 0x80, 0xc4, 0x54, 0x00, 0x00, 0x00, 0x89, 0xa9, 0x00,
  0x00, 0x00, 0x12, 0x53, 0x01, 0x00, 0x00, 0x24, 0xa6, 0x02, 0x00, 0x00,
  0x48, 0x4c, 0x05, 0x00, 0x00, 0x90, 0x98, 0x0a, 0x00, 0x00, 0x20, 0x31,
  0x15, 0x00, 0x00, 0x40, 0x62, 0x2a, 0x00, 0x00, 0x80, 0xc4, 0x54, 0x00,
  0x00, 0x00, 0x89, 0xa9, 0x00, 0x00, 0x00, 0x12, 0x53, 0x01, 0x00, 0x00,
  0x24, 0xa6, 0x02, 0x00, 0x00, 0x48, 0x4c, 0x05, 0x00, 0x00, 0x90, 0x98,
  0x0a, 0x00, 0x00, 0x20, 0x31, 0x15, 0x00, 0x00, 0x40, 0x62, 0x2a, 0x00,
  0x00, 0x80, 0xc4, 0x54, 0x00, 0x00, 0x00, 0x89, 0xa9, 0x00, 0x00, 0x00,
  0x12, 0x53, 0x01, 0x00, 0x00, 0x24, 0xa6, 0x02, 0x00, 0x00, 0x48, 0x4c,
  0x05, 0x00, 0x00, 0x90, 0x98, 0x0a, 0x00, 0x00, 0x20, 0x31, 0x15, 0x00,
  0x00, 0x40, 0x62, 0x2a, 0x00, 0x00, 0x80, 0xc4, 0x54, 0x00, 0x00, 0x00,
  0x89, 0xa9, 0x00, 0x00, 0x00, 0x12, 0x53, 0x01, 0x00, 0x00, 0x24, 0xa6,
  0x02, 0x00, 0x00, 0x48, 0x4c, 0x05, 0x00, 0x00, 0x90, 0x98, 0x0a, 0x00,
  0x00, 0x20, 0x31, 0x15, 0x00, 0x00, 0x40, 0x62, 0x2a, 0x00, 0x00, 0x80,
  0xc4, 0x54, 0x00, 0x00, 0x00, 0x89, 0xa9, 0x00, 0x00, 0x00, 0x12, 0x53,
  0x01, 0x00, 0x00, 0x24, 0xa6, 0x02, 0x00, 0x00, 0x48, 0x4c, 0x05, 0x00,
  0x00, 0x90, 0x98, 0x0a, 0x00, 0x00, 0x20, 0x31, 0x15, 0x00, 0x00, 0x40,
  0x62, 0x2a, 0x00, 0x00, 0x80, 0xc4, 0x54, 0x00, 0x00, 0x00, 0x89, 0xa9,
  0x00, 0x00, 0x00, 0x12, 0x53, 0x01, 0x00, 0x00, 0x24, 0xa6, 0x02, 0x00,
  0x00, 0x48, 0x4c, 0x05, 0x00, 0x00, 0x90, 0x98, 0x0a, 0x00, 0x00, 0x20,
  0x31, 0x15, 0x00, 0x00, 0x40, 0x62, 0x2a, 0x00, 0x00, 0x80, 0xc4, 0x54,
  0x00, 0x00, 0x00, 0x89, 0xa9, 0x00, 0x00, 0x00, 0x12, 0x53, 0x01, 0x00,
  0x00, 0x24, 0xa6, 0x02, 0x00, 0x00, 0x48, 0x4c, 0x05, 0x00, 0x00, 0x90,
  0x98, 0x0a, 0x00, 0x00, 0x20, 0x31, 0x15, 0x00, 0x00, 0x40, 0x62, 0x2a,
  0x00, 0x00, 0x80, 0xc4, 0x54, 0x00, 0x00, 0x00, 0x89, 0xa9, 0x00, 0x00,
  0x00, 0x12, 0x53, 0x01, 0x00, 0x00, 0x24, 0xa6, 0x02, 0x00, 0x00, 0x48,
  0x4c, 0x05, 0x00, 0x00, 0x90, 0x98, 0x0a, 0x00, 0x00, 0x20, 0x31, 0x15,
  0x00, 0x00, 0x40, 0x62, 0x2a, 0x00, 0x00, 0x80, 0xe4, 0x02, 0x60, 0x25,
  0x05, 0x5b, 0x35, 0x0e, 0x65, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45,
  0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};

const lv_img_dsc_t ui_img_video_background = {
    .header.always_zero = 0,
    .header.w = 789,
    .header.h = 549,
    .data_size = sizeof(background_png),
    .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
    .data = background_png
};