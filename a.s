	.text
	.syntax unified
	.eabi_attribute	67, "2.09"	@ Tag_conformance
	.cpu	mpcore
	.eabi_attribute	6, 6	@ Tag_CPU_arch
	.eabi_attribute	8, 1	@ Tag_ARM_ISA_use
	.eabi_attribute	9, 1	@ Tag_THUMB_ISA_use
	.fpu	vfpv2
	.eabi_attribute	34, 0	@ Tag_CPU_unaligned_access
	.eabi_attribute	17, 1	@ Tag_ABI_PCS_GOT_use
	.eabi_attribute	20, 1	@ Tag_ABI_FP_denormal
	.eabi_attribute	21, 0	@ Tag_ABI_FP_exceptions
	.eabi_attribute	23, 3	@ Tag_ABI_FP_number_model
	.eabi_attribute	24, 1	@ Tag_ABI_align_needed
	.eabi_attribute	25, 1	@ Tag_ABI_align_preserved
	.eabi_attribute	28, 1	@ Tag_ABI_VFP_args
	.eabi_attribute	38, 1	@ Tag_ABI_FP_16bit_format
	.eabi_attribute	18, 4	@ Tag_ABI_PCS_wchar_t
	.eabi_attribute	26, 2	@ Tag_ABI_enum_size
	.eabi_attribute	14, 0	@ Tag_ABI_PCS_R9_use
	.file	"a.c"
	.globl	xsprintf                        @ -- Begin function xsprintf
	.p2align	2
	.type	xsprintf,%function
	.code	32                              @ @xsprintf
xsprintf:
	.fnstart
@ %bb.0:
	.pad	#12
	sub	sp, sp, #12
	.save	{r11, lr}
	push	{r11, lr}
	.setfp	r11, sp
	mov	r11, sp
	.pad	#20
	sub	sp, sp, #20
	str	r3, [r11, #16]
	str	r2, [r11, #12]
	str	r1, [r11, #8]
	str	r0, [r11, #-4]
	add	r0, r11, #8
	str	r0, [r11, #-8]
	ldr	r1, [r11, #-4]
	ldr	r2, [r11, #-8]
	add	r0, sp, #8
	bl	vasprintf
	str	r0, [sp, #4]
	sub	r0, r11, #8
	ldr	r1, [sp, #8]
	str	r0, [sp]                        @ 4-byte Spill
	mov	r0, r1
	mov	sp, r11
	pop	{r11, lr}
	add	sp, sp, #12
	bx	lr
.Lfunc_end0:
	.size	xsprintf, .Lfunc_end0-xsprintf
	.cantunwind
	.fnend
                                        @ -- End function
	.globl	main                            @ -- Begin function main
	.p2align	2
	.type	main,%function
	.code	32                              @ @main
main:
	.fnstart
@ %bb.0:
	.pad	#16
	sub	sp, sp, #16
	ldr	r2, .LCPI1_0
	ldr	r3, .LCPI1_1
	str	r2, [sp, #12]
	str	r0, [sp, #8]
	str	r1, [sp, #4]
	str	r3, [sp]
	mov	r0, r2
	add	sp, sp, #16
	bx	lr
	.p2align	2
@ %bb.1:
.LCPI1_0:
	.long	0                               @ 0x0
.LCPI1_1:
	.long	123                             @ 0x7b
.Lfunc_end1:
	.size	main, .Lfunc_end1-main
	.cantunwind
	.fnend
                                        @ -- End function
	.ident	"Raspbian clang version 11.0.1-2+rpi1"
	.section	".note.GNU-stack","",%progbits
	.addrsig
	.addrsig_sym vasprintf
	.eabi_attribute	30, 6	@ Tag_ABI_optimization_goals
