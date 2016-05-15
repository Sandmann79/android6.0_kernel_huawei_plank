
#ifndef __EFFECT_OV13850_LITEON_CAM_H__

#define __EFFECT_OV13850_LITEON_CAM_H__

/*isp_reg_t*/
{
#ifndef OVISP_DEBUG_MODE
/*global*/
{0x65000,0x3f},//[0]AWBgainenable[1]BlackpixelcancelingenableDPC[2]Whitepixelcancelingenable[3]Rawnormalenable[4]Lensonlinecontrol[5]LensShadingEnable[6]Rawscaleenable[7]binningcorrentionenable
{0x65001,0x6e},//=6f,open recursive denoise;=6e off recursive denoise, recursive denoise is old denoise
{0x6502b,0x8a},//disableRGBHdns,enablejpegycbcrconvertionmatrix
{0x65063,0x0c},//bit2:rawdnsenable,default:0x08;newrawdenoise

/*BLC*/
{0x6500c,0x00},//blctarget
{0x6500d,0x40},
{0x6500e,0x00},//blctarget
{0x6500f,0x40},
{0x1dac4,0x01},//enable
{0x1dac0,0x00},//captureblc
{0x1dac1,0x45},
{0x1dac2,0x00},
{0x1dac3,0x45},
{0x1c468,0x00},//previewblc
{0x1c469,0x40},
{0x1c46a,0x00},
{0x1c46b,0x40},
{0x1c498,0x00},

//awboffset
{0x1dac5,0x00},//captureoffsetenable(defaultfalse)
{0x1dac6,0x02},//previewoffsetinlowgain
{0x1dac7,0x00},
{0x1dac8,0x00},
{0x1dac9,0x03},
{0x1daca,0x02},//previewoffsetinhighgain
{0x1dacb,0x00},
{0x1dacc,0x00},
{0x1dacd,0x03},
{0x1dace,0xfd},//captureoffsetinlowgain
{0x1dacf,0x00},
{0x1dad0,0x00},
{0x1dad1,0xfa},
{0x1dad2,0xfd},//captureoffsetinhighgain
{0x1dad3,0x00},
{0x1dad4,0x00},
{0x1dad5,0xfa},
{0x1dad6,0xa0},//lowgainthreshold
{0x1dad7,0xc0},//highgainthreshold
/*AEC*/
{0x1c594,0x01},//AdvancedAecEnable
{0x1c596,0x42},//y-target-high
{0x1c146,0x26},//y-target
{0x1c14a,0x02},
{0x1c14b,0x04},
{0x1c14c,0x0a},//aecfaststep//
{0x1c14e,0x05},//slowstep   //08
{0x1c140,0x01},//bandingenable
{0x1c13e,0x02},//realgainmodeforOV8830
{0x66401,0x00},//windowweight
{0x66402,0x20},//StatWin_Left
{0x66403,0x00},
{0x66404,0x20},//StatWin_Top
{0x66405,0x00},
{0x66406,0x20},//StatWin_Right
{0x66407,0x00},
{0x66408,0x28},//StatWin_Bottom
{0x66409,0x01},//definitonofthecenter3x3window
{0x6640a,0x00},//nWin_Left
{0x6640d,0x00},
{0x6640e,0xc0},//nWin_Top
{0x66411,0x06},
{0x66412,0x00},//nWin_Width
{0x66415,0x04},
{0x66416,0x80},//nWin_Height

{0x6642e,0x01},//nWin_Weight_0weightpass
{0x6642f,0x01},//nWin_Weight_1
{0x66430,0x01},//nWin_Weight_2
{0x66431,0x01},//nWin_Weight_3
{0x66432,0x02},//nWin_Weight_4
{0x66433,0x02},//nWin_Weight_5
{0x66434,0x02},//nWin_Weight_6
{0x66435,0x02},//nWin_Weight_7
{0x66436,0x04},//nWin_Weight_8
{0x66437,0x02},//nWin_Weight_9
{0x66438,0x02},//nWin_Weight_10
{0x66439,0x02},//nWin_Weight_11
{0x6643a,0x02},//nWin_Weight_12
{0x6644e,0x03},//nWin_Weight_Shift
{0x6644f,0x04},//blacklevel
{0x66450,0xf8},//saturatelevel
{0x6645b,0x1a},//blackweight1
{0x6645d,0x1a},//blackweight2
{0x66460,0x04},//saturateper1
{0x66464,0x0a},//saturateper2
{0x66467,0x14},//saturateweight1
{0x66469,0x14},//saturateweight2
/*hanchen+*/
{0x66302,0xb0},//ref bin
{0x66303,0x0a},//PsPer0 0a
{0x66304,0x10},//PsPer1
/*hanchen+*/
/*autolevel*/
//rawstrechmode2
{0x66f00,0x01},//autostretchenalbe
{0x66f01,0x00},
{0x66f02,0x40},//minlowlevel = blc
{0x66f03,0x00},
{0x66f04,0x50},//maxlowlevel//0x40 before
{0x66f05,0x0f},//minhighlevel[11:8]
{0x66f06,0xff},//minhighlevel[7:0],highlevel=255,disablehighlevel
{0x66f09,0x0b},//psthres1
{0x66f0a,0x10},//psthres2
{0x66f0b,0x02},//minnum
{0x66f0c,0x00},
{0x66f0d,0x01},//target_offset
/*gamma*/
{0x1d984,0x01},//adaptive gamma,disable for test by Richard@07092013
{0x1c49b,0x01},//ManualGamma enable
{0x1c49c,0x02},//ManualGamma[15:8],gammavalue=currentvalue/256
{0x1c49d,0x00},//ManualGamma [7:0]
{0x1c49e,0x02},//RGBGamma[15:8]
{0x1c49f,0x00},//RGB Gamma [7:0]
{0x1c4a2,0x00},//Max RGB Gamma Gain [15:8]
{0x1c4a3,0x64},//Max RGB Gamma Gain [7:0]

//thesesettingsshouldberemovedwhenadaptivegammaisdisabled
{0x1d994,0x02},//low gain gamma
{0x1d995,0x00},
{0x1d996,0x02},//high gain gamma
{0x1d997,0x00},
{0x1d998,0x02},//dark image gamma
{0x1d999,0x00},
{0x1d99a,0x80},//low gain slope
{0x1d99b,0x4e},//high gain slope
{0x1d99c,0x4e},//dark image slope
{0x1d982,0x1c},//Low gain threshold
{0x1d983,0x38},//High gain threshold
{0x1d99d,0x14},//low bright thres
{0x1d99e,0x20},//highbrightthres
//curvethreshold
{0x1c591,0x01},//enableadaptivecurve
{0x1c592,0x1c},//low gain threshold
{0x1c593,0x38},//highgainthreshold

/*ToneMappingcurve*/
{0x6502f,0x00},//seperategammaandtonemap
{0x65a00,0x1a},//bit4=1:RGB curve;bit4=0:Y curve. bit0 is h_dark_enY
{0x65a01,0x00},//h_dark_th[6:0]

//lowcurve
{0x1C4C0,0x23},
{0x1C4C1,0x2e},
{0x1C4C2,0x37},
{0x1C4C3,0x41},
{0x1C4C4,0x49},
{0x1C4C5,0x52},
{0x1C4C6,0x5a},
{0x1C4C7,0x61},
{0x1C4C8,0x6c},
{0x1C4C9,0x77},
{0x1C4CA,0x84},
{0x1C4CB,0x95},
{0x1C4CC,0xad},
{0x1C4CD,0xc6},
{0x1C4CE,0xe4},

//high curve
{0x1d985,0x1e},
{0x1d986,0x2e},
{0x1d987,0x37},
{0x1d988,0x41},
{0x1d989,0x49},
{0x1d98a,0x52},
{0x1d98b,0x5a},
{0x1d98c,0x61},
{0x1d98d,0x6c},
{0x1d98e,0x77},
{0x1d98f,0x84},
{0x1d990,0x95},
{0x1d991,0xac},
{0x1d992,0xc6},
{0x1d993,0xe4},
/*EDR*/
{0x1c4d4,0x00},//EDR scale, disable edr with 0, control how much EDR dynamic curve is from normal curve. 4d4=min,4d5=max
{0x1c4d5,0x00},//EDR scale, disable edr with 0
{0x1c4cf,0xff},//disableedrwith0xff
/*dark boost*/
{0x1c4b0,0x02},//smaller value makes EDRbe brighter
{0x1c4b1,0x80},
/*LENC*/
{0x65102,0x07},
{0x65103,0x87},
{0x65104,0x0a},
{0x65105,0x0a},
{0x65106,0x0a},
{0x65107,0x0a},
{0x65108,0x06},
{0x65109,0xb1},
{0x1c244,0x00},//lenscorrectionautogainenable
{0x1c245,0x03},//lensswtichbyonlinestat
{0x1d9c6,0x01},
//LENS online
{0x1c574,0x00},//lowgain
{0x1c575,0x40},
{0x1c576,0x00},//highgain
{0x1c577,0xa0},
{0x1c578,0x40},//minlensapplyratio
{0x65206,0xfa},//RG
{0x65207,0x06},
{0x65208,0xfa}, //BG
{0x65209,0x06},
{0x1d9c0,0x00},//switch to day thres
{0x1d9c1,0xa0},
{0x1d9c2,0xff},//switch to TL84 thres
{0x1d9c3,0x90},
{0x1c579,0x01},//autolensonline
{0x1d9be,0x00},//outdoor threshold 2bytes
{0x1d9bf,0x80},
{0x1d9c7,0x20},//outdoor threshold ratio,(x+32)/32
{0x1d9c8,0xfc},//outdoor RG
{0x1d9c9,0xfa},//indoorRG
{0x1d9ca,0x04},
{0x1d9cb,0x06},
{0x1d9cc,0x00},//outdoor BG
{0x1d9cd,0xfc},//indoorBG
{0x1d9ce,0x00},
{0x1d9cf,0x04},
//forluminacecorretcion,theluminancecompensationamplitudecanchangewiththesensorgaqin
{0x1c248,0x40},//maxlenscorrectionratio
{0x1c24a,0x20},//minlenscorrectionratio
{0x1c24c,0x00},//gainthreshold0[15:8]
{0x1c24d,0x20},//gainthreshold0[7:0]
{0x1c24e,0x00},//gainthreshold1[15:8]
{0x1c24f,0x80},//gainthreshold1[7:0]
//lensprofileswitch
//add shading parameter according 0x1c728~0x1c72d,b_gain/r_gain*256
{0x1c254,0x00},//D
{0x1c255,0xd2},
{0x1c256,0x01},//D-cwf 4150
{0x1c257,0x00},
{0x1c258,0x01},//cwf-a 3100k
{0x1c259,0x41},
{0x1c25a,0x01},//a 2750k
{0x1c25b,0x6d},

//LenC Setting
//d
{0x1c264,0x0c},
{0x1c265,0x09},
{0x1c266,0x08},
{0x1c267,0x08},
{0x1c268,0x09},
{0x1c269,0x0b},
{0x1c26a,0x07},
{0x1c26b,0x06},
{0x1c26c,0x04},
{0x1c26d,0x04},
{0x1c26e,0x05},
{0x1c26f,0x08},
{0x1c270,0x06},
{0x1c271,0x03},
{0x1c272,0x00},
{0x1c273,0x00},
{0x1c274,0x03},
{0x1c275,0x06},
{0x1c276,0x05},
{0x1c277,0x03},
{0x1c278,0x00},
{0x1c279,0x00},
{0x1c27a,0x02},
{0x1c27b,0x06},
{0x1c27c,0x07},
{0x1c27d,0x05},
{0x1c27e,0x04},
{0x1c27f,0x04},
{0x1c280,0x05},
{0x1c281,0x07},
{0x1c282,0x0b},
{0x1c283,0x08},
{0x1c284,0x07},
{0x1c285,0x08},
{0x1c286,0x08},
{0x1c287,0x0c},
{0x1c288,0x1f},
{0x1c289,0x1f},
{0x1c28a,0x20},
{0x1c28b,0x1f},
{0x1c28c,0x20},
{0x1c28d,0x1f},
{0x1c28e,0x1f},
{0x1c28f,0x1f},
{0x1c290,0x1f},
{0x1c291,0x1f},
{0x1c292,0x1f},
{0x1c293,0x1f},
{0x1c294,0x21},
{0x1c295,0x1f},
{0x1c296,0x1f},
{0x1c297,0x1f},
{0x1c298,0x1f},
{0x1c299,0x1f},
{0x1c29a,0x1f},
{0x1c29b,0x1f},
{0x1c29c,0x1f},
{0x1c29d,0x1f},
{0x1c29e,0x20},
{0x1c29f,0x1f},
{0x1c2a0,0x20},
{0x1c2a1,0x22},
{0x1c2a2,0x21},
{0x1c2a3,0x23},
{0x1c2a4,0x22},
{0x1c2a5,0x21},
{0x1c2a6,0x21},
{0x1c2a7,0x21},
{0x1c2a8,0x20},
{0x1c2a9,0x21},
{0x1c2aa,0x21},
{0x1c2ab,0x22},
{0x1c2ac,0x20},
{0x1c2ad,0x20},
{0x1c2ae,0x20},
{0x1c2af,0x21},
{0x1c2b0,0x21},
{0x1c2b1,0x21},
{0x1c2b2,0x21},
{0x1c2b3,0x21},
{0x1c2b4,0x21},
{0x1c2b5,0x22},
{0x1c2b6,0x21},
{0x1c2b7,0x22},
{0x1c2b8,0x22},
{0x1c2b9,0x21},
//c
{0x1c2ba,0x05},
{0x1c2bb,0x03},
{0x1c2bc,0x03},
{0x1c2bd,0x02},
{0x1c2be,0x03},
{0x1c2bf,0x04},
{0x1c2c0,0x03},
{0x1c2c1,0x02},
{0x1c2c2,0x02},
{0x1c2c3,0x02},
{0x1c2c4,0x02},
{0x1c2c5,0x02},
{0x1c2c6,0x03},
{0x1c2c7,0x01},
{0x1c2c8,0x00},
{0x1c2c9,0x00},
{0x1c2ca,0x01},
{0x1c2cb,0x02},
{0x1c2cc,0x02},
{0x1c2cd,0x01},
{0x1c2ce,0x00},
{0x1c2cf,0x00},
{0x1c2d0,0x01},
{0x1c2d1,0x03},
{0x1c2d2,0x03},
{0x1c2d3,0x02},
{0x1c2d4,0x02},
{0x1c2d5,0x02},
{0x1c2d6,0x03},
{0x1c2d7,0x03},
{0x1c2d8,0x04},
{0x1c2d9,0x04},
{0x1c2da,0x03},
{0x1c2db,0x03},
{0x1c2dc,0x03},
{0x1c2dd,0x04},
{0x1c2de,0x21},
{0x1c2df,0x1e},
{0x1c2e0,0x1f},
{0x1c2e1,0x1f},
{0x1c2e2,0x1f},
{0x1c2e3,0x1e},
{0x1c2e4,0x1f},
{0x1c2e5,0x1f},
{0x1c2e6,0x1f},
{0x1c2e7,0x1f},
{0x1c2e8,0x1e},
{0x1c2e9,0x1f},
{0x1c2ea,0x21},
{0x1c2eb,0x1f},
{0x1c2ec,0x1e},
{0x1c2ed,0x1f},
{0x1c2ee,0x1f},
{0x1c2ef,0x1e},
{0x1c2f0,0x1e},
{0x1c2f1,0x1f},
{0x1c2f2,0x20},
{0x1c2f3,0x1f},
{0x1c2f4,0x1f},
{0x1c2f5,0x1f},
{0x1c2f6,0x1f},
{0x1c2f7,0x1f},
{0x1c2f8,0x20},
{0x1c2f9,0x20},
{0x1c2fa,0x1f},
{0x1c2fb,0x20},
{0x1c2fc,0x1f},
{0x1c2fd,0x20},
{0x1c2fe,0x1f},
{0x1c2ff,0x20},
{0x1c300,0x1f},
{0x1c301,0x1f},
{0x1c302,0x20},
{0x1c303,0x20},
{0x1c304,0x20},
{0x1c305,0x20},
{0x1c306,0x20},
{0x1c307,0x20},
{0x1c308,0x1f},
{0x1c309,0x20},
{0x1c30a,0x1f},
{0x1c30b,0x1f},
{0x1c30c,0x1f},
{0x1c30d,0x20},
{0x1c30e,0x1f},
{0x1c30f,0x20},
//a
{0x1c310,0x0b},
{0x1c311,0x08},
{0x1c312,0x07},
{0x1c313,0x07},
{0x1c314,0x08},
{0x1c315,0x0c},
{0x1c316,0x07},
{0x1c317,0x05},
{0x1c318,0x04},
{0x1c319,0x04},
{0x1c31a,0x05},
{0x1c31b,0x07},
{0x1c31c,0x05},
{0x1c31d,0x02},
{0x1c31e,0x00},
{0x1c31f,0x00},
{0x1c320,0x03},
{0x1c321,0x05},
{0x1c322,0x06},
{0x1c323,0x03},
{0x1c324,0x00},
{0x1c325,0x00},
{0x1c326,0x03},
{0x1c327,0x06},
{0x1c328,0x07},
{0x1c329,0x06},
{0x1c32a,0x04},
{0x1c32b,0x04},
{0x1c32c,0x06},
{0x1c32d,0x07},
{0x1c32e,0x0a},
{0x1c32f,0x08},
{0x1c330,0x07},
{0x1c331,0x07},
{0x1c332,0x08},
{0x1c333,0x0a},
{0x1c334,0x21},
{0x1c335,0x20},
{0x1c336,0x20},
{0x1c337,0x20},
{0x1c338,0x1e},
{0x1c339,0x20},
{0x1c33a,0x20},
{0x1c33b,0x20},
{0x1c33c,0x20},
{0x1c33d,0x20},
{0x1c33e,0x20},
{0x1c33f,0x20},
{0x1c340,0x20},
{0x1c341,0x1f},
{0x1c342,0x20},
{0x1c343,0x20},
{0x1c344,0x21},
{0x1c345,0x1f},
{0x1c346,0x20},
{0x1c347,0x20},
{0x1c348,0x21},
{0x1c349,0x21},
{0x1c34a,0x22},
{0x1c34b,0x21},
{0x1c34c,0x23},
{0x1c34d,0x22},
{0x1c34e,0x24},
{0x1c34f,0x26},
{0x1c350,0x24},
{0x1c351,0x1f},
{0x1c352,0x23},
{0x1c353,0x23},
{0x1c354,0x22},
{0x1c355,0x23},
{0x1c356,0x24},
{0x1c357,0x24},
{0x1c358,0x20},
{0x1c359,0x1f},
{0x1c35a,0x20},
{0x1c35b,0x25},
{0x1c35c,0x22},
{0x1c35d,0x22},
{0x1c35e,0x21},
{0x1c35f,0x22},
{0x1c360,0x22},
{0x1c361,0x21},
{0x1c362,0x23},
{0x1c363,0x24},
{0x1c364,0x23},
{0x1c365,0x24},

/*AWB*/
{0x66201,0x52},//
{0x66203,0x14},//cropwindow
{0x66211,0xe8},//awbtoplimit
{0x66212,0x04},//awbbottomlimit
/*Curve awb*/
//Awb Setting
{0x1c190,0x02},//1, CT; 2, Curve
{0x1d8c1,0x00},//CurveAWBOptions
{0x1d8e0,0x04},//minpixels
{0x1d8e1,0x00},
{0x66285,0x00},//minvalue
{0x66286,0x09},
{0x66287,0x03},//maxvalue
{0x66288,0xe0},
//dynamic map
{0x1d8dc,0x01},//nCurveAWBBrThres0
{0x1d8dd,0x00},
{0x1d8db,0x08},//nCurveAWBBrRatio0(x+32)/32
{0x1d8e6,0x02},//nCurveAWBBrThres1
{0x1d8e7,0x00},
{0x1d8c6,0x20},//nCurveAWBBrRatio1(x+32)/32

//X_OFF
{0x66280, 0xfe},
{0x66281, 0x1d},
//Y_OFF
{0x66282,0xfe},
{0x66283, 0x17},
//KX
{0x1d8e2, 0x00},
{0x1d8e3, 0x50},
//KY
{0x1d8e4, 0x00},
{0x1d8e5, 0x14},
//LowMap
{0x1d800, 0x00},
{0x1d801, 0x00},
{0x1d802, 0x00},
{0x1d803, 0x00},
{0x1d804, 0x00},
{0x1d805, 0x00},
{0x1d806, 0x00},
{0x1d807, 0x00},
{0x1d808, 0x00},
{0x1d809, 0x00},
{0x1d80a, 0x00},
{0x1d80b, 0x33},
{0x1d80c, 0x33},
{0x1d80d, 0x33},
{0x1d80e, 0x00},
{0x1d80f, 0x00},
{0x1d810, 0x00},
{0x1d811, 0x00},
{0x1d812, 0x30},
{0x1d813, 0x33},
{0x1d814, 0x33},
{0x1d815, 0x33},
{0x1d816, 0x00},
{0x1d817, 0x00},
{0x1d818, 0x00},
{0x1d819, 0x00},
{0x1d81a, 0x40},
{0x1d81b, 0x44},
{0x1d81c, 0x44},
{0x1d81d, 0x44},
{0x1d81e, 0x00},
{0x1d81f, 0x00},
{0x1d820, 0x00},
{0x1d821, 0x00},
{0x1d822, 0x44},
{0x1d823, 0x44},
{0x1d824, 0x44},
{0x1d825, 0x44},
{0x1d826, 0x00},
{0x1d827, 0x00},
{0x1d828, 0x00},
{0x1d829, 0x60},
{0x1d82a, 0x66},
{0x1d82b, 0x66},
{0x1d82c, 0x66},
{0x1d82d, 0x66},
{0x1d82e, 0x00},
{0x1d82f, 0x00},
{0x1d830, 0x50},
{0x1d831, 0x66},
{0x1d832, 0x66},
{0x1d833, 0x66},
{0x1d834, 0x66},
{0x1d835, 0x66},
{0x1d836, 0x00},
{0x1d837, 0x00},
{0x1d838, 0x70},
{0x1d839, 0xcc},
{0x1d83a,0xcc},
{0x1d83b, 0x77},
{0x1d83c, 0x77},
{0x1d83d, 0x77},
{0x1d83e, 0x00},
{0x1d83f, 0x00},
{0x1d840, 0x70},
{0x1d841, 0xcc},
{0x1d842,0xcc},
{0x1d843, 0x77},
{0x1d844, 0x77},
{0x1d845, 0x77},
{0x1d846, 0x00},
{0x1d847, 0x00},
{0x1d848, 0x70},
{0x1d849, 0xf7},
{0x1d84a, 0xff},
{0x1d84b, 0xff},
{0x1d84c, 0xff},
{0x1d84d, 0x77},
{0x1d84e, 0x00},
{0x1d84f, 0x00},
{0x1d850, 0x70},
{0x1d851, 0xf7},
{0x1d852, 0xff},
{0x1d853, 0xff},
{0x1d854, 0xff},
{0x1d855, 0x77},
{0x1d856, 0x00},
{0x1d857, 0x00},
{0x1d858, 0x70},
{0x1d859, 0x77},
{0x1d85a, 0xff},
{0x1d85b, 0xff},
{0x1d85c, 0xff},
{0x1d85d, 0x77},
{0x1d85e, 0x00},
{0x1d85f, 0x00},
{0x1d860, 0x00},
{0x1d861, 0x77},
{0x1d862, 0xf7},
{0x1d863, 0xff},
{0x1d864, 0xff},
{0x1d865, 0x77},
{0x1d866, 0x00},
{0x1d867, 0x00},
{0x1d868, 0x00},
{0x1d869, 0x00},
{0x1d86a, 0x70},
{0x1d86b, 0x77},
{0x1d86c, 0x77},
{0x1d86d, 0x77},
{0x1d86e, 0x00},
{0x1d86f, 0x00},
{0x1d870, 0x00},
{0x1d871, 0x00},
{0x1d872, 0x00},
{0x1d873, 0x00},
{0x1d874, 0x00},
{0x1d875, 0x00},
{0x1d876, 0x00},
{0x1d877, 0x00},
{0x1d878, 0x00},
{0x1d879, 0x00},
{0x1d87a, 0x00},
{0x1d87b, 0x00},
{0x1d87c, 0x00},
{0x1d87d, 0x00},
{0x1d87e, 0x00},
{0x1d87f, 0x00},
//MiddleMask
{0x1d880, 0x00},
{0x1d881, 0x00},
{0x1d882, 0x00},
{0x1d883, 0x00},
{0x1d884, 0x00},
{0x1d885, 0x00},
{0x1d886, 0x00},
{0x1d887, 0x00},
{0x1d888, 0x00},
{0x1d889, 0x00},
{0x1d88a, 0x00},
{0x1d88b, 0x00},
{0x1d88c, 0x00},
{0x1d88d, 0x00},
{0x1d88e, 0x00},
{0x1d88f, 0x00},
{0x1d890, 0xc0},
{0x1d891, 0x03},
{0x1d892, 0xe0},
{0x1d893, 0x07},
{0x1d894, 0xe0},
{0x1d895, 0x07},
{0x1d896, 0xe0},
{0x1d897, 0x03},
{0x1d898, 0x00},
{0x1d899, 0x00},
{0x1d89a, 0x00},
{0x1d89b, 0x00},
{0x1d89c, 0x00},
{0x1d89d, 0x00},
{0x1d89e, 0x00},
{0x1d89f, 0x00},
//HighMask
{0x1d8a0, 0x00},
{0x1d8a1, 0x00},
{0x1d8a2, 0x00},
{0x1d8a3, 0x00},
{0x1d8a4, 0x00},
{0x1d8a5, 0x00},
{0x1d8a6, 0x00},
{0x1d8a7, 0x00},
{0x1d8a8, 0x00},
{0x1d8a9, 0x00},
{0x1d8aa, 0x00},
{0x1d8ab, 0x00},
{0x1d8ac, 0x00},
{0x1d8ad, 0x00},
{0x1d8ae, 0x00},
{0x1d8af, 0x00},
{0x1d8b0, 0xf0},
{0x1d8b1, 0x03},
{0x1d8b2, 0xf0},
{0x1d8b3, 0x03},
{0x1d8b4, 0xe0},
{0x1d8b5, 0x03},
{0x1d8b6, 0xc0},
{0x1d8b7, 0x01},
{0x1d8b8, 0x00},
{0x1d8b9, 0x00},
{0x1d8ba, 0x00},
{0x1d8bb, 0x00},
{0x1d8bc, 0x00},
{0x1d8bd, 0x00},
{0x1d8be, 0x00},
{0x1d8bf, 0x00},

/*awbshift*/
{0X1d8e8,0X07},//0x01:EnableAWBShift,0x02:EnableBrShift,0x04:enableMultipleMap
/*newAWBshift*/
{0x1d9e0,0x01},//Enablenewawbshift
{0x1d8fa,0x04},//nAWBShiftBrThres1 outdoor
{0x1d8fb,0x00},
{0x1d8fc,0x13},//nAWBShiftBrThres2 indoor highligh
{0x1d8fd,0x00},
{0x1d8fe,0x34},//nAWBShiftBrThres3 indoor normal
{0x1d8ff,0x00},
{0x1d9ea,0xa0},//nAWBShiftBrThres4 night light
{0x1d9eb,0x00},
{0x1d9e8,0x04},//nAWBShiftLowBrightThres
{0x1d9e9,0x22},//nAWBShiftHighBrightThres

//awbshift,r_gain/b_gain*128,bgain:0x1c728~0x1c729,rgain:0x1c72c~0x1c72d
{0x1d9e2,0x30},//HCT
{0x1d9e1,0x43},//ACT
{0x1d8f1,0x62},//TLCT
{0x1d8f2,0x69},//cwfCT
{0x1d8f3,0x7e},//DCT
//H light
{0x1da0c,0x74},//BgainforHighlight
{0x1da0d,0x74},//Bgain
{0x1da0e,0x74},//Bgain
{0x1da0f,0x74},//BgainforHlowlight
           
{0x1da10,0x83},//RgainforHighlight
{0x1da11,0x83},//Rgain
{0x1da12,0x83},//Rgain
{0x1da13,0x83},//Rgainforlowlight
//A light  
{0x1da04,0x7e},//BgainforAHighlight
{0x1da05,0x7e},//Bgain
{0x1da06,0x7e},//Bgain
{0x1da07,0x7e},//BgainforAlowlight

{0x1da08,0x85},//RgainHighlight
{0x1da09,0x85},//Rgain
{0x1da0a,0x85},//Rgain
{0x1da0b,0x85},//Rgainlowlight
//TL84     
{0x1d9ec,0x80},//BgainHighlight
{0x1d9ed,0x80},//Bgain
{0x1d9ee,0x80},//Bgain
{0x1d9ef,0x80},//Bgainlowlight
           
{0x1d9f0,0x80},//RgainHighlight
{0x1d9f1,0x80},//Rgain
{0x1d9f2,0x80},//Rgain
{0x1d9f3,0x80},//Rgainlowlight
//CWF
{0x1d9f4,0x80},//BgainHighlight
{0x1d9f5,0x80},//Bgain
{0x1d9f6,0x80},//Bgain
{0x1d9f7,0x80},//Bgainlowlight

{0x1d9f8,0x80},//RgainHighlight
{0x1d9f9,0x80},//Rgain
{0x1d9fa,0x80},//Rgain
{0x1d9fb,0x80},//Rgainlowlight
//D50
{0x1d9fc,0x80},//BgainHighlight
{0x1d9fd,0x80},//Bgain
{0x1d9fe,0x80},//Bgain
{0x1d9ff,0x80},//Bgainlowlight
           
{0x1da00,0x80},//RgainHighlight
{0x1da01,0x80},//Rgain
{0x1da02,0x80},//Rgain
{0x1da03,0x80},//Rgainlowlight

/*ccm*/
	//addccmdetectparameterrefertoregg_gain/r_gain*256��bgain:0x1c728~0x1c729,rgain:0x1c72c~0x1c72d
{0x1c1c8,0x01},//centerCT,CWF
{0x1c1c9,0x3b},
{0x1c1cc,0x01},//daylight
{0x1c1cd,0x10},
{0x1c1d0,0x01},//a
{0x1c1d1,0xc8},

/*Colormatrix,CWF*/
{0x1c1d8,0x01},
{0x1c1d9,0xe1},
{0x1c1da,0xff},
{0x1c1db,0x3e},
{0x1c1dc,0xff},
{0x1c1dd,0xe0},
{0x1c1de,0xff},
{0x1c1df,0xec},
{0x1c1e0,0x01},
{0x1c1e1,0x93},
{0x1c1e2,0xff},
{0x1c1e3,0x81},
{0x1c1e4,0x00},
{0x1c1e5,0x05},
{0x1c1e6,0xfe},
{0x1c1e7,0xbe},
{0x1c1e8,0x02},
{0x1c1e9,0x3c},

//cmxleftdelta,daylight
{0x1c1fc,0x00},
{0x1c1fd,0x5e},
{0x1c1fe,0xff},
{0x1c1ff,0xa1},
{0x1c200,0x00},
{0x1c201,0x00},
{0x1c202,0xff},
{0x1c203,0xf8},
{0x1c204,0xff},
{0x1c205,0xfd},
{0x1c206,0x00},
{0x1c207,0x09},
{0x1c208,0x00},
{0x1c209,0x30},
{0x1c20a,0x00},
{0x1c20b,0x35},
{0x1c20c,0xff},
{0x1c20d,0x9a},

//cmxrightdelta,alight
{0x1c220,0x00},
{0x1c221,0x76},
{0x1c222,0xff},
{0x1c223,0xae},
{0x1c224,0xff},
{0x1c225,0xda},
{0x1c226,0x00},
{0x1c227,0x2d},
{0x1c228,0xff},
{0x1c229,0xab},
{0x1c22a,0x00},
{0x1c22b,0x27},
{0x1c22c,0xff},
{0x1c22d,0xe2},
{0x1c22e,0x00},
{0x1c22f,0xb2},
{0x1c230,0xff},
{0x1c231,0x6a},

/*autouvsaturation*/
{0x1c4e8,0x01},//Enable
{0x1c4e9,0xa0},//gainthreshold140-->0b
{0x1c4ea,0xf7},//gain threshold2 78-->0d
{0x1c4eb,0x80},//keep back for new cmx 0310
{0x1c4ec,0x60},//keepbackfornewcmx0310

/*De-noise*/
{0x65c00,0x03},//UVDe-noise:gain1X
{0x65c01,0x05},//gain2X
{0x65c02,0x08},//gain4X
{0x65c03,0x1f},//gain8X
{0x65c04,0x1f},//gain16X
{0x65c05,0x1f},//gain32X

//ZSL UV denoise
{0x65c08,0x03},//UV De-noise:gain 1X
{0x65c09,0x05},//gain 2X
{0x65c0a,0x08},//gain 4X
{0x65c0b,0x1f},//gain 8X
{0x65c0c,0x1f},//gain 16X
{0x65c0d,0x1f},//gain 32X

//2.2Raw&UVDenoiseSetting
{0x67300,0x08},//[6:0]r_s0_sigma_0_i
{0x67301,0x0d},//[6:0]r_s0_sigma_1_i
{0x67302,0x16},//[6:0]r_s0_sigma_2_i
{0x67303,0x1c},//[6:0]r_s0_sigma_3_i
{0x67304,0x25},//[6:0]r_s0_sigma_4_i
{0x67305,0x30},//[6:0]r_s0_sigma_5_i

{0x67306,0x0c},//[5:0]r_s0_gsl_0_i
{0x67307,0x0e},//[5:0]r_s0_gsl_1_i
{0x67308,0x10},//[5:0]r_s0_gsl_2_i
{0x67309,0x12},//[5:0]r_s0_gsl_3_i
{0x6730a,0x14},//[5:0]r_s0_gsl_4_i
{0x6730b,0x16},//[5:0]r_s0_gsl_6_i

{0x6730c,0x0c},//[5:0]r_s0_rbsl_0_i
{0x6730d,0x0e},//[5:0]r_s0_rbsl_1_i
{0x6730e,0x10},//[5:0]r_s0_rbsl_2_i
{0x6730f,0x12},//[5:0]r_s0_rbsl_3_i
{0x67310,0x14},//[5:0]r_s0_rbsl_4_i
{0x67311,0x16},//[5:0]r_s0_rbsl_5_i

//pl
{0x6732a,0x18},//brightnesslevel0:gain1X
{0x6732b,0x18},//gain2X
{0x6732c,0x18},//gain4X
{0x6732d,0x18},//gain8X
{0x6732e,0x18},//gain16X
{0x6732f,0x18},//gain32X

{0x67330,0x20},//brightnesslevel1:gain1X
{0x67331,0x20},//gain2X
{0x67332,0x20},//gain4X
{0x67333,0x20},//gain8X
{0x67334,0x20},//gain16X
{0x67335,0x20},//gain32X

{0x67336,0x20},//brightnesslevel2:gain1X
{0x67337,0x20},//gain2X
{0x67338,0x20},//gain4X
{0x67339,0x20},//gain8X	
{0x6733a,0x20},//gain16X
{0x6733b,0x20},//gain32X

{0x6733c,0x20},//brightnesslevel3:gain1X
{0x6733d,0x20},//gain2X
{0x6733e,0x20},//gain4X
{0x6733f,0x20},//gain8X
{0x67340,0x20},//gain16X
{0x67341,0x20},//gain32X

//ZSL raw deoise
{0x67343,0x08},//[6:0]r_s0_sigma_0_i
{0x67344,0x0d},//[6:0]r_s0_sigma_1_i
{0x67345,0x11},//[6:0]r_s0_sigma_2_i
{0x67346,0x15},//[6:0]r_s0_sigma_3_i
{0x67347,0x20},//[6:0]r_s0_sigma_4_i
{0x67348,0x25},//[6:0]r_s0_sigma_5_i

{0x67349,0x0c},//[5:0]r_s0_gsl_0_i
{0x6734a,0x0e},//[5:0]r_s0_gsl_1_i
{0x6734b,0x10},//[5:0]r_s0_gsl_2_i
{0x6734c,0x12},//[5:0]r_s0_gsl_3_i
{0x6734d,0x14},//[5:0]r_s0_gsl_4_i
{0x6734e,0x16},//[5:0]r_s0_gsl_6_i

{0x6734f,0x0c},//[5:0]r_s0_rbsl_0_i
{0x67350,0x0e},//[5:0]r_s0_rbsl_1_i
{0x67351,0x10},//[5:0]r_s0_rbsl_2_i
{0x67352,0x12},//[5:0]r_s0_rbsl_3_i
{0x67353,0x14},//[5:0]r_s0_rbsl_4_i
{0x67354,0x16},//[5:0]r_s0_rbsl_5_i

/*sharpeness*/
{0x65600,0x00},//min gain
{0x65601,0x1d},//min gain
{0x65602,0x00},//max gain
{0x65603,0xa0},
{0x6560c,0x08},//min sharp
{0x6560d,0x0c},//max sharp, low gain sharpness, 20120814 0x20->0x30
{0x6560e,0x20},//MinSharpenTp
{0x6560f,0x60},//MaxSharpenTp
{0x65610,0x20},//MinSharpenTm
{0x65611,0x60},//MaxSharpenTm
{0x65613,0x10},//SharpenAlpha
{0x65615,0x08},//HFreq_thre, bigger means more blur
{0x65617,0x06},//HFreq_coef, bigger means sharper

{0x65604,0x00},//min_noise
{0x65605,0x10},//min_noise
{0x65606,0x01},//noise_slope
{0x65607,0x00},//noise_slope
//ZSL sharpness
{0x65640,0x00},
{0x65641,0x20},//0319
{0x65642,0x00},
{0x65643,0xa0},
{0x6564c,0x00},
{0x6564d,0x00},//low gain sharpness, 20120814 0x20->0x30
{0x6564e,0x10},//MinSharpenTp
{0x6564f,0x60},//MaxSharpenTp
{0x65650,0x10},//MinSharpenTm
{0x65651,0x60},//MaxSharpenTm
{0x65653,0x10},//SharpenAlpha
{0x65655,0x08},//HFreq_thre
{0x65657,0x06},//HFreq_coef

/*dpc*/
{0x65409,0x08},
{0x6540a,0x08},
{0x6540b,0x08},
{0x6540c,0x08},
{0x6540d,0x0c},
{0x6540e,0x08},
{0x6540f,0x08},
{0x65410,0x08},
{0x65408,0x0b},

//ZSL dpc
{0x6541e,0x08},
{0x6541f,0x08},
{0x65420,0x08},
{0x65421,0x08},
{0x65422,0x0c},
{0x65423,0x08},
{0x65424,0x08},
{0x65425,0x08},
{0x6541d,0x0b},

/*AF*/
{0x1cd0a,0x00},//close
/*endsymbolofisp_int_regs*/
#endif
	{0x0, 0x0},
},

