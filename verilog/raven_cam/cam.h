#ifndef CAM_H
#define CAM_H

#define PROGMEM
#define SENSOR_ADDR             0x60  // I2C addresss for sensor

#define TEST_REG       	        0x00  //TEST register
#define MAX_FIFO_SIZE		    0x5FFFF	 // 384 KByte

#define ARDUCHIP_FIFO      		0x04  //FIFO and I2C control
#define FIFO_CLEAR_MASK    		0x01
#define FIFO_START_MASK    		0x02
#define FIFO_RDPTR_RST_MASK     0x10
#define FIFO_WRPTR_RST_MASK     0x20

#define ARDUCHIP_GPIO			  0x06  //GPIO Write Register

#define BURST_FIFO_READ			0x3C  //Burst FIFO read operation
#define SINGLE_FIFO_READ		0x3D  //Single FIFO read operation

#define ARDUCHIP_REV       		0x40  //ArduCHIP revision
#define VER_LOW_MASK       		0x3F
#define VER_HIGH_MASK      		0xC0

#define ARDUCHIP_TRIG      		0x41  //Trigger source
#define VSYNC_MASK         		0x01
#define SHUTTER_MASK       		0x02
#define CAP_DONE_MASK      		0x08

#define FIFO_SIZE1				0x42  //Camera write FIFO size[7:0] for burst to read
#define FIFO_SIZE2				0x43  //Camera write FIFO size[15:8]
#define FIFO_SIZE3				0x44  //Camera write FIFO size[18:16]

#define OV2640_CHIPID_HIGH 	    0x0A
#define OV2640_CHIPID_LOW 	    0x0B

struct sensor_reg {
	uint16_t reg;
	uint16_t val;
};

/****************************************************/
/* Sensor related definition 												*/
/****************************************************/
#define BMP 	0
#define JPEG	1
#define RAW	  2

#define OV7670		0
#define MT9D111_A	1
#define OV7675		2
#define OV5642		3
#define OV3640  	4
#define OV2640  	5
#define OV9655		6
#define MT9M112		7
#define OV7725		8
#define OV7660		9
#define MT9M001 	10
#define OV5640 		11
#define MT9D111_B	12
#define OV9650		13
#define MT9V111		14
#define MT9T112		15
#define MT9D112		16
#define MT9V034 	17
#define MT9M034   18

#define OV2640_160x120 		0	//160x120
#define OV2640_176x144 		1	//176x144
#define OV2640_320x240 		2	//320x240
#define OV2640_352x288 		3	//352x288
#define OV2640_640x480		4	//640x480
#define OV2640_800x600 		5	//800x600
#define OV2640_1024x768		6	//1024x768
#define OV2640_1280x1024	7	//1280x1024
#define OV2640_1600x1200	8	//1600x1200

#define OV3640_176x144 		0	//176x144
#define OV3640_320x240 		1	//320x240
#define OV3640_352x288 		2	//352x288
#define OV3640_640x480		3	//640x480
#define OV3640_800x600 		4	//800x600
#define OV3640_1024x768		5 //1024x768
#define OV3640_1280x960	  6	//1280x960
#define OV3640_1600x1200	7	//1600x1200
#define OV3640_2048x1536	8	//2048x1536


#define OV5642_320x240 		0	//320x240
#define OV5642_640x480		1	//640x480
#define OV5642_1024x768		2	//1024x768
#define OV5642_1280x960 	3	//1280x960
#define OV5642_1600x1200	4	//1600x1200
#define OV5642_2048x1536	5	//2048x1536
#define OV5642_2592x1944	6	//2592x1944
#define OV5642_1920x1080    7

#define OV5640_320x240 		0	//320x240
#define OV5640_352x288		1	//352x288
#define OV5640_640x480 	    2	//640x480
#define OV5640_800x480	    3	//800x480
#define OV5640_1024x768	    4	//1024x768
#define OV5640_1280x960	    5	//1280x960
#define OV5640_1600x1200	6	//1600x1200
#define OV5640_2048x1536	7   //2048x1536
#define OV5640_2592x1944	8	//2592x1944


//Light Mode

#define Auto                    0
#define Sunny                   1
#define Cloudy                  2
#define Office                  3
#define Home                    4

