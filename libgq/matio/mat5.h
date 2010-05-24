/*
 * Copyright (C) 2008   Christopher C. Hulbert
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */
#ifndef MAT5_H
#define MAT5_H

#include "matio.h"

#ifndef EXTERN
#ifdef __cplusplus
#   define EXTERN extern "C"
#else
#   define EXTERN extern
#endif
#endif

/*   mat5.c    */
EXTERN mat_t *Mat_Create5(const char *matname,const char *hdr_str);

matvar_t *Mat_VarReadNextInfo5( mat_t *mat );
void      Read5(mat_t *mat, matvar_t *matvar);
int       ReadData5(mat_t *mat,matvar_t *matvar,void *data, 
              int *start,int *stride,int *edge);
int       Mat_VarWrite5(mat_t *mat,matvar_t *matvar,int compress);
int       WriteCharDataSlab2(mat_t *mat,void *data,int data_type,int *dims,
              int *start,int *stride,int *edge);
int       WriteData(mat_t *mat,void *data,int N,int data_type);
int       WriteDataSlab2(mat_t *mat,void *data,int data_type,int *dims,
              int *start,int *stride,int *edge);
void      WriteInfo5(mat_t *mat, matvar_t *matvar);

#endif
