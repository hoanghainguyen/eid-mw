#ifndef EID_VWR_GTK_CERTS_H
#define EID_VWR_GTK_CERTS_H

#include <gtk/gtk.h>

enum cert_columns {
	CERT_COL_LABEL,
	CERT_COL_IMAGE,
	CERT_COL_VALIDFROM,
	CERT_COL_VALIDTO,
	CERT_COL_USE,
	CERT_COL_VALIDITY,
	CERT_COL_DESC,
	CERT_COL_DATA,
	CERT_COL_NCOLS
};

void add_certificate(char* label, void* data, int len);
GtkTreeModel* certificates_get_model();

#endif
