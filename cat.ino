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
  strip.show(); // Initialize all pixels to 'off'
 strip.setBrightness(45);
   Serial.begin(9600); 
    for(int x=0;x< MAXX;x++){
      for(int y=0;y< MAXY;y++){
        
        
        setpixelxy (x,y, 102, 255, 255); //Hintergrund
        
        
         
        setpixelxy (2,1, 255, 51, 153);    //Pink
        setpixelxy (2,6, 255, 51, 153);
        setpixelxy (6,3, 255, 51, 153);
        setpixelxy (6,4, 255, 51, 153);


        setpixelxy (4,2, 0, 0, 0);     //Black
        setpixelxy (5,2, 0, 0, 0); 
         setpixelxy (4,5, 0, 0, 0); 
          setpixelxy (5,5, 0, 0, 0); 

           setpixelxy (8,2, 204, 0, 0);     //Red
            setpixelxy (8,4, 204, 0, 0);
             setpixelxy (8,5, 204, 0, 0);

              setpixelxy (8,3, 255, 255, 0); //Yellow

               setpixelxy (13,7, 230, 230, 230);  //light Grey
                setpixelxy (13,5, 230, 230, 230);
                 setpixelxy (13,4, 230, 230, 230);
                  setpixelxy (13,3, 230, 230, 230);
                   setpixelxy (13,2, 230, 230, 230);
                    setpixelxy (13,0, 230, 230, 230);
                     setpixelxy (12,3, 230, 230, 230);
                      setpixelxy (12,4, 230, 230, 230);
                       setpixelxy (11,3, 230, 230, 230);
                        setpixelxy (11,4, 230, 230, 230);
                         setpixelxy (10,3, 230, 230, 230);
                          setpixelxy (10,4, 230, 230, 230);
                           setpixelxy (7,6, 230, 230, 230);
                            setpixelxy (7,5, 230, 230, 230);
                             setpixelxy (7,4, 230, 230, 230);
                              setpixelxy (7,3, 230, 230, 230);
                               setpixelxy (7,2, 230, 230, 230);
                                setpixelxy (7,1, 230, 230, 230);
                                 setpixelxy (6,5, 230, 230, 230);
                                  setpixelxy (6,2, 230, 230, 230);

                 setpixelxy (13,6, 64, 80, 94); //Grey Body
                  setpixelxy (13,1, 64, 80, 94);
                   setpixelxy (12,6, 64, 80, 94);
                    setpixelxy (12,5, 64, 80, 94);
                     setpixelxy (12,2, 64, 80, 94);
                      setpixelxy (12,1, 64, 80, 94);
                       setpixelxy (11,6, 64, 80, 94);
                        setpixelxy (11,5, 64, 80, 94);
                         setpixelxy (11,2, 64, 80, 94);
                          setpixelxy (11,1, 64, 80, 94);
                                setpixelxy (10,6, 64, 80, 94); //tail
                            setpixelxy (10,5, 64, 80, 94);
                             setpixelxy (10,2, 64, 80, 94);
                                 setpixelxy (9,7, 64, 80, 94);//tail
                               setpixelxy (9,5, 64, 80, 94);
                                setpixelxy (9,4, 64, 80, 94);
                                 setpixelxy (9,3, 64, 80, 94);
                                  setpixelxy (9,2, 64, 80, 94);
                 
                        setpixelxy (7,7, 64, 80, 94);   //Grey Head
                        setpixelxy (7,0, 64, 80, 94);
                        setpixelxy (6,7, 64, 80, 94);
                        setpixelxy (6,6, 64, 80, 94);
                        setpixelxy (6,1, 64, 80, 94);
                        setpixelxy (6,0, 64, 80, 94);
                        setpixelxy (5,7, 64, 80, 94);
                        setpixelxy (5,6, 64, 80, 94);
                        setpixelxy (5,4, 64, 80, 94);
                        setpixelxy (5,3, 64, 80, 94);
                        setpixelxy (5,1, 64, 80, 94);
                        setpixelxy (5,0, 64, 80, 94);  
                                  
                                  setpixelxy (4,7, 64, 80, 94);
                                  setpixelxy (4,6, 64, 80, 94);
                                  setpixelxy (4,4, 64, 80, 94);
                                  setpixelxy (4,3, 64, 80, 94);
                                  setpixelxy (4,1, 64, 80, 94);
                                  setpixelxy (4,0, 64, 80, 94);
                                  setpixelxy (3,7, 64, 80, 94);
                                  setpixelxy (3,6, 64, 80, 94);
                                  setpixelxy (3,5, 64, 80, 94);
                                  setpixelxy (3,4, 64, 80, 94);  //Grey Head
                                  setpixelxy (3,3, 64, 80, 94);
                                  setpixelxy (3,2, 64, 80, 94);
                                  setpixelxy (3,1, 64, 80, 94);
                                  setpixelxy (3,0, 64, 80, 94);
                                  setpixelxy (2,7, 64, 80, 94);
                                  setpixelxy (2,5, 64, 80, 94);
                                  setpixelxy (2,2, 64, 80, 94);
                                  setpixelxy (2,0, 64, 80, 94);
                                  setpixelxy (1,6, 64, 80, 94);
                                  setpixelxy (1,1, 64, 80, 94);
                                
                                  
                   
                  
                                   
 }
      
      Serial.println(" ");
    }
  
}
void loop() {

  strip.show();

   

  

}

