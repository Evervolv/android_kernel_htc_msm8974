#ifdef __KERNEL__
#ifndef __ASM_HARDIRQ_H
#define __ASM_HARDIRQ_H

#include <asm/irq.h>

#if NR_IRQS > 256
#define HARDIRQ_BITS	9
#else
#define HARDIRQ_BITS	8
#endif

#if (1 << HARDIRQ_BITS) < NR_IRQS
# error HARDIRQ_BITS is too low!
#endif

#include <asm-generic/hardirq.h>

#endif 
#endif 
