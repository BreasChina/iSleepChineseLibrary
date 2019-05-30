#ifndef MODE_DEFINE_H
#define MODE_DEFINE_H
/******************************************************************************
** File name    :        Mode_Define.h
** Project      :        PV21
** File Type    :        Header
** Description	:
**
** Revision History:
** Date         Engineer    ECP     Changes
** ----------------------------------------------------------------------------
** 2005-09-27   *   FM   *  ---  * 	File Created
** ----------------------------------------------------------------------------
**
******************************************************************************/

/******************************************************************************
**                               INCLUDE FILES
******************************************************************************/


/******************************************************************************
**                                #DEFINES
******************************************************************************/
#define IX_MODE_PSV            0
#define IX_MODE_CPAP           1
#define IX_MODE_I_MODE         2
#define IX_MODE_ADAPT          3
#define IX_MODE_LEAKAGE_TEST   4

#define NO_MODE_STRINGS        5
/*--------------------------------------------------------------------*/
#if CURRENT_LANGUAGE == LANGUAGE_ES // Spanish
/*--------------------------------------------------------------------*/
#define TXT_MODE_PSV             		 L"Bi-Nivel"			          // PV22
#define TXT_MODE_CPAP            		 L"CPAP"				            // PV20+,PV22,PV20i
#define TXT_MODE_I_MODE          		 L"Modo i"				          // PV20i
#define TXT_MODE_ADAPT           		 L"Adaptar"				          // PV20i
#define TXT_MODE_START_LEAKAGE_TEST  L"Comenzar test de fugas"  // PV20i

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_FI // Finnish
/*--------------------------------------------------------------------*/
#define TXT_MODE_PSV             		 L"Bi-level"			      // PV22
#define TXT_MODE_CPAP            		 L"CPAP"					      // PV20+,PV22,PV20i
#define TXT_MODE_I_MODE          		 L"iMode"					      // PV20i
#define TXT_MODE_ADAPT           		 L"Adapt"					      // PV20i
#define TXT_MODE_START_LEAKAGE_TEST  L"Aloita vuototesti"	  // PV20i

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_DE // German
/*--------------------------------------------------------------------*/
#define TXT_MODE_PSV             		 L"Bi-Level"            // PV22
#define TXT_MODE_CPAP            		 L"CPAP"                // PV20+,PV22,PV20i
#define TXT_MODE_I_MODE          		 L"iModus"              // PV20i
#define TXT_MODE_ADAPT           		 L"Anpassen"            // PV20i
#define TXT_MODE_START_LEAKAGE_TEST  L"Leckagetest starten" // PV20i
/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_DK // Danish
/*--------------------------------------------------------------------*/
#define TXT_MODE_PSV             		 L"Bi-Level"			     // PV22
#define TXT_MODE_CPAP            		 L"CPAP"					     // PV20+,PV22,PV20i
#define TXT_MODE_I_MODE          		 L"iMode"					     // PV20i
#define TXT_MODE_ADAPT           		 L"Tilpas"				     // PV20i
#define TXT_MODE_START_LEAKAGE_TEST  L"Start lækage Test"	 // PV20i

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_FR // French
/*--------------------------------------------------------------------*/
#define TXT_MODE_PSV             		 L"VNDP"	              // PV22
#define TXT_MODE_CPAP            		 L"PPC"					        // PV20+,PV22,PV20i
#define TXT_MODE_I_MODE          		 L"Mode i"			        // PV20i
#define TXT_MODE_ADAPT           		 L"Adapt"				        // PV20i
#define TXT_MODE_START_LEAKAGE_TEST  L"Faire le test de fuites"	// PV20i

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_NO // Norway
/*--------------------------------------------------------------------*/
#define TXT_MODE_PSV             		 L"Bi-level"			      // PV22
#define TXT_MODE_CPAP            		 L"CPAP"					      // PV20+,PV22,PV20i
#define TXT_MODE_I_MODE          		 L"iMode"					      // PV20i
#define TXT_MODE_ADAPT           		 L"Adapt"					      // PV20i
#define TXT_MODE_START_LEAKAGE_TEST  L"Start lekkasjetest"	// PV20i

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_SE // Swedish
/*--------------------------------------------------------------------*/
#define TXT_MODE_PSV             		 L"Bi-level"            // PV22
#define TXT_MODE_CPAP            		 L"CPAP"                // PV20+,PV22,PV20i
#define TXT_MODE_I_MODE          		 L"iMode"               // PV20i
#define TXT_MODE_ADAPT           		 L"används ej"          // PV20i
#define TXT_MODE_START_LEAKAGE_TEST  L"Börja läckagetest"   // PV20i

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_UK  // United kingdom
/*--------------------------------------------------------------------*/
#define TXT_MODE_PSV            		 L"Bi-Level"            // PV22
#define TXT_MODE_CPAP           		 L"CPAP"                // PV20+,PV22,PV20i
#define TXT_MODE_I_MODE         		 L"iMode"               // PV20i
#define TXT_MODE_ADAPT          		 L"Adapt"               // PV20i
#define TXT_MODE_START_LEAKAGE_TEST  L"Start Leakage Test"  // PV20i
/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_US // United State
/*--------------------------------------------------------------------*/
#define TXT_MODE_PSV            	   L""                     // PV22
#define TXT_MODE_CPAP           	   L""                     // PV20+,PV22,PV20i
#define TXT_MODE_I_MODE         	   L""                     // PV20i
#define TXT_MODE_ADAPT          	   L""                     // PV20i
#define TXT_MODE_START_LEAKAGE_TEST  L""                     // PV20i

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_NL // Dutch
/*--------------------------------------------------------------------*/
#define TXT_MODE_PSV             		 L"Bi-level"			       // PV22
#define TXT_MODE_CPAP            		 L"CPAP"					       // PV20+,PV22,PV20i
#define TXT_MODE_I_MODE          		 L"iMode"					       // PV20i
#define TXT_MODE_ADAPT           		 L"Pas aan"				       // PV20i
#define TXT_MODE_START_LEAKAGE_TEST  L"Start lekkage test"	 // PV20i

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_IT // Italy
/*--------------------------------------------------------------------*/
#define TXT_MODE_PSV             		 L"BiLevel"              // PV22
#define TXT_MODE_CPAP            		 L"CPAP"                 // PV20+,PV22,PV20i
#define TXT_MODE_I_MODE          		 L"Mod. auto"            // PV20i
#define TXT_MODE_ADAPT           		 L"Adatta"               // PV20i
#define TXT_MODE_START_LEAKAGE_TEST  L"Inizia test perdite"  // PV20i

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_GR // Greek
/*--------------------------------------------------------------------*/
#define TXT_MODE_PSV            	 L"PSV"                            // PV22
#define TXT_MODE_CPAP           	 L"CPAP"                            // PV20+,PV22,PV20i
#define TXT_MODE_I_MODE         	 L"iMode"                            // PV20i
#define TXT_MODE_ADAPT          	 L"Adapt"                            // PV20i
#define TXT_MODE_START_LEAKAGE_TEST  L"Test \x03B4\x03B9\x03B1\x03C1\x03C1\x03BF\x03AE\x03C2"                            // PV20i

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_PT // Portuguese
/*--------------------------------------------------------------------*/
#define TXT_MODE_PSV             		 L"Bi-level"		          // PV22
#define TXT_MODE_CPAP            		 L"CPAP"				          // PV20+,PV22,PV20i
#define TXT_MODE_I_MODE          		 L"iMode"				          // PV20i
#define TXT_MODE_ADAPT           		 L"Adapta"			          // PV20i
#define TXT_MODE_START_LEAKAGE_TEST  L"Iniciar teste de fuga"	// PV20i

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_PL // Polisk
/*--------------------------------------------------------------------*/
#define TXT_MODE_PSV            	   L"Bi-level"                            // PV22
#define TXT_MODE_CPAP           	   L"CPAP"                            // PV20+,PV22,PV20i
#define TXT_MODE_I_MODE         	   L"iMode"                            // PV20i
#define TXT_MODE_ADAPT          	   L"Dostosuj"                            // PV20i
#define TXT_MODE_START_LEAKAGE_TEST  L"Start testu przecieku"                            // PV20i

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_JP  // Japan
/*--------------------------------------------------------------------*/
#define TXT_MODE_PSV            	   L"Bi-level"              // PV22
#define TXT_MODE_CPAP           	   L"CPAP"                  // PV20+,PV22,PV20i
#define TXT_MODE_I_MODE         	   L"iMode"                 // PV20i
#define TXT_MODE_ADAPT          	   L"\x9069\x7528"          // PV20i
#define TXT_MODE_START_LEAKAGE_TEST  L"\x30EA\x30FC\x30AF\x30C6\x30B9\x30C8\x958B\x59CB" // PV20i

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_CN  // China
/*--------------------------------------------------------------------*/
#define TXT_MODE_PSV            	   L"Bi-level"                      // PV22
#define TXT_MODE_CPAP           	   L"CPAP"                      // PV20+,PV22,PV20i
#define TXT_MODE_I_MODE         	   L"iMode"                      // PV20i
#define TXT_MODE_ADAPT          	   L"Adapt"                      // PV20i
#define TXT_MODE_START_LEAKAGE_TEST  L"\x5F00\x59CB\x6F0F\x6C14\x6D4B\x8BD5"                      // PV20i

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_TEST // Test
/*--------------------------------------------------------------------*/
#define TXT_MODE_PSV            	   L"abcde"                 // PV22
#define TXT_MODE_CPAP           	   L"abcde"                 // PV20+,PV22,PV20i
#define TXT_MODE_I_MODE         	   L"abcde"                 // PV20i
#define TXT_MODE_ADAPT          	   L"abcde"                 // PV20i
#define TXT_MODE_START_LEAKAGE_TEST  L"abcde"  	              // PV20i

#endif
/********************************************************************************
**                                TYPE DEFINITIONS
********************************************************************************/

/********************************************************************************
**                                CONSTANST OBJECT EXTERNS
********************************************************************************/

/********************************************************************************
**                                VARIABLE OJECTS EXTERNS
********************************************************************************/

/********************************************************************************
**                                FUNCTIONS PROTOTYPES
********************************************************************************/

/********************************************************************************
**                                END OF FILE
********************************************************************************/

#endif  // MODE_DEFINE_H

