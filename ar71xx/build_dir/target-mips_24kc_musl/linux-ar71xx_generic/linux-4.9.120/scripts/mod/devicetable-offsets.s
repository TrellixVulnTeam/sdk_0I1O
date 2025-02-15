	.section .mdebug.abi32
	.previous
	.nan	legacy
	.module	softfloat
	.module	oddspreg

 # -G value = 0, Arch = mips32r2, ISA = 33
 # GNU C89 (OpenWrt GCC 7.3.0 r7258-5eb055306f) version 7.3.0 (mips-openwrt-linux-musl)
 #	compiled by GNU C version 5.4.0 20160609, GMP version 6.1.2, MPFR version 4.0.1, MPC version 1.1.0, isl version none
 # GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
 # options passed:  -nostdinc -I ./arch/mips/include
 # -I ./arch/mips/include/generated/uapi -I ./arch/mips/include/generated
 # -I ./include -I ./arch/mips/include/uapi -I ./include/uapi
 # -I ./include/generated/uapi -I ./arch/mips/include/asm/mach-ath79
 # -I ./arch/mips/include/asm/mach-generic
 # -idirafter /home/lancer/workspace/gl-image/openwrt-18.06.git/staging_dir/target-mips_24kc_musl/usr/include
 # -D __KERNEL__ -D VMLINUX_LOAD_ADDRESS=0xffffffff80060000 -D DATAOFFSET=0
 # -D GAS_HAS_SET_HARDFLOAT -D TOOLCHAIN_SUPPORTS_VIRT -D CC_HAVE_ASM_GOTO
 # -D KBUILD_BASENAME="devicetable_offsets"
 # -D KBUILD_MODNAME="devicetable_offsets"
 # -isystem /home/lancer/workspace/gl-image/openwrt-18.06.git/staging_dir/toolchain-mips_24kc_gcc-7.3.0_musl/lib/gcc/mips-openwrt-linux-musl/7.3.0/include
 # -include ./include/linux/kconfig.h
 # -MD scripts/mod/.devicetable-offsets.s.d
 # scripts/mod/devicetable-offsets.c -G 0 -meb -mno-check-zero-division
 # -mabi=32 -mno-abicalls -mno-branch-likely -msoft-float -march=mips32r2
 # -mtune=34kc -mllsc -mplt -mips32r2 -mno-shared
 # -auxbase-strip scripts/mod/devicetable-offsets.s -g -Os -Wall -Wundef
 # -Wstrict-prototypes -Wno-trigraphs -Werror=implicit-function-declaration
 # -Wno-format-security -Wno-frame-address -Wformat-truncation=0
 # -Wformat-overflow=0 -Wno-int-in-bool-context -Wno-maybe-uninitialized
 # -Wframe-larger-than=1024 -Wno-unused-but-set-variable
 # -Wunused-const-variable=0 -Wdeclaration-after-statement
 # -Wno-pointer-sign -Werror=implicit-int -Werror=strict-prototypes
 # -Werror=date-time -Werror=incompatible-pointer-types -std=gnu90
 # -fno-strict-aliasing -fno-common -fno-pic -ffreestanding
 # -fno-delete-null-pointer-checks -fno-caller-saves -fstack-protector
 # -fomit-frame-pointer -fno-var-tracking-assignments
 # -femit-struct-debug-baseonly -fno-var-tracking -fno-strict-overflow
 # -fno-merge-all-constants -fmerge-constants -fstack-check=no
 # -fconserve-stack -fverbose-asm --param allow-store-data-races=0
 # options enabled:  -faggressive-loop-optimizations -falign-functions
 # -falign-jumps -falign-labels -falign-loops -fauto-inc-dec
 # -fbranch-count-reg -fchkp-check-incomplete-type -fchkp-check-read
 # -fchkp-check-write -fchkp-instrument-calls -fchkp-narrow-bounds
 # -fchkp-optimize -fchkp-store-bounds -fchkp-use-static-bounds
 # -fchkp-use-static-const-bounds -fchkp-use-wrappers -fcode-hoisting
 # -fcombine-stack-adjustments -fcompare-elim -fcprop-registers
 # -fcrossjumping -fcse-follow-jumps -fdefer-pop -fdelayed-branch
 # -fdevirtualize -fdevirtualize-speculatively -fdwarf2-cfi-asm
 # -fearly-inlining -feliminate-unused-debug-types
 # -fexpensive-optimizations -fforward-propagate -ffp-int-builtin-inexact
 # -ffunction-cse -fgcse -fgcse-lm -fgnu-runtime -fgnu-unique
 # -fguess-branch-probability -fhoist-adjacent-loads -fident
 # -fif-conversion -fif-conversion2 -findirect-inlining -finline
 # -finline-atomics -finline-functions -finline-functions-called-once
 # -finline-small-functions -fipa-bit-cp -fipa-cp -fipa-icf
 # -fipa-icf-functions -fipa-icf-variables -fipa-profile -fipa-pure-const
 # -fipa-ra -fipa-reference -fipa-sra -fipa-vrp -fira-hoist-pressure
 # -fira-share-save-slots -fira-share-spill-slots
 # -fisolate-erroneous-paths-dereference -fivopts -fkeep-static-consts
 # -fleading-underscore -flifetime-dse -flra-remat -flto-odr-type-merging
 # -fmath-errno -fmerge-constants -fmerge-debug-strings
 # -fmove-loop-invariants -fomit-frame-pointer -foptimize-sibling-calls
 # -fpartial-inlining -fpcc-struct-return -fpeephole -fpeephole2 -fplt
 # -fprefetch-loop-arrays -freorder-blocks -freorder-functions
 # -frerun-cse-after-loop -fsched-critical-path-heuristic
 # -fsched-dep-count-heuristic -fsched-group-heuristic -fsched-interblock
 # -fsched-last-insn-heuristic -fsched-rank-heuristic -fsched-spec
 # -fsched-spec-insn-heuristic -fsched-stalled-insns-dep -fschedule-fusion
 # -fschedule-insns2 -fsemantic-interposition -fshow-column -fshrink-wrap
 # -fshrink-wrap-separate -fsigned-zeros -fsplit-ivs-in-unroller
 # -fsplit-wide-types -fssa-backprop -fssa-phiopt -fstack-protector
 # -fstdarg-opt -fstore-merging -fstrict-volatile-bitfields -fsync-libcalls
 # -fthread-jumps -ftoplevel-reorder -ftrapping-math -ftree-bit-ccp
 # -ftree-builtin-call-dce -ftree-ccp -ftree-ch -ftree-coalesce-vars
 # -ftree-copy-prop -ftree-cselim -ftree-dce -ftree-dominator-opts
 # -ftree-dse -ftree-forwprop -ftree-fre -ftree-loop-if-convert
 # -ftree-loop-im -ftree-loop-ivcanon -ftree-loop-optimize
 # -ftree-parallelize-loops= -ftree-phiprop -ftree-pre -ftree-pta
 # -ftree-reassoc -ftree-scev-cprop -ftree-sink -ftree-slsr -ftree-sra
 # -ftree-switch-conversion -ftree-tail-merge -ftree-ter -ftree-vrp
 # -funit-at-a-time -fverbose-asm -fzero-initialized-in-bss -mdivide-traps
 # -mdouble-float -meb -mexplicit-relocs -mextern-sdata -mfp-exceptions
 # -mfp32 -mgp32 -mgpopt -mimadd -mllsc -mload-store-pairs -mlocal-sdata
 # -mlong32 -mlra -mlxc1-sxc1 -mmadd4 -mmemcpy -mmusl -mno-mdmx -mno-mips16
 # -mno-mips3d -modd-spreg -mplt -msoft-float -msplit-addresses

	.text
