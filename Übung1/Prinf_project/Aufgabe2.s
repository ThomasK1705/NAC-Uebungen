	.file	"Aufgabe2.c"
	.section	.rodata
.LC0:
	.string	"x=%d y=%d z=%d\n"
	.text
	.globl	globalfunction
	.type	globalfunction, @function
globalfunction:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	movl	%esi, -24(%rbp)
	movl	-4(%rbp), %ecx
	movl	-24(%rbp), %edx
	movl	-20(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	movl	-24(%rbp), %eax
	movl	-20(%rbp), %edx
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -4(%rbp)
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	globalfunction, .-globalfunction
	.section	.rodata
.LC1:
	.string	"sth=%u\n"
	.text
	.globl	globalfunction2
	.type	globalfunction2, @function
globalfunction2:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$1, -4(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	printf
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	globalfunction2, .-globalfunction2
	.section	.rodata
.LC3:
	.string	"Hallo %s!\n"
	.align 8
.LC4:
	.string	"Die ganze Zahl %d mit Vorzeichen %+d und als hex %x und %X.\n"
	.align 8
.LC5:
	.string	"Eine Gleitkommazahl ohne Formatierung %f und mit 2 Nachkommastellen %.2f.\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	$111111, -20(%rbp)
	movl	$-222222, -16(%rbp)
	movl	$333333, -12(%rbp)
	movl	.LC2(%rip), %eax
	movl	%eax, -8(%rbp)
	movl	$444444, -4(%rbp)
	movw	$67, -32(%rbp)
	leaq	-32(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC3, %edi
	movl	$0, %eax
	call	printf
	movl	-20(%rbp), %esi
	movl	-20(%rbp), %ecx
	movl	-20(%rbp), %edx
	movl	-20(%rbp), %eax
	movl	%esi, %r8d
	movl	%eax, %esi
	movl	$.LC4, %edi
	movl	$0, %eax
	call	printf
	movl	-16(%rbp), %esi
	movl	-16(%rbp), %ecx
	movl	-16(%rbp), %edx
	movl	-16(%rbp), %eax
	movl	%esi, %r8d
	movl	%eax, %esi
	movl	$.LC4, %edi
	movl	$0, %eax
	call	printf
	movss	-8(%rbp), %xmm1
	cvtps2pd	%xmm1, %xmm1
	movss	-8(%rbp), %xmm0
	cvtps2pd	%xmm0, %xmm0
	movl	$.LC5, %edi
	movl	$2, %eax
	call	printf
	movl	$0, %eax
	call	globalfunction2
	movl	$2, %esi
	movl	$1, %edi
	call	globalfunction
	movl	$2, %esi
	movl	$1, %edi
	call	globalfunction
	movl	$0, %eax
	call	globalfunction2
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.section	.rodata
	.align 4
.LC2:
	.long	1075000115
	.ident	"GCC: (Ubuntu 4.8.2-19ubuntu1) 4.8.2"
	.section	.note.GNU-stack,"",@progbits
