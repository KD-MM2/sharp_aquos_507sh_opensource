#
# ==[ Makefile ]================================================================
#
#  Project
#
#      Library for ethernet bridge tables.
#
#
#  Description
#
#      Process this file with automake to create Makefile.in
#
#
#  Copyright
#
#      Copyright 2005 by Jens G?tze
#      All rights reserved.
#
#      This program is free software; you can redistribute it and/or modify
#      it under the terms of the GNU General Public License as published by
#      the Free Software Foundation; either version 2 of the License, or
#      (at your option) any later version.
#
#      This program is distributed in the hope that it will be useful,
#      but WITHOUT ANY WARRANTY; without even the implied warranty of
#      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#      GNU General Public License for more details.
#
#      You should have received a copy of the GNU General Public License
#      along with this program; if not, write to the Free Software
#      Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307,
#      USA.
#
#
# ==============================================================================
#


MAINTAINERCLEANFILES        = Makefile.in

AM_CFLAGS                   = @CFLAGS@ -I../include
AM_LDFLAGS                  = @LDFLAGS@

EXTRA_DIST                  =

noinst_PROGRAMS             = ebtc_test1 ebtc_test2

ebtc_test1_SOURCES          = ../src/ebtc.c ebtc_test1.c util.c
ebtc_test2_SOURCES          = ../src/ebtc.c ebtc_test2.c util.c