/* ae_params_s */
{
	/* ae_target_s */
	{
              {0xd, 0xf},
		{0x1a, 0x20},
		{0x24, 0x36},
		{0x45, 0x50},
		{0x55, 0x60},
        /* end */
	},

		/* ae_win_params */
	{

		/* win2x2*/
		{85, 85},
		/* win3x3 */
		{{60, 60}, {60, 60}, {100, 100},},
		/* roi_enable */
		false,
		/* default_stat_win weights */
		{1, 1, 1, 1, 9, 9, 9, 9, 18, 9, 9, 9, 9},

		3,
		/* enhanced_stat_win */
		{1, 1, 1, 1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},

		8,
	},
	/* max_expo_gap */
	14,
	/* iso_max */
	1800,
	/* iso_min */
	100,
	{
		/*low2mid*/
		0x70,
	/* mid2high*/
	0x40,
	/* high2mid */
		0x80,
	/* mid2low */
		0xe0
	},
	{
	/* low2mid manual iso*/
	310,
	/* mid2high manual iso*/
	180,
	/* high2mid manual iso*/
	120,
	/* mid2low manual iso*/
	120,
	},
	{
	/* preview_fps_max */
	30,
	/* preview_fps_middle */
	20,
	/* preview_fps_min */
	15,
	/* capture_fps_min */
	14,
	},
	/* expo_night */
	5,
	/* expo_action */
	100,
	/* cap_expo_table */
	{
		{30, 900}, /* max expo is 3 band(50Hz), 4band(60Hz) */
		//{23, 180}, /* max expo is 4 band(50Hz), 5band(60Hz) */
		{25, 1500}, /* max expo is 5 band(50Hz), 6band(60Hz) */

		/* Below is Lower capture frame rate (or larger exposure) than normal frame rate. */
		{20, 1800}, /* max expo is 7 band(50Hz), 8band(60Hz) */
		{13, 2100}, /* max expo is 10 band(50Hz),  12band(60Hz)*/
		{0, 0}, /* max expo is 12 band(50Hz), 15band(60Hz) */
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
	},
	/* ev_numerator */
	635,
	/* u32 ev_denominator */
	1000,

},