#define Advanced_AWB            0
#define Simple_AWB              1
#define Manual_day              2
#define Manual_A                3
#define Manual_cwf              4
#define Manual_cloudy           5

//Color Saturation

#define Saturation4             0
#define Saturation3             1
#define Saturation2             2
#define Saturation1             3
#define Saturation0             4
#define Saturation_1            5
#define Saturation_2            6
#define Saturation_3            7
#define Saturation_4            8

//Brightness

#define Brightness4             0
#define Brightness3             1
#define Brightness2             2
#define Brightness1             3
#define Brightness0             4
#define Brightness_1            5
#define Brightness_2            6
#define Brightness_3            7
#define Brightness_4            8

//Contrast

#define Contrast4               0
#define Contrast3               1
#define Contrast2               2
#define Contrast1               3
#define Contrast0               4
#define Contrast_1              5
#define Contrast_2              6
#define Contrast_3              7
#define Contrast_4              8

#define degree_180              0
#define degree_150              1
#define degree_120              2
#define degree_90               3
#define degree_60               4
#define degree_30               5
#define degree_0                6
#define degree30                7
#define degree60                8
#define degree90                9
#define degree120               10
#define degree150               11

//Special effects

#define Antique                 0
#define Bluish                  1
#define Greenish                2
#define Reddish                 3
#define BW                      4
#define Negative                5
#define BWnegative              6
#define Normal                  7
#define Sepia                   8
#define Overexposure            9
#define Solarize                10
#define Blueish                 11
#define Yellowish               12

#define Exposure_17_EV                    0
#define Exposure_13_EV                    1
#define Exposure_10_EV                    2
#define Exposure_07_EV                    3
#define Exposure_03_EV                    4
#define Exposure_default                  5
#define Exposure03_EV                     6
#define Exposure07_EV                     7
#define Exposure10_EV                     8
#define Exposure13_EV                     9
#define Exposure17_EV                     10

#define Auto_Sharpness_default              0
#define Auto_Sharpness1                     1
#define Auto_Sharpness2                     2
#define Manual_Sharpnessoff                 3
#define Manual_Sharpness1                   4
#define Manual_Sharpness2                   5
#define Manual_Sharpness3                   6
#define Manual_Sharpness4                   7
#define Manual_Sharpness5                   8

#define Sharpness1                         0
#define Sharpness2                         1
#define Sharpness3                         2
#define Sharpness4                         3
#define Sharpness5                         4
#define Sharpness6                         5
#define Sharpness7                         6
#define Sharpness8                         7
#define Sharpness_auto                       8

#define EV3                                 0
#define EV2                                 1
#define EV1                                 2
#define EV0                                 3
#define EV_1                                4
#define EV_2                                5
#define EV_3                                6

#define MIRROR                              0
#define FLIP                                1
#define MIRROR_FLIP                         2

#define high_quality                         0
#define default_quality                      1
#define low_quality                          2

#define Color_bar                      0
#define Color_square                   1
#define BW_square                      2
#define DLI                            3

#define Night_Mode_On                  0
#define Night_Mode_Off                 1

#define Off                            0
#define Manual_50HZ                    1
#define Manual_60HZ                    2
#define Auto_Detection                 3

bool check_spi();
bool check_camera();
void reset_cpld();
void init_camera();

void flush_fifo(void);
void start_capture(void);
void clear_fifo_flag(void);
uint8_t read_fifo(void);

uint8_t read_reg(uint8_t addr);
void write_reg(uint8_t addr, uint8_t data);

void write_sensor_reg(uint8_t addr, uint8_t data);
void write_sensor_reg_list(const struct sensor_reg reglist[]);

void read_sensor_reg(uint8_t addr, uint8_t* data);

uint32_t read_fifo_length();

void set_JPEG_size(uint8_t size);
void set_Light_Mode(uint8_t Light_Mode);
void set_Color_Saturation(uint8_t Color_Saturation);
void set_Brightness(uint8_t Brightness);
void set_Contrast(uint8_t Contrast);
void set_Special_effects(uint8_t Special_effect);

