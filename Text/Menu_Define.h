#ifndef MENU_DEFINE_H
#define MENU_DEFINE_H
/******************************************************************************
** File name    :        Menu_Define.h
** Project      :        PV21
** File Type    :        Header
** Description	:
**
** Revision History:
** Date         Engineer    ECP     Changes
** ----------------------------------------------------------------------------
** 2005-05-25   *   FM   *  ---  * 	File Transfered
** ----------------------------------------------------------------------------
**
******************************************************************************/

/******************************************************************************
**                               INCLUDE FILES
******************************************************************************/


/******************************************************************************
**                                #DEFINES
******************************************************************************/
#define IX_MENU_NO_TEXT       0
#define IX_MENU_SETUP         1
#define IX_MENU_SETUP_1       2
#define IX_MENU_OTHERS        3
#define IX_MENU_OTHERS_1      4
#define IX_MENU_HUMIDITY      5
#define IX_MENU_RAMP          6
#define IX_MENU_OK            7
#define IX_MENU_CANCEL        8
#define IX_MENU_YES           9
#define IX_MENU_SELECT       10
#define IX_MENU_NEXT         11
#define IX_MENU_CHANGE       12
#define IX_MENU_MODE         13
#define IX_MENU_E_ADAPT      14

#define MAX_NO_MENU_STRINGS  15


/*--------------------------------------------------------------------*/
#if CURRENT_LANGUAGE == LANGUAGE_ES // Spanish
/*--------------------------------------------------------------------*/
#define TXT_MENU_NO_TEXT       L""			   	// PV20+,PV20i,PV22
#define TXT_MENU_SETUP         L"Instalar"	   	// PV20+,PV20i,PV22
#define TXT_MENU_OTHERS        L"Otros"		   	// PV20+,PV20i,PV22
#define TXT_MENU_HUMIDITY      L"Humedad"	   	// PV20+,PV20i,PV22
#define TXT_MENU_RAMP          L"Rampa"		   	// PV20+,PV20i,PV22
#define TXT_MENU_OK            L"OK"		   	// PV20+,PV20i,PV22
#define TXT_MENU_CANCEL        L"Cancelar"	   	// PV20+,PV20i,PV22
#define TXT_MENU_YES           L"Si"		   	// PV20+,PV20i,PV22
#define TXT_MENU_SELECT        L"Seleccionar"  	// PV20+,PV20i,PV22
#define TXT_MENU_NEXT          L"Siguiente"	   	// PV20+,PV20i,PV22
#define TXT_MENU_CHANGE        L"Cambiar"	   	// PV20+,PV20i,PV22
#define TXT_MENU_MODE          L"Modo"		   	// PV20i,PV22
#define TXT_MENU_E_ADAPT       L"eAdapt"

// define what x position each menu will have.
// THe reason we do this is because in som language the text can't be
// centered over each button becase it's to large.
#define TXT_MENU_SETUP_X          0				// PV20+
#define TXT_MENU_SETUP_1_X       32				// PV20i,PV22
#define TXT_MENU_OTHERS_X        32				// PV20+ (PV20i,PV22 locked)
#define TXT_MENU_OTHERS_1_X      68				// PV20i,PV22
#define TXT_MENU_HUMIDITY_X      64				// PV20+ (PV20i,PV22 locked)
#define TXT_MENU_RAMP_X          103			// PV20+,PV20i,PV22
#define TXT_MENU_OK_X           113				// PV20+,PV20i,PV22
#define TXT_MENU_CANCEL_X         0				// PV20+,PV20i,PV22
#define TXT_MENU_YES_X            0				// PV20+,PV20i,PV22
#define TXT_MENU_SELECT_X        64				// PV20+,PV20i,PV22
#define TXT_MENU_NEXT_X          90				// PV20i,PV22
#define TXT_MENU_CHANGE_X        64				// PV20i,PV22
#define TXT_MENU_MODE_X           0				// PV20i,PV22
#define TXT_MENU_E_ADAPT_X        0


/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_FI // Finnish
/*--------------------------------------------------------------------*/
#define TXT_MENU_NO_TEXT       L""				// PV20+,PV20i,PV22
#define TXT_MENU_SETUP         L"Asetus"		// PV20+,PV20i,PV22
#define TXT_MENU_OTHERS        L"Muut"			// PV20+,PV20i,PV22
#define TXT_MENU_HUMIDITY      L"Kosteus"		// PV20+,PV20i,PV22
#define TXT_MENU_RAMP          L"Ramp"			// PV20+,PV20i,PV22
#define TXT_MENU_OK            L"OK"			// PV20+,PV20i,PV22
#define TXT_MENU_CANCEL        L"Peruuta"		// PV20+,PV20i,PV22
#define TXT_MENU_YES           L"Kyll?			// PV20+,PV20i,PV22
#define TXT_MENU_SELECT        L"Valitse"		// PV20+,PV20i,PV22
#define TXT_MENU_NEXT          L"Seuraava"		// PV20+,PV20i,PV22
#define TXT_MENU_CHANGE        L"Vaihda"		// PV20+,PV20i,PV22
#define TXT_MENU_MODE          L"Mode"			// PV20i,PV22
#define TXT_MENU_E_ADAPT       L"eAdapt"