/* af_param */
{
	/*focus_area*/
	{
		/* percent_w */
		25,
		/* percent_w */
		20,
		/* max_zoom_ratio */
		0x200,
		/* min_height_ratio */
		5,
		/* weight[25] */
		{0},
	},
	/* focus_algo_s */
	{
		/* contrast_stat_mode */
		YUV_EDGE_STAT,
		/* contrast_threshold */
		{0x04, 0x10, 0x80, 0x140},
		/* param_judge */
		{0x18, 0x08, 0xc0, 0x04, 95},
		/* infinity_hold_frames */
		2,
		/* rewind_hold_frames */
		1,
		/* try_dir_range */
		5,
		/* param_caf_trigger */
		{3, 3, 4, 10, 0x28, 25, 16, 100, 0xc, 4, 4, 2000, 2, 6, 15, 6, 4, 0x40},
		/* calc_coarse_size */
		(1280 * 720),
	},
},

/* manual_wb_param */
{
	/* b_gai   gb_gain  gr_gain r_gain */
	{0x0000, 0x0000, 0x0000, 0x0000}, /* AWB not care about it */
	{0x012c, 0x0080, 0x0080, 0x0089}, /* INCANDESCENT 2800K */
	{0x00f2, 0x0080, 0x0080, 0x00b9}, /* FLUORESCENT 4200K */
	{0x00a0, 0x00a0, 0x00a0, 0x00a0},
	{0x00d1, 0x0080, 0x0080, 0x00d2}, /* DAYLIGHT 5000K */
	{0x00b9, 0x0080, 0x0080, 0x00f3}, /* CLOUDY_DAYLIGHT 6500K*/
	{0x00a0, 0x00a0, 0x00a0, 0x00a0},
	{0x0168, 0x0080, 0x0080, 0x0060}, /* CANDLELIGHT, 2300K */
},


