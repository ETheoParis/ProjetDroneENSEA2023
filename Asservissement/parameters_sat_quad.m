clear all;

%--------------parameters_QUADRIROTOR----------------
m=0.650;
g=9.8;
%----------------------------------------------------

%Les paramètres de la commande.
%Altitude :---------------------------
az1=3;
az2=2;
% az1=0.001;
% az2=0.002;
%Yaw control :------------------------
apsi1=3;
apsi2=2.5;
%apsi1=2.374;
%apsi2=0.08;
%Roll control :-----------------------
Mphi1=2;
Mphi2=1;
Mphi3=0.2;
Mphi4=0.1;
%Pitch control :----------------------
Mtheta1=2;
Mtheta2=1;
Mtheta3=0.2;
Mtheta4=0.1;
%1-4 T :
T=1/14;
%-------------------------------------