// define what x position each menu will have.
// THe reason we do this is because in som language the text can't be
// centered over each button becase it's to large.
#define TXT_MENU_SETUP_X          0				// PV20+
#define TXT_MENU_SETUP_1_X       33				// PV20i,PV22
#define TXT_MENU_OTHERS_X        32				// PV20+ (PV20i,PV22 locked)
#define TXT_MENU_OTHERS_1_X      72				// PV20i,PV22
#define TXT_MENU_HUMIDITY_X      64				// PV20+ (PV20i,PV22 locked)
#define TXT_MENU_RAMP_X         106				// PV20+,PV20i,PV22
#define TXT_MENU_OK_X           113				// PV20+,PV20i,PV22
#define TXT_MENU_CANCEL_X         0				// PV20+,PV20i,PV22
#define TXT_MENU_YES_X            0				// PV20+,PV20i,PV22
#define TXT_MENU_SELECT_X        64				// PV20+,PV20i,PV22
#define TXT_MENU_NEXT_X          88				// PV20i,PV22
#define TXT_MENU_CHANGE_X        64				// PV20i,PV22
#define TXT_MENU_MODE_X           0				// PV20i,PV22
#define TXT_MENU_E_ADAPT_X        0


/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_DE // German
/*--------------------------------------------------------------------*/
#define TXT_MENU_NO_TEXT       L""            	// PV20+,PV20i,PV22
#define TXT_MENU_SETUP         L"Set Up"      	// PV20+,PV20i,PV22
#define TXT_MENU_OTHERS        L"Extras"      	// PV20+,PV20i,PV22
#define TXT_MENU_HUMIDITY      L"Feuchte"     	// PV20+,PV20i,PV22
#define TXT_MENU_RAMP          L"Rampe"       	// PV20+,PV20i,PV22
#define TXT_MENU_OK            L"OK"          	// PV20+,PV20i,PV22
#define TXT_MENU_CANCEL        L"Abbruch"     	// PV20+,PV20i,PV22
#define TXT_MENU_YES           L"Ja"          	// PV20+,PV20i,PV22
#define TXT_MENU_SELECT        L"Auswahl"     	// PV20+,PV20i,PV22
#define TXT_MENU_NEXT          L"Weiter"      	// PV20+,PV20i,PV22
#define TXT_MENU_CHANGE        L"Ändern"      	// PV20+,PV20i,PV22
#define TXT_MENU_MODE          L"Modus"       	// PV20i,PV22
#define TXT_MENU_E_ADAPT       L"eAdapt"

// define what x position each menu will have.
// THe reason we do this is because in som language the text can't be
// centered over each button becase it's to large.
#define TXT_MENU_SETUP_X          0				// PV20+
#define TXT_MENU_SETUP_1_X       32				// PV20i,PV22
#define TXT_MENU_OTHERS_X        31				// PV20+ (PV20i,PV22 locked)
#define TXT_MENU_OTHERS_1_X      64				// PV20i,PV22
#define TXT_MENU_HUMIDITY_X      62				// PV20+ (PV20i,PV22 locked)
#define TXT_MENU_RAMP_X         101				// PV20+,PV20i,PV22
#define TXT_MENU_OK_X           113				// PV20+,PV20i,PV22
#define TXT_MENU_CANCEL_X         0				// PV20+,PV20i,PV22
#define TXT_MENU_YES_X            0				// PV20+,PV20i,PV22
#define TXT_MENU_SELECT_X        64				// PV20+,PV20i,PV22
#define TXT_MENU_NEXT_X         100				// PV20i,PV22
#define TXT_MENU_CHANGE_X        64				// PV20i,PV22
#define TXT_MENU_MODE_X           0				// PV20i,PV22
#define TXT_MENU_E_ADAPT_X        0


/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_DK // Danish
/*--------------------------------------------------------------------*/
#define TXT_MENU_NO_TEXT       L""              // PV20+,PV20i,PV22
#define TXT_MENU_SETUP         L"Opsætn."		// PV20+
#define TXT_MENU_OTHERS        L"Andre"			// PV20i,PV22
#define TXT_MENU_HUMIDITY      L"Fugtigh."		// PV20+ (PV20i,PV22 locked)
#define TXT_MENU_RAMP          L"Rampe"			// PV20i,PV22
#define TXT_MENU_OK            L"Ok"			// PV20+ (PV20i,PV22 locked)
#define TXT_MENU_CANCEL        L"Cancel"		// PV20+,PV20i,PV22
#define TXT_MENU_YES           L"Ja"			// PV20+,PV20i,PV22
#define TXT_MENU_SELECT        L"Vælg"			// PV20+,PV20i,PV22
#define TXT_MENU_NEXT          L"Næste"			// PV20+,PV20i,PV22
#define TXT_MENU_CHANGE        L"Skift"			// PV20+,PV20i,PV22
#define TXT_MENU_MODE          L"Funkt."  		// PV20i,PV22
#define TXT_MENU_E_ADAPT       L"eAdapt"
													
// define what x position each menu will have.
// THe reason we do this is because in som language the text can't be
// centered over each button becase it's to large.
#define TXT_MENU_SETUP_X          0				// PV20+
#define TXT_MENU_SETUP_1_X       31				// PV20i,PV22
#define TXT_MENU_OTHERS_X        35				// PV20+ (PV20i,PV22 locked)
#define TXT_MENU_OTHERS_1_X      72				// PV20i,PV22
#define TXT_MENU_HUMIDITY_X      66				// PV20+ (PV20i,PV22 locked)
#define TXT_MENU_RAMP_X         103				// PV20+,PV20i,PV22
#define TXT_MENU_OK_X           113				// PV20+,PV20i,PV22
#define TXT_MENU_CANCEL_X         0				// PV20+,PV20i,PV22
#define TXT_MENU_YES_X            0				// PV20+,PV20i,PV22
#define TXT_MENU_SELECT_X        64				// PV20+,PV20i,PV22
#define TXT_MENU_NEXT_X          95				// PV20i,PV22
#define TXT_MENU_CHANGE_X        64				// PV20i,PV22
#define TXT_MENU_MODE_X           0				// PV20i,PV22
#define TXT_MENU_E_ADAPT_X        0


