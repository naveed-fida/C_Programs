	.file	"arith_and_log.c"
	.text
	.globl	arith
	.type	arith, @function
arith:
	leaq	(%rdx,%rdx,2), %rax
	salq	$4, %rax
	xorq	%rsi, %rdi
	andl	$252645135, %edi
	subq	%rdi, %rax
	ret
	.size	arith, .-arith
	.ident	"GCC: (Ubuntu 7.3.0-16ubuntu3) 7.3.0"
	.section	.note.GNU-stack,"",@progbits
