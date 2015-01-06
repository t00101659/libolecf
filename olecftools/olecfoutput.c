/*
 * Common output functions for the olecftools
 *
 * Copyright (C) 2008-2015, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <common.h>
#include <file_stream.h>
#include <memory.h>
#include <types.h>

#include "olecfoutput.h"
#include "olecftools_libbfio.h"
#include "olecftools_libcerror.h"
#include "olecftools_libcfile.h"
#include "olecftools_libclocale.h"
#include "olecftools_libcnotify.h"
#include "olecftools_libcpath.h"
#include "olecftools_libcstring.h"
#include "olecftools_libcsystem.h"
#include "olecftools_libolecf.h"
#include "olecftools_libuna.h"

/* Prints the copyright information
 */
void olecfoutput_copyright_fprint(
      FILE *stream )
{
	if( stream == NULL )
	{
		return;
	}
	/* TRANSLATORS: This is a proper name.
	 */
	fprintf(
	 stream,
	 _( "Copyright (C) 2008-2015, %s.\n" ),
	 _( "Joachim Metz" ) );

	fprintf(
	 stream,
	 _( "This is free software; see the source for copying conditions. There is NO\n"
	    "warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n" ) );

	/* TRANSLATORS: The placeholder indicates the bug-reporting address
	 * for this package.  Please add _another line_ saying
	 * "Report translation bugs to <...>\n" with the address for translation
	 * bugs (typically your translation team's web or email address).
	 */
	fprintf(
	 stream,
	 _( "Report bugs to <%s>.\n" ),
	 PACKAGE_BUGREPORT );
}

/* Prints the version information
 */
void olecfoutput_version_fprint(
      FILE *stream,
      const char *program )
{
	if( stream == NULL )
	{
		return;
	}
	if( program == NULL )
	{
		return;
	}
        fprintf(
	 stream,
	 "%s %s\n\n",
         program,
	 LIBOLECF_VERSION_STRING );
}

/* Prints the detailed version information
 */
void olecfoutput_detailed_version_fprint(
      FILE *stream,
      const char *program )
{
	if( stream == NULL )
	{
		return;
	}
	if( program == NULL )
	{
		return;
	}
        fprintf(
	 stream,
	 "%s %s (libolecf %s",
         program,
	 LIBOLECF_VERSION_STRING,
	 LIBOLECF_VERSION_STRING );

	fprintf(
	 stream,
	 ", libcstring %s",
	 LIBCSTRING_VERSION_STRING );

	fprintf(
	 stream,
	 ", libcerror %s",
	 LIBCERROR_VERSION_STRING );

	fprintf(
	 stream,
	 ", libclocle %s",
	 LIBCLOCALE_VERSION_STRING );

	fprintf(
	 stream,
	 ", libcnotify %s",
	 LIBCNOTIFY_VERSION_STRING );

	fprintf(
	 stream,
	 ", libuna %s",
	 LIBUNA_VERSION_STRING );

	fprintf(
	 stream,
	 ", libcfile %s",
	 LIBCFILE_VERSION_STRING );

	fprintf(
	 stream,
	 ", libcpath %s",
	 LIBCPATH_VERSION_STRING );

	fprintf(
	 stream,
	 ", libbfio %s",
	 LIBBFIO_VERSION_STRING );

/* TODO add info */

        fprintf(
	 stream,
	 ")\n\n" );
}