/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_FR // French
/*--------------------------------------------------------------------*/
#define TXT_MENU_NO_TEXT       L""             	// PV20+,PV20i,PV22
#define TXT_MENU_SETUP         L"Régl."			// PV20+,PV20i,PV22
#define TXT_MENU_OTHERS        L"Divers"		// PV20+,PV20i,PV22
#define TXT_MENU_HUMIDITY      L"Humidif."		// PV20+,PV20i,PV22
#define TXT_MENU_RAMP          L"Rampe"			// PV20+,PV20i,PV22
#define TXT_MENU_OK            L"OK"			// PV20+,PV20i,PV22
#define TXT_MENU_CANCEL        L"Annuler"		// PV20+,PV20i,PV22
#define TXT_MENU_YES           L"Oui"			// PV20+,PV20i,PV22
#define TXT_MENU_SELECT        L"Choisir"		// PV20+,PV20i,PV22
#define TXT_MENU_NEXT          L"Suivant"		// PV20+,PV20i,PV22
#define TXT_MENU_CHANGE        L"Changer"		// PV20+,PV20i,PV22
#define TXT_MENU_MODE          L"Mode"			// PV20i,PV22
#define TXT_MENU_E_ADAPT       L"eAdapt"

// define what x position each menu will have.
// THe reason we do this is because in som language the text can't be
// centered over each button becase it's to large.
#define TXT_MENU_SETUP_X          0				// PV20+
#define TXT_MENU_SETUP_1_X       36				// PV20i,PV22
#define TXT_MENU_OTHERS_X        32				// PV20+ (PV20i,PV22 locked)
#define TXT_MENU_OTHERS_1_X      68				// PV20i,PV22
#define TXT_MENU_HUMIDITY_X      66				// PV20+ (PV20i,PV22 locked)
#define TXT_MENU_RAMP_X         102				// PV20+,PV20i,PV22
#define TXT_MENU_OK_X           113				// PV20+,PV20i,PV22
#define TXT_MENU_CANCEL_X         0				// PV20+,PV20i,PV22
#define TXT_MENU_YES_X            0				// PV20+,PV20i,PV22
#define TXT_MENU_SELECT_X        58				// PV20+,PV20i,PV22
#define TXT_MENU_NEXT_X          98				// PV20i,PV22
#define TXT_MENU_CHANGE_X        64				// PV20i,PV22
#define TXT_MENU_MODE_X           0				// PV20i,PV22
#define TXT_MENU_E_ADAPT_X        0


/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_NO // Norway
/*--------------------------------------------------------------------*/
#define TXT_MENU_NO_TEXT       L""              // PV20+,PV20i,PV22
#define TXT_MENU_SETUP         L"Instilling"	// PV20+,PV20i,PV22
#define TXT_MENU_OTHERS        L"Annet"			// PV20+,PV20i,PV22
#define TXT_MENU_HUMIDITY      L"Fuktighet"		// PV20+,PV20i,PV22
#define TXT_MENU_RAMP          L"Ramp"			// PV20+,PV20i,PV22
#define TXT_MENU_OK            L"OK"			// PV20+,PV20i,PV22
#define TXT_MENU_CANCEL        L"Kanseller"		// PV20+,PV20i,PV22
#define TXT_MENU_YES           L"Ja"			// PV20+,PV20i,PV22
#define TXT_MENU_SELECT        L"Velg"			// PV20+,PV20i,PV22
#define TXT_MENU_NEXT          L"Neste"			// PV20+,PV20i,PV22
#define TXT_MENU_CHANGE        L"Endre"			// PV20+,PV20i,PV22
#define TXT_MENU_MODE          L"Modus"			// PV20i,PV22
#define TXT_MENU_E_ADAPT       L"eAdapt"

// define what x position each menu will have.
// THe reason we do this is because in som language the text can't be
// centered over each button becase it's to large.
#define TXT_MENU_SETUP_X          0			  	// PV20+
#define TXT_MENU_SETUP_1_X       30			  	// PV20i,PV22
#define TXT_MENU_OTHERS_X        36			  	// PV20+ (PV20i,PV22 locked)
#define TXT_MENU_OTHERS_1_X      70			 	// PV20i,PV22
#define TXT_MENU_HUMIDITY_X      64			  	// PV20+ (PV20i,PV22 locked)
#define TXT_MENU_RAMP_X         108			  	// PV20+,PV20i,PV22
#define TXT_MENU_OK_X           113			  	// PV20+,PV20i,PV22
#define TXT_MENU_CANCEL_X         0			  	// PV20+,PV20i,PV22
#define TXT_MENU_YES_X            0			  	// PV20+,PV20i,PV22
#define TXT_MENU_SELECT_X        64			  	// PV20+,PV20i,PV22
#define TXT_MENU_NEXT_X         100			  	// PV20i,PV22
#define TXT_MENU_CHANGE_X        64			  	// PV20i,PV22
#define TXT_MENU_MODE_X           0			  	// PV20i,PV22
#define TXT_MENU_E_ADAPT_X        0


