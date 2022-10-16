/* Generated by ./xlat/gen.sh from ./xlat/sigsegv_codes.in; do not edit. */
#if !(defined(SEGV_MAPERR) || (defined(HAVE_DECL_SEGV_MAPERR) && HAVE_DECL_SEGV_MAPERR))
# define SEGV_MAPERR 1
#endif
#if !(defined(SEGV_ACCERR) || (defined(HAVE_DECL_SEGV_ACCERR) && HAVE_DECL_SEGV_ACCERR))
# define SEGV_ACCERR 2
#endif
#if !(defined(SEGV_BNDERR) || (defined(HAVE_DECL_SEGV_BNDERR) && HAVE_DECL_SEGV_BNDERR))
# define SEGV_BNDERR 3
#endif

#ifdef IN_MPERS

extern const struct xlat sigsegv_codes[];

#else

# if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
# endif
const struct xlat sigsegv_codes[] = {
 XLAT(SEGV_MAPERR),
 XLAT(SEGV_ACCERR),
 XLAT(SEGV_BNDERR),
 XLAT_END
};

#endif /* !IN_MPERS */
