import std.stdio;
 
void main()
{
    int n, nsteps;
    double rlo, rhi, rmd, rxlo, rxhi, rxmd;
    
    n = 0;
    nsteps = 30;
    rlo = 0.0;
    rhi = 2.0;
    rxlo = rlo * rlo * rlo;
    rxhi = rhi * rhi * rhi;
    
     do {n++;                              
         rmd = (rlo + rhi)/2.0;
         rxmd = rmd * rmd * rmd;
         if (rxmd > 3.0)
           rhi = rmd;                  
       else
           rlo = rmd;
    } while(n < nsteps);

    
    writeln("Cube root of 3 is:", rmd);
}
