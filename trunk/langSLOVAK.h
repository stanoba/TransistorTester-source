/* ************************************************************************
 *  (c) by Karl-Heinz Kuebbeler, Projekt Transistor Tester
 *  
 *  File:       langSLOVAK.h
 *  Funktion:   language selection
 * 
 * History:     Date        Sign    Kommentar 
 *
 * ************************************************************************ */
#if defined(LANG_SLOVAK)		//slowakisch
   const unsigned char TestRunning[] MEM_TEXT = "Testujem"; //"Prebieha meranie";
//   const unsigned char BatWeak[] MEM_TEXT = "slaba"; 
   const unsigned char BatWeak[] MEM_TEXT = {'s','l','a','b',a_acute,0}; 
//   const unsigned char BatEmpty[] MEM_TEXT = "vybita";	//"prazdna!";
   const unsigned char BatEmpty[] MEM_TEXT = {'v','y','b','i','t',a_acute,0};
   const unsigned char TestFailed2[] MEM_TEXT = {'v','a','d','n',a_acute,' ',0};
   const unsigned char Bauteil[] MEM_TEXT = {'s',u_acute,c_caron,'i','a','s','t','k','a',' ',0};
   const unsigned char Diode[] MEM_TEXT = {'D','i',o_acute,'d','a',0};
   const unsigned char Triac[] MEM_TEXT = "Triak";
   const unsigned char Thyristor[] MEM_TEXT = "Tyristor"; 
   const unsigned char Unknown[] MEM_TEXT = {' ','n','e','z','n',a_acute,'m','a',' ',0}; 
   const unsigned char TestFailed1[] MEM_TEXT = {Z_caron,'i','a','d','n','a',',',' ','n','e','z','n',a_acute,'m','a',',',0};
   //const unsigned char Detected[] MEM_TEXT = " detekuje";
   const unsigned char Detected[] MEM_TEXT = {' ','d','e','t','e','k','o','v','a','n',a_acute};

      const unsigned char TestTimedOut[] MEM_TEXT = {C_caron,'a','s',' ','v','y','p','r',s_caron,'a','l','!'}; 
   #define Cathode_char 'K'
 #ifdef WITH_SELFTEST
   const unsigned char SELFTEST[] MEM_TEXT = "Autotest..";	//"Samotestovanie..";
   const unsigned char RELPROBE[] MEM_TEXT = "Odpoj sondy!";
   const unsigned char ATE[] MEM_TEXT = "Koniec testu";
 #endif
 #ifdef WITH_MENU
   // const unsigned char SELECTION_str[] MEM2_TEXT = {'V','y_acute','b','e','r',':',' ',0};
   const unsigned char SELECTION_str[] MEM2_TEXT = "Menu:";
   const unsigned char TESTER_str[] MEM2_TEXT = "Tranzistor";	//"Tranzistor";
  #ifndef NO_FREQ_COUNTER
   const unsigned char FREQ_str[] MEM2_TEXT = "Frekvencia";
 #ifdef WITH_FREQUENCY_DIVIDER
   const unsigned char FScaler_str[] MEM2_TEXT = "F-Scaler";
 #endif
  #endif
   const unsigned char VOLTAGE_str[] MEM2_TEXT = "Napatie";
   const unsigned char SHOW_str[] MEM2_TEXT = {'Z','o','b','r','a','z','i',t_caron,' ',u_acute,'d','a','j','e',' ',0};	// "Show data"   
   const unsigned char OFF_str[] MEM2_TEXT = {'V','y','p','n',u_acute,t_caron,' ',0};    
   const unsigned char F_GEN_str[] MEM2_TEXT = {'F','-','G','e','n','e','r',a_acute,'t','o','r',' ',0};
  #ifdef PWM_SERVO
   const unsigned char PWM_10bit_str[] MEM2_TEXT = "Servo PWM";
  #else
   const unsigned char PWM_10bit_str[] MEM2_TEXT = {'1','0','-','b','i','t','o','v',a_acute,' ','P','W','M',0};
  #endif
  #ifdef WITH_ROTARY_CHECK
   const unsigned char RotaryEncoder_str[] MEM2_TEXT = {'P','u','l','z','n',y_acute,' ','k',o_acute,'d','o','v','a',c_caron,0};
  #endif
   const unsigned char SetCapCorr_str[] MEM2_TEXT = {'C','(',LCD_CHAR_U,'F',')','-','K','o','r','e','k','c','i','a',0};
      const unsigned char TURN_str[] MEM2_TEXT = {'K','r','u',t_caron,'!'};
   const unsigned char FULLCHECK_str[] MEM2_TEXT = {'P','l','n',a_acute,' ','k','a','l','i','b','r',a_acute,'c','i','a',0};
   const unsigned char SHORT_PROBES_str[] MEM2_TEXT = "Prepoj sondy!";
  #if (WITH_FREQUENCY_SWITCH == 1)
   const unsigned char HFREQ_str[] MEM2_TEXT = "Frekvencia > 2MHz";
   const unsigned char H_CRYSTAL_str[] MEM2_TEXT = "HF krystal";
   const unsigned char L_CRYSTAL_str[] MEM2_TEXT = "LF krystal";
  #endif
  #if ((LCD_ST_TYPE == 7565) || (LCD_ST_TYPE == 1306) || (LCD_ST_TYPE == 8812) || (LCD_ST_TYPE == 8814) || (LCD_ST_TYPE == 8814) || defined(LCD_DOGM))
   const unsigned char CONTRAST_str[] MEM2_TEXT = "Kontrast";
  #endif
 #endif  /* WITH_MENU */
 #ifdef WITH_XTAL
   const unsigned char cerres_str[] MEM_TEXT = "Cer.resonator  ";
   const unsigned char xtal_str[] MEM_TEXT = {'K','r','y',s_caron,'t',a_acute,'l',' '};
 #endif
 #define LANG_SELECTED

 #if FLASHEND > 0x3fff