/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_SE // Swedish
/*--------------------------------------------------------------------*/
#define TXT_MENU_NO_TEXT       L""             	// PV20+,PV20i,PV22
#define TXT_MENU_SETUP         L"Inställ."		// PV20+,PV20i,PV22
#define TXT_MENU_OTHERS        L"Övrigt"		// PV20+,PV20i,PV22
#define TXT_MENU_HUMIDITY      L"Fuktigh."		// PV20+,PV20i,PV22
#define TXT_MENU_RAMP          L"Ramp"			// PV20+,PV20i,PV22
#define TXT_MENU_OK            L"Ok"			// PV20+,PV20i,PV22
#define TXT_MENU_CANCEL        L"Avbryt"		// PV20+,PV20i,PV22
#define TXT_MENU_YES           L"Ja"			// PV20+,PV20i,PV22
#define TXT_MENU_SELECT        L"Välj"			// PV20+,PV20i,PV22
#define TXT_MENU_NEXT          L"Nästa"			// PV20+,PV20i,PV22
#define TXT_MENU_CHANGE        L"Ändra"			// PV20+,PV20i,PV22
#define TXT_MENU_MODE          L"Mode"			// PV20i,PV22
#define TXT_MENU_E_ADAPT       L"eAdapt"

// define what x position each menu will have.
// THe reason we do this is because in som language the text can't be
// centered over each button becase it's to large.
#define TXT_MENU_SETUP_X          0			  	// PV20+
#define TXT_MENU_SETUP_1_X       30			  	// PV20i,PV22
#define TXT_MENU_OTHERS_X        34			  	// PV20+ (PV20i,PV22 locked)
#define TXT_MENU_OTHERS_1_X      70			  	// PV20i,PV22
#define TXT_MENU_HUMIDITY_X      68			  	// PV20+ (PV20i,PV22 locked)
#define TXT_MENU_RAMP_X         108			  	// PV20+,PV20i,PV22
#define TXT_MENU_OK_X           113			  	// PV20+,PV20i,PV22
#define TXT_MENU_CANCEL_X         0			  	// PV20+,PV20i,PV22
#define TXT_MENU_YES_X            0			  	// PV20+,PV20i,PV22
#define TXT_MENU_SELECT_X        64			  	// PV20+,PV20i,PV22
#define TXT_MENU_NEXT_X         100			  	// PV20i,PV22
#define TXT_MENU_CHANGE_X        64			 	// PV20i,PV22
#define TXT_MENU_MODE_X           0			 	// PV20i,PV22
#define TXT_MENU_E_ADAPT_X        0


/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_UK  // United kingdom
/*--------------------------------------------------------------------*/
#define TXT_MENU_NO_TEXT       L""              // PV20+,PV20i,PV22
#define TXT_MENU_SETUP         L"Set Up"        // PV20+,PV20i,PV22
#define TXT_MENU_OTHERS        L"Others"        // PV20+,PV20i,PV22
#define TXT_MENU_HUMIDITY      L"Humidity"      // PV20+,PV20i,PV22
#define TXT_MENU_RAMP          L"Ramp"          // PV20+,PV20i,PV22
#define TXT_MENU_OK            L"Ok"            // PV20+,PV20i,PV22
#define TXT_MENU_CANCEL        L"Cancel"        // PV20+,PV20i,PV22
#define TXT_MENU_YES           L"Yes"           // PV20+,PV20i,PV22
#define TXT_MENU_SELECT        L"Select"        // PV20+,PV20i,PV22
#define TXT_MENU_NEXT          L"Next"          // PV20+,PV20i,PV22
#define TXT_MENU_CHANGE        L"Change"        // PV20+,PV20i,PV22
#define TXT_MENU_MODE          L"Mode"          // PV20i,PV22
#define TXT_MENU_E_ADAPT       L"eAdapt"

// define what x position each menu will have.
// THe reason we do this is because in som language the text can't be
// centered over each button becase it's to large.
#define TXT_MENU_SETUP_X          0         	// PV20+
#define TXT_MENU_SETUP_1_X       32         	// PV20i,PV22
#define TXT_MENU_OTHERS_X        32         	// PV20+ (PV20i,PV22 locked)
#define TXT_MENU_OTHERS_1_X      64         	// PV20i,PV22
#define TXT_MENU_HUMIDITY_X      64         	// PV20+ (PV20i,PV22 locked)
#define TXT_MENU_RAMP_X         105         	// PV20+,PV20i,PV22
#define TXT_MENU_OK_X           113         	// PV20+,PV20i,PV22
#define TXT_MENU_CANCEL_X         0         	// PV20+,PV20i,PV22
#define TXT_MENU_YES_X            0         	// PV20+,PV20i,PV22
#define TXT_MENU_SELECT_X        64         	// PV20+,PV20i,PV22
#define TXT_MENU_NEXT_X         105         	// PV20i,PV22
#define TXT_MENU_CHANGE_X        64         	// PV20i,PV22
#define TXT_MENU_MODE_X           0         	// PV20i,PV22
#define TXT_MENU_E_ADAPT_X        0


/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_US // United State
/*--------------------------------------------------------------------*/
#define TXT_MENU_NO_TEXT       L""            	// PV20+,PV20i,PV22
#define TXT_MENU_SETUP         L""				// PV20+,PV20i,PV22
#define TXT_MENU_OTHERS        L""				// PV20+,PV20i,PV22
#define TXT_MENU_HUMIDITY      L""				// PV20+,PV20i,PV22
#define TXT_MENU_RAMP          L""				// PV20+,PV20i,PV22
#define TXT_MENU_OK            L""				// PV20+,PV20i,PV22
#define TXT_MENU_CANCEL        L""				// PV20+,PV20i,PV22
#define TXT_MENU_YES           L""				// PV20+,PV20i,PV22
#define TXT_MENU_SELECT        L""				// PV20+,PV20i,PV22
#define TXT_MENU_NEXT          L""				// PV20+,PV20i,PV22
#define TXT_MENU_CHANGE        L""				// PV20+,PV20i,PV22
#define TXT_MENU_MODE          L""				// PV20i,PV22
#define TXT_MENU_E_ADAPT       L""

