	.text
	.file	"leftover2.cc"
	.section	.text.startup,"ax",@progbits
	.align	16, 0x90
	.type	__cxx_global_var_init,@function
__cxx_global_var_init:                  # @__cxx_global_var_init
	.cfi_startproc
# BB#0:
	pushq	%rbp
.Ltmp0:
	.cfi_def_cfa_offset 16
.Ltmp1:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
.Ltmp2:
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movabsq	$_ZStL8__ioinit, %rdi
	callq	_ZNSt8ios_base4InitC1Ev
	movabsq	$_ZNSt8ios_base4InitD1Ev, %rdi
	movabsq	$_ZStL8__ioinit, %rsi
	movabsq	$__dso_handle, %rdx
	callq	__cxa_atexit
	movl	%eax, -4(%rbp)          # 4-byte Spill
	addq	$16, %rsp
	popq	%rbp
	retq
.Lfunc_end0:
	.size	__cxx_global_var_init, .Lfunc_end0-__cxx_global_var_init
	.cfi_endproc

	.text
	.globl	main
	.align	16, 0x90
	.type	main,@function
main:                                   # @main
	.cfi_startproc
# BB#0:
	pushq	%rbp
.Ltmp3:
	.cfi_def_cfa_offset 16
.Ltmp4:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
.Ltmp5:
	.cfi_def_cfa_register %rbp
	subq	$64, %rsp
	movabsq	$.L.str, %rax
	movl	$0, -4(%rbp)
	movq	%rax, -16(%rbp)
	movq	$12345678, -24(%rbp)    # imm = 0xBC614E
	movl	$1, -28(%rbp)
.LBB1_1:                                # =>This Inner Loop Header: Depth=1
	cmpl	$10, -28(%rbp)
	jge	.LBB1_6
# BB#2:                                 #   in Loop: Header=BB1_1 Depth=1
	movq	-24(%rbp), %rdi
	movl	-28(%rbp), %esi
	callq	_Z4leftmj
	movabsq	$_ZSt4cout, %rdi
	movq	%rax, %rsi
	callq	_ZNSolsEm
	movabsq	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %rsi
	movq	%rax, %rdi
	callq	_ZNSolsEPFRSoS_E
	movq	-16(%rbp), %rdi
	movl	-28(%rbp), %esi
	movq	%rax, -48(%rbp)         # 8-byte Spill
	callq	_Z4leftPKci
	movabsq	$_ZSt4cout, %rdi
	movq	%rax, -40(%rbp)
	movq	-40(%rbp), %rsi
	callq	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movabsq	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %rsi
	movq	%rax, %rdi
	callq	_ZNSolsEPFRSoS_E
	movq	-40(%rbp), %rsi
	cmpq	$0, %rsi
	movq	%rax, -56(%rbp)         # 8-byte Spill
	movq	%rsi, -64(%rbp)         # 8-byte Spill
	je	.LBB1_4
# BB#3:                                 #   in Loop: Header=BB1_1 Depth=1
	movq	-64(%rbp), %rdi         # 8-byte Reload
	callq	_ZdaPv
.LBB1_4:                                #   in Loop: Header=BB1_1 Depth=1
	jmp	.LBB1_5
