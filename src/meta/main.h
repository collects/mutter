/* -*- mode: C; c-file-style: "gnu"; indent-tabs-mode: nil; -*- */

/* Mutter main */

/* 
 * Copyright (C) 2001 Havoc Pennington
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 * 02111-1307, USA.
 */

#ifndef META_MAIN_H
#define META_MAIN_H

#include <glib.h>

GOptionContext *meta_get_option_context (void);
void            meta_init               (void);
int             meta_run                (void);
gboolean        meta_get_replace_current_wm (void);  /* Actually defined in util.c */

void            meta_set_wm_name              (const char *wm_name);
void            meta_set_gnome_wm_keybindings (const char *wm_keybindings);

typedef enum
{
  META_EXIT_SUCCESS,
  META_EXIT_ERROR
} MetaExitCode;

/* exit immediately */
void meta_exit (MetaExitCode code);

/* g_main_loop_quit() then fall out of main() */
void meta_quit (MetaExitCode code);

#endif