const struct sensor_reg OV2640_JPEG_INIT[] PROGMEM =
{
  { 0xff, 0x00 },
  { 0x2c, 0xff },
  { 0x2e, 0xdf },
  { 0xff, 0x01 },
  { 0x3c, 0x32 },
  { 0x11, 0x00 },
  { 0x09, 0x02 },
  { 0x04, 0x28 },
  { 0x13, 0xe5 },
  { 0x14, 0x48 },
  { 0x2c, 0x0c },
  { 0x33, 0x78 },
  { 0x3a, 0x33 },
  { 0x3b, 0xfB },
  { 0x3e, 0x00 },
  { 0x43, 0x11 },
  { 0x16, 0x10 },
  { 0x39, 0x92 },
  { 0x35, 0xda },
  { 0x22, 0x1a },
  { 0x37, 0xc3 },
  { 0x23, 0x00 },
  { 0x34, 0xc0 },
  { 0x36, 0x1a },
  { 0x06, 0x88 },
  { 0x07, 0xc0 },
  { 0x0d, 0x87 },
  { 0x0e, 0x41 },
  { 0x4c, 0x00 },
  { 0x48, 0x00 },
  { 0x5B, 0x00 },
  { 0x42, 0x03 },
  { 0x4a, 0x81 },
  { 0x21, 0x99 },
  { 0x24, 0x40 },
  { 0x25, 0x38 },
  { 0x26, 0x82 },
  { 0x5c, 0x00 },
  { 0x63, 0x00 },
  { 0x61, 0x70 },
  { 0x62, 0x80 },
  { 0x7c, 0x05 },
  { 0x20, 0x80 },
  { 0x28, 0x30 },
  { 0x6c, 0x00 },
  { 0x6d, 0x80 },
  { 0x6e, 0x00 },
  { 0x70, 0x02 },
  { 0x71, 0x94 },
  { 0x73, 0xc1 },
  { 0x12, 0x40 },
  { 0x17, 0x11 },
  { 0x18, 0x43 },
  { 0x19, 0x00 },
  { 0x1a, 0x4b },
  { 0x32, 0x09 },
  { 0x37, 0xc0 },
  { 0x4f, 0x60 },
  { 0x50, 0xa8 },
  { 0x6d, 0x00 },
  { 0x3d, 0x38 },
  { 0x46, 0x3f },
  { 0x4f, 0x60 },
  { 0x0c, 0x3c },
  { 0xff, 0x00 },
  { 0xe5, 0x7f },
  { 0xf9, 0xc0 },
  { 0x41, 0x24 },
  { 0xe0, 0x14 },
  { 0x76, 0xff },
  { 0x33, 0xa0 },
  { 0x42, 0x20 },
  { 0x43, 0x18 },
  { 0x4c, 0x00 },
  { 0x87, 0xd5 },
  { 0x88, 0x3f },
  { 0xd7, 0x03 },
  { 0xd9, 0x10 },
  { 0xd3, 0x82 },
  { 0xc8, 0x08 },
  { 0xc9, 0x80 },
  { 0x7c, 0x00 },
  { 0x7d, 0x00 },
  { 0x7c, 0x03 },
  { 0x7d, 0x48 },
  { 0x7d, 0x48 },
  { 0x7c, 0x08 },
  { 0x7d, 0x20 },
  { 0x7d, 0x10 },
  { 0x7d, 0x0e },
  { 0x90, 0x00 },
  { 0x91, 0x0e },
  { 0x91, 0x1a },
  { 0x91, 0x31 },
  { 0x91, 0x5a },
  { 0x91, 0x69 },
  { 0x91, 0x75 },
  { 0x91, 0x7e },
  { 0x91, 0x88 },
  { 0x91, 0x8f },
  { 0x91, 0x96 },
  { 0x91, 0xa3 },
  { 0x91, 0xaf },
  { 0x91, 0xc4 },
  { 0x91, 0xd7 },
  { 0x91, 0xe8 },
  { 0x91, 0x20 },
  { 0x92, 0x00 },
  { 0x93, 0x06 },
  { 0x93, 0xe3 },
  { 0x93, 0x05 },
  { 0x93, 0x05 },
  { 0x93, 0x00 },
  { 0x93, 0x04 },
  { 0x93, 0x00 },
  { 0x93, 0x00 },
  { 0x93, 0x00 },
  { 0x93, 0x00 },
  { 0x93, 0x00 },
  { 0x93, 0x00 },
  { 0x93, 0x00 },
  { 0x96, 0x00 },
  { 0x97, 0x08 },
  { 0x97, 0x19 },
  { 0x97, 0x02 },
  { 0x97, 0x0c },
  { 0x97, 0x24 },
  { 0x97, 0x30 },
  { 0x97, 0x28 },
  { 0x97, 0x26 },
  { 0x97, 0x02 },
  { 0x97, 0x98 },
  { 0x97, 0x80 },
  { 0x97, 0x00 },
  { 0x97, 0x00 },
  { 0xc3, 0xed },
  { 0xa4, 0x00 },
  { 0xa8, 0x00 },
  { 0xc5, 0x11 },
  { 0xc6, 0x51 },
  { 0xbf, 0x80 },
  { 0xc7, 0x10 },
  { 0xb6, 0x66 },
  { 0xb8, 0xA5 },
  { 0xb7, 0x64 },
  { 0xb9, 0x7C },
  { 0xb3, 0xaf },
  { 0xb4, 0x97 },
  { 0xb5, 0xFF },
  { 0xb0, 0xC5 },
  { 0xb1, 0x94 },
  { 0xb2, 0x0f },
  { 0xc4, 0x5c },
  { 0xc0, 0x64 },
  { 0xc1, 0x4B },
  { 0x8c, 0x00 },
  { 0x86, 0x3D },
  { 0x50, 0x00 },
  { 0x51, 0xC8 },
  { 0x52, 0x96 },
  { 0x53, 0x00 },
  { 0x54, 0x00 },
  { 0x55, 0x00 },
  { 0x5a, 0xC8 },
  { 0x5b, 0x96 },
  { 0x5c, 0x00 },
  { 0xd3, 0x00 },	//{ 0xd3, 0x7f },
  { 0xc3, 0xed },
  { 0x7f, 0x00 },
  { 0xda, 0x00 },
  { 0xe5, 0x1f },
  { 0xe1, 0x67 },
  { 0xe0, 0x00 },
  { 0xdd, 0x7f },
  { 0x05, 0x00 },

  { 0x12, 0x40 },
  { 0xd3, 0x04 },	//{ 0xd3, 0x7f },
  { 0xc0, 0x16 },
  { 0xC1, 0x12 },
  { 0x8c, 0x00 },
  { 0x86, 0x3d },
  { 0x50, 0x00 },
  { 0x51, 0x2C },
  { 0x52, 0x24 },
  { 0x53, 0x00 },
  { 0x54, 0x00 },
  { 0x55, 0x00 },
  { 0x5A, 0x2c },
  { 0x5b, 0x24 },
  { 0x5c, 0x00 },
  { 0xff, 0xff },
};

