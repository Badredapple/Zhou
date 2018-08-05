	.file	"leftover3.cc"
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.rodata
.LC0:
	.string	"Hawii!!"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1021:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	$.LC0, -24(%rbp)
	movq	$12345678, -16(%rbp)
	movl	$1, -28(%rbp)
.L4:
	cmpl	$9, -28(%rbp)
	jg	.L2
	movl	-28(%rbp), %edx
	movq	-16(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_Z4leftmj
	movq	%rax, %rsi
	movl	$_ZSt4cout, %edi
	call	_ZNSolsEm
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	-28(%rbp), %edx
	movq	-24(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_Z4leftPKci
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rsi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	cmpq	$0, -8(%rbp)
	je	.L3
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZdaPv
.L3:
	addl	$1, -28(%rbp)
	jmp	.L4
.L2:
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1021:
	.size	main, .-main
	.globl	_Z4leftmj
	.type	_Z4leftmj, @function
_Z4leftmj:
.LFB1022:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movl	$1, -12(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, -8(%rbp)
	cmpl	$0, -28(%rbp)
	je	.L7
	cmpq	$0, -24(%rbp)
	jne	.L8
.L7:
	movl	$0, %eax
	jmp	.L9
.L8:
	movq	-8(%rbp), %rax
	movabsq	$-3689348814741910323, %rdx
	mulq	%rdx
	movq	%rdx, %rax
	shrq	$3, %rax
	movq	%rax, -8(%rbp)
	cmpq	$0, -8(%rbp)
	setne	%al
	testb	%al, %al
	je	.L10
	addl	$1, -12(%rbp)
	jmp	.L8
.L10:
	movl	-12(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jbe	.L11
	movl	-12(%rbp), %eax
	subl	-28(%rbp), %eax
	movl	%eax, -28(%rbp)
.L13:
	movl	-28(%rbp), %eax
	leal	-1(%rax), %edx
	movl	%edx, -28(%rbp)
	testl	%eax, %eax
	setne	%al
	testb	%al, %al
	je	.L12
	movq	-24(%rbp), %rax
	movabsq	$-3689348814741910323, %rdx
	mulq	%rdx
	movq	%rdx, %rax
	shrq	$3, %rax
	movq	%rax, -24(%rbp)
	jmp	.L13
.L12:
	movq	-24(%rbp), %rax
	jmp	.L9
.L11:
	movq	-24(%rbp), %rax
.L9:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1022:
	.size	_Z4leftmj, .-_Z4leftmj
	.globl	_Z4leftPKci
	.type	_Z4leftPKci, @function
_Z4leftPKci:
.LFB1023:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	cmpl	$0, -28(%rbp)
	jns	.L15
	movl	$0, -28(%rbp)
.L15:
	movl	-28(%rbp), %eax
	addl	$1, %eax
	cltq
	movq	%rax, %rdi
	call	_Znam
	movq	%rax, -8(%rbp)
	movl	$0, -12(%rbp)
.L17:
	movl	-12(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jge	.L16
	movl	-12(%rbp), %eax
	movslq	%eax, %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	je	.L16
	movl	-12(%rbp), %eax
	movslq	%eax, %rdx
	movq	-8(%rbp), %rax
	addq	%rax, %rdx
	movl	-12(%rbp), %eax
	movslq	%eax, %rcx
	movq	-24(%rbp), %rax
	addq	%rcx, %rax
	movzbl	(%rax), %eax
	movb	%al, (%rdx)
	addl	$1, -12(%rbp)
	jmp	.L17
.L16:
	movl	-12(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jge	.L18
	movl	-12(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -12(%rbp)
	movslq	%eax, %rdx
	movq	-8(%rbp), %rax
	addq	%rdx, %rax
	movb	$0, (%rax)
	jmp	.L16
.L18:
	movq	-8(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1023:
	.size	_Z4leftPKci, .-_Z4leftPKci
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB1033:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L22
	cmpl	$65535, -8(%rbp)
	jne	.L22
	movl	$_ZStL8__ioinit, %edi
	call	_ZNSt8ios_base4InitC1Ev
	movl	$__dso_handle, %edx
	movl	$_ZStL8__ioinit, %esi
	movl	$_ZNSt8ios_base4InitD1Ev, %edi
	call	__cxa_atexit
.L22:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1033:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_main, @function
_GLOBAL__sub_I_main:
.LFB1034:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1034:
	.size	_GLOBAL__sub_I_main, .-_GLOBAL__sub_I_main
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I_main
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.10) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