/* rcc */
{
	/* rcc_enable */
	false,
	/* frame_interval */
	8,
	/* detect_range */
	50,
	/* rect_row_num */
	5,
	/* rect_col_num */
	5,
	/* preview_width_high */
	960,
	/* preview_width_low */
	320,
	/* uv_resample_high */
	8,
	/* uv_resample_middle */
	4,
	/* uv_resample_low */
	2,
	/* refbin_low */
	0x80,
	/* refbin_high */
	0xf0,
	/* v_th_high */
	160,
	/* v_th_low */
	130,
},


/* sharpness_cfg */
{
	{
		/* preview_shapness */
		0x0A,    //hefei modify for imx134 sensor
		/* cap_shapness */
		0x0A,
	},

},


/* dns */
{
    /*raw_dns_coff*/
    {{0x08,0x0c,0x16,0x20,0x20,0x20},{0x0C,0x0E,0x10,0x12,0x13,0x14},{0x08,0x0a,0x0c,0x0d,0x0e,0x0e}},
    {{0x08,0x0C,0x16,0x24,0x36,0x50},{0x10,0x12,0x14,0x15,0x16,0x18},{0x10,0x12,0x14,0x15,0x16,0x18}},
    {{0x0A,0x0C,0x16,0x24,0x36,0x50},{0x10,0x12,0x14,0x15,0x16,0x18},{0x10,0x12,0x14,0x15,0x16,0x18}},
    /*g_dns_caputure_1_band*/
    0x0A,
    /*g_dns_flash_1_band*/
    0x0A,
    {0x03,0x05,0x08,0x1f,0x1f,0x1f},
    {0x03,0x05,0x08,0x1f,0x1f,0x1f},
    {0x03,0x05,0x08,0x1f,0x1f,0x1f},

},


