/* $Id: rev.h 24900 2013-01-08 22:46:42Z planetmaker $ */

/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <http://www.gnu.org/licenses/>.
 */

/** @file rev.h declaration of OTTD revision dependent variables */

#ifndef REV_H
#define REV_H

extern const char _openttd_revision[];
extern const char _openttd_build_date[];
extern const byte _openttd_revision_modified;
extern const uint32 _openttd_newgrf_version;

bool IsReleasedVersion();

#endif /* REV_H */