$Ltext0:
	.cfi_sections	.debug_frame
	.section	.text.startup,"ax",@progbits
	.align	2
	.globl	main
$LFB13 = .
	.file 1 "scripts/mod/devicetable-offsets.c"
	.loc 1 9 0
	.cfi_startproc
	.set	nomips16
	.set	nomicromips
	.ent	main
	.type	main, @function
main:
	.frame	$sp,0,$31		# vars= 0, regs= 0/0, args= 0, gp= 0
	.mask	0x00000000,0
	.fmask	0x00000000,0
 # scripts/mod/devicetable-offsets.c:10: 	DEVID(usb_device_id);
	.loc 1 10 0
#APP
 # 10 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_usb_device_id 24 sizeof(struct usb_device_id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:11: 	DEVID_FIELD(usb_device_id, match_flags);
	.loc 1 11 0
 # 11 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_usb_device_id_match_flags 0 offsetof(struct usb_device_id, match_flags)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:12: 	DEVID_FIELD(usb_device_id, idVendor);
	.loc 1 12 0
 # 12 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_usb_device_id_idVendor 2 offsetof(struct usb_device_id, idVendor)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:13: 	DEVID_FIELD(usb_device_id, idProduct);
	.loc 1 13 0
 # 13 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_usb_device_id_idProduct 4 offsetof(struct usb_device_id, idProduct)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:14: 	DEVID_FIELD(usb_device_id, bcdDevice_lo);
	.loc 1 14 0
 # 14 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_usb_device_id_bcdDevice_lo 6 offsetof(struct usb_device_id, bcdDevice_lo)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:15: 	DEVID_FIELD(usb_device_id, bcdDevice_hi);
	.loc 1 15 0
 # 15 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_usb_device_id_bcdDevice_hi 8 offsetof(struct usb_device_id, bcdDevice_hi)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:16: 	DEVID_FIELD(usb_device_id, bDeviceClass);
	.loc 1 16 0
 # 16 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_usb_device_id_bDeviceClass 10 offsetof(struct usb_device_id, bDeviceClass)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:17: 	DEVID_FIELD(usb_device_id, bDeviceSubClass);
	.loc 1 17 0
 # 17 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_usb_device_id_bDeviceSubClass 11 offsetof(struct usb_device_id, bDeviceSubClass)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:18: 	DEVID_FIELD(usb_device_id, bDeviceProtocol);
	.loc 1 18 0
 # 18 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_usb_device_id_bDeviceProtocol 12 offsetof(struct usb_device_id, bDeviceProtocol)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:19: 	DEVID_FIELD(usb_device_id, bInterfaceClass);
	.loc 1 19 0
 # 19 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_usb_device_id_bInterfaceClass 13 offsetof(struct usb_device_id, bInterfaceClass)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:20: 	DEVID_FIELD(usb_device_id, bInterfaceSubClass);
	.loc 1 20 0
 # 20 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_usb_device_id_bInterfaceSubClass 14 offsetof(struct usb_device_id, bInterfaceSubClass)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:21: 	DEVID_FIELD(usb_device_id, bInterfaceProtocol);
	.loc 1 21 0
 # 21 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_usb_device_id_bInterfaceProtocol 15 offsetof(struct usb_device_id, bInterfaceProtocol)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:22: 	DEVID_FIELD(usb_device_id, bInterfaceNumber);
	.loc 1 22 0
 # 22 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_usb_device_id_bInterfaceNumber 16 offsetof(struct usb_device_id, bInterfaceNumber)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:24: 	DEVID(hid_device_id);
	.loc 1 24 0
 # 24 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_hid_device_id 16 sizeof(struct hid_device_id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:25: 	DEVID_FIELD(hid_device_id, bus);
	.loc 1 25 0
 # 25 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_hid_device_id_bus 0 offsetof(struct hid_device_id, bus)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:26: 	DEVID_FIELD(hid_device_id, group);
	.loc 1 26 0
 # 26 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_hid_device_id_group 2 offsetof(struct hid_device_id, group)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:27: 	DEVID_FIELD(hid_device_id, vendor);
	.loc 1 27 0
 # 27 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_hid_device_id_vendor 4 offsetof(struct hid_device_id, vendor)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:28: 	DEVID_FIELD(hid_device_id, product);
	.loc 1 28 0
 # 28 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_hid_device_id_product 8 offsetof(struct hid_device_id, product)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:30: 	DEVID(ieee1394_device_id);
	.loc 1 30 0
 # 30 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_ieee1394_device_id 24 sizeof(struct ieee1394_device_id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:31: 	DEVID_FIELD(ieee1394_device_id, match_flags);
	.loc 1 31 0
 # 31 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_ieee1394_device_id_match_flags 0 offsetof(struct ieee1394_device_id, match_flags)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:32: 	DEVID_FIELD(ieee1394_device_id, vendor_id);
	.loc 1 32 0
 # 32 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_ieee1394_device_id_vendor_id 4 offsetof(struct ieee1394_device_id, vendor_id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:33: 	DEVID_FIELD(ieee1394_device_id, model_id);
	.loc 1 33 0
 # 33 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_ieee1394_device_id_model_id 8 offsetof(struct ieee1394_device_id, model_id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:34: 	DEVID_FIELD(ieee1394_device_id, specifier_id);
	.loc 1 34 0
 # 34 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_ieee1394_device_id_specifier_id 12 offsetof(struct ieee1394_device_id, specifier_id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:35: 	DEVID_FIELD(ieee1394_device_id, version);
	.loc 1 35 0
 # 35 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_ieee1394_device_id_version 16 offsetof(struct ieee1394_device_id, version)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:37: 	DEVID(pci_device_id);
	.loc 1 37 0
 # 37 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_pci_device_id 28 sizeof(struct pci_device_id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:38: 	DEVID_FIELD(pci_device_id, vendor);
	.loc 1 38 0
 # 38 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_pci_device_id_vendor 0 offsetof(struct pci_device_id, vendor)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:39: 	DEVID_FIELD(pci_device_id, device);
	.loc 1 39 0
 # 39 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_pci_device_id_device 4 offsetof(struct pci_device_id, device)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:40: 	DEVID_FIELD(pci_device_id, subvendor);
	.loc 1 40 0
 # 40 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_pci_device_id_subvendor 8 offsetof(struct pci_device_id, subvendor)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:41: 	DEVID_FIELD(pci_device_id, subdevice);
	.loc 1 41 0
 # 41 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_pci_device_id_subdevice 12 offsetof(struct pci_device_id, subdevice)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:42: 	DEVID_FIELD(pci_device_id, class);
	.loc 1 42 0
 # 42 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_pci_device_id_class 16 offsetof(struct pci_device_id, class)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:43: 	DEVID_FIELD(pci_device_id, class_mask);
	.loc 1 43 0
 # 43 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_pci_device_id_class_mask 20 offsetof(struct pci_device_id, class_mask)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:45: 	DEVID(ccw_device_id);
	.loc 1 45 0
 # 45 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_ccw_device_id 12 sizeof(struct ccw_device_id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:46: 	DEVID_FIELD(ccw_device_id, match_flags);
	.loc 1 46 0
 # 46 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_ccw_device_id_match_flags 0 offsetof(struct ccw_device_id, match_flags)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:47: 	DEVID_FIELD(ccw_device_id, cu_type);
	.loc 1 47 0
 # 47 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_ccw_device_id_cu_type 2 offsetof(struct ccw_device_id, cu_type)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:48: 	DEVID_FIELD(ccw_device_id, cu_model);
	.loc 1 48 0
 # 48 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_ccw_device_id_cu_model 6 offsetof(struct ccw_device_id, cu_model)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:49: 	DEVID_FIELD(ccw_device_id, dev_type);
	.loc 1 49 0
 # 49 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_ccw_device_id_dev_type 4 offsetof(struct ccw_device_id, dev_type)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:50: 	DEVID_FIELD(ccw_device_id, dev_model);
	.loc 1 50 0
 # 50 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_ccw_device_id_dev_model 7 offsetof(struct ccw_device_id, dev_model)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:52: 	DEVID(ap_device_id);
	.loc 1 52 0
 # 52 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_ap_device_id 8 sizeof(struct ap_device_id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:53: 	DEVID_FIELD(ap_device_id, dev_type);
	.loc 1 53 0
 # 53 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_ap_device_id_dev_type 2 offsetof(struct ap_device_id, dev_type)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:55: 	DEVID(css_device_id);
	.loc 1 55 0
 # 55 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_css_device_id 8 sizeof(struct css_device_id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:56: 	DEVID_FIELD(css_device_id, type);
	.loc 1 56 0
 # 56 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_css_device_id_type 1 offsetof(struct css_device_id, type)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:58: 	DEVID(serio_device_id);
	.loc 1 58 0
 # 58 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_serio_device_id 4 sizeof(struct serio_device_id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:59: 	DEVID_FIELD(serio_device_id, type);
	.loc 1 59 0
 # 59 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_serio_device_id_type 0 offsetof(struct serio_device_id, type)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:60: 	DEVID_FIELD(serio_device_id, proto);
	.loc 1 60 0
 # 60 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_serio_device_id_proto 3 offsetof(struct serio_device_id, proto)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:61: 	DEVID_FIELD(serio_device_id, id);
	.loc 1 61 0
 # 61 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_serio_device_id_id 2 offsetof(struct serio_device_id, id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:62: 	DEVID_FIELD(serio_device_id, extra);
	.loc 1 62 0
 # 62 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_serio_device_id_extra 1 offsetof(struct serio_device_id, extra)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:64: 	DEVID(acpi_device_id);
	.loc 1 64 0
 # 64 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_acpi_device_id 24 sizeof(struct acpi_device_id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:65: 	DEVID_FIELD(acpi_device_id, id);
	.loc 1 65 0
 # 65 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_acpi_device_id_id 0 offsetof(struct acpi_device_id, id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:66: 	DEVID_FIELD(acpi_device_id, cls);
	.loc 1 66 0
 # 66 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_acpi_device_id_cls 16 offsetof(struct acpi_device_id, cls)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:67: 	DEVID_FIELD(acpi_device_id, cls_msk);
	.loc 1 67 0
 # 67 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_acpi_device_id_cls_msk 20 offsetof(struct acpi_device_id, cls_msk)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:69: 	DEVID(pnp_device_id);
	.loc 1 69 0
 # 69 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_pnp_device_id 12 sizeof(struct pnp_device_id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:70: 	DEVID_FIELD(pnp_device_id, id);
	.loc 1 70 0
 # 70 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_pnp_device_id_id 0 offsetof(struct pnp_device_id, id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:72: 	DEVID(pnp_card_device_id);
	.loc 1 72 0
 # 72 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_pnp_card_device_id 76 sizeof(struct pnp_card_device_id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:73: 	DEVID_FIELD(pnp_card_device_id, devs);
	.loc 1 73 0
 # 73 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_pnp_card_device_id_devs 12 offsetof(struct pnp_card_device_id, devs)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:75: 	DEVID(pcmcia_device_id);
	.loc 1 75 0
 # 75 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_pcmcia_device_id 52 sizeof(struct pcmcia_device_id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:76: 	DEVID_FIELD(pcmcia_device_id, match_flags);
	.loc 1 76 0
 # 76 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_pcmcia_device_id_match_flags 0 offsetof(struct pcmcia_device_id, match_flags)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:77: 	DEVID_FIELD(pcmcia_device_id, manf_id);
	.loc 1 77 0
 # 77 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_pcmcia_device_id_manf_id 2 offsetof(struct pcmcia_device_id, manf_id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:78: 	DEVID_FIELD(pcmcia_device_id, card_id);
	.loc 1 78 0
 # 78 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_pcmcia_device_id_card_id 4 offsetof(struct pcmcia_device_id, card_id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:79: 	DEVID_FIELD(pcmcia_device_id, func_id);
	.loc 1 79 0
 # 79 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_pcmcia_device_id_func_id 6 offsetof(struct pcmcia_device_id, func_id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:80: 	DEVID_FIELD(pcmcia_device_id, function);
	.loc 1 80 0
 # 80 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_pcmcia_device_id_function 7 offsetof(struct pcmcia_device_id, function)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:81: 	DEVID_FIELD(pcmcia_device_id, device_no);
	.loc 1 81 0
 # 81 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_pcmcia_device_id_device_no 8 offsetof(struct pcmcia_device_id, device_no)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:82: 	DEVID_FIELD(pcmcia_device_id, prod_id_hash);
	.loc 1 82 0
 # 82 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_pcmcia_device_id_prod_id_hash 12 offsetof(struct pcmcia_device_id, prod_id_hash)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:84: 	DEVID(of_device_id);
	.loc 1 84 0
 # 84 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_of_device_id 196 sizeof(struct of_device_id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:85: 	DEVID_FIELD(of_device_id, name);
	.loc 1 85 0
 # 85 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_of_device_id_name 0 offsetof(struct of_device_id, name)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:86: 	DEVID_FIELD(of_device_id, type);
	.loc 1 86 0
 # 86 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_of_device_id_type 32 offsetof(struct of_device_id, type)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:87: 	DEVID_FIELD(of_device_id, compatible);
	.loc 1 87 0
 # 87 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_of_device_id_compatible 64 offsetof(struct of_device_id, compatible)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:89: 	DEVID(vio_device_id);
	.loc 1 89 0
 # 89 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_vio_device_id 64 sizeof(struct vio_device_id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:90: 	DEVID_FIELD(vio_device_id, type);
	.loc 1 90 0
 # 90 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_vio_device_id_type 0 offsetof(struct vio_device_id, type)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:91: 	DEVID_FIELD(vio_device_id, compat);
	.loc 1 91 0
 # 91 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_vio_device_id_compat 32 offsetof(struct vio_device_id, compat)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:93: 	DEVID(input_device_id);
	.loc 1 93 0
 # 93 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_input_device_id 160 sizeof(struct input_device_id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:94: 	DEVID_FIELD(input_device_id, flags);
	.loc 1 94 0
 # 94 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_input_device_id_flags 0 offsetof(struct input_device_id, flags)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:95: 	DEVID_FIELD(input_device_id, bustype);
	.loc 1 95 0
 # 95 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_input_device_id_bustype 4 offsetof(struct input_device_id, bustype)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:96: 	DEVID_FIELD(input_device_id, vendor);
	.loc 1 96 0
 # 96 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_input_device_id_vendor 6 offsetof(struct input_device_id, vendor)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:97: 	DEVID_FIELD(input_device_id, product);
	.loc 1 97 0
 # 97 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_input_device_id_product 8 offsetof(struct input_device_id, product)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:98: 	DEVID_FIELD(input_device_id, version);
	.loc 1 98 0
 # 98 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_input_device_id_version 10 offsetof(struct input_device_id, version)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:99: 	DEVID_FIELD(input_device_id, evbit);
	.loc 1 99 0
 # 99 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_input_device_id_evbit 12 offsetof(struct input_device_id, evbit)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:100: 	DEVID_FIELD(input_device_id, keybit);
	.loc 1 100 0
 # 100 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_input_device_id_keybit 16 offsetof(struct input_device_id, keybit)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:101: 	DEVID_FIELD(input_device_id, relbit);
	.loc 1 101 0
 # 101 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_input_device_id_relbit 112 offsetof(struct input_device_id, relbit)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:102: 	DEVID_FIELD(input_device_id, absbit);
	.loc 1 102 0
 # 102 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_input_device_id_absbit 116 offsetof(struct input_device_id, absbit)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:103: 	DEVID_FIELD(input_device_id, mscbit);
	.loc 1 103 0
 # 103 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_input_device_id_mscbit 124 offsetof(struct input_device_id, mscbit)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:104: 	DEVID_FIELD(input_device_id, ledbit);
	.loc 1 104 0
 # 104 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_input_device_id_ledbit 128 offsetof(struct input_device_id, ledbit)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:105: 	DEVID_FIELD(input_device_id, sndbit);
	.loc 1 105 0
 # 105 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_input_device_id_sndbit 132 offsetof(struct input_device_id, sndbit)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:106: 	DEVID_FIELD(input_device_id, ffbit);
	.loc 1 106 0
 # 106 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_input_device_id_ffbit 136 offsetof(struct input_device_id, ffbit)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:107: 	DEVID_FIELD(input_device_id, swbit);
	.loc 1 107 0
 # 107 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_input_device_id_swbit 152 offsetof(struct input_device_id, swbit)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:109: 	DEVID(eisa_device_id);
	.loc 1 109 0
 # 109 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_eisa_device_id 12 sizeof(struct eisa_device_id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:110: 	DEVID_FIELD(eisa_device_id, sig);
	.loc 1 110 0
 # 110 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_eisa_device_id_sig 0 offsetof(struct eisa_device_id, sig)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:112: 	DEVID(parisc_device_id);
	.loc 1 112 0
 # 112 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_parisc_device_id 8 sizeof(struct parisc_device_id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:113: 	DEVID_FIELD(parisc_device_id, hw_type);
	.loc 1 113 0
 # 113 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_parisc_device_id_hw_type 0 offsetof(struct parisc_device_id, hw_type)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:114: 	DEVID_FIELD(parisc_device_id, hversion);
	.loc 1 114 0
 # 114 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_parisc_device_id_hversion 2 offsetof(struct parisc_device_id, hversion)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:115: 	DEVID_FIELD(parisc_device_id, hversion_rev);
	.loc 1 115 0
 # 115 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_parisc_device_id_hversion_rev 1 offsetof(struct parisc_device_id, hversion_rev)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:116: 	DEVID_FIELD(parisc_device_id, sversion);
	.loc 1 116 0
 # 116 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_parisc_device_id_sversion 4 offsetof(struct parisc_device_id, sversion)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:118: 	DEVID(sdio_device_id);
	.loc 1 118 0
 # 118 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_sdio_device_id 12 sizeof(struct sdio_device_id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:119: 	DEVID_FIELD(sdio_device_id, class);
	.loc 1 119 0
 # 119 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_sdio_device_id_class 0 offsetof(struct sdio_device_id, class)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:120: 	DEVID_FIELD(sdio_device_id, vendor);
	.loc 1 120 0
 # 120 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_sdio_device_id_vendor 2 offsetof(struct sdio_device_id, vendor)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:121: 	DEVID_FIELD(sdio_device_id, device);
	.loc 1 121 0
 # 121 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_sdio_device_id_device 4 offsetof(struct sdio_device_id, device)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:123: 	DEVID(ssb_device_id);
	.loc 1 123 0
 # 123 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_ssb_device_id 6 sizeof(struct ssb_device_id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:124: 	DEVID_FIELD(ssb_device_id, vendor);
	.loc 1 124 0
 # 124 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_ssb_device_id_vendor 0 offsetof(struct ssb_device_id, vendor)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:125: 	DEVID_FIELD(ssb_device_id, coreid);
	.loc 1 125 0
 # 125 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_ssb_device_id_coreid 2 offsetof(struct ssb_device_id, coreid)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:126: 	DEVID_FIELD(ssb_device_id, revision);
	.loc 1 126 0
 # 126 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_ssb_device_id_revision 4 offsetof(struct ssb_device_id, revision)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:128: 	DEVID(bcma_device_id);
	.loc 1 128 0
 # 128 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_bcma_device_id 6 sizeof(struct bcma_device_id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:129: 	DEVID_FIELD(bcma_device_id, manuf);
	.loc 1 129 0
 # 129 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_bcma_device_id_manuf 0 offsetof(struct bcma_device_id, manuf)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:130: 	DEVID_FIELD(bcma_device_id, id);
	.loc 1 130 0
 # 130 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_bcma_device_id_id 2 offsetof(struct bcma_device_id, id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:131: 	DEVID_FIELD(bcma_device_id, rev);
	.loc 1 131 0
 # 131 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_bcma_device_id_rev 4 offsetof(struct bcma_device_id, rev)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:132: 	DEVID_FIELD(bcma_device_id, class);
	.loc 1 132 0
 # 132 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_bcma_device_id_class 5 offsetof(struct bcma_device_id, class)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:134: 	DEVID(virtio_device_id);
	.loc 1 134 0
 # 134 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_virtio_device_id 8 sizeof(struct virtio_device_id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:135: 	DEVID_FIELD(virtio_device_id, device);
	.loc 1 135 0
 # 135 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_virtio_device_id_device 0 offsetof(struct virtio_device_id, device)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:136: 	DEVID_FIELD(virtio_device_id, vendor);
	.loc 1 136 0
 # 136 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_virtio_device_id_vendor 4 offsetof(struct virtio_device_id, vendor)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:138: 	DEVID(hv_vmbus_device_id);
	.loc 1 138 0
 # 138 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_hv_vmbus_device_id 20 sizeof(struct hv_vmbus_device_id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:139: 	DEVID_FIELD(hv_vmbus_device_id, guid);
	.loc 1 139 0
 # 139 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_hv_vmbus_device_id_guid 0 offsetof(struct hv_vmbus_device_id, guid)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:141: 	DEVID(i2c_device_id);
	.loc 1 141 0
 # 141 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_i2c_device_id 24 sizeof(struct i2c_device_id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:142: 	DEVID_FIELD(i2c_device_id, name);
	.loc 1 142 0
 # 142 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_i2c_device_id_name 0 offsetof(struct i2c_device_id, name)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:144: 	DEVID(spi_device_id);
	.loc 1 144 0
 # 144 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_spi_device_id 36 sizeof(struct spi_device_id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:145: 	DEVID_FIELD(spi_device_id, name);
	.loc 1 145 0
 # 145 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_spi_device_id_name 0 offsetof(struct spi_device_id, name)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:147: 	DEVID(dmi_system_id);
	.loc 1 147 0
 # 147 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_dmi_system_id 332 sizeof(struct dmi_system_id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:148: 	DEVID_FIELD(dmi_system_id, matches);
	.loc 1 148 0
 # 148 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_dmi_system_id_matches 8 offsetof(struct dmi_system_id, matches)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:150: 	DEVID(platform_device_id);
	.loc 1 150 0
 # 150 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_platform_device_id 24 sizeof(struct platform_device_id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:151: 	DEVID_FIELD(platform_device_id, name);
	.loc 1 151 0
 # 151 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_platform_device_id_name 0 offsetof(struct platform_device_id, name)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:153: 	DEVID(mdio_device_id);
	.loc 1 153 0
 # 153 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_mdio_device_id 8 sizeof(struct mdio_device_id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:154: 	DEVID_FIELD(mdio_device_id, phy_id);
	.loc 1 154 0
 # 154 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_mdio_device_id_phy_id 0 offsetof(struct mdio_device_id, phy_id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:155: 	DEVID_FIELD(mdio_device_id, phy_id_mask);
	.loc 1 155 0
 # 155 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_mdio_device_id_phy_id_mask 4 offsetof(struct mdio_device_id, phy_id_mask)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:157: 	DEVID(zorro_device_id);
	.loc 1 157 0
 # 157 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_zorro_device_id 8 sizeof(struct zorro_device_id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:158: 	DEVID_FIELD(zorro_device_id, id);
	.loc 1 158 0
 # 158 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_zorro_device_id_id 0 offsetof(struct zorro_device_id, id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:160: 	DEVID(isapnp_device_id);
	.loc 1 160 0
 # 160 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_isapnp_device_id 12 sizeof(struct isapnp_device_id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:161: 	DEVID_FIELD(isapnp_device_id, vendor);
	.loc 1 161 0
 # 161 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_isapnp_device_id_vendor 4 offsetof(struct isapnp_device_id, vendor)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:162: 	DEVID_FIELD(isapnp_device_id, function);
	.loc 1 162 0
 # 162 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_isapnp_device_id_function 6 offsetof(struct isapnp_device_id, function)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:164: 	DEVID(ipack_device_id);
	.loc 1 164 0
 # 164 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_ipack_device_id 12 sizeof(struct ipack_device_id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:165: 	DEVID_FIELD(ipack_device_id, format);
	.loc 1 165 0
 # 165 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_ipack_device_id_format 0 offsetof(struct ipack_device_id, format)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:166: 	DEVID_FIELD(ipack_device_id, vendor);
	.loc 1 166 0
 # 166 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_ipack_device_id_vendor 4 offsetof(struct ipack_device_id, vendor)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:167: 	DEVID_FIELD(ipack_device_id, device);
	.loc 1 167 0
 # 167 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_ipack_device_id_device 8 offsetof(struct ipack_device_id, device)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:169: 	DEVID(amba_id);
	.loc 1 169 0
 # 169 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_amba_id 12 sizeof(struct amba_id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:170: 	DEVID_FIELD(amba_id, id);
	.loc 1 170 0
 # 170 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_amba_id_id 0 offsetof(struct amba_id, id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:171: 	DEVID_FIELD(amba_id, mask);
	.loc 1 171 0
 # 171 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_amba_id_mask 4 offsetof(struct amba_id, mask)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:173: 	DEVID(mips_cdmm_device_id);
	.loc 1 173 0
 # 173 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_mips_cdmm_device_id 1 sizeof(struct mips_cdmm_device_id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:174: 	DEVID_FIELD(mips_cdmm_device_id, type);
	.loc 1 174 0
 # 174 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_mips_cdmm_device_id_type 0 offsetof(struct mips_cdmm_device_id, type)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:176: 	DEVID(x86_cpu_id);
	.loc 1 176 0
 # 176 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_x86_cpu_id 12 sizeof(struct x86_cpu_id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:177: 	DEVID_FIELD(x86_cpu_id, feature);
	.loc 1 177 0
 # 177 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_x86_cpu_id_feature 6 offsetof(struct x86_cpu_id, feature)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:178: 	DEVID_FIELD(x86_cpu_id, family);
	.loc 1 178 0
 # 178 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_x86_cpu_id_family 2 offsetof(struct x86_cpu_id, family)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:179: 	DEVID_FIELD(x86_cpu_id, model);
	.loc 1 179 0
 # 179 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_x86_cpu_id_model 4 offsetof(struct x86_cpu_id, model)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:180: 	DEVID_FIELD(x86_cpu_id, vendor);
	.loc 1 180 0
 # 180 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_x86_cpu_id_vendor 0 offsetof(struct x86_cpu_id, vendor)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:182: 	DEVID(cpu_feature);
	.loc 1 182 0
 # 182 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_cpu_feature 2 sizeof(struct cpu_feature)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:183: 	DEVID_FIELD(cpu_feature, feature);
	.loc 1 183 0
 # 183 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_cpu_feature_feature 0 offsetof(struct cpu_feature, feature)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:185: 	DEVID(mei_cl_device_id);
	.loc 1 185 0
 # 185 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_mei_cl_device_id 56 sizeof(struct mei_cl_device_id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:186: 	DEVID_FIELD(mei_cl_device_id, name);
	.loc 1 186 0
 # 186 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_mei_cl_device_id_name 0 offsetof(struct mei_cl_device_id, name)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:187: 	DEVID_FIELD(mei_cl_device_id, uuid);
	.loc 1 187 0
 # 187 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_mei_cl_device_id_uuid 32 offsetof(struct mei_cl_device_id, uuid)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:188: 	DEVID_FIELD(mei_cl_device_id, version);
	.loc 1 188 0
 # 188 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_mei_cl_device_id_version 48 offsetof(struct mei_cl_device_id, version)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:190: 	DEVID(rio_device_id);
	.loc 1 190 0
 # 190 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_rio_device_id 8 sizeof(struct rio_device_id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:191: 	DEVID_FIELD(rio_device_id, did);
	.loc 1 191 0
 # 191 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_rio_device_id_did 0 offsetof(struct rio_device_id, did)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:192: 	DEVID_FIELD(rio_device_id, vid);
	.loc 1 192 0
 # 192 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_rio_device_id_vid 2 offsetof(struct rio_device_id, vid)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:193: 	DEVID_FIELD(rio_device_id, asm_did);
	.loc 1 193 0
 # 193 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_rio_device_id_asm_did 4 offsetof(struct rio_device_id, asm_did)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:194: 	DEVID_FIELD(rio_device_id, asm_vid);
	.loc 1 194 0
 # 194 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_rio_device_id_asm_vid 6 offsetof(struct rio_device_id, asm_vid)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:196: 	DEVID(ulpi_device_id);
	.loc 1 196 0
 # 196 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_ulpi_device_id 8 sizeof(struct ulpi_device_id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:197: 	DEVID_FIELD(ulpi_device_id, vendor);
	.loc 1 197 0
 # 197 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_ulpi_device_id_vendor 0 offsetof(struct ulpi_device_id, vendor)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:198: 	DEVID_FIELD(ulpi_device_id, product);
	.loc 1 198 0
 # 198 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_ulpi_device_id_product 2 offsetof(struct ulpi_device_id, product)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:200: 	DEVID(hda_device_id);
	.loc 1 200 0
 # 200 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_hda_device_id 20 sizeof(struct hda_device_id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:201: 	DEVID_FIELD(hda_device_id, vendor_id);
	.loc 1 201 0
 # 201 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_hda_device_id_vendor_id 0 offsetof(struct hda_device_id, vendor_id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:202: 	DEVID_FIELD(hda_device_id, rev_id);
	.loc 1 202 0
 # 202 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_hda_device_id_rev_id 4 offsetof(struct hda_device_id, rev_id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:203: 	DEVID_FIELD(hda_device_id, api_version);
	.loc 1 203 0
 # 203 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_hda_device_id_api_version 8 offsetof(struct hda_device_id, api_version)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:205: 	DEVID(fsl_mc_device_id);
	.loc 1 205 0
 # 205 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_fsl_mc_device_id 18 sizeof(struct fsl_mc_device_id)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:206: 	DEVID_FIELD(fsl_mc_device_id, vendor);
	.loc 1 206 0
 # 206 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_fsl_mc_device_id_vendor 0 offsetof(struct fsl_mc_device_id, vendor)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:207: 	DEVID_FIELD(fsl_mc_device_id, obj_type);
	.loc 1 207 0
 # 207 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_fsl_mc_device_id_obj_type 2 offsetof(struct fsl_mc_device_id, obj_type)	 #
 # 0 "" 2
 # scripts/mod/devicetable-offsets.c:210: }
	.loc 1 210 0
