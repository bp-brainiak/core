/*
 * $Id$
 */

/* -------------------------------------------------------------------- */
/* WARNING: Automatically generated source file. DO NOT EDIT!           */
/*          Instead, edit corresponding .qth file,                      */
/*          or the generator tool itself, and run regenarate.           */
/* -------------------------------------------------------------------- */

/*
 * Harbour Project source code:
 * QT wrapper main header
 *
 * Copyright 2009-2010 Pritpal Bedi <pritpal@vouchcac.com>
 *
 * Copyright 2009 Marcos Antonio Gambeta <marcosgambeta at gmail dot com>
 * www - http://harbour-project.org
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 59 Temple Place, Suite 330,
 * Boston, MA 02111-1307 USA (or visit the web site http://www.gnu.org/).
 *
 * As a special exception, the Harbour Project gives permission for
 * additional uses of the text contained in its release of Harbour.
 *
 * The exception is that, if you link the Harbour libraries with other
 * files to produce an executable, this does not by itself cause the
 * resulting executable to be covered by the GNU General Public License.
 * Your use of that executable is in no way restricted on account of
 * linking the Harbour library code into it.
 *
 * This exception does not however invalidate any other reasons why
 * the executable file might be covered by the GNU General Public License.
 *
 * This exception applies only to the code released by the Harbour
 * Project under the name Harbour.  If you copy code from other
 * Harbour Project or Free Software Foundation releases into a copy of
 * Harbour, as the General Public License permits, the exception does
 * not apply to the code that you add in this way.  To avoid misleading
 * anyone as to the status of such modified files, you must delete
 * this exception notice from them.
 *
 * If you write modifications of your own for Harbour, it is your choice
 * whether to permit this exception to apply to your modifications.
 * If you do not wish that, delete this exception notice.
 *
 */
/*----------------------------------------------------------------------*/

#include "hbqtcore.h"
#include "hbqtdesigner.h"

/*----------------------------------------------------------------------*/
#if QT_VERSION >= 0x040500
/*----------------------------------------------------------------------*/

#include <QtCore/QPointer>

#include "hbqtgui.h"

#include <QtDesigner/QDesignerWidgetBoxInterface>


/*
 * QDesignerWidgetBoxInterface ( QWidget * parent = 0, Qt::WindowFlags flags = 0 )
 * ~QDesignerWidgetBoxInterface ()
 *
 */

typedef struct
{
   QPointer< QDesignerWidgetBoxInterface > ph;
   bool bNew;
   PHBQT_GC_FUNC func;
   int type;
} HBQT_GC_T_QDesignerWidgetBoxInterface;

HBQT_GC_FUNC( hbqt_gcRelease_QDesignerWidgetBoxInterface )
{
   HB_SYMBOL_UNUSED( Cargo );
   HBQT_GC_T * p = ( HBQT_GC_T * ) Cargo;

   if( p && p->bNew )
   {
      p->ph = NULL;
   }
}

void * hbqt_gcAllocate_QDesignerWidgetBoxInterface( void * pObj, bool bNew )
{
   HBQT_GC_T_QDesignerWidgetBoxInterface * p = ( HBQT_GC_T_QDesignerWidgetBoxInterface * ) hb_gcAllocate( sizeof( HBQT_GC_T_QDesignerWidgetBoxInterface ), hbqt_gcFuncs() );

   new( & p->ph ) QPointer< QDesignerWidgetBoxInterface >( ( QDesignerWidgetBoxInterface * ) pObj );
   p->bNew = bNew;
   p->func = hbqt_gcRelease_QDesignerWidgetBoxInterface;
   p->type = HBQT_TYPE_QDesignerWidgetBoxInterface;

   if( bNew )
   {
      HB_TRACE( HB_TR_DEBUG, ( "ph=%p    _new_QDesignerWidgetBoxInterface  under p->pq", pObj ) );
   }
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "ph=%p NOT_new_QDesignerWidgetBoxInterface", pObj ) );
   }
   return p;
}

HB_FUNC( QT_QDESIGNERWIDGETBOXINTERFACE )
{
   //hb_retptr( new QDesignerWidgetBoxInterface() );
}

/*
 * virtual QString fileName () const = 0
 */
HB_FUNC( QT_QDESIGNERWIDGETBOXINTERFACE_FILENAME )
{
   QDesignerWidgetBoxInterface * p = hbqt_par_QDesignerWidgetBoxInterface( 1 );
   if( p )
      hb_retc( ( p )->fileName().toAscii().data() );
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "............................... F=QT_QDESIGNERWIDGETBOXINTERFACE_FILENAME FP=hb_retc( ( p )->fileName().toAscii().data() ); p is NULL" ) );
   }
}

/*
 * virtual bool load () = 0
 */
HB_FUNC( QT_QDESIGNERWIDGETBOXINTERFACE_LOAD )
{
   QDesignerWidgetBoxInterface * p = hbqt_par_QDesignerWidgetBoxInterface( 1 );
   if( p )
      hb_retl( ( p )->load() );
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "............................... F=QT_QDESIGNERWIDGETBOXINTERFACE_LOAD FP=hb_retl( ( p )->load() ); p is NULL" ) );
   }
}

/*
 * virtual bool save () = 0
 */
HB_FUNC( QT_QDESIGNERWIDGETBOXINTERFACE_SAVE )
{
   QDesignerWidgetBoxInterface * p = hbqt_par_QDesignerWidgetBoxInterface( 1 );
   if( p )
      hb_retl( ( p )->save() );
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "............................... F=QT_QDESIGNERWIDGETBOXINTERFACE_SAVE FP=hb_retl( ( p )->save() ); p is NULL" ) );
   }
}

/*
 * virtual void setFileName ( const QString & fileName ) = 0
 */
HB_FUNC( QT_QDESIGNERWIDGETBOXINTERFACE_SETFILENAME )
{
   QDesignerWidgetBoxInterface * p = hbqt_par_QDesignerWidgetBoxInterface( 1 );
   if( p )
      ( p )->setFileName( QDesignerWidgetBoxInterface::tr( hb_parc( 2 ) ) );
   else
   {
      HB_TRACE( HB_TR_DEBUG, ( "............................... F=QT_QDESIGNERWIDGETBOXINTERFACE_SETFILENAME FP=( p )->setFileName( QDesignerWidgetBoxInterface::tr( hb_parc( 2 ) ) ); p is NULL" ) );
   }
}


/*----------------------------------------------------------------------*/
#endif             /* #if QT_VERSION >= 0x040500 */
/*----------------------------------------------------------------------*/