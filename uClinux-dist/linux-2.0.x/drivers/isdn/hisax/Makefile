L_OBJS :=
M_OBJS :=
LX_OBJS :=
MX_OBJS :=
O_OBJS :=
OX_OBJS :=
L_TARGET :=
O_TARGET :=

O_OBJS := isdnl1.o tei.o isdnl2.o isdnl3.o \
          lmgr.o q931.o callc.o fsm.o cert.o

# EXTRA_CFLAGS += -S

ifeq ($(CONFIG_HISAX_EURO),y)
	 O_OBJS += l3dss1.o
endif

ifeq ($(CONFIG_HISAX_NI1),y)
       O_OBJS += l3ni1.o
endif

ifeq ($(CONFIG_HISAX_1TR6),y)
	 O_OBJS += l3_1tr6.o
endif

ISAC_OBJ :=
ARCOFI_OBJ :=
HSCX_OBJ :=
ISAR_OBJ :=
HFC_OBJ :=
HFC_2BDS0 :=

ifeq ($(CONFIG_HISAX_16_0),y)
	 O_OBJS += teles0.o
	 ISAC_OBJ := isac.o
	 HSCX_OBJ := hscx.o
endif

ifeq ($(CONFIG_HISAX_16_3),y)
	 O_OBJS += teles3.o
	 ISAC_OBJ := isac.o
	 HSCX_OBJ := hscx.o
endif

ifeq ($(CONFIG_HISAX_TELESPCI),y)
	 O_OBJS += telespci.o
	 ISAC_OBJ := isac.o
	 HSCX_OBJ := hscx.o
endif

ifeq ($(CONFIG_HISAX_S0BOX),y)
	 O_OBJS += s0box.o
	 ISAC_OBJ := isac.o
	 HSCX_OBJ := hscx.o
endif

ifeq ($(CONFIG_HISAX_AVM_A1),y)
	 O_OBJS += avm_a1.o
	 ISAC_OBJ := isac.o
	 HSCX_OBJ := hscx.o
endif

ifeq ($(CONFIG_HISAX_AVM_A1_PCMCIA),y)
	 O_OBJS += avm_a1p.o
 	 ISAC_OBJ := isac.o
	 HSCX_OBJ := hscx.o
endif
 
ifeq ($(CONFIG_HISAX_FRITZPCI),y)
	 O_OBJS += avm_pci.o
 	 ISAC_OBJ := isac.o
endif


ifeq ($(CONFIG_HISAX_ELSA),y)
	 O_OBJS += elsa.o
	 ISAC_OBJ := isac.o
	 HSCX_OBJ := hscx.o
	 ARCOFI_OBJ := arcofi.o
endif

ifeq ($(CONFIG_HISAX_IX1MICROR2),y)
	 O_OBJS += ix1_micro.o
	 ISAC_OBJ := isac.o
	 HSCX_OBJ := hscx.o
endif

ifeq ($(CONFIG_HISAX_DIEHLDIVA),y)
	 O_OBJS += diva.o
	 ISAC_OBJ := isac.o
	 HSCX_OBJ := hscx.o
endif

ifeq ($(CONFIG_HISAX_ASUSCOM),y)
	 O_OBJS += asuscom.o
	 ISAC_OBJ := isac.o
	 HSCX_OBJ := hscx.o
endif

ifeq ($(CONFIG_HISAX_TELEINT),y)
	 O_OBJS += teleint.o
	 ISAC_OBJ := isac.o
	 HFC_OBJ := hfc_2bs0.o
endif

ifeq ($(CONFIG_HISAX_SEDLBAUER),y)
	 O_OBJS += sedlbauer.o
	 ISAC_OBJ := isac.o
	 HSCX_OBJ := hscx.o
	 ISAR_OBJ := isar.o
endif

ifeq ($(CONFIG_HISAX_SPORTSTER),y)
	 O_OBJS += sportster.o
	 ISAC_OBJ := isac.o
	 HSCX_OBJ := hscx.o
endif

ifeq ($(CONFIG_HISAX_MIC),y)
	 O_OBJS += mic.o
	 ISAC_OBJ := isac.o
	 HSCX_OBJ := hscx.o
endif

ifeq ($(CONFIG_HISAX_NETJET),y)
	 O_OBJS += netjet.o
	 ISAC_OBJ := isac.o
endif

ifeq ($(CONFIG_HISAX_TELES3C),y)
	 O_OBJS += teles3c.o
	 HFC_2BDS0 := hfc_2bds0.o
endif

ifeq ($(CONFIG_HISAX_NICCY),y)
	 O_OBJS += niccy.o
	 ISAC_OBJ := isac.o
	 HSCX_OBJ := hscx.o
endif

O_OBJS += $(ISAC_OBJ) $(HSCX_OBJ) $(ISAR_OBJ) $(ARCOFI_OBJ) 
O_OBJS += $(HFC_OBJ) $(HFC_2BDS0)
OX_OBJS += config.o

O_TARGET :=

ifeq ($(CONFIG_ISDN_DRV_HISAX),y)
  O_TARGET += hisax.o
else
  ifeq ($(CONFIG_ISDN_DRV_HISAX),m)
    O_TARGET += hisax.o
    M_OBJS += hisax.o
  endif
endif


include $(TOPDIR)/Rules.make

MD5FILES += isac.c isdnl1.c isdnl2.c isdnl3.c \
	    tei.c callc.c cert.c l3dss1.c l3_1tr6.c elsa.c

CERT = $(shell md5sum -c md5sums.asc >> /dev/null;echo $$?)

cert.o:	$(MD5FILES) md5sums.asc
	$(CC) $(CFLAGS) $(EXTRA_CFLAGS) -D CERTIFICATION=$(CERT) -c -o cert.o cert.c