.LBB1_5:                                #   in Loop: Header=BB1_1 Depth=1
	movl	-28(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -28(%rbp)
	jmp	.LBB1_1
.LBB1_6:
	xorl	%eax, %eax
	addq	$64, %rsp
	popq	%rbp
	retq
.Lfunc_end1:
	.size	main, .Lfunc_end1-main
	.cfi_endproc

	.globl	_Z4leftmj
	.align	16, 0x90
	.type	_Z4leftmj,@function
_Z4leftmj:                              # @_Z4leftmj
	.cfi_startproc
# BB#0:
	pushq	%rbp
.Ltmp6:
	.cfi_def_cfa_offset 16
.Ltmp7:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
.Ltmp8:
	.cfi_def_cfa_register %rbp
	movq	%rdi, -16(%rbp)
	movl	%esi, -20(%rbp)
	movl	$1, -24(%rbp)
	movq	-16(%rbp), %rdi
	movq	%rdi, -32(%rbp)
	cmpl	$0, -20(%rbp)
	je	.LBB2_2
# BB#1:
	cmpq	$0, -16(%rbp)
	jne	.LBB2_3
.LBB2_2:
	movq	$0, -8(%rbp)
	jmp	.LBB2_12
.LBB2_3:
	jmp	.LBB2_4
.LBB2_4:                                # =>This Inner Loop Header: Depth=1
	movl	$10, %eax
	movl	%eax, %ecx
	movq	-32(%rbp), %rax
	xorl	%edx, %edx
                                        # 
	divq	%rcx
	movq	%rax, -32(%rbp)
	cmpq	$0, %rax
	je	.LBB2_6
# BB#5:                                 #   in Loop: Header=BB2_4 Depth=1
	movl	-24(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -24(%rbp)
	jmp	.LBB2_4
.LBB2_6:
	movl	-24(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jbe	.LBB2_11
# BB#7:
	movl	-24(%rbp), %eax
	subl	-20(%rbp), %eax
	movl	%eax, -20(%rbp)
.LBB2_8:                                # =>This Inner Loop Header: Depth=1
	movl	-20(%rbp), %eax
	movl	%eax, %ecx
	addl	$-1, %ecx
	movl	%ecx, -20(%rbp)
	cmpl	$0, %eax
	je	.LBB2_10
# BB#9:                                 #   in Loop: Header=BB2_8 Depth=1
	movl	$10, %eax
	movl	%eax, %ecx
	movq	-16(%rbp), %rax
	xorl	%edx, %edx
                                        # 
	divq	%rcx
	movq	%rax, -16(%rbp)
	jmp	.LBB2_8
.LBB2_10:
	movq	-16(%rbp), %rax
	movq	%rax, -8(%rbp)
	jmp	.LBB2_12
.LBB2_11:
	movq	-16(%rbp), %rax
	movq	%rax, -8(%rbp)
.LBB2_12:
	movq	-8(%rbp), %rax
	popq	%rbp
	retq
.Lfunc_end2:
	.size	_Z4leftmj, .Lfunc_end2-_Z4leftmj
	.cfi_endproc

	.globl	_Z4leftPKci
	.align	16, 0x90
	.type	_Z4leftPKci,@function
_Z4leftPKci:                            # @_Z4leftPKci
	.cfi_startproc
# BB#0:
	pushq	%rbp
.Ltmp9:
	.cfi_def_cfa_offset 16
.Ltmp10:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
.Ltmp11:
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	cmpl	$0, -12(%rbp)
	jge	.LBB3_2
# BB#1:
	movl	$0, -12(%rbp)
.LBB3_2:
	movq	$-1, %rax
	movl	-12(%rbp), %ecx
	addl	$1, %ecx
	movslq	%ecx, %rdx
	cmpq	$0, %rdx
	cmovlq	%rax, %rdx
	movq	%rdx, %rdi
	callq	_Znam
	movq	%rax, -24(%rbp)
	movl	$0, -28(%rbp)
.LBB3_3:                                # =>This Inner Loop Header: Depth=1
	xorl	%eax, %eax
	movb	%al, %cl
	movl	-28(%rbp), %eax
	cmpl	-12(%rbp), %eax
	movb	%cl, -29(%rbp)          # 1-byte Spill
	jge	.LBB3_5
# BB#4:                                 #   in Loop: Header=BB3_3 Depth=1
	movslq	-28(%rbp), %rax
	movq	-8(%rbp), %rcx
	cmpb	$0, (%rcx,%rax)
	setne	%dl
	movb	%dl, -29(%rbp)          # 1-byte Spill
.LBB3_5:                                #   in Loop: Header=BB3_3 Depth=1
	movb	-29(%rbp), %al          # 1-byte Reload
	testb	$1, %al
	jne	.LBB3_6
	jmp	.LBB3_8
.LBB3_6:                                #   in Loop: Header=BB3_3 Depth=1
	movslq	-28(%rbp), %rax
	movq	-8(%rbp), %rcx
	movb	(%rcx,%rax), %dl
	movslq	-28(%rbp), %rax
	movq	-24(%rbp), %rcx
	movb	%dl, (%rcx,%rax)
# BB#7:                                 #   in Loop: Header=BB3_3 Depth=1
	movl	-28(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -28(%rbp)
	jmp	.LBB3_3
.LBB3_8:
	jmp	.LBB3_9
.LBB3_9:                                # =>This Inner Loop Header: Depth=1
	movl	-28(%rbp), %eax
	cmpl	-12(%rbp), %eax
	jge	.LBB3_11
# BB#10:                                #   in Loop: Header=BB3_9 Depth=1
	movl	-28(%rbp), %eax
	movl	%eax, %ecx
	addl	$1, %ecx
	movl	%ecx, -28(%rbp)
	movslq	%eax, %rdx
	movq	-24(%rbp), %rsi
	movb	$0, (%rsi,%rdx)
	jmp	.LBB3_9
.LBB3_11:
	movq	-24(%rbp), %rax
	addq	$32, %rsp
	popq	%rbp
	retq
.Lfunc_end3:
	.size	_Z4leftPKci, .Lfunc_end3-_Z4leftPKci
	.cfi_endproc

	.section	.text.startup,"ax",@progbits
	.align	16, 0x90
	.type	_GLOBAL__sub_I_leftover2.cc,@function
_GLOBAL__sub_I_leftover2.cc:            # @_GLOBAL__sub_I_leftover2.cc
	.cfi_startproc
# BB#0:
	pushq	%rbp
.Ltmp12:
	.cfi_def_cfa_offset 16
.Ltmp13:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
.Ltmp14:
	.cfi_def_cfa_register %rbp
	callq	__cxx_global_var_init
	popq	%rbp
	retq
.Lfunc_end4:
	.size	_GLOBAL__sub_I_leftover2.cc, .Lfunc_end4-_GLOBAL__sub_I_leftover2.cc
	.cfi_endproc

	.type	_ZStL8__ioinit,@object  # @_ZStL8__ioinit
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.type	.L.str,@object          # @.str
	.section	.rodata.str1.1,"aMS",@progbits,1
.L.str:
	.asciz	"Hawii!!"
	.size	.L.str, 8

	.section	.init_array,"aw",@init_array
	.align	8
	.quad	_GLOBAL__sub_I_leftover2.cc

	.ident	"clang version 3.8.0-2ubuntu4 (tags/RELEASE_380/final)"
	.section	".note.GNU-stack","",@progbits
