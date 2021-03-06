#ifndef __FLASH_
#define __FLASH_


#define FLASH_ADDR_BASE 0X0800C004	
#define FLASH_ADDR_VERSION    FLASH_ADDR_BASE
#define FLASH_ADDR_AUTH     (FLASH_ADDR_VERSION+0X10)
#define FLASH_ADDR_KEY      (FLASH_ADDR_AUTH+0X10)
#define FLASH_ADDR_FRE      (FLASH_ADDR_KEY+0X10)
 
#define FLASH_ADDR_M1_BASE    (FLASH_ADDR_FRE+0X10)

#define FLASH_ADDR_M1       FLASH_ADDR_M1_BASE
#define FLASH_ADDR_M2      (FLASH_ADDR_M1 +0X10)
#define FLASH_ADDR_M3      (FLASH_ADDR_M2 +0X10)
#define FLASH_ADDR_M4      (FLASH_ADDR_M3 +0X10)
#define FLASH_ADDR_M5      (FLASH_ADDR_M4 +0X10)
#define FLASH_ADDR_M6      (FLASH_ADDR_M5 +0X10)
#define FLASH_ADDR_M7      (FLASH_ADDR_M6 +0X10)
#define FLASH_ADDR_M8      (FLASH_ADDR_M7 +0X10)
#define FLASH_ADDR_M9      (FLASH_ADDR_M8 +0X10)
#define FLASH_ADDR_M10     (FLASH_ADDR_M9 +0X10)
#define FLASH_ADDR_M11     (FLASH_ADDR_M10+0X10)
#define FLASH_ADDR_M12     (FLASH_ADDR_M11+0X10)
#define FLASH_ADDR_M13     (FLASH_ADDR_M12+0X10)
#define FLASH_ADDR_M14     (FLASH_ADDR_M13+0X10)
#define FLASH_ADDR_M15     (FLASH_ADDR_M14+0X10)
#define FLASH_ADDR_M16     (FLASH_ADDR_M15+0X10)
#define FLASH_ADDR_M17     (FLASH_ADDR_M16+0X10)
#define FLASH_ADDR_M18     (FLASH_ADDR_M17+0X10)
#define FLASH_ADDR_M19     (FLASH_ADDR_M18+0X10)
#define FLASH_ADDR_M20     (FLASH_ADDR_M19+0X10)
#define FLASH_ADDR_M21     (FLASH_ADDR_M20+0X10)
#define FLASH_ADDR_M22     (FLASH_ADDR_M21+0X10)
#define FLASH_ADDR_M23     (FLASH_ADDR_M22+0X10)
#define FLASH_ADDR_M24     (FLASH_ADDR_M23+0X10)
#define FLASH_ADDR_M25     (FLASH_ADDR_M24+0X10)
#define FLASH_ADDR_M26     (FLASH_ADDR_M24+0X10)
#define FLASH_ADDR_M27     (FLASH_ADDR_M26+0X10)
#define FLASH_ADDR_M28     (FLASH_ADDR_M27+0X10)
#define FLASH_ADDR_M29     (FLASH_ADDR_M26+0X10)
#define FLASH_ADDR_M30     (FLASH_ADDR_M29+0X10)
#define FLASH_ADDR_M31     (FLASH_ADDR_M30+0X10)
#define FLASH_ADDR_M32     (FLASH_ADDR_M31+0X10)

//meter1
#define FLASH_DATA_ADDR_M1_1            0X0800E804	                 //(FLASH_ADDR_M32  +0X10)   52k

//meter2
#define     FLASH_DATA_ADDR_M2_1       (FLASH_DATA_ADDR_M1_1+0X800)

//meter3
#define     FLASH_DATA_ADDR_M3_1       (FLASH_DATA_ADDR_M2_1+0X800)

//meter4
#define     FLASH_DATA_ADDR_M4_1       (FLASH_DATA_ADDR_M3_1+0X800)
//meter5
#define     FLASH_DATA_ADDR_M5_1       (FLASH_DATA_ADDR_M4_1+0X800)

//meter6
#define     FLASH_DATA_ADDR_M6_1       (FLASH_DATA_ADDR_M5_1+0X800)

//meter7
#define     FLASH_DATA_ADDR_M7_1       (FLASH_DATA_ADDR_M6_1+0X800)

//meter8
#define     FLASH_DATA_ADDR_M8_1       (FLASH_DATA_ADDR_M7_1+0X800)

//meter9
#define     FLASH_DATA_ADDR_M9_1       (FLASH_DATA_ADDR_M8_1+0X800)

//meter10
#define     FLASH_DATA_ADDR_M10_1       (FLASH_DATA_ADDR_M9_1+0X800)

//meter11
#define     FLASH_DATA_ADDR_M11_1       (FLASH_DATA_ADDR_M10_1+0X800)

//meter12
#define     FLASH_DATA_ADDR_M12_1       (FLASH_DATA_ADDR_M11_1+0X800)

//meter13
#define     FLASH_DATA_ADDR_M13_1       (FLASH_DATA_ADDR_M12_1+0X800)

//meter14
#define     FLASH_DATA_ADDR_M14_1       (FLASH_DATA_ADDR_M13_1+0X800)

//meter15
#define     FLASH_DATA_ADDR_M15_1       (FLASH_DATA_ADDR_M14_1+0X800)

//meter16
#define     FLASH_DATA_ADDR_M16_1       (FLASH_DATA_ADDR_M15_1+0X800)

//meter17
#define     FLASH_DATA_ADDR_M17_1       0X08020800// (FLASH_DATA_ADDR_M16_1+0X800)

//meter18
#define     FLASH_DATA_ADDR_M18_1       (FLASH_DATA_ADDR_M17_1+0X800)

