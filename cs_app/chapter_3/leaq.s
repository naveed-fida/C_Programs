	.file	"leaq.c"
	.text
	.globl	scale
	.type	scale, @function
scale:
	leaq	(%rdi,%rsi,4), %rax
	leaq	(%rdx,%rdx,2), %rdx
	leaq	(%rax,%rdx,4), %rax
	ret
	.size	scale, .-scale
	.ident	"GCC: (Ubuntu 7.3.0-16ubuntu3) 7.3.0"
	.section	.note.GNU-stack,"",@progbits
