/* Generated by ./xlat/gen.sh from ./xlat/bpf_map_update_elem_flags.in; do not edit. */
#if !(defined(BPF_ANY) || (defined(HAVE_DECL_BPF_ANY) && HAVE_DECL_BPF_ANY))
# define BPF_ANY 0
#endif
#if !(defined(BPF_NOEXIST) || (defined(HAVE_DECL_BPF_NOEXIST) && HAVE_DECL_BPF_NOEXIST))
# define BPF_NOEXIST 1
#endif
#if !(defined(BPF_EXIST) || (defined(HAVE_DECL_BPF_EXIST) && HAVE_DECL_BPF_EXIST))
# define BPF_EXIST 2
#endif

#ifdef IN_MPERS

# error static const struct xlat bpf_map_update_elem_flags in mpers mode

#else

static
const struct xlat bpf_map_update_elem_flags[] = {
 XLAT(BPF_ANY),
 XLAT(BPF_NOEXIST),
 XLAT(BPF_EXIST),
 XLAT_END
};

#endif /* !IN_MPERS */
