set(GAME_SOURCE_FILES
am_map.c	i_main.c	p_ceilng.c	p_setup.c	r_sky.c
d_deh.c		i_net.c		p_doors.c	p_sight.c	r_things.c
d_items.c	i_sound.c	p_enemy.c	p_spec.c	s_sound.c
d_main.c	i_system.c	p_floor.c	p_switch.c	sounds.c
d_net.c		i_video.c	p_genlin.c	p_telept.c	st_lib.c
doomdef.c	info.c		p_inter.c	p_tick.c	st_stuff.c
doomstat.c	m_argv.c	p_lights.c	p_user.c	tables.c
dstrings.c	m_bbox.c	p_map.c		r_bsp.c		v_video.c
f_finale.c	m_cheat.c	p_maputl.c	r_data.c	version.c
f_wipe.c	m_menu.c	p_mobj.c	r_draw.c	w_wad.c
g_game.c	m_misc.c	p_plats.c	r_main.c	wi_stuff.c
hu_lib.c	m_random.c	p_pspr.c	r_plane.c	z_zone.c
hu_stuff.c	mmus2mid.c	p_saveg.c	r_segs.c	tt_main.c
vectors.c	r_ripple.c	p_effect.c	cc_main.c)

set(GAME_INCLUDE_DIRS "${CMAKE_CURRENT_BINARY_DIR}")

# Some games support dehacked patches, some don't:

set(SOURCE_FILES ${COMMON_SOURCE_FILES} ${GAME_SOURCE_FILES})
set(SOURCE_FILES_WITH_DEH ${SOURCE_FILES} ${DEHACKED_SOURCE_FILES})

set(EXTRA_LIBS SDL2::SDL2main SDL2::SDL2 SDL2::mixer SDL2::net)

if(WIN32)
    add_executable("${PROGRAM_PREFIX}coldfusion" WIN32 ${SOURCE_FILES_WITH_DEH} "${CMAKE_CURRENT_BINARY_DIR}/win32/coldfusion.rc")
else()
    add_executable("coldfusion" ${SOURCE_FILES_WITH_DEH})
endif()

target_include_directories("coldfusion" PRIVATE ${GAME_INCLUDE_DIRS})
target_link_libraries("coldfusion" ${EXTRA_LIBS})

if(MSVC)
    set_target_properties("coldfusion" PROPERTIES
                          LINK_FLAGS "/MANIFEST:NO")
endif()
