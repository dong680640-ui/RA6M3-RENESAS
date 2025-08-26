/* generated vector header file - do not edit */
#ifndef VECTOR_DATA_H
#define VECTOR_DATA_H
/* Number of interrupts allocated */
#ifndef VECTOR_DATA_IRQ_COUNT
#define VECTOR_DATA_IRQ_COUNT    (4)
#endif
/* ISR prototypes */
void r_icu_isr(void);

/* Vector table allocations */
#define VECTOR_NUMBER_ICU_IRQ0 ((IRQn_Type) 0) /* ICU IRQ0 (External pin interrupt 0) */
#define ICU_IRQ0_IRQn          ((IRQn_Type) 0) /* ICU IRQ0 (External pin interrupt 0) */
#define VECTOR_NUMBER_ICU_IRQ1 ((IRQn_Type) 1) /* ICU IRQ1 (External pin interrupt 1) */
#define ICU_IRQ1_IRQn          ((IRQn_Type) 1) /* ICU IRQ1 (External pin interrupt 1) */
#define VECTOR_NUMBER_ICU_IRQ2 ((IRQn_Type) 2) /* ICU IRQ2 (External pin interrupt 2) */
#define ICU_IRQ2_IRQn          ((IRQn_Type) 2) /* ICU IRQ2 (External pin interrupt 2) */
#define VECTOR_NUMBER_ICU_IRQ3 ((IRQn_Type) 3) /* ICU IRQ3 (External pin interrupt 3) */
#define ICU_IRQ3_IRQn          ((IRQn_Type) 3) /* ICU IRQ3 (External pin interrupt 3) */
#endif /* VECTOR_DATA_H */