const struct sensor_reg OV2640_JPEG[] PROGMEM =
{
  { 0xe0, 0x14 },
  { 0xe1, 0x77 },
  { 0xe5, 0x1f },
  { 0xd7, 0x03 },
  { 0xda, 0x10 },
  { 0xe0, 0x00 },
  { 0xFF, 0x01 },
  { 0x04, 0x08 },
  { 0xff, 0xff },
};

const struct sensor_reg OV2640_YUV422[] PROGMEM =
{
  { 0xFF, 0x00 },
  { 0x05, 0x00 },
  { 0xDA, 0x10 },
  { 0xD7, 0x03 },
  { 0xDF, 0x00 },
  { 0x33, 0x80 },
  { 0x3C, 0x40 },
  { 0xe1, 0x77 },
  { 0x00, 0x00 },
  { 0xff, 0xff },
};

/* JPG 160x120 */
const struct sensor_reg OV2640_160x120_JPEG[] PROGMEM =
{
  { 0xff, 0x01 },
  { 0x12, 0x40 },
  { 0x17, 0x11 },
  { 0x18, 0x43 },
  { 0x19, 0x00 },
  { 0x1a, 0x4b },
  { 0x32, 0x09 },
  { 0x4f, 0xca },
  { 0x50, 0xa8 },
  { 0x5a, 0x23 },
  { 0x6d, 0x00 },
  { 0x39, 0x12 },
  { 0x35, 0xda },
  { 0x22, 0x1a },
  { 0x37, 0xc3 },
  { 0x23, 0x00 },
  { 0x34, 0xc0 },
  { 0x36, 0x1a },
  { 0x06, 0x88 },
  { 0x07, 0xc0 },
  { 0x0d, 0x87 },
  { 0x0e, 0x41 },
  { 0x4c, 0x00 },
  { 0xff, 0x00 },
  { 0xe0, 0x04 },
  { 0xc0, 0x64 },
  { 0xc1, 0x4b },
  { 0x86, 0x35 },
  { 0x50, 0x92 },
  { 0x51, 0xc8 },
  { 0x52, 0x96 },
  { 0x53, 0x00 },
  { 0x54, 0x00 },
  { 0x55, 0x00 },
  { 0x57, 0x00 },
  { 0x5a, 0x28 },
  { 0x5b, 0x1e },
  { 0x5c, 0x00 },
  { 0xe0, 0x00 },
  { 0xff, 0xff },
};

