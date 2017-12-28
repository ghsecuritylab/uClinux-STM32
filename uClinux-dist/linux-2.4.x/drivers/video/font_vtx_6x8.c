/********************/
/* 6x8 console font */
/********************/

#include <video/font.h>

#define FONTDATAMAX (8 * 256)

static unsigned char fontdata_6x8[FONTDATAMAX] = {
    0,0,0,0,0,0,0,0,120,132,204,132,132,180,132,120,
    120,252,180,252,252,204,252,120,0,80,248,248,248,112,32,0,
    0,32,112,248,248,112,32,0,0,112,32,248,168,32,112,0,
    0,32,112,248,248,32,112,0,0,0,48,120,120,48,0,0,
    252,252,204,132,132,204,252,252,0,48,72,72,72,72,48,0,
    252,204,180,180,180,180,204,252,60,12,20,112,136,136,112,0,
    112,136,136,112,32,248,32,0,60,36,60,32,32,96,224,192,
    124,68,124,68,68,68,204,136,32,168,112,216,216,112,168,32,
    128,224,240,248,240,224,128,0,8,56,120,248,120,56,8,0,
    32,112,248,32,32,248,112,32,72,72,72,72,72,0,72,0,
    124,164,164,100,36,36,36,0,120,132,112,72,72,56,132,120,
    0,0,0,0,120,120,120,0,32,112,248,32,248,112,32,252,
    32,112,248,32,32,32,32,0,32,32,32,32,248,112,32,0,
    0,32,16,248,16,32,0,0,0,32,64,248,64,32,0,0,
    0,0,192,192,192,248,0,0,0,0,72,252,72,0,0,0,
    0,0,48,120,252,252,0,0,0,0,252,252,120,48,0,0,
    0,0,0,0,0,0,0,0,32,32,32,32,32,0,32,0,
    72,72,72,0,0,0,0,0,80,80,248,80,248,80,80,0,
    32,120,160,112,40,240,32,0,0,136,144,32,72,136,0,0,
    64,160,64,168,144,168,64,0,32,32,64,0,0,0,0,0,
    16,32,64,64,64,32,16,0,64,32,16,16,16,32,64,0,
    0,168,112,248,112,168,0,0,0,32,32,248,32,32,0,0,
    0,0,0,0,0,32,32,64,0,0,0,120,0,0,0,0,
    0,0,0,0,0,32,32,0,0,8,16,32,64,128,0,0,
    112,136,152,168,200,136,112,0,16,48,80,16,16,16,16,0,
    112,136,8,16,32,64,248,0,112,136,8,48,8,136,112,0,
    16,48,80,144,248,16,16,0,248,128,240,8,8,136,112,0,
    56,64,128,240,136,136,112,0,248,8,16,32,32,32,32,0,
    112,136,136,112,136,136,112,0,112,136,136,120,8,16,224,0,
    0,32,32,0,0,32,32,0,0,32,32,0,0,32,32,64,
    8,16,32,64,32,16,8,0,0,0,120,0,0,120,0,0,
    64,32,16,8,16,32,64,0,112,136,16,32,32,0,32,0,
    112,136,136,152,152,128,112,0,112,136,136,248,136,136,136,0,
    240,136,136,240,136,136,240,0,112,136,128,128,128,136,112,0,
    240,136,136,136,136,136,240,0,248,128,128,240,128,128,248,0,
    248,128,128,240,128,128,128,0,112,136,128,128,152,136,112,0,
    136,136,136,248,136,136,136,0,112,32,32,32,32,32,112,0,
    56,16,16,16,16,144,96,0,136,144,160,192,160,144,136,0,
    128,128,128,128,128,128,248,0,136,216,168,168,136,136,136,0,
    136,136,200,168,152,136,136,0,112,136,136,136,136,136,112,0,
    240,136,136,240,128,128,128,0,112,136,136,136,136,144,104,0,
    240,136,136,240,160,144,136,0,112,136,128,112,8,136,112,0,
    248,32,32,32,32,32,32,0,136,136,136,136,136,136,112,0,
    136,136,136,136,136,80,32,0,136,136,136,136,168,168,80,0,
    136,136,80,32,80,136,136,0,136,136,80,32,32,32,32,0,
    248,8,16,32,64,128,248,0,120,64,64,64,64,64,120,0,
    0,128,64,32,16,8,0,0,120,8,8,8,8,8,120,0,
    32,80,136,0,0,0,0,0,0,0,0,0,0,0,0,252,
    64,32,16,0,0,0,0,0,0,0,112,8,120,136,120,0,
    128,128,240,136,136,136,240,0,0,0,120,128,128,128,120,0,
    8,8,120,136,136,136,120,0,0,0,112,136,248,128,120,0,
    56,64,64,248,64,64,64,0,0,0,112,136,136,120,8,240,
    128,128,240,136,136,136,136,0,32,0,96,32,32,32,32,0,
    8,0,24,8,8,8,136,112,64,64,72,80,96,80,72,0,
    96,32,32,32,32,32,32,0,0,0,208,168,168,168,168,0,
    0,0,240,136,136,136,136,0,0,0,112,136,136,136,112,0,
    0,0,240,136,136,240,128,128,0,0,120,136,136,120,8,8,
    0,0,184,192,128,128,128,0,0,0,120,128,112,8,240,0,
    64,64,248,64,64,64,56,0,0,0,136,136,136,136,120,0,
    0,0,136,136,136,80,32,0,0,0,136,136,168,168,80,0,
    0,0,136,80,32,80,136,0,0,0,136,136,136,120,8,240,
    0,0,248,16,32,64,248,0,24,32,32,64,32,32,24,0,
    32,32,32,32,32,32,32,0,96,16,16,8,16,16,96,0,
    100,152,0,0,0,0,0,0,0,0,32,80,136,136,248,0,
    112,136,128,128,136,112,16,96,136,0,136,136,136,136,120,0,
    16,32,112,136,248,128,120,0,112,136,112,8,120,136,120,0,
    80,0,112,8,120,136,120,0,64,32,112,8,120,136,120,0,
    32,0,112,8,120,136,120,0,0,0,120,128,128,120,16,32,
    112,136,112,136,248,128,120,0,80,0,112,136,248,128,120,0,
    64,32,112,136,248,128,120,0,80,0,96,32,32,32,32,0,
    112,136,96,32,32,32,32,0,64,32,0,96,32,32,32,0,
    80,0,112,136,248,136,136,0,112,136,112,136,248,136,136,0,
    16,32,248,128,240,128,248,0,0,0,248,32,120,160,120,0,
    120,160,160,248,160,160,184,0,112,136,112,136,136,136,112,0,
    80,0,112,136,136,136,112,0,64,32,112,136,136,136,112,0,
    112,136,0,136,136,136,120,0,64,32,136,136,136,136,120,0,
    80,0,136,136,136,120,8,240,80,0,32,80,136,80,32,0,
    80,0,136,136,136,136,112,0,32,32,120,128,128,120,32,32,
    32,80,64,224,64,72,240,0,136,136,80,248,32,248,32,32,
    192,160,160,208,144,184,144,136,16,40,32,112,32,160,64,0,
    16,32,112,8,120,136,120,0,16,32,0,96,32,32,32,0,
    16,32,112,136,136,136,112,0,16,32,136,136,136,136,120,0,
    100,152,0,240,136,136,136,0,100,152,0,200,168,152,136,0,
    48,80,80,56,0,120,0,0,48,72,72,48,0,120,0,0,
    32,0,32,32,64,136,112,0,0,0,0,248,128,128,0,0,
    0,0,0,248,8,8,0,0,64,196,72,88,36,72,156,0,
    64,196,72,84,44,92,132,0,32,0,32,32,32,32,32,0,
    0,36,72,144,72,36,0,0,0,144,72,36,72,144,0,0,
    72,144,72,144,72,144,72,144,84,168,84,168,84,168,84,168,
    108,216,108,216,108,216,108,216,32,32,32,32,32,32,32,32,
    32,32,32,32,224,32,32,32,32,32,224,32,224,32,32,32,
    72,72,72,72,200,72,72,72,0,0,0,0,248,72,72,72,
    0,0,224,32,224,32,32,32,72,72,200,8,200,72,72,72,
    72,72,72,72,72,72,72,72,0,0,248,8,200,72,72,72,
    72,72,200,8,248,0,0,0,72,72,72,72,248,0,0,0,
    32,32,224,32,224,0,0,0,0,0,0,0,224,32,32,32,
    32,32,32,32,60,0,0,0,32,32,32,32,252,0,0,0,
    0,0,0,0,252,32,32,32,32,32,32,32,60,32,32,32,
    0,0,0,0,252,0,0,0,32,32,32,32,252,32,32,32,
    32,32,60,32,60,32,32,32,72,72,72,72,76,72,72,72,
    72,72,76,64,124,0,0,0,0,0,124,64,76,72,72,72,
    72,72,204,0,252,0,0,0,0,0,252,0,204,72,72,72,
    72,72,76,64,76,72,72,74,0,0,252,0,252,0,0,0,
    72,72,204,0,204,72,72,72,32,32,252,0,252,0,0,0,
    72,72,72,72,252,0,0,0,0,0,252,0,252,32,32,32,
    0,0,0,0,252,72,72,72,72,72,72,72,124,0,0,0,
    32,32,60,32,60,0,0,0,0,0,60,32,60,32,32,32,
    0,0,0,0,124,72,72,72,72,72,72,72,252,72,72,72,
    32,32,252,32,252,32,32,32,32,32,32,32,224,0,0,0,
    0,0,0,0,60,32,32,32,252,252,252,252,252,252,252,252,
    0,0,0,0,252,252,252,252,224,224,224,224,224,224,224,224,
    28,28,28,28,28,28,28,28,252,252,252,252,0,0,0,0,
    0,0,104,144,144,144,104,0,96,144,144,160,144,136,144,0,
    248,136,128,128,128,128,128,0,0,0,248,80,80,80,80,0,
    248,136,64,32,64,136,248,0,0,0,120,144,144,144,96,0,
    0,0,72,72,72,72,112,128,0,72,176,32,32,32,32,0,
    248,32,112,136,136,112,32,248,32,80,136,248,136,80,32,0,
    112,136,136,216,80,80,216,0,24,32,16,56,72,72,48,0,
    0,0,80,168,168,80,0,0,8,16,112,168,168,112,64,128,
    56,64,128,248,128,64,56,0,0,112,136,136,136,136,136,0,
    0,248,0,248,0,248,0,0,32,32,248,32,32,0,248,0,
    32,16,8,16,32,0,120,0,8,16,32,16,8,0,120,0,
    16,40,40,32,32,32,32,32,32,32,32,32,32,160,160,64,
    0,32,0,248,0,32,0,0,0,100,152,0,100,152,0,0,
    48,72,72,48,0,0,0,0,0,0,0,32,32,0,0,0,
    0,0,0,32,0,0,0,0,28,16,16,16,144,80,48,16,
    176,72,72,72,72,0,0,0,48,72,16,32,120,0,0,0,
    0,0,120,120,120,120,0,0,0,0,0,0,0,0,0,0
};

struct fbcon_font_desc font_vtx_6x8 = {
    VTX6x8_IDX,
    "vtx6x8",
    6,
    8,
    fontdata_6x8,
    0
};