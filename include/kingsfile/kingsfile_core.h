#ifndef __KINGSFILE_CORE
#define __KINGSFILE_CORE

struct build_options {
  char *project, *compiler, *output, *default_target;
  char **sources, **includes, **libraries, **library_dirs, **compiler_options;
  int sources_count, includes_count, libraries_count, library_dirs_count, compiler_options_count;
};

typedef struct build_options BuildOptions;
char *kingsfile_read_file(char *);
BuildOptions kingsfile_build_options(char *, char *);
void kingsfile_build_project(BuildOptions *);

#endif
