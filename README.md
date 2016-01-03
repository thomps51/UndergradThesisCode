# UndergradThesisCode
C++ code from undergrad thesis

This code was designed to be able to pick particles correctly in the following complex production and decay of the higgs boson.

Some quick and dirty explanation of the picture below requires a little bit of physics:
gluons (g) : particles of the strong force that binds protons together in atoms, and binds quarks together to form protons.  Ever thought it was strange that protons stuck together despite having the same electric charge?  These particles are the culprit.
quarks (q): particles that make up protons and neutrons.  The q's in the picture can only be u,d,s,c, or b quarks (not t).
top quark (t): the heaviest of the 6 quarks by quite a margin
higgs boson (H): particle exicitation of the field that gives particles their mass (go to wikipedia if you need more than that - this bit of physics is more complicated than I can do in a simple explanation here). 
W boson (W): carrier of the weak force, which mediates radioactive decay.
leptons (l): a class of charged particles that includes electrons, muons, and taus.
neutrinos (nu symbol): ghostly particles that barely interact at all that are produced in Weak interactions such as radioactive decay and nuclear fission (fun fact - a neutrino beam can be used to neutralise nuclear bombs).

So we read this picture from left to right:  2 gluons (from the colliding protons) split into top quarks, two of which fuse to produce a higgs boson, which decays to 2 W bosons, one decaying to quarks and one decaying to a lepton and a corresponding neutrino.  The other top quarks on the periphery decay to a W boson + quark, and the W's decay to 2 quarks and a lepton + neutrino.


![Alt text](ttHeasy.png?raw=true "Title")

For a given physics event, you know whether a particle is a "quark" - q - or a "lepton" - l - and you want to know which q's and l came from the H -  the Higgs boson. The nu'si (neutrinos) make things more difficult because they are not seen in the detector.  We can however measure the "missing" momentum in the event in the plane transverse to the beamline, and use this to calculate the momentum of each of the nu's.  This calucation is rather complicated however, and it involves solving a system of 4 equations, 2 of which are quadratic.  There are 4 possible solutions for each of the momentum components (x,y,x) of each the nu's, making for a nearly untractable problem. A suitible solution to this problem was never found (mostly because another undergrad could not find a way to make mathematica - which I was surprised to learn has c++ - and ROOT play nice with each other), this code only serves as a proof of concept that uses simulated data and the actual values of the nu's momentum to find the correct particles.    
