set(TMK_COMMON_DIR tmk_core/common/)
set(TMK_SRCS
    ${TMK_COMMON_DIR}/action.c
    ${TMK_COMMON_DIR}/action_layer.c
    ${TMK_COMMON_DIR}/action_macro.c
    ${TMK_COMMON_DIR}/actionmap.c
    ${TMK_COMMON_DIR}/action_tapping.c
    ${TMK_COMMON_DIR}/action_util.c
    ${TMK_COMMON_DIR}/backlight.c
    ${TMK_COMMON_DIR}/bootmagic.c
    ${TMK_COMMON_DIR}/command.c
    ${TMK_COMMON_DIR}/debug.c
    ${TMK_COMMON_DIR}/hook.c
    ${TMK_COMMON_DIR}/host.c
    ${TMK_COMMON_DIR}/keyboard.c
    ${TMK_COMMON_DIR}/keymap.c
    ${TMK_COMMON_DIR}/matrix.c
    ${TMK_COMMON_DIR}/mousekey.c
    ${TMK_COMMON_DIR}/print.c
    ${TMK_COMMON_DIR}/sendchar_null.c
    ${TMK_COMMON_DIR}/sendchar_uart.c
    ${TMK_COMMON_DIR}/unimap.c
    ${TMK_COMMON_DIR}/util.c
)

idf_component_register(SRCS ${TMK_SRCS} "hello_world_main.c"
                    INCLUDE_DIRS ${TMK_COMMON_DIR} ".")
