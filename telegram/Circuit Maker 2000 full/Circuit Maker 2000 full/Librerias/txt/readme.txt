MOTOROLA Analog IC's SPICE libraries 
Pulse Width Modulator Controllers ***************************** 
This library is intended to provide the designer with comprehensive SPICE models 
to let him quickly assess the behavior of a typical integrated circuit. It is 
NOT intended to replace the breadboard phase, but it will rather help the 
designer to rapidly figure out how the circuit works prior to the experimental 
phase. Two syntaxes are proposed: INTUSOFT's IsSpice4 and MICROSIM's PSpice. 
IsSpice4 implements the Berkeley B element structures to provide the SPICE 
developer with a set of Analog Behavioral Modeling (ABM) features. The files 
with an I extension are IsSpice4 compatible. MICROSIM implements the ABM a bit 
differently, but the models are very close. The files with a P extension are 
PSpice compatible. They require the version 6.2a or higher. 
MC33363: the model does not include the thermal shutdown. It correctly takes 
into account the decreasing level of the internal current source at power-on. 
The UIC keyword is mandatory to start the model. The new model revision now 
implements a simplified MOSFET model. The designer simply enters the RDS(ON) of 
the product he uses (MC33363A, B or MC33365). 
MC3337X: two models are available: AC and switched. The AC model allows the 
simulation of FLYBACK converters operating either in Discontinuous Conduction 
Mode (DCM) or Continuous Conduction Mode (CCM). The DC point is automatically 
evaluated and the user just needs to feed the model with the primary inductance 
value. The transformer's ratio is externally provided. The switched model 
provides an easy mean to simulate a complete SMPS operating in either mode, DCM 
or CCM. While the AC model is limited to FLYBACKs, the transient model can also 
be used in a FORWARD application. To provide a unique flexible model, the 
transient model needs to know what reference of the Mc3337X the designer will 
use. Correct Ipeak and internal RDS(ON) values are needed. These values are 
provided in the .LIB file. Two application examples are given and describe a 
typical primary regulated FLYBACK: AC_PRIM and TRAN_PRIM. AC_PRIM details how to 
conduct an AC sweep and generate the Bode plot, while TRAN_PRIM conducts a real 
transient analysis. The component's values are given for information only, they 
do NOT correspond to a real design. The PDF files describe the electrical 
connections of both examples and will help the designer to modify his components 
values. These two application schematic simulate on both latest INTUSOFT and 
MICROSIM demo versions. 

Battery Chargers ************** 

MC33341 is a versatile battery charger used to design accurate power supplies 
with a few surrounding elements. The SPICE model extensively uses ABM features 
but the output stage is made in a discrete form, to give the simulation a higher 
precision. Two syntaxes are proposed: INTUSOFT's IsSpice4 and MICROSIM's PSpice. 
IsSpice4 implements the Berkeley B element structures to provide the SPICE 
developer with a set of Analog Behavioral Modeling (ABM) features. The files 
with an I extension are IsSpice4 compatible. MICROSIM implements the ABM a bit 
differently, but the models are very close. The files with a P extension are 
PSpice compatible. They require the version 6.2a or higher. MC33341: the 
internal logical functions are implemented in ABM, while the external stage is 
made with discrete parts. 
