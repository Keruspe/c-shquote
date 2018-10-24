#pragma once

#define _public_ __attribute__((__visibility__("default")))

int c_shquote_append_str(char **outp,
                         size_t *n_outp,
                         const char *in,
                         size_t n_in);
int c_shquote_append_char(char **outp,
                          size_t *n_outp,
                          char in);
void c_shquote_skip_str(const char **strp,
                        size_t *n_strp,
                        size_t len);
void c_shquote_skip_char(const char **strp,
                         size_t *n_strp);
int c_shquote_consume_str(char **outp,
                          size_t *n_outp,
                          const char **inp,
                          size_t *n_inp,
                          size_t len);
int c_shquote_consume_char(char **outp,
                           size_t *n_outp,
                           const char **inp,
                           size_t *n_inp);
size_t c_shquote_strnspn(const char *string,
                         size_t n_string,
                         const char *accept);
size_t c_shquote_strncspn(const char *string,
                          size_t n_string,
                          const char *reject);
void c_shquote_discard_comment(const char **inp,
                               size_t *n_inp);
void c_shquote_discard_whitespace(const char **inp,
                                  size_t *n_inp);
int c_shquote_unescape_char_quoted(char **outp,
                                   size_t *n_outp,
                                   const char **inp,
                                   size_t *n_inp);
int c_shquote_unescape_char_unquoted(char **outp,
                                     size_t *n_outp,
                                     const char **inp,
                                     size_t *n_inp);
int c_shquote_unquote_single(char **outp,
                             size_t *n_outp,
                             const char **inp,
                             size_t *n_inp);
int c_shquote_unquote_double(char **outp,
                             size_t *n_outp,
                             const char **inp,
                             size_t *n_inp);
