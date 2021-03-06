###################################################################
# This Makefile was created using the CreateProject.sh script
# for project Systematics.
# CreateProject.sh is part of Bayesian Analysis Toolkit (BAT).
# BAT can be downloaded from http://www.mppmu.mpg.de/bat
###################################################################
#
# Run 'make' to compile the program and 'make clean' to remove
# all compiled parts and 'clean' the directory.
#
# You might need to adjust the CFLAGS and LIBS based on the BAT
# installation on your system. Consult the gmake manual for details.
#
###################################################################

# Root variables
ROOTCFLAGS   := $(shell root-config --cflags)
ROOTLIBS     := $(shell root-config --libs) -lMinuit

#ROOTLIBS     += -lRooFitCore -lRooFit -lRooStats -lFoam -lMathMore

# compiler and flags
CXX          = g++
CXXFLAGS     =  -g -Wall -fPIC -Wno-deprecated -O2
LD           = /usr/bin/ld
LDFLAGS      =  -g -O2
SOFLAGS      = -shared

# standard commands
RM           = rm -f
MV           = mv
ECHO         = echo
CINT         = /home/osg/manageTier3SW/ATLASLocalRootBase/i686/root/5.34.07-i686-slc5-gcc4.3/bin/rootcint

# add ROOT flags
CXXFLAGS    += $(ROOTCFLAGS) 

# ----------------------------------------------------------------------
# The following definitions depend on the setup of the system where
# the project is being compiled. If BAT is installed in the standard
# system search path or the installation directory is defined in the
# BATINSTALLDIR environmental variable then the lines below are correct
# and the compilation will work
CXXFLAGS    += -I. -I./include -I$(BATINSTALLDIR)/include
LIBS        += -L$(BATINSTALLDIR)/lib -lBATmodels -lBATmtf -lBAT $(ROOTLIBS)

@CUBA_TRUELIBS        +=  -lcuba

# ----------------------------------------------------------------------
# don't change lines below unless you know what you're doing
#

CXXOBJS      =
EXEOBJS      =
MYPROGS     = \
	runSystematics

GARBAGE      = $(CXXOBJS) $(EXEOBJS) *.o *~ link.d $(MYPROGS)


# targets
all : project

%.o : %.cxx
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
	$(RM) $(GARBAGE)

project : runSystematics.cxx
	$(CXX) $(CXXFLAGS) -c $<
	$(CXX) $(LDFLAGS) runSystematics.o $(LIBS) -o runSystematics

print :
	echo compiler  : $(CXX)
	echo c++ objs  : $(CXXOBJS)
	echo c++ flags : $(CXXFLAGS)
	echo libs      : $(LIBS)
	echo so flags  : $(SOFLAGS)

	echo rootlibs  : $(ROOTLIBS)

