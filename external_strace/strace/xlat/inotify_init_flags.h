/* Generated by ./xlat/gen.sh from ./xlat/inotify_init_flags.in; do not edit. */

#ifdef IN_MPERS

# error static const struct xlat inotify_init_flags in mpers mode

#else

static
const struct xlat inotify_init_flags[] = {
#if defined(O_NONBLOCK) || (defined(HAVE_DECL_O_NONBLOCK) && HAVE_DECL_O_NONBLOCK)
  XLAT(O_NONBLOCK),
#endif
#if defined(O_CLOEXEC) || (defined(HAVE_DECL_O_CLOEXEC) && HAVE_DECL_O_CLOEXEC)
  XLAT(O_CLOEXEC),
#endif
 XLAT_END
};

#endif /* !IN_MPERS */