/* JPG 320x240 */

const struct sensor_reg OV2640_320x240_JPEG[] PROGMEM =
{
  { 0xff, 0x01 },
  { 0x12, 0x40 },
  { 0x17, 0x11 },
  { 0x18, 0x43 },
  { 0x19, 0x00 },
  { 0x1a, 0x4b },
  { 0x32, 0x09 },
  { 0x4f, 0xca },
  { 0x50, 0xa8 },
  { 0x5a, 0x23 },
  { 0x6d, 0x00 },
  { 0x39, 0x12 },
  { 0x35, 0xda },
  { 0x22, 0x1a },
  { 0x37, 0xc3 },
  { 0x23, 0x00 },
  { 0x34, 0xc0 },
  { 0x36, 0x1a },
  { 0x06, 0x88 },
  { 0x07, 0xc0 },
  { 0x0d, 0x87 },
  { 0x0e, 0x41 },
  { 0x4c, 0x00 },
  { 0xff, 0x00 },
  { 0xe0, 0x04 },
  { 0xc0, 0x64 },
  { 0xc1, 0x4b },
  { 0x86, 0x35 },
  { 0x50, 0x89 },
  { 0x51, 0xc8 },
  { 0x52, 0x96 },
  { 0x53, 0x00 },
  { 0x54, 0x00 },
  { 0x55, 0x00 },
  { 0x57, 0x00 },
  { 0x5a, 0x50 },
  { 0x5b, 0x3c },
  { 0x5c, 0x00 },
  { 0xe0, 0x00 },
  { 0xff, 0xff },
};

