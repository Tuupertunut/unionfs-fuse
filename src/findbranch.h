/*
* License: BSD-style license
* Copyright: Radek Podgorny <radek@podgorny.cz>,
*            Bernd Schubert <bernd-schubert@gmx.de>
*/

#ifndef FINDBRANCH_H
#define FINDBRANCH_H

typedef enum searchflag {
	RWRO,
	RWONLY
} searchflag_t;

bool branch_contains_path(int branch, const char *path, bool *is_dir);
bool branch_contains_file_or_parent_dir(int branch, const char *path);
int find_rorw_branch(const char *path);
int find_lowest_rw_branch(int branch_ro);
int find_rw_branch_cutlast(const char *path);
int __find_rw_branch_cutlast(const char *path, int rw_hint);
int find_rw_branch_cow(const char *path);
int find_rw_branch_cow_recursive(const char *path);

#endif
