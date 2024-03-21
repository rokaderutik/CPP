	.file	"prg9.cpp"
	.section .rdata,"dr"
__ZStL19piecewise_construct:
	.space 1
.lcomm __ZStL8__ioinit,1,1
LC0:
	.ascii "Parent getData\0"
	.section	.text$_ZN6Parent7getDataEv,"x"
	.linkonce discard
	.align 2
	.globl	__ZN6Parent7getDataEv
	.def	__ZN6Parent7getDataEv;	.scl	2;	.type	32;	.endef
__ZN6Parent7getDataEv:
LFB1445:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	%ecx, -12(%ebp)
	movl	$LC0, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$__ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, (%esp)
	movl	%eax, %ecx
	call	__ZNSolsEPFRSoS_E
	subl	$4, %esp
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1445:
	.section .rdata,"dr"
LC1:
	.ascii "Parent printData\0"
	.section	.text$_ZN6Parent9printDataEv,"x"
	.linkonce discard
	.align 2
	.globl	__ZN6Parent9printDataEv
	.def	__ZN6Parent9printDataEv;	.scl	2;	.type	32;	.endef
__ZN6Parent9printDataEv:
LFB1446:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	%ecx, -12(%ebp)
	movl	$LC1, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$__ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, (%esp)
	movl	%eax, %ecx
	call	__ZNSolsEPFRSoS_E
	subl	$4, %esp
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1446:
	.section .rdata,"dr"
LC2:
	.ascii "Child1 getData\0"
	.section	.text$_ZN6Child17getDataEv,"x"
	.linkonce discard
	.align 2
	.globl	__ZN6Child17getDataEv
	.def	__ZN6Child17getDataEv;	.scl	2;	.type	32;	.endef
__ZN6Child17getDataEv:
LFB1447:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	%ecx, -12(%ebp)
	movl	$LC2, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$__ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, (%esp)
	movl	%eax, %ecx
	call	__ZNSolsEPFRSoS_E
	subl	$4, %esp
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1447:
	.section .rdata,"dr"
LC3:
	.ascii "Child1 setData\0"
	.section	.text$_ZN6Child17setDataEv,"x"
	.linkonce discard
	.align 2
	.globl	__ZN6Child17setDataEv
	.def	__ZN6Child17setDataEv;	.scl	2;	.type	32;	.endef
__ZN6Child17setDataEv:
LFB1448:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	%ecx, -12(%ebp)
	movl	$LC3, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$__ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, (%esp)
	movl	%eax, %ecx
	call	__ZNSolsEPFRSoS_E
	subl	$4, %esp
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1448:
	.section	.text$_ZN6ParentC2Ev,"x"
	.linkonce discard
	.align 2
	.globl	__ZN6ParentC2Ev
	.def	__ZN6ParentC2Ev;	.scl	2;	.type	32;	.endef
__ZN6ParentC2Ev:
LFB1453:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$4, %esp
	movl	%ecx, -4(%ebp)
	movl	$__ZTV6Parent+8, %edx
	movl	-4(%ebp), %eax
	movl	%edx, (%eax)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1453:
	.section	.text$_ZN6Child1C1Ev,"x"
	.linkonce discard
	.align 2
	.globl	__ZN6Child1C1Ev
	.def	__ZN6Child1C1Ev;	.scl	2;	.type	32;	.endef