const struct sensor_reg OV2640_QVGA[] PROGMEM =
{
	{0xff, 0x0},
	{0x2c, 0xff},
	{0x2e, 0xdf},
	{0xff, 0x1},
	{0x3c, 0x32},
	{0x11, 0x0},
	{0x9, 0x2},
	{0x4, 0xa8},
	{0x13, 0xe5},
	{0x14, 0x48},
	{0x2c, 0xc},
	{0x33, 0x78},
	{0x3a, 0x33},
	{0x3b, 0xfb},
	{0x3e, 0x0},
	{0x43, 0x11},
	{0x16, 0x10},
	{0x39, 0x2},
	{0x35, 0x88},

	{0x22, 0xa},
	{0x37, 0x40},
	{0x23, 0x0},
	{0x34, 0xa0},
	{0x6, 0x2},
	{0x6, 0x88},
	{0x7, 0xc0},
	{0xd, 0xb7},
	{0xe, 0x1},
	{0x4c, 0x0},
	{0x4a, 0x81},
	{0x21, 0x99},
	{0x24, 0x40},
	{0x25, 0x38},
	{0x26, 0x82},
	{0x5c, 0x0},
	{0x63, 0x0},
	{0x46, 0x22},
	{0xc, 0x3a},
	{0x5d, 0x55},
	{0x5e, 0x7d},
	{0x5f, 0x7d},
	{0x60, 0x55},
	{0x61, 0x70},
	{0x62, 0x80},
	{0x7c, 0x5},
	{0x20, 0x80},
	{0x28, 0x30},
	{0x6c, 0x0},
	{0x6d, 0x80},
	{0x6e, 0x0},
	{0x70, 0x2},
	{0x71, 0x94},
	{0x73, 0xc1},
	{0x3d, 0x34},
	{0x12, 0x4},
	{0x5a, 0x57},
	{0x4f, 0xbb},
	{0x50, 0x9c},
	{0xff, 0x0},
	{0xe5, 0x7f},
	{0xf9, 0xc0},
	{0x41, 0x24},
	{0xe0, 0x14},
	{0x76, 0xff},
	{0x33, 0xa0},
	{0x42, 0x20},
	{0x43, 0x18},
	{0x4c, 0x0},
	{0x87, 0xd0},
	{0x88, 0x3f},
	{0xd7, 0x3},
	{0xd9, 0x10},
	{0xd3, 0x82},
	{0xc8, 0x8},
	{0xc9, 0x80},
	{0x7c, 0x0},
	{0x7d, 0x0},
	{0x7c, 0x3},
	{0x7d, 0x48},
	{0x7d, 0x48},
	{0x7c, 0x8},
	{0x7d, 0x20},
	{0x7d, 0x10},
	{0x7d, 0xe},
	{0x90, 0x0},
	{0x91, 0xe},
	{0x91, 0x1a},
	{0x91, 0x31},
	{0x91, 0x5a},
	{0x91, 0x69},
	{0x91, 0x75},
	{0x91, 0x7e},
	{0x91, 0x88},
	{0x91, 0x8f},
	{0x91, 0x96},
	{0x91, 0xa3},
	{0x91, 0xaf},
	{0x91, 0xc4},
	{0x91, 0xd7},
	{0x91, 0xe8},
	{0x91, 0x20},
	{0x92, 0x0},

	{0x93, 0x6},
	{0x93, 0xe3},
	{0x93, 0x3},
	{0x93, 0x3},
	{0x93, 0x0},
	{0x93, 0x2},
	{0x93, 0x0},
	{0x93, 0x0},
	{0x93, 0x0},
	{0x93, 0x0},
	{0x93, 0x0},
	{0x93, 0x0},
	{0x93, 0x0},
	{0x96, 0x0},
	{0x97, 0x8},
	{0x97, 0x19},
	{0x97, 0x2},
	{0x97, 0xc},
	{0x97, 0x24},
	{0x97, 0x30},
	{0x97, 0x28},
	{0x97, 0x26},
	{0x97, 0x2},
	{0x97, 0x98},
	{0x97, 0x80},
	{0x97, 0x0},
	{0x97, 0x0},
	{0xa4, 0x0},
	{0xa8, 0x0},
	{0xc5, 0x11},
	{0xc6, 0x51},
	{0xbf, 0x80},
	{0xc7, 0x10},
	{0xb6, 0x66},
	{0xb8, 0xa5},
	{0xb7, 0x64},
	{0xb9, 0x7c},
	{0xb3, 0xaf},
	{0xb4, 0x97},
	{0xb5, 0xff},
	{0xb0, 0xc5},
	{0xb1, 0x94},
	{0xb2, 0xf},
	{0xc4, 0x5c},
	{0xa6, 0x0},
	{0xa7, 0x20},
	{0xa7, 0xd8},
	{0xa7, 0x1b},
	{0xa7, 0x31},
	{0xa7, 0x0},
	{0xa7, 0x18},
	{0xa7, 0x20},
	{0xa7, 0xd8},
	{0xa7, 0x19},
	{0xa7, 0x31},
	{0xa7, 0x0},
	{0xa7, 0x18},
	{0xa7, 0x20},
	{0xa7, 0xd8},
	{0xa7, 0x19},
	{0xa7, 0x31},
	{0xa7, 0x0},
	{0xa7, 0x18},
	{0x7f, 0x0},
	{0xe5, 0x1f},
	{0xe1, 0x77},
	{0xdd, 0x7f},
	{0xc2, 0xe},

	{0xff, 0x0},
	{0xe0, 0x4},
	{0xc0, 0xc8},
	{0xc1, 0x96},
	{0x86, 0x3d},
	{0x51, 0x90},
	{0x52, 0x2c},
	{0x53, 0x0},
	{0x54, 0x0},
	{0x55, 0x88},
	{0x57, 0x0},

	{0x50, 0x92},
	{0x5a, 0x50},
	{0x5b, 0x3c},
	{0x5c, 0x0},
	{0xd3, 0x4},
	{0xe0, 0x0},

	{0xff, 0x0},
	{0x5, 0x0},

	{0xda, 0x8},
	{0xd7, 0x3},
	{0xe0, 0x0},

	{0x5, 0x0},


	{0xff,0xff},
};

#endif // CAM_H