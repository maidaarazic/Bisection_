//
//  main.c
//  BisectionC
//
//  Created by Maida Razic on 25. 10. 2021..
//

#include  <stdio.h>

int main(void)
{
  
   int n, nsteps;
   double rlo, rhi, rmd, rxlo, rxhi, rxmd;
    
    n = 0;
    nsteps = 30;
    rlo = 0.0;
    rhi = 2.0;
    rxlo = rlo * rlo * rlo;
    rxhi = rhi * rhi * rhi;
    
   do{
        n++;                               //every time the code is executed n is increased
        rmd = (rlo + rhi)/2.0;
        rxmd = rmd * rmd * rmd;
       if (rxmd > 3.0)
           rhi = rmd;                  //replace b with m from formula m = (a + b) / 2, rhi = b and rmd = m
       else
           rlo = rmd;                 //replace a with m from formula m = (a + b) /2,  rlo = a and rmd = m
   } while(n < nsteps);
    
    printf("\Cuberoot of 3: %f", rmd);
}
