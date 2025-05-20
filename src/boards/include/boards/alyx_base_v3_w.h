// ----------------------------------------------------- 
// NOTE: THIS HEADER IS ALSO INCLUDED BY ASSEMBLER SO 
//       SHOULD ONLY CONSIST OF PREPROCESSOR DIRECTIVES 
// ----------------------------------------------------- 
  
// This header may be included by other board headers as "boards/alyx_base_v3_w.h" 

#include "boards/alyx_base_v3.h"
  
#ifndef _BOARDS_ALYX_BASE_V3_W_H 
#define _BOARDS_ALYX_BASE_V3_W_H 
  
// For board detection 
#define alyx_base_v3_w 

// --- CYW43 ---
#ifndef CYW43_WL_GPIO_COUNT
#define CYW43_WL_GPIO_COUNT 3
#endif

#ifndef CYW43_PIN_WL_DYNAMIC
#define CYW43_PIN_WL_DYNAMIC 0
#endif

#ifndef CYW43_DEFAULT_PIN_WL_REG_ON
#define CYW43_DEFAULT_PIN_WL_REG_ON 1u
#endif

#ifndef CYW43_DEFAULT_PIN_WL_DATA_OUT
#define CYW43_DEFAULT_PIN_WL_DATA_OUT 2u
#endif

#ifndef CYW43_DEFAULT_PIN_WL_DATA_IN
#define CYW43_DEFAULT_PIN_WL_DATA_IN 2u
#endif

#ifndef CYW43_DEFAULT_PIN_WL_HOST_WAKE
#define CYW43_DEFAULT_PIN_WL_HOST_WAKE 2u
#endif

#ifndef CYW43_DEFAULT_PIN_WL_CLOCK
#define CYW43_DEFAULT_PIN_WL_CLOCK 4u
#endif

#ifndef CYW43_DEFAULT_PIN_WL_CS
#define CYW43_DEFAULT_PIN_WL_CS 3u
#endif
  
#endif