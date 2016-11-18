 #include <Adafruit_NeoPixel.h>
  
  
  #define PIN 6
     #define MAXX 14
     #define MAXY 8
    // Parameter 1 = number of pixels in strip
    // Parameter 2 = pin number (most are valid)
    // Parameter 3 = pixel type flags, add together as needed:
    //   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
    //   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
    //   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
    //   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
    Adafruit_NeoPixel strip = Adafruit_NeoPixel(MAXX*MAXY, PIN, NEO_GRB + NEO_KHZ800);
     
     void setpixelxy (int x, int y, int R, int G, int B) {
      int lednumber;
       if (x%2==0)lednumber= y+x*MAXY; 
       else lednumber= (MAXY-y-1)+x*MAXY;
         strip.setPixelColor(lednumber, R, G, B); 
        
         Serial.print(lednumber); 
         Serial.print(" ");
     }
     
void setup() {
  // put your setup code here, to run once:
  strip.begin(); 
  strip.setBrightness(45);
  strip.show(); // Initialize all pixels to 'off'

   Serial.begin(9600); 
    for(int x=0;x< MAXX;x++){
      for(int y=0;y< MAXY;y++){
        setpixelxy (x,y, 102, 255, 255);

        setpixelxy (13,5, 240, 240, 240);  //White
         setpixelxy (13,4, 240, 240, 240);
           setpixelxy (13,3, 240, 240, 240);
            setpixelxy (13,2, 240, 240, 240);
              setpixelxy (13,1, 240, 240, 240);
                setpixelxy (13,0, 240, 240, 240);

      setpixelxy (12,5, 240, 240, 240);
       setpixelxy (12,4, 240, 240, 240);
         setpixelxy (12,3, 240, 240, 240);
           setpixelxy (12,2, 240, 240, 240);
             setpixelxy (12,1, 240, 240, 240);
               setpixelxy (12,0, 240, 240, 240);

                 setpixelxy (11,4, 240, 240, 240);
                  setpixelxy (11,3, 240, 240, 240);
                   setpixelxy (11,2, 240, 240, 240);
                     setpixelxy (11,1, 240, 240, 240);
                      setpixelxy (10,4, 240, 240, 240);
                        setpixelxy (10,3, 240, 240, 240);
                         setpixelxy (10,2, 240, 240, 240);
                           setpixelxy (9,4, 240, 240, 240);
                             setpixelxy (9,3, 240, 240, 240);
                               setpixelxy (9,2, 240, 240, 240);
                         
                          
        setpixelxy (8,4, 240, 240, 240);
          setpixelxy (8,3, 240, 240, 240);
            setpixelxy (7,6, 240, 240, 240);
              setpixelxy (7,5, 240, 240, 240);
                 setpixelxy (7,4, 240, 240, 240);                    
                   setpixelxy (7,3, 240, 240, 240);
                      setpixelxy (6,7, 240, 240, 240);
                        setpixelxy (6,6, 240, 240, 240);
                          setpixelxy (6,5, 240, 240, 240);
                           setpixelxy (6,4, 240, 240, 240);
                             setpixelxy (6,3, 240, 240, 240);
                               setpixelxy (5,7, 240, 240, 240);
                               setpixelxy (5,6, 240, 240, 240);
                               setpixelxy (5,5, 240, 240, 240);
                               setpixelxy (5,3, 240, 240, 240);
                               setpixelxy (4,4, 240, 240, 240);



               setpixelxy (5,4, 0, 0, 0); //Black


               setpixelxy (2,7, 255, 255, 0);     //Yellow
                 setpixelxy (3,6, 255, 255, 0);
                  setpixelxy (3,5, 255, 255, 0);
                    setpixelxy (4,5, 255, 255, 0);    


                setpixelxy (3,4, 255, 0, 127); // Pink
                setpixelxy (3,3, 255, 0, 127);
                setpixelxy (3,2, 255, 0, 127);
                setpixelxy (4,3, 255, 0, 127);
                setpixelxy (4,2, 255, 0, 127);
                setpixelxy (4,1, 255, 0, 127);
                setpixelxy (5,2, 255, 0, 127);
                setpixelxy (5,1, 255, 0, 127);
                setpixelxy (5,0, 255, 0, 127);
                setpixelxy (6,2, 255, 0, 127);
                setpixelxy (6,1, 255, 0, 127);
                setpixelxy (6,0, 255, 0, 127);
                setpixelxy (7,0, 255, 0, 127);
                setpixelxy (7,1, 255, 0, 127);
                setpixelxy (7,2, 255, 0, 127);
                setpixelxy (8,2, 255, 0, 127);
                setpixelxy (8,1, 255, 0, 127);
                setpixelxy (8,0, 255, 0, 127);
                setpixelxy (9,1, 255, 0, 127);
                setpixelxy (9,0, 255, 0, 127);
                setpixelxy (10,1, 255, 0, 127); 
                setpixelxy (10,0, 255, 0, 127);
                setpixelxy (11,0, 255, 0, 127);
          
      }
      
      Serial.println(" ");
    }
  
}
void loop() {

  strip.show();

   

  

}

