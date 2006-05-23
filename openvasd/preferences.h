/* OpenVAS
* $Id$
*
* Copyright:
* Portions Copyright (C) 2006 Software in the Public Interest, Inc.
* Based on work Copyright (C) 1998 - 2006 Tenable Network Security, Inc.
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License version 2,
* as published by the Free Software Foundation
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
*
*
*/

#ifndef __NESSUSD_PREFERENCES_H
#define __NESSUSD_PREFERENCES_H

int    preferences_init(char *, struct arglist **);
int    preferences_new(char *);
int    preferences_process(char *, struct arglist *);
int    preferences_get_host_expansion(struct arglist *);
int    preferences_get_slice_network_addresses(struct arglist *);
int    preferences_get_checks_read_timeout(struct arglist*);
int    preferences_get_delay_between_tests(struct arglist *);
int    preferences_log_whole_attack(struct arglist *);
int    preferences_optimize_test(struct arglist *);
int    preferences_ntp_show_end(struct arglist *);
int    preferences_log_plugins_at_load(struct arglist *);
int    preferences_plugins_timeout(struct arglist *);
int    preferences_plugin_timeout(struct arglist *, int);
int    preferences_benice(struct arglist*);
char * preferences_get_string(struct arglist*, char*);
int    preferences_autoload_dependencies(struct arglist*);
int    preferences_safe_checks_enabled(struct arglist*);
int    preferences_use_mac_addr(struct arglist *);
int    preferences_report_killed_plugins(struct arglist *);

#ifdef ENABLE_SAVE_TESTS
int    preferences_save_session(struct arglist*);
int    preferences_save_empty_sessions(struct arglist*);
#endif

int    preferences_upload_enabled(struct arglist *);
int    preferences_upload_suffixes(struct arglist *, char*);

#ifdef ENABLE_SAVE_KB
int    preferences_continuous_scan(struct arglist *);
int    preferences_delay_between_scans(struct arglist *);
int    preferences_detached_scan(struct arglist *);
char * preferences_detached_scan_email(struct arglist *);
#endif

void  preferences_reset_cache();
int   preferences_user_is_admin(struct arglist* , struct arglist *);
int   preferences_silent_dependencies(struct arglist*);
int  preferences_nasl_no_signature_check(struct arglist * );

#endif
