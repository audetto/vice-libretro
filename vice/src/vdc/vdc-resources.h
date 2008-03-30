/*
 * vdc-resources.h - Resources for the MOS 8563 (VDC) emulation.
 *
 * Written by
 *  Ettore Perazzoli <ettore@comm2000.it>
 *  Markus Brenner <markus@brenner.de>
 *  Andreas Boose <viceteam@t-online.de>
 *
 * This file is part of VICE, the Versatile Commodore Emulator.
 * See README for copyright notice.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
 *  02111-1307  USA.
 *
 */

#ifndef _VDC_RESOURCES_H
#define _VDC_RESOURCES_H

/* VDC resources.  */
struct vdc_resources_s
{
    /* Name of palette file.  */
    char *palette_file_name;

    /* Flag: VDC memory size.  */
    int vdc_64kb_expansion;

#ifdef USE_XF86_EXTENSIONS
    /* Flag: Fullscreenmode?  */
    int fullscreen;

    /* Flag: Do we use double size?  */
    int fullscreen_double_size_enabled;

    /* Flag: Do we copy lines in double size mode?  */
    int fullscreen_double_scan_enabled;

    int fullscreen_width;
    int fullscreen_height;
#endif
};
typedef struct vdc_resources_s vdc_resources_t;

extern vdc_resources_t vdc_resources;


extern int vdc_resources_init(void);

#endif