//meter19
#define     FLASH_DATA_ADDR_M19_1       (FLASH_DATA_ADDR_M18_1+0X800)

//meter20
#define     FLASH_DATA_ADDR_M20_1       (FLASH_DATA_ADDR_M19_1+0X800)
//meter21
#define     FLASH_DATA_ADDR_M21_1       (FLASH_DATA_ADDR_M20_1+0X800)
//meter22
#define     FLASH_DATA_ADDR_M22_1       (FLASH_DATA_ADDR_M21_1+0X800)

//meter23
#define     FLASH_DATA_ADDR_M23_1       (FLASH_DATA_ADDR_M22_1+0X800)
//meter24
#define     FLASH_DATA_ADDR_M24_1       (FLASH_DATA_ADDR_M23_1+0X800)

//meter25
#define     FLASH_DATA_ADDR_M25_1       (FLASH_DATA_ADDR_M24_1+0X800)
//meter26
#define     FLASH_DATA_ADDR_M26_1       (FLASH_DATA_ADDR_M25_1+0X800)
//meter27
#define     FLASH_DATA_ADDR_M27_1       (FLASH_DATA_ADDR_M26_1+0X800)


//meter28
#define     FLASH_DATA_ADDR_M28_1       (FLASH_DATA_ADDR_M27_1+0X800)

//meter29
#define     FLASH_DATA_ADDR_M29_1       (FLASH_DATA_ADDR_M28_1+0X800)
//meter30
#define     FLASH_DATA_ADDR_M30_1       (FLASH_DATA_ADDR_M29_1+0X800)
//meter31
#define     FLASH_DATA_ADDR_M31_1       (FLASH_DATA_ADDR_M30_1+0X800)

//meter32
#define     FLASH_DATA_ADDR_M32_1       (FLASH_DATA_ADDR_M31_1+0X800)
#define     FLASH_METER_NUMBER          (FLASH_DATA_ADDR_M32_1+0X800)

#define     FLASH_TIME_LIST_M1           (FLASH_METER_NUMBER+0X800)
#define     FLASH_TIME_LIST_M2           (FLASH_TIME_LIST_M1+0X70)
#define     FLASH_TIME_LIST_M3           (FLASH_TIME_LIST_M2+0X70)
#define     FLASH_TIME_LIST_M4           (FLASH_TIME_LIST_M3+0X70)
#define     FLASH_TIME_LIST_M5           (FLASH_TIME_LIST_M4+0X70)
#define     FLASH_TIME_LIST_M6           (FLASH_TIME_LIST_M5+0X70)
#define     FLASH_TIME_LIST_M7           (FLASH_TIME_LIST_M6+0X70)
#define     FLASH_TIME_LIST_M8           (FLASH_TIME_LIST_M7+0X70)
#define     FLASH_TIME_LIST_M9           (FLASH_TIME_LIST_M8+0X70)
#define     FLASH_TIME_LIST_M10          (FLASH_TIME_LIST_M9+0X70)
#define     FLASH_TIME_LIST_M11          (FLASH_TIME_LIST_M10+0X70)
#define     FLASH_TIME_LIST_M12          (FLASH_TIME_LIST_M11+0X70)
#define     FLASH_TIME_LIST_M13          (FLASH_TIME_LIST_M12+0X70)
#define     FLASH_TIME_LIST_M14          (FLASH_TIME_LIST_M13+0X70)
#define     FLASH_TIME_LIST_M15          (FLASH_TIME_LIST_M14+0X70)
#define     FLASH_TIME_LIST_M16          (FLASH_TIME_LIST_M15+0X70)
#define     FLASH_TIME_LIST_M17          (FLASH_TIME_LIST_M16+0X70)
#define     FLASH_TIME_LIST_M18          (FLASH_TIME_LIST_M17+0X70)
#define     FLASH_TIME_LIST_M19          (FLASH_TIME_LIST_M18+0X70)
#define     FLASH_TIME_LIST_M20          (FLASH_TIME_LIST_M19+0X70)
#define     FLASH_TIME_LIST_M21          (FLASH_TIME_LIST_M20+0X70)
#define     FLASH_TIME_LIST_M22          (FLASH_TIME_LIST_M21+0X70)
#define     FLASH_TIME_LIST_M23          (FLASH_TIME_LIST_M22+0X70)
#define     FLASH_TIME_LIST_M24          (FLASH_TIME_LIST_M23+0X70)
#define     FLASH_TIME_LIST_M25          (FLASH_TIME_LIST_M24+0X70)
#define     FLASH_TIME_LIST_M26          (FLASH_TIME_LIST_M25+0X70)
#define     FLASH_TIME_LIST_M27          (FLASH_TIME_LIST_M26+0X70)
#define     FLASH_TIME_LIST_M28          (FLASH_TIME_LIST_M27+0X70)
#define     FLASH_TIME_LIST_M29          (FLASH_TIME_LIST_M28+0X70)
#define     FLASH_TIME_LIST_M30          (FLASH_TIME_LIST_M29+0X70)
#define     FLASH_TIME_LIST_M31          (FLASH_TIME_LIST_M30+0X70)
#define     FLASH_TIME_LIST_M32          (FLASH_TIME_LIST_M31+0X70)


#define     FLASH_FM_VERSION             (FLASH_TIME_LIST_M32+0X800)
#define     FLASH_IP                     (FLASH_FM_VERSION+0X800)
#define     FLASH_SOCKET                 (FLASH_IP+0X70)
#define     FLASH_IP_LEN                 (FLASH_SOCKET+0X10)
#define     FLASH_METER_STATUS           (FLASH_IP_LEN+0X800)

#define     FRE_ADDR                     0X08032000

#endif