__ZN6Child1C1Ev:
LFB1456:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	%eax, %ecx
	call	__ZN6ParentC2Ev
	movl	$__ZTV6Child1+8, %edx
	movl	-12(%ebp), %eax
	movl	%edx, (%eax)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1456:
	.def	___main;	.scl	2;	.type	32;	.endef
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB1450:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%ebx
	andl	$-16, %esp
	subl	$32, %esp
	.cfi_offset 3, -12
	call	___main
	movl	$8, (%esp)
	call	__Znwj
	movl	%eax, %ebx
	movl	$0, (%ebx)
	movl	$0, 4(%ebx)
	movl	%ebx, %ecx
	call	__ZN6Child1C1Ev
	movl	%ebx, 28(%esp)
	movl	28(%esp), %eax
	movl	(%eax), %eax
	movl	(%eax), %eax
	movl	28(%esp), %edx
	movl	%edx, %ecx
	call	*%eax
	movl	28(%esp), %eax
	movl	(%eax), %eax
	addl	$4, %eax
	movl	(%eax), %eax
	movl	28(%esp), %edx
	movl	%edx, %ecx
	call	*%eax
	movl	$0, %eax
	movl	-4(%ebp), %ebx
	leave
	.cfi_restore 5
	.cfi_restore 3
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1450:
	.globl	__ZTV6Child1
	.section	.rdata$_ZTV6Child1,"dr"
	.linkonce same_size
	.align 4
__ZTV6Child1:
	.long	0
	.long	__ZTI6Child1
	.long	__ZN6Child17getDataEv
	.long	__ZN6Parent9printDataEv
	.long	__ZN6Child17setDataEv
	.globl	__ZTV6Parent
	.section	.rdata$_ZTV6Parent,"dr"
	.linkonce same_size
	.align 4
__ZTV6Parent:
	.long	0
	.long	__ZTI6Parent
	.long	__ZN6Parent7getDataEv
	.long	__ZN6Parent9printDataEv
	.globl	__ZTI6Child1
	.section	.rdata$_ZTI6Child1,"dr"
	.linkonce same_size
	.align 4
__ZTI6Child1:
	.long	__ZTVN10__cxxabiv120__si_class_type_infoE+8
	.long	__ZTS6Child1
	.long	__ZTI6Parent
	.globl	__ZTS6Child1
	.section	.rdata$_ZTS6Child1,"dr"
	.linkonce same_size
	.align 4
__ZTS6Child1:
	.ascii "6Child1\0"
	.globl	__ZTI6Parent
	.section	.rdata$_ZTI6Parent,"dr"
	.linkonce same_size
	.align 4
__ZTI6Parent:
	.long	__ZTVN10__cxxabiv117__class_type_infoE+8
	.long	__ZTS6Parent
	.globl	__ZTS6Parent
	.section	.rdata$_ZTS6Parent,"dr"
	.linkonce same_size
	.align 4
__ZTS6Parent:
	.ascii "6Parent\0"
	.text
	.def	___tcf_0;	.scl	3;	.type	32;	.endef
___tcf_0:
LFB1889:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$8, %esp
	movl	$__ZStL8__ioinit, %ecx
	call	__ZNSt8ios_base4InitD1Ev
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1889:
	.def	__Z41__static_initialization_and_destruction_0ii;	.scl	3;	.type	32;	.endef
__Z41__static_initialization_and_destruction_0ii:
LFB1888:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	cmpl	$1, 8(%ebp)
	jne	L12
	cmpl	$65535, 12(%ebp)
	jne	L12
	movl	$__ZStL8__ioinit, %ecx
	call	__ZNSt8ios_base4InitC1Ev
	movl	$___tcf_0, (%esp)
	call	_atexit
L12:
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1888:
	.def	__GLOBAL__sub_I_main;	.scl	3;	.type	32;	.endef
__GLOBAL__sub_I_main:
LFB1890:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	$65535, 4(%esp)
	movl	$1, (%esp)
	call	__Z41__static_initialization_and_destruction_0ii
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1890:
	.section	.ctors,"w"
	.align 4
	.long	__GLOBAL__sub_I_main
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc;	.scl	2;	.type	32;	.endef
	.def	__ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;	.scl	2;	.type	32;	.endef
	.def	__ZNSolsEPFRSoS_E;	.scl	2;	.type	32;	.endef
	.def	__Znwj;	.scl	2;	.type	32;	.endef
	.def	__ZNSt8ios_base4InitD1Ev;	.scl	2;	.type	32;	.endef
	.def	__ZNSt8ios_base4InitC1Ev;	.scl	2;	.type	32;	.endef
	.def	_atexit;	.scl	2;	.type	32;	.endef