/* scene_param: uv_saturation */
{
	0x80, /* CAMERA_SCENE_AUTO */
	0x80, /* CAMERA_SCENE_ACTION */
	0x90, /* CAMERA_SCENE_PORTRAIT */
	0x98, /* CAMERA_SCENE_LANDSPACE */
	0x80, /* CAMERA_SCENE_NIGHT */
	0x90, /* CAMERA_SCENE_NIGHT_PORTRAIT */
	0x70, /* CAMERA_SCENE_THEATRE */
	0x80, /* CAMERA_SCENE_BEACH */
	0x80, /* CAMERA_SCENE_SNOW */
	0x80, /* CAMERA_SCENE_SUNSET */
	0x80, /* CAMERA_SCENE_STEADYPHOTO */
	0x80, /* CAMERA_SCENE_FIREWORKS */
	0x80, /* CAMERA_SCENE_SPORTS */
	0x80, /* CAMERA_SCENE_PARTY */
	0x80, /* CAMERA_SCENE_CANDLELIGHT */
	0x80, /* CAMERA_SCENE_BARCODE */
	0x80, /* CAMERA_SCENE_FLOWERS */
},

/* flash_param */
{
	/* gain */
	{0xde, 0x80, 0x80, 0xdf},

	/* aceawb_step */
	{0x06, 0x18, 0x18, 0x10, 0x0c},
	/* videoflash_level */
	LUM_LEVEL2,
	/* assistant_af_params*/
	{0xA0, 0x10, 0x30, 30, LUM_LEVEL1},
	/* flash_capture */
	{0xe8, LUM_LEVEL2, LUM_LEVEL5, 0x04, 0x30, 30, 0xe0, 0x20, 0x140},
},

#endif //__EFFECT_OV13850_LITEON_CAM_H__

