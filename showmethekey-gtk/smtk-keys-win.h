#ifndef __SMTK_KEYS_WIN_H__
#define __SMTK_KEYS_WIN_H__

#include <gtk/gtk.h>
#include <adwaita.h>

#include "smtk-app-win.h"
#include "smtk-keys-emitter.h"

G_BEGIN_DECLS

#define SMTK_TYPE_KEYS_WIN smtk_keys_win_get_type()
G_DECLARE_FINAL_TYPE(SmtkKeysWin, smtk_keys_win, SMTK, KEYS_WIN, AdwWindow)

GtkWidget *smtk_keys_win_new(bool show_shift, bool show_mouse, SmtkKeyMode mode,
			     int width, int height, int timeout,
			     const char *layout, const char *variant,
			     GError **error);
void smtk_keys_win_pause(SmtkKeysWin *win);
void smtk_keys_win_resume(SmtkKeysWin *win);
void smtk_keys_win_set_mode(SmtkKeysWin *win, SmtkKeyMode mode);
void smtk_keys_win_set_show_shift(SmtkKeysWin *win, bool show_shift);
void smtk_keys_win_set_show_mouse(SmtkKeysWin *win, bool show_mouse);
void smtk_keys_win_set_timeout(SmtkKeysWin *win, int timeout);
const char *smtk_keys_win_get_layout(SmtkKeysWin *win);
void smtk_keys_win_set_layout(SmtkKeysWin *win, const char *layout);
const char *smtk_keys_win_get_variant(SmtkKeysWin *win);
void smtk_keys_win_set_variant(SmtkKeysWin *win, const char *variant);

G_END_DECLS

#endif