// define what x position each menu will have.
// THe reason we do this is because in som language the text can't be
// centered over each button becase it's to large.
#define TXT_MENU_SETUP_X          0				// PV20+
#define TXT_MENU_SETUP_1_X       32				// PV20i,PV22
#define TXT_MENU_OTHERS_X        32				// PV20+ (PV20i,PV22 locked)
#define TXT_MENU_OTHERS_1_X      64				// PV20i,PV22
#define TXT_MENU_HUMIDITY_X      64				// PV20+ (PV20i,PV22 locked)
#define TXT_MENU_RAMP_X         99				// PV20+,PV20i,PV22
#define TXT_MENU_OK_X           113				// PV20+,PV20i,PV22
#define TXT_MENU_CANCEL_X         0				// PV20+,PV20i,PV22
#define TXT_MENU_YES_X            0				// PV20+,PV20i,PV22
#define TXT_MENU_SELECT_X        64				// PV20+,PV20i,PV22
#define TXT_MENU_NEXT_X         105				// PV20i,PV22
#define TXT_MENU_CHANGE_X        64				// PV20i,PV22
#define TXT_MENU_MODE_X           0				// PV20i,PV22
#define TXT_MENU_E_ADAPT_X        0


/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_NL // Dutch
/*--------------------------------------------------------------------*/
#define TXT_MENU_NO_TEXT       L""             	// PV20+,PV20i,PV22
#define TXT_MENU_SETUP         L"Instel."		// PV20+,PV20i,PV22
#define TXT_MENU_OTHERS        L"Andere"		// PV20+,PV20i,PV22
#define TXT_MENU_HUMIDITY      L"Bevocht."		// PV20+,PV20i,PV22
#define TXT_MENU_RAMP          L"Ramp"			// PV20+,PV20i,PV22
#define TXT_MENU_OK            L"OK"			// PV20+,PV20i,PV22
#define TXT_MENU_CANCEL        L"Annuleer"		// PV20+,PV20i,PV22
#define TXT_MENU_YES           L"Ja"			// PV20+,PV20i,PV22
#define TXT_MENU_SELECT        L"Kies"			// PV20+,PV20i,PV22
#define TXT_MENU_NEXT          L"Volgende"		// PV20+,PV20i,PV22
#define TXT_MENU_CHANGE        L"Verander"		// PV20+,PV20i,PV22
#define TXT_MENU_MODE          L"Modus"			// PV20i,PV22
#define TXT_MENU_E_ADAPT       L"eAdapt"

// define what x position each menu will have.
// THe reason we do this is because in som language the text can't be
// centered over each button becase it's to large.
#define TXT_MENU_SETUP_X          0			  	// PV20+
#define TXT_MENU_SETUP_1_X       34			  	// PV20i,PV22
#define TXT_MENU_OTHERS_X        32			  	// PV20+ (PV20i,PV22 locked)
#define TXT_MENU_OTHERS_1_X      68			  	// PV20i,PV22
#define TXT_MENU_HUMIDITY_X      66			  	// PV20+ (PV20i,PV22 locked)
#define TXT_MENU_RAMP_X         108			  	// PV20+,PV20i,PV22
#define TXT_MENU_OK_X           113			  	// PV20+,PV20i,PV22
#define TXT_MENU_CANCEL_X         0			  	// PV20+,PV20i,PV22
#define TXT_MENU_YES_X            0			  	// PV20+,PV20i,PV22
#define TXT_MENU_SELECT_X        64			  	// PV20+,PV20i,PV22
#define TXT_MENU_NEXT_X          90			  	// PV20i,PV22
#define TXT_MENU_CHANGE_X        64			  	// PV20i,PV22
#define TXT_MENU_MODE_X           0			  	// PV20i,PV22
#define TXT_MENU_E_ADAPT_X        0


/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_IT // Italy
/*--------------------------------------------------------------------*/
#define TXT_MENU_NO_TEXT       L""            	// PV20+,PV20i,PV22
#define TXT_MENU_SETUP         L"Setup"			// PV20+,PV20i,PV22
#define TXT_MENU_OTHERS        L"Altro"			// PV20+,PV20i,PV22
#define TXT_MENU_HUMIDITY      L"Umidit?		// PV20+,PV20i,PV22
#define TXT_MENU_RAMP          L"Rampa"			// PV20+,PV20i,PV22
#define TXT_MENU_OK            L"Ok"			// PV20+,PV20i,PV22
#define TXT_MENU_CANCEL        L"Cancella"		// PV20+,PV20i,PV22
#define TXT_MENU_YES           L"S?			// PV20+,PV20i,PV22
#define TXT_MENU_SELECT        L"Seleziona"		// PV20+,PV20i,PV22
#define TXT_MENU_NEXT          L"Avanti"		// PV20+,PV20i,PV22
#define TXT_MENU_CHANGE        L"Cambia"		// PV20+,PV20i,PV22
#define TXT_MENU_MODE          L"Modo"			// PV20i,PV22
#define TXT_MENU_E_ADAPT       L"eAdapt"

