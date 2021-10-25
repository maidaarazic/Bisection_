# Bisection_
an example in FORTRAN 77, which uses bisection to find the cuberoot of 3
! find the cuberoot of 3
       INTEGER N
       REAL    RLO, RHI, RMD      ! the values of   X at lower, upper, mrdpoint
       REAL    RXLO, RXHI, RXMD   ! the values of X^3 at lower, upper, mrdpoint
       INTEGER NSTEPS

       N= 0
       NSTEPS=30
       RLO=0.0
       RXLO=RLO*RLO*RLO
       RHI=2.0
       RXHI=RHI*RHI*RHI

100    N=N+1
       IF (N .GE. NSTEPS) GOTO 200
       RMD=(RLO+RHI)/2.0
       RXMD=RMD*RMD*RMD
       IF (RXMD .GT. 3.0) GOTO 101
       RLO=(RMD+RLO)/2.0
       GOTO 100

101    RHI=(RMD+RHI)/2.0
       GOTO 100

200    PRINT *, "CUBEROOT OF 3", RMD
       END


This Fortran example, written by professor, I translated in C and D. 

In all three codes we wanted to controll how many iterations we have. In Fortran we used variables N and NSTEPS and later we added the expression N = N + 1, while in C and D I have used do while loop with variables n and nsteps, n was incrementing after iteration. In Fortran we had labels for moving the control from one part of the code to another. In other two examples again do while loop was used as well as if else statements. "If" can also be found in our Fortran code, but else cannot.