#NO_APP
	.set	noreorder
	.set	nomacro
	jr	$31	 #
	move	$2,$0	 #,
	.set	macro
	.set	reorder

	.end	main
	.cfi_endproc
$LFE13:
	.size	main, .-main
	.text
$Letext0:
	.file 2 "./include/linux/uuid.h"
	.file 3 "./include/asm-generic/int-ll64.h"
	.section	.debug_info,"",@progbits
$Ldebug_info0:
	.4byte	0xc5
	.2byte	0x4
	.4byte	$Ldebug_abbrev0
	.byte	0x4
	.uleb128 0x1
	.4byte	$LASF13
	.byte	0x1
	.4byte	$LASF14
	.4byte	$LASF15
	.4byte	$Ldebug_ranges0+0
	.4byte	0
	.4byte	$Ldebug_line0
	.uleb128 0x2
	.byte	0x1
	.byte	0x6
	.4byte	$LASF0
	.uleb128 0x2
	.byte	0x1
	.byte	0x8
	.4byte	$LASF1
	.uleb128 0x2
	.byte	0x2
	.byte	0x5
	.4byte	$LASF2
	.uleb128 0x2
	.byte	0x2
	.byte	0x7
	.4byte	$LASF3
	.uleb128 0x3
	.byte	0x4
	.byte	0x5
	.ascii	"int\000"
	.uleb128 0x2
	.byte	0x4
	.byte	0x7
	.4byte	$LASF4
	.uleb128 0x2
	.byte	0x8
	.byte	0x5
	.4byte	$LASF5
	.uleb128 0x2
	.byte	0x8
	.byte	0x7
	.4byte	$LASF6
	.uleb128 0x4
	.ascii	"u8\000"
	.byte	0x3
	.byte	0x10
	.4byte	0x2c
	.uleb128 0x5
	.4byte	0x5d
	.uleb128 0x2
	.byte	0x4
	.byte	0x5
	.4byte	$LASF7
	.uleb128 0x2
	.byte	0x4
	.byte	0x7
	.4byte	$LASF8
	.uleb128 0x2
	.byte	0x1
	.byte	0x6
	.4byte	$LASF9
	.uleb128 0x2
	.byte	0x1
	.byte	0x2
	.4byte	$LASF10
	.uleb128 0x6
	.4byte	0x67
	.4byte	0x98
	.uleb128 0x7
	.4byte	0x48
	.byte	0xf
	.byte	0
	.uleb128 0x5
	.4byte	0x88
	.uleb128 0x8
	.4byte	$LASF11
	.byte	0x2
	.byte	0x2c
	.4byte	0x98
	.uleb128 0x8
	.4byte	$LASF12
	.byte	0x2
	.byte	0x2d
	.4byte	0x98
	.uleb128 0x9
	.4byte	$LASF16
	.byte	0x1
	.byte	0x8
	.4byte	0x41
	.4byte	$LFB13
	.4byte	$LFE13-$LFB13
	.uleb128 0x1
	.byte	0x9c
	.byte	0
	.section	.debug_abbrev,"",@progbits