// define what x position each menu will have.
// THe reason we do this is because in som language the text can't be
// centered over each button becase it's to large.
#define TXT_MENU_SETUP_X          0			  	// PV20+
#define TXT_MENU_SETUP_1_X       32			  	// PV20i,PV22
#define TXT_MENU_OTHERS_X        36			  	// PV20+ (PV20i,PV22 locked)
#define TXT_MENU_OTHERS_1_X      70			  	// PV20i,PV22
#define TXT_MENU_HUMIDITY_X      66			  	// PV20+ (PV20i,PV22 locked)
#define TXT_MENU_RAMP_X         104			  	// PV20+,PV20i,PV22
#define TXT_MENU_OK_X           113			  	// PV20+,PV20i,PV22
#define TXT_MENU_CANCEL_X         0			  	// PV20+,PV20i,PV22
#define TXT_MENU_YES_X            0			  	// PV20+,PV20i,PV22
#define TXT_MENU_SELECT_X        64			  	// PV20+,PV20i,PV22
#define TXT_MENU_NEXT_X         100			  	// PV20i,PV22
#define TXT_MENU_CHANGE_X        68			  	// PV20i,PV22
#define TXT_MENU_MODE_X           0			  	// PV20i,PV22
#define TXT_MENU_E_ADAPT_X        0


/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_GR // Greek
/*--------------------------------------------------------------------*/
#define TXT_MENU_NO_TEXT       L""            	// PV20+,PV20i,PV22
#define TXT_MENU_SETUP         L"Set up"				// PV20+,PV20i,PV22
#define TXT_MENU_OTHERS        L"\x0394\x03B9\x03AC\x03C6\x03BF\x03C1\x03B1"				// PV20+,PV20i,PV22
#define TXT_MENU_HUMIDITY      L"\x03A5\x03B3\x03C1\x03B1\x03C3\x03AF\x03B1"				// PV20+,PV20i,PV22
#define TXT_MENU_RAMP          L"\x03A1\x03AC\x03BC\x03C0\x03B1"				// PV20+,PV20i,PV22
#define TXT_MENU_OK            L"OK"				// PV20+,PV20i,PV22
#define TXT_MENU_CANCEL        L"\x0391\x03BA\x03CD\x03C1\x03C9\x03C3\x03B7"				// PV20+,PV20i,PV22
#define TXT_MENU_YES           L"\x039D\x03B1\x03B9"				// PV20+,PV20i,PV22
#define TXT_MENU_SELECT        L"\x0395\x03C0\x03B9\x03BB\x03BF\x03B3\x03AE"				// PV20+,PV20i,PV22
#define TXT_MENU_NEXT          L"\x0395\x03C0\x03BF\x03BC."				// PV20+,PV20i,PV22
#define TXT_MENU_CHANGE        L"\x0391\x03BB\x03BB\x03B1\x03B3\x03AE"				// PV20+,PV20i,PV22
#define TXT_MENU_MODE          L"Mode"				// PV20i,PV22
#define TXT_MENU_E_ADAPT       L"eAdapt"

// define what x position each menu will have.
// THe reason we do this is because in som language the text can't be
// centered over each button becase it's to large.
#define TXT_MENU_SETUP_X          0				// PV20+
#define TXT_MENU_SETUP_1_X       32				// PV20i,PV22
#define TXT_MENU_OTHERS_X        29				// PV20+ (PV20i,PV22 locked)
#define TXT_MENU_OTHERS_1_X      64				// PV20i,PV22
#define TXT_MENU_HUMIDITY_X      64				// PV20+ (PV20i,PV22 locked)
#define TXT_MENU_RAMP_X         102				// PV20+,PV20i,PV22
#define TXT_MENU_OK_X           113				// PV20+,PV20i,PV22
#define TXT_MENU_CANCEL_X         0				// PV20+,PV20i,PV22
#define TXT_MENU_YES_X            0				// PV20+,PV20i,PV22
#define TXT_MENU_SELECT_X        64				// PV20+,PV20i,PV22
#define TXT_MENU_NEXT_X         105				// PV20i,PV22
#define TXT_MENU_CHANGE_X        64				// PV20i,PV22
#define TXT_MENU_MODE_X           0				// PV20i,PV22
#define TXT_MENU_E_ADAPT_X        0


/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_PT // Portuguese
/*--------------------------------------------------------------------*/
#define TXT_MENU_NO_TEXT       L""            	// PV20+,PV20i,PV22
#define TXT_MENU_SETUP         L"Ajuste"		// PV20+,PV20i,PV22
#define TXT_MENU_OTHERS        L"Outros"		// PV20+,PV20i,PV22
#define TXT_MENU_HUMIDITY      L"Umidade"		// PV20+,PV20i,PV22
#define TXT_MENU_RAMP          L"Rampa"			// PV20+,PV20i,PV22
#define TXT_MENU_OK            L"OK"			// PV20+,PV20i,PV22
#define TXT_MENU_CANCEL        L"Cancelar"		// PV20+,PV20i,PV22
#define TXT_MENU_YES           L"Sim"			// PV20+,PV20i,PV22
#define TXT_MENU_SELECT        L"Selecion"		// PV20+,PV20i,PV22
#define TXT_MENU_NEXT          L"Próximo"		// PV20+,PV20i,PV22
#define TXT_MENU_CHANGE        L"Mudar"			// PV20+,PV20i,PV22
#define TXT_MENU_MODE          L"Modo"			// PV20i,PV22
#define TXT_MENU_E_ADAPT       L"eAdapt"

