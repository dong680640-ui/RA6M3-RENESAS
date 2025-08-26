/* generated vector header file - do not edit */
#ifndef VECTOR_DATA_H
#define VECTOR_DATA_H
/* Number of interrupts allocated */
#ifndef VECTOR_DATA_IRQ_COUNT
#define VECTOR_DATA_IRQ_COUNT    (2)
#endif
/* ISR prototypes */
void r_icu_isr(void);
void agt_int_isr(void);

/* Vector table allocations */
#define VECTOR_NUMBER_ICU_IRQ11 ((IRQn_Type) 0) /* ICU IRQ11 (External pin interrupt 11) */
#define ICU_IRQ11_IRQn          ((IRQn_Type) 0) /* ICU IRQ11 (External pin interrupt 11) */
#define VECTOR_NUMBER_AGT0_INT ((IRQn_Type) 1) /* AGT0 INT (AGT interrupt) */
#define AGT0_INT_IRQn          ((IRQn_Type) 1) /* AGT0 INT (AGT interrupt) */
#endif /* VECTOR_DATA_H */