$Ldebug_abbrev0:
	.uleb128 0x1
	.uleb128 0x11
	.byte	0x1
	.uleb128 0x25
	.uleb128 0xe
	.uleb128 0x13
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x1b
	.uleb128 0xe
	.uleb128 0x55
	.uleb128 0x17
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x10
	.uleb128 0x17
	.byte	0
	.byte	0
	.uleb128 0x2
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.byte	0
	.byte	0
	.uleb128 0x3
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x8
	.byte	0
	.byte	0
	.uleb128 0x4
	.uleb128 0x16
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x5
	.uleb128 0x26
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x6
	.uleb128 0x1
	.byte	0x1
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x7
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x8
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0x9
	.uleb128 0x2e
	.byte	0
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x6
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x2117
	.uleb128 0x19
	.byte	0
	.byte	0
	.byte	0
	.section	.debug_aranges,"",@progbits
	.4byte	0x1c
	.2byte	0x2
	.4byte	$Ldebug_info0
	.byte	0x4
	.byte	0
	.2byte	0
	.2byte	0
	.4byte	$LFB13
	.4byte	$LFE13-$LFB13
	.4byte	0
	.4byte	0
	.section	.debug_ranges,"",@progbits
$Ldebug_ranges0:
	.4byte	$LFB13
	.4byte	$LFE13
	.4byte	0
	.4byte	0
	.section	.debug_line,"",@progbits
