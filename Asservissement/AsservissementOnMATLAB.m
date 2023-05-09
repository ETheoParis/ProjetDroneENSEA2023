
g= 9.81;
m = 150;
Ix= 100;
Iy= 100;
Iz= 100;
rho1= 4;
rho2= 4;
rho3= 2;
rho4= 2;
rho5= 2;
rho6= 2;
A= [0 0 0 1 0 0 0 0 0 0 0 0;
    0 0 0 0 1 0 0 0 0 0 0 0;
    0 0 0 0 0 1 0 0 0 0 0 0;
    0 0 0 0 0 0 0 -g 0 0 0 0;
    0 0 0 0 0 0 g 0 0 0 0 0;
    0 0 0 0 0 0 0 0 0 0 0 0;
    0 0 0 0 0 0 0 0 0 1 0 0;
    0 0 0 0 0 0 0 0 0 0 1 0;
    0 0 0 0 0 0 0 0 0 0 0 1;
    0 0 0 0 0 0 0 0 0 0 0 0;
    0 0 0 0 0 0 0 0 0 0 0 0;
    0 0 0 0 0 0 0 0 0 0 0 0];


C1= [1 0 0 0 0 0 0 0 0 0 0 0];
C2= [0 1 0 0 0 0 0 0 0 0 0 0];
C3= [0 0 1 0 0 0 0 0 0 0 0 0];
C4= [0 0 0 0 0 0 1 0 0 0 0 0];
C5= [0 0 0 0 0 0 0 1 0 0 0 0];
C6= [0 0 0 0 0 0 0 0 1 0 0 0];

B1=[0;0;0;0;1/m;0;0;0;0;0;0;0];
B2=[0;0;0;0;0;0;0;0;0;1/Ix;0;0];
B3=[0;0;0;0;0;0;0;0;0;0;1/Iy;0];
B4=[0;0;0;0;0;0;0;0;0;0;0;1/Iz];

omega11 = C1*A^(rho1-1)*B1;
omega12 = C1*A^(rho1-1)*B2;
omega13 = C1*A^(rho1-1)*B3;
omega14 = C1*A^(rho1-1)*B4;


omega21 = C2*A^(rho2-1)*B1;
omega22 = C2*A^(rho2-1)*B2;
omega23 = C2*A^(rho2-1)*B3;
omega24 = C2*A^(rho2-1)*B4;


omega31 = C3*A^(rho3-1)*B1;
omega32 = C3*A^(rho3-1)*B2;
omega33 = C3*A^(rho3-1)*B3;
omega34 = C3*A^(rho3-1)*B4;

omega41 = C4*A^(rho4-1)*B1;
omega42 = C4*A^(rho4-1)*B2;
omega43 = C4*A^(rho4-1)*B3;
omega44 = C4*A^(rho4-1)*B4;

omega51 = C5*A^(rho5-1)*B1;
omega52 = C5*A^(rho5-1)*B2;
omega53 = C5*A^(rho5-1)*B3;
omega54 = C5*A^(rho5-1)*B4;

omega61 = C6*A^(rho6-1)*B1;
omega62 = C6*A^(rho6-1)*B2;
omega63 = C6*A^(rho6-1)*B3;
omega64 = C6*A^(rho6-1)*B4;

omegaf = [omega11 omega12 omega13 omega14;  
          omega21 omega22 omega23 omega24;  
          omega31 omega32 omega33 omega34;
          omega41 omega42 omega43 omega44;
          omega51 omega52 omega53 omega54;
          omega61 omega62 omega63 omega64]
inverseomega=omegaf'