// define what x position each menu will have.
// THe reason we do this is because in som language the text can't be
// centered over each button becase it's to large.
#define TXT_MENU_SETUP_X          0			  	// PV20+
#define TXT_MENU_SETUP_1_X       31			  	// PV20i,PV22
#define TXT_MENU_OTHERS_X        32			  	// PV20+ (PV20i,PV22 locked)
#define TXT_MENU_OTHERS_1_X      66			  	// PV20i,PV22
#define TXT_MENU_HUMIDITY_X      64			  	// PV20+ (PV20i,PV22 locked)
#define TXT_MENU_RAMP_X         102 	      	// PV20+,PV20i,PV22
#define TXT_MENU_OK_X           113			  	// PV20+,PV20i,PV22
#define TXT_MENU_CANCEL_X         0			  	// PV20+,PV20i,PV22
#define TXT_MENU_YES_X            0			  	// PV20+,PV20i,PV22
#define TXT_MENU_SELECT_X        64			  	// PV20+,PV20i,PV22
#define TXT_MENU_NEXT_X          94			  	// PV20i,PV22
#define TXT_MENU_CHANGE_X        64			  	// PV20i,PV22
#define TXT_MENU_MODE_X           0			  	// PV20i,PV22
#define TXT_MENU_E_ADAPT_X        0


/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_PL // Polisk
/*--------------------------------------------------------------------*/
#define TXT_MENU_NO_TEXT       L""            	    // PV20+,PV20i,PV22
#define TXT_MENU_SETUP         L"Ustaw"				      // PV20+,PV20i,PV22
#define TXT_MENU_OTHERS        L"Inne"				      // PV20+,PV20i,PV22
#define TXT_MENU_HUMIDITY      L"Nawil"L"\x017C"		// PV20+,PV20i,PV22
#define TXT_MENU_RAMP          L"Narast"	     			// PV20+,PV20i,PV22
#define TXT_MENU_OK            L"OK"				        // PV20+,PV20i,PV22
#define TXT_MENU_CANCEL        L"Anuluj"				    // PV20+,PV20i,PV22
#define TXT_MENU_YES           L"Tak"				        // PV20+,PV20i,PV22
#define TXT_MENU_SELECT        L"Wybierz"				    // PV20+,PV20i,PV22
#define TXT_MENU_NEXT          L"Dalej"	        		// PV20+,PV20i,PV22
#define TXT_MENU_CHANGE        L"Zmie\x0144"				// PV20+,PV20i,PV22
#define TXT_MENU_MODE          L"Tryb"				      // PV20i,PV22
#define TXT_MENU_E_ADAPT       L"eAdapt"

// define what x position each menu will have.
// THe reason we do this is because in som language the text can't be
// centered over each button becase it's to large.
#define TXT_MENU_SETUP_X          0				// PV20+
#define TXT_MENU_SETUP_1_X       32				// PV20i,PV22
#define TXT_MENU_OTHERS_X        34				// PV20+ (PV20i,PV22 locked)
#define TXT_MENU_OTHERS_1_X      74				// PV20i,PV22
#define TXT_MENU_HUMIDITY_X      64				// PV20+ (PV20i,PV22 locked)
#define TXT_MENU_RAMP_X          101 			// PV20+,PV20i,PV22
#define TXT_MENU_OK_X           113				// PV20+,PV20i,PV22
#define TXT_MENU_CANCEL_X         0				// PV20+,PV20i,PV22
#define TXT_MENU_YES_X            0				// PV20+,PV20i,PV22
#define TXT_MENU_SELECT_X        64				// PV20+,PV20i,PV22
#define TXT_MENU_NEXT_X         105				// PV20i,PV22
#define TXT_MENU_CHANGE_X        68				// PV20i,PV22
#define TXT_MENU_MODE_X           0				// PV20i,PV22
#define TXT_MENU_E_ADAPT_X        0


/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_JP  // Japan
/*--------------------------------------------------------------------*/
#define TXT_MENU_NO_TEXT       L""                  		// PV20+,PV20i,PV22
#define TXT_MENU_SETUP         L"\x8A2D\x5B9A"				// PV20+,PV20i,PV22
#define TXT_MENU_OTHERS        L"\x4ED6"					// PV20+,PV20i,PV22
#define TXT_MENU_HUMIDITY      L"\x52A0\x6E7F\x5668"		// PV20+,PV20i,PV22
#define TXT_MENU_RAMP          L"\x30E9\x30F3\x30D7"		// PV20+,PV20i,PV22
#define TXT_MENU_OK            L"OK"						// PV20+,PV20i,PV22
#define TXT_MENU_CANCEL        L"\x4E2D\x6B62"				// PV20+,PV20i,PV22
#define TXT_MENU_YES           L"\x306F\x3044"				// PV20+,PV20i,PV22
#define TXT_MENU_SELECT        L"\x9078\x629E"				// PV20+,PV20i,PV22
#define TXT_MENU_NEXT          L"\x6B21\x3078"				// PV20+,PV20i,PV22
#define TXT_MENU_CHANGE        L"\x5909\x66F4"				// PV20+,PV20i,PV22
#define TXT_MENU_MODE          L"\x30E2\x30FC\x30C9"		// PV20i,PV22
#define TXT_MENU_E_ADAPT       L"eAdapt"

// define what x position each menu will have.
// THe reason we do this is because in som language the text can't be
// centered over each button becase it's to large.
#define TXT_MENU_SETUP_X          0				// PV20+
#define TXT_MENU_SETUP_1_X       38				// PV20i,PV22
#define TXT_MENU_OTHERS_X        36				// PV20+ (PV20i,PV22 locked)
#define TXT_MENU_OTHERS_1_X      72				// PV20i,PV22
#define TXT_MENU_HUMIDITY_X      54				// PV20+ (PV20i,PV22 locked)
#define TXT_MENU_RAMP_X          91				// PV20+,PV20i,PV22
#define TXT_MENU_OK_X           113				// PV20+,PV20i,PV22
#define TXT_MENU_CANCEL_X         0				// PV20+,PV20i,PV22
#define TXT_MENU_YES_X            0				// PV20+,PV20i,PV22
#define TXT_MENU_SELECT_X        68				// PV20+,PV20i,PV22
#define TXT_MENU_NEXT_X         100				// PV20i,PV22
#define TXT_MENU_CHANGE_X        72				// PV20i,PV22
#define TXT_MENU_MODE_X           0				// PV20i,PV22
#define TXT_MENU_E_ADAPT_X        0