$Ldebug_line0:
	.section	.debug_str,"MS",@progbits,1
$LASF5:
	.ascii	"long long int\000"
$LASF4:
	.ascii	"unsigned int\000"
$LASF1:
	.ascii	"unsigned char\000"
$LASF16:
	.ascii	"main\000"
$LASF11:
	.ascii	"uuid_le_index\000"
$LASF13:
	.ascii	"GNU C89 7.3.0 -G 0 -meb -mno-check-zero-division -mabi=3"
	.ascii	"2 -mno-abicalls -mno-branch-likely -msoft-float -march=m"
	.ascii	"ips32r2 -mtune=34kc -mllsc -mplt -mips32r2 -mno-shared -"
	.ascii	"g -Os -std=gnu90 -fno-strict-aliasing -fno-common -fno-p"
	.ascii	"ic -ffreestanding -fno-delete-null-pointer-checks -fno-c"
	.ascii	"aller-saves -fstack-protector -fomit-frame-pointer -fno-"
	.ascii	"var-tracking-assignments -femit-struct-debug-baseonly -f"
	.ascii	"no-var-tracking -fno-strict-overflow -fno-merge-all-cons"
	.ascii	"tants -fmerge-constants -fstack-check=no -fconserve-stac"
	.ascii	"k --param allow-store-data-races=0\000"
$LASF8:
	.ascii	"long unsigned int\000"
$LASF6:
	.ascii	"long long unsigned int\000"
$LASF15:
	.ascii	"/home/lancer/workspace/gl-image/openwrt-18.06.git/build_"
	.ascii	"dir/target-mips_24kc_musl/linux-ar71xx_generic/linux-4.9"
	.ascii	".120\000"
$LASF9:
	.ascii	"char\000"
$LASF7:
	.ascii	"long int\000"
$LASF2:
	.ascii	"short int\000"
$LASF10:
	.ascii	"_Bool\000"
$LASF3:
	.ascii	"short unsigned int\000"
$LASF0:
	.ascii	"signed char\000"
$LASF14:
	.ascii	"scripts/mod/devicetable-offsets.c\000"
$LASF12:
	.ascii	"uuid_be_index\000"
	.ident	"GCC: (OpenWrt GCC 7.3.0 r7258-5eb055306f) 7.3.0"
	.section	.note.GNU-stack,"",@progbits