// Define a help text for calibration for ATmega328
// Complete words are output to the LCD rows.
// Words are separated by ' '. If you don't allow to separate two words
// to different rows, you can hide the ' ' with LCD_CHAR_INSEP.
// Notice, that the LCD has only 16 character in each line!
 const unsigned char HelpCalibration_str[] PROGMEM = {'>','N','e','k','a','l','i','b','r','o','v','a','n',y_acute,'!','<',' ',
  #ifndef SHORT_UNCAL_MSG

'A','k',' ','c','h','c','e',s_caron,' ','v','y','k','o','n','a',t_caron,LCD_CHAR_INSEP,
'k','a','l','i','b','r',a_acute,'c','i','u',' ','s','p','o','j',' ',

'v',s_caron,'e','t','k','y',' ','3',' ',
'm','e','r','a','c','i','e',LCD_CHAR_INSEP,'s','o','n','d','y',' ','a',' ',

's','t','l','a',c_caron,LCD_CHAR_INSEP,'t','l','a',c_caron,i_acute,'t','k','o',' ','T','E','S','T','.',' ',
'K','a','l','i','b','r',a_acute,'c','i','u',LCD_CHAR_INSEP,'p','o','t','v','r',d_caron,' ','s','t','l','a',c_caron,'e','n',i_acute,'m',' ',

't','l','a',c_caron,i_acute,'t','k','a',' ','T','E','S','T',' ','d','o',' ','2','s','.',' ',

'N','a',' ','v',y_acute,'z','v','u',' ','"','O','d','p','o','j',LCD_CHAR_INSEP,'s','o','n','d','y','!','"',' ','z','r','u',s_caron,' ',
'p','r','e','p','o','j','e','n','i','e',' ','m','e','r','a','c',i_acute,'c','h',' ','s','o','n','d','.',' ',

'N','a',' ',d_caron,'a','l',s_caron,'i','u',LCD_CHAR_INSEP,'v',y_acute,'z','v','u',' ',
'"','1'+TP_OFFSET,LCD_CHAR_LINE1,LCD_CHAR_CAP,LCD_CHAR_LINE1,'3'+TP_OFFSET,LCD_CHAR_INSEP,'>','1','0','0','n','F','"',',',LCD_CHAR_INSEP,

'p','r','i','p','o','j',' ','m','e','d','z','i',LCD_CHAR_INSEP,
's','o','n','d','y',' ','1',',','3',' ','d','o','b','r',y_acute,' ',

'k','o','n','d','e','n','z',a_acute,'t','o','r',' ',
'v','i','a','c',' ','a','k','o',' ','1','0','0','n','F','.',' ',

'S','o','f','t','w','a','r','e',' ','a',' ',
'd','o','k','u','m','e','n','t',a_acute,'c','i','a',' ','j','e',' ','n','a',' ',
'g','i','t','h','u','b','.','c','o','m','/','k','u','b','i','4','8'
  #endif  /* SHORT_UNCAL_MSG */
,0};
 #define HelpTXT
 #endif  /* FLASHEND > 0x3fff */
#endif  /* LANG SLOVAK */
/* ****************************** EOF ***************************************** */