/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_CN  // China
/*--------------------------------------------------------------------*/
#define TXT_MENU_NO_TEXT       L""            	// PV20+,PV20i,PV22
#define TXT_MENU_SETUP         L"\x8BBE\x7F6E"				// PV20+,PV20i,PV22
#define TXT_MENU_OTHERS        L"\x5176\x4ED6"				// PV20+,PV20i,PV22
#define TXT_MENU_HUMIDITY      L"\x6E7F\x5316"				// PV20+,PV20i,PV22
#define TXT_MENU_RAMP          L"\x5EF6\x65F6"				// PV20+,PV20i,PV22
#define TXT_MENU_OK            L"\x786E\x5B9A"				// PV20+,PV20i,PV22
#define TXT_MENU_CANCEL        L"\x53D6\x6D88"				// PV20+,PV20i,PV22
#define TXT_MENU_YES           L"\x662F"				// PV20+,PV20i,PV22
#define TXT_MENU_SELECT        L"\x9009\x62E9"				// PV20+,PV20i,PV22
#define TXT_MENU_NEXT          L"\x4E0B\x4E00\x6B65"				// PV20+,PV20i,PV22
#define TXT_MENU_CHANGE        L"\x6539\x53D8"				// PV20+,PV20i,PV22
#define TXT_MENU_MODE          L"\x6A21\x5F0F"				// PV20i,PV22
#define TXT_MENU_E_ADAPT       L"eAdapt"

// define what x position each menu will have.
// THe reason we do this is because in som language the text can't be
// centered over each button becase it's to large.
#define TXT_MENU_SETUP_X          0				// PV20+
#define TXT_MENU_SETUP_1_X       32				// PV20i,PV22
#define TXT_MENU_OTHERS_X        32				// PV20+ (PV20i,PV22 locked)
#define TXT_MENU_OTHERS_1_X      64				// PV20i,PV22
#define TXT_MENU_HUMIDITY_X      64				// PV20+ (PV20i,PV22 locked)
#define TXT_MENU_RAMP_X         99				// PV20+,PV20i,PV22
#define TXT_MENU_OK_X           113				// PV20+,PV20i,PV22
#define TXT_MENU_CANCEL_X         0				// PV20+,PV20i,PV22
#define TXT_MENU_YES_X            0				// PV20+,PV20i,PV22
#define TXT_MENU_SELECT_X        64				// PV20+,PV20i,PV22
#define TXT_MENU_NEXT_X         105				// PV20i,PV22
#define TXT_MENU_CHANGE_X        64				// PV20i,PV22
#define TXT_MENU_MODE_X           0				// PV20i,PV22
#define TXT_MENU_E_ADAPT_X        0


/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_TEST // Test
/*--------------------------------------------------------------------*/
#define TXT_MENU_NO_TEXT       L""              // PV20+,PV20i,PV22
#define TXT_MENU_SETUP         L"abcdef"        // PV20+,PV20i,PV22
#define TXT_MENU_OTHERS        L"abcdef"        // PV20+,PV20i,PV22
#define TXT_MENU_HUMIDITY      L"abcdef"        // PV20+,PV20i,PV22
#define TXT_MENU_RAMP          L"abcdef"        // PV20+,PV20i,PV22
#define TXT_MENU_OK            L"abcdef"        // PV20+,PV20i,PV22
#define TXT_MENU_CANCEL        L"abcdef"        // PV20+,PV20i,PV22
#define TXT_MENU_YES           L"abcdef"        // PV20+,PV20i,PV22
#define TXT_MENU_SELECT        L"abcdef"        // PV20+,PV20i,PV22
#define TXT_MENU_NEXT          L"abcdef"        // PV20+,PV20i,PV22
#define TXT_MENU_CHANGE        L"abcdef"        // PV20+,PV20i,PV22
#define TXT_MENU_MODE          L"abcdef"        // PV20i,PV22
#define TXT_MENU_E_ADAPT       L"abcdef"

// define what x position each menu will have.
// THe reason we do this is because in som language the text can't be
// centered over each button becase it's to large.
#define TXT_MENU_SETUP_X          0				// PV20+
#define TXT_MENU_SETUP_1_X       32				// PV20i,PV22
#define TXT_MENU_OTHERS_X        32				// PV20+ (PV20i,PV22 locked)
#define TXT_MENU_OTHERS_1_X      64				// PV20i,PV22
#define TXT_MENU_HUMIDITY_X      54				// PV20+ (PV20i,PV22 locked)
#define TXT_MENU_RAMP_X         99				// PV20+,PV20i,PV22
#define TXT_MENU_OK_X           113				// PV20+,PV20i,PV22
#define TXT_MENU_CANCEL_X         0				// PV20+,PV20i,PV22
#define TXT_MENU_YES_X            0				// PV20+,PV20i,PV22
#define TXT_MENU_SELECT_X        64				// PV20+,PV20i,PV22
#define TXT_MENU_NEXT_X         105				// PV20i,PV22
#define TXT_MENU_CHANGE_X        64				// PV20i,PV22
#define TXT_MENU_MODE_X           0				// PV20i,PV22
#define TXT_MENU_E_ADAPT_X        0



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

#endif  // MENU_DEFINE_H

