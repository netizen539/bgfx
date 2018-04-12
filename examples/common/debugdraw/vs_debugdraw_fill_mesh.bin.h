static const uint8_t vs_debugdraw_fill_mesh_glsl[282] =
{
	0x56, 0x53, 0x48, 0x05, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x0a, 0x75, 0x5f, 0x76, 0x69, 0x65, // VSH........u_vie
	0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x01, 0x00, 0x07, 0x75, 0x5f, 0x6d, 0x6f, // wProj.......u_mo
	0x64, 0x65, 0x6c, 0x04, 0x20, 0x00, 0x00, 0x20, 0x00, 0xec, 0x00, 0x00, 0x00, 0x61, 0x74, 0x74, // del. .. .....att
	0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, // ribute highp vec
	0x33, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x75, 0x6e, // 3 a_position;.un
	0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x6d, 0x61, 0x74, 0x34, // iform highp mat4
	0x20, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x75, 0x6e, 0x69, //  u_viewProj;.uni
	0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, // form mat4 u_mode
	0x6c, 0x5b, 0x33, 0x32, 0x5d, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, // l[32];.void main
	0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, //  ().{.  highp ve
	0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, // c4 tmpvar_1;.  t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x31, 0x2e, 0x30, 0x3b, // mpvar_1.w = 1.0;
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x78, 0x79, 0x7a, 0x20, // .  tmpvar_1.xyz 
	0x3d, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x20, 0x20, // = a_position;.  
	0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3d, 0x20, 0x28, 0x75, // gl_Position = (u
	0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x20, 0x2a, 0x20, 0x28, 0x75, 0x5f, 0x6d, // _viewProj * (u_m
	0x6f, 0x64, 0x65, 0x6c, 0x5b, 0x30, 0x5d, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // odel[0] * tmpvar
	0x5f, 0x31, 0x29, 0x29, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                                     // _1));.}...
};
static const uint8_t vs_debugdraw_fill_mesh_spv[1910] =
{
	0x56, 0x53, 0x48, 0x05, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x07, 0x75, 0x5f, 0x6d, 0x6f, 0x64, // VSH........u_mod
	0x65, 0x6c, 0x04, 0x01, 0x00, 0x00, 0x01, 0x00, 0x0a, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, // el.......u_viewP
	0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x01, 0x00, 0x48, 0x07, 0x00, 0x00, 0x03, 0x02, 0x23, // roj......H.....#
	0x07, 0x00, 0x00, 0x01, 0x00, 0x06, 0x00, 0x08, 0x00, 0x52, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .........R......
	0x00, 0x11, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x06, 0x00, 0x01, 0x00, 0x00, // ................
	0x00, 0x47, 0x4c, 0x53, 0x4c, 0x2e, 0x73, 0x74, 0x64, 0x2e, 0x34, 0x35, 0x30, 0x00, 0x00, 0x00, // .GLSL.std.450...
	0x00, 0x0e, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x08, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, // .........main...
	0x00, 0x35, 0x00, 0x00, 0x00, 0x39, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, // .5...9...<......
	0x00, 0x05, 0x00, 0x00, 0x00, 0xf4, 0x01, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, // ................
	0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x1f, 0x00, 0x00, // .main...........
	0x00, 0x24, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x00, 0x06, 0x00, 0x06, 0x00, 0x1f, 0x00, 0x00, // .$Global........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x52, 0x65, 0x63, 0x74, 0x00, // .....u_viewRect.
	0x00, 0x06, 0x00, 0x06, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, // .............u_v
	0x69, 0x65, 0x77, 0x54, 0x65, 0x78, 0x65, 0x6c, 0x00, 0x06, 0x00, 0x05, 0x00, 0x1f, 0x00, 0x00, // iewTexel........
	0x00, 0x02, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x00, 0x00, 0x06, 0x00, 0x06, // .....u_view.....
	0x00, 0x1f, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x56, 0x69, // .........u_invVi
	0x65, 0x77, 0x00, 0x00, 0x00, 0x06, 0x00, 0x05, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, // ew..............
	0x00, 0x75, 0x5f, 0x70, 0x72, 0x6f, 0x6a, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x1f, 0x00, 0x00, // .u_proj.........
	0x00, 0x05, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x00, // .....u_invProj..
	0x00, 0x06, 0x00, 0x06, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, // .............u_v
	0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x00, 0x06, 0x00, 0x07, 0x00, 0x1f, 0x00, 0x00, // iewProj.........
	0x00, 0x07, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, // .....u_invViewPr
	0x6f, 0x6a, 0x00, 0x00, 0x00, 0x06, 0x00, 0x05, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, // oj..............
	0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x00, 0x06, 0x00, 0x06, 0x00, 0x1f, 0x00, 0x00, // .u_model........
	0x00, 0x09, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, // .....u_modelView
	0x00, 0x06, 0x00, 0x07, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, // .............u_m
	0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x06, 0x00, 0x06, // odelViewProj....
	0x00, 0x1f, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x61, 0x6c, 0x70, 0x68, 0x61, // .........u_alpha
	0x52, 0x65, 0x66, 0x34, 0x00, 0x05, 0x00, 0x03, 0x00, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // Ref4.....!......
	0x00, 0x05, 0x00, 0x05, 0x00, 0x35, 0x00, 0x00, 0x00, 0x61, 0x5f, 0x69, 0x6e, 0x64, 0x69, 0x63, // .....5...a_indic
	0x65, 0x73, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x39, 0x00, 0x00, 0x00, 0x61, 0x5f, 0x70, // es.......9...a_p
	0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x05, 0x00, 0x0a, 0x00, 0x3c, 0x00, 0x00, // osition......<..
	0x00, 0x40, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, // .@entryPointOutp
	0x75, 0x74, 0x2e, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, // ut.gl_Position..
	0x00, 0x47, 0x00, 0x04, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, // .G...........@..
	0x00, 0x48, 0x00, 0x05, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, // .H...........#..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // .....H..........
	0x00, 0x23, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x1f, 0x00, 0x00, // .#.......H......
	0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x1f, 0x00, 0x00, // .........H......
	0x00, 0x02, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, // .....#... ...H..
	0x00, 0x1f, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, // ................
	0x00, 0x48, 0x00, 0x04, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, // .H..............
	0x00, 0x48, 0x00, 0x05, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, // .H...........#..
	0x00, 0x60, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, // .`...H..........
	0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x1f, 0x00, 0x00, // .........H......
	0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x1f, 0x00, 0x00, // .........H......
	0x00, 0x04, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, // .....#.......H..
	0x00, 0x1f, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, // ................
	0x00, 0x48, 0x00, 0x04, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, // .H..............
	0x00, 0x48, 0x00, 0x05, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, // .H...........#..
	0x00, 0xe0, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, // .....H..........
	0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x1f, 0x00, 0x00, // .........H......
	0x00, 0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x1f, 0x00, 0x00, // .........H......
	0x00, 0x06, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00, 0x48, 0x00, 0x05, // .....#... ...H..
	0x00, 0x1f, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, // ................
	0x00, 0x48, 0x00, 0x04, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, // .H..............
	0x00, 0x48, 0x00, 0x05, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, // .H...........#..
	0x00, 0x60, 0x01, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, // .`...H..........
	0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x1f, 0x00, 0x00, // .........H......
	0x00, 0x08, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x1f, 0x00, 0x00, // .........H......
	0x00, 0x08, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xa0, 0x01, 0x00, 0x00, 0x48, 0x00, 0x05, // .....#.......H..
	0x00, 0x1f, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, // ................
	0x00, 0x48, 0x00, 0x04, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, // .H..............
	0x00, 0x48, 0x00, 0x05, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, // .H...........#..
	0x00, 0xa0, 0x09, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, // .....H..........
	0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x1f, 0x00, 0x00, // .........H......
	0x00, 0x0a, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x1f, 0x00, 0x00, // .........H......
	0x00, 0x0a, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xe0, 0x09, 0x00, 0x00, 0x48, 0x00, 0x05, // .....#.......H..
	0x00, 0x1f, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, // ................
	0x00, 0x48, 0x00, 0x05, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, // .H...........#..
	0x00, 0x20, 0x0a, 0x00, 0x00, 0x47, 0x00, 0x03, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, // . ...G..........
	0x00, 0x47, 0x00, 0x04, 0x00, 0x21, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .G...!..."......
	0x00, 0x47, 0x00, 0x04, 0x00, 0x35, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .G...5..........
	0x00, 0x47, 0x00, 0x04, 0x00, 0x39, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // .G...9..........
	0x00, 0x47, 0x00, 0x04, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .G...<..........
	0x00, 0x13, 0x00, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 0x21, 0x00, 0x03, 0x00, 0x03, 0x00, 0x00, // .........!......
	0x00, 0x02, 0x00, 0x00, 0x00, 0x15, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, // ............. ..
	0x00, 0x01, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, // ................
	0x00, 0x04, 0x00, 0x00, 0x00, 0x16, 0x00, 0x03, 0x00, 0x09, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, // ............. ..
	0x00, 0x17, 0x00, 0x04, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, // ................
	0x00, 0x17, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, // ................
	0x00, 0x2b, 0x00, 0x04, 0x00, 0x09, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, // .+..............
	0x3f, 0x18, 0x00, 0x04, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, // ?...............
	0x00, 0x15, 0x00, 0x04, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ......... ......
	0x00, 0x2b, 0x00, 0x04, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, // .+........... ..
	0x00, 0x1c, 0x00, 0x04, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, // ................
	0x00, 0x1e, 0x00, 0x0e, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, // ................
	0x00, 0x1b, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, // ................
	0x00, 0x1b, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, // ................
	0x00, 0x1b, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x20, 0x00, 0x00, // ......... ... ..
	0x00, 0x02, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x20, 0x00, 0x00, // .........;... ..
	0x00, 0x21, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, // .!.......+......
	0x00, 0x22, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, // .".......+......
	0x00, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x24, 0x00, 0x00, // .#....... ...$..
	0x00, 0x02, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, // .........+......
	0x00, 0x2b, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x34, 0x00, 0x00, // .+....... ...4..
	0x00, 0x01, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x34, 0x00, 0x00, // .........;...4..
	0x00, 0x35, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x38, 0x00, 0x00, // .5....... ...8..
	0x00, 0x01, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x38, 0x00, 0x00, // .........;...8..
	0x00, 0x39, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x3b, 0x00, 0x00, // .9....... ...;..
	0x00, 0x03, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x3b, 0x00, 0x00, // .........;...;..
	0x00, 0x3c, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x36, 0x00, 0x05, 0x00, 0x02, 0x00, 0x00, // .<.......6......
	0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x02, // ................
	0x00, 0x05, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x00, // .....=.......:..
	0x00, 0x39, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x09, 0x00, 0x00, 0x00, 0x47, 0x00, 0x00, // .9...Q.......G..
	0x00, 0x3a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x09, 0x00, 0x00, // .:.......Q......
	0x00, 0x48, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, // .H...:.......Q..
	0x00, 0x09, 0x00, 0x00, 0x00, 0x49, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, // .....I...:......
	0x00, 0x50, 0x00, 0x07, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x4a, 0x00, 0x00, 0x00, 0x47, 0x00, 0x00, // .P.......J...G..
	0x00, 0x48, 0x00, 0x00, 0x00, 0x49, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x41, 0x00, 0x06, // .H...I.......A..
	0x00, 0x24, 0x00, 0x00, 0x00, 0x4b, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, // .$...K...!..."..
	0x00, 0x23, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x4c, 0x00, 0x00, // .#...=.......L..
	0x00, 0x4b, 0x00, 0x00, 0x00, 0x90, 0x00, 0x05, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x4d, 0x00, 0x00, // .K...........M..
	0x00, 0x4a, 0x00, 0x00, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x41, 0x00, 0x05, 0x00, 0x24, 0x00, 0x00, // .J...L...A...$..
	0x00, 0x4f, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, // .O...!...+...=..
	0x00, 0x1b, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x00, 0x00, 0x90, 0x00, 0x05, // .....P...O......
	0x00, 0x0c, 0x00, 0x00, 0x00, 0x51, 0x00, 0x00, 0x00, 0x4d, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, // .....Q...M...P..
	0x00, 0x3e, 0x00, 0x03, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x51, 0x00, 0x00, 0x00, 0xfd, 0x00, 0x01, // .>...<...Q......
	0x00, 0x38, 0x00, 0x01, 0x00, 0x00,                                                             // .8....
};
static const uint8_t vs_debugdraw_fill_mesh_dx9[402] =
{
	0x56, 0x53, 0x48, 0x05, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x07, 0x75, 0x5f, 0x6d, 0x6f, 0x64, // VSH........u_mod
	0x65, 0x6c, 0x04, 0x20, 0x04, 0x00, 0x04, 0x00, 0x0a, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, // el. .....u_viewP
	0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x04, 0x00, 0x64, 0x01, 0x00, 0x00, 0x00, 0x03, 0xfe, // roj......d......
	0xff, 0xfe, 0xff, 0x2b, 0x00, 0x43, 0x54, 0x41, 0x42, 0x1c, 0x00, 0x00, 0x00, 0x7f, 0x00, 0x00, // ...+.CTAB.......
	0x00, 0x00, 0x03, 0xfe, 0xff, 0x02, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x91, 0x00, // ................
	0x00, 0x78, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x02, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, // .x...D..........
	0x00, 0x4c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, // .L..............
	0x00, 0x04, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, // .....h.......u_m
	0x6f, 0x64, 0x65, 0x6c, 0x00, 0x03, 0x00, 0x03, 0x00, 0x04, 0x00, 0x04, 0x00, 0x20, 0x00, 0x00, // odel......... ..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, // .....u_viewProj.
	0xab, 0x03, 0x00, 0x03, 0x00, 0x04, 0x00, 0x04, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x76, 0x73, 0x5f, 0x33, 0x5f, 0x30, 0x00, 0x4d, 0x69, 0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66, // .vs_3_0.Microsof
	0x74, 0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, 0x20, 0x53, 0x68, 0x61, 0x64, 0x65, // t (R) HLSL Shade
	0x72, 0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, 0x20, 0x31, 0x30, 0x2e, 0x31, 0x00, // r Compiler 10.1.
	0xab, 0x1f, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x0f, 0x90, 0x1f, 0x00, 0x00, // ................
	0x02, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x0f, 0xe0, 0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0f, // ................
	0x80, 0x05, 0x00, 0xe4, 0xa0, 0x00, 0x00, 0x55, 0x90, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0f, // .......U........
	0x80, 0x04, 0x00, 0xe4, 0xa0, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0xe4, 0x80, 0x04, 0x00, 0x00, // ................
	0x04, 0x00, 0x00, 0x0f, 0x80, 0x06, 0x00, 0xe4, 0xa0, 0x00, 0x00, 0xaa, 0x90, 0x00, 0x00, 0xe4, // ................
	0x80, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0xe4, 0x80, 0x07, 0x00, 0xe4, // ................
	0xa0, 0x05, 0x00, 0x00, 0x03, 0x01, 0x00, 0x0f, 0x80, 0x00, 0x00, 0x55, 0x80, 0x01, 0x00, 0xe4, // ...........U....
	0xa0, 0x04, 0x00, 0x00, 0x04, 0x01, 0x00, 0x0f, 0x80, 0x00, 0x00, 0xe4, 0xa0, 0x00, 0x00, 0x00, // ................
	0x80, 0x01, 0x00, 0xe4, 0x80, 0x04, 0x00, 0x00, 0x04, 0x01, 0x00, 0x0f, 0x80, 0x02, 0x00, 0xe4, // ................
	0xa0, 0x00, 0x00, 0xaa, 0x80, 0x01, 0x00, 0xe4, 0x80, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0f, // ................
	0xe0, 0x03, 0x00, 0xe4, 0xa0, 0x00, 0x00, 0xff, 0x80, 0x01, 0x00, 0xe4, 0x80, 0xff, 0xff, 0x00, // ................
	0x00, 0x00,                                                                                     // ..
};
static const uint8_t vs_debugdraw_fill_mesh_dx11[605] =
{
	0x56, 0x53, 0x48, 0x05, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x0a, 0x75, 0x5f, 0x76, 0x69, 0x65, // VSH........u_vie
	0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x07, 0x75, 0x5f, 0x6d, 0x6f, // wProj.......u_mo
	0x64, 0x65, 0x6c, 0x04, 0x20, 0x40, 0x00, 0x80, 0x00, 0x28, 0x02, 0x00, 0x00, 0x44, 0x58, 0x42, // del. @...(...DXB
	0x43, 0x27, 0x23, 0xd8, 0x33, 0xce, 0xb9, 0x21, 0xaa, 0x08, 0x79, 0xa6, 0x15, 0x6b, 0x1a, 0x45, // C'#.3..!..y..k.E
	0x8d, 0x01, 0x00, 0x00, 0x00, 0x28, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, // .....(.......,..
	0x00, 0x84, 0x00, 0x00, 0x00, 0xb8, 0x00, 0x00, 0x00, 0x49, 0x53, 0x47, 0x4e, 0x50, 0x00, 0x00, // .........ISGNP..
	0x00, 0x02, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .........8......
	0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, // ................
	0x00, 0x45, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, // .E..............
	0x00, 0x01, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x42, 0x4c, 0x45, 0x4e, 0x44, 0x49, 0x4e, // .........BLENDIN
	0x44, 0x49, 0x43, 0x45, 0x53, 0x00, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0xab, // DICES.POSITION..
	0xab, 0x4f, 0x53, 0x47, 0x4e, 0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, // .OSGN,..........
	0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, // . ..............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, // .........SV_POSI
	0x54, 0x49, 0x4f, 0x4e, 0x00, 0x53, 0x48, 0x44, 0x52, 0x68, 0x01, 0x00, 0x00, 0x40, 0x00, 0x01, // TION.SHDRh...@..
	0x00, 0x5a, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x04, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, // .Z...Y...F. ....
	0x00, 0x08, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x03, 0x72, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, // ....._...r......
	0x00, 0x67, 0x00, 0x00, 0x04, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // .g.... .........
	0x00, 0x68, 0x00, 0x00, 0x02, 0x02, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x08, 0xf2, 0x00, 0x10, // .h.......8......
	0x00, 0x00, 0x00, 0x00, 0x00, 0x56, 0x15, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, // .....V.......F. 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, // .........2......
	0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, // .....F. ........
	0x00, 0x06, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, // .........F......
	0x00, 0x32, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, // .2...........F. 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0xa6, 0x1a, 0x10, 0x00, 0x01, 0x00, 0x00, // ................
	0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0xf2, 0x00, 0x10, // .F..............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, // .....F.......F. 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x08, 0xf2, 0x00, 0x10, // .........8......
	0x00, 0x01, 0x00, 0x00, 0x00, 0x56, 0x05, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, // .....V.......F. 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, // .........2......
	0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .....F. ........
	0x00, 0x06, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x01, 0x00, 0x00, // .........F......
	0x00, 0x32, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, // .2...........F. 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xa6, 0x0a, 0x10, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x46, 0x0e, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0xf2, 0x20, 0x10, // .F.......2.... .
	0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, // .....F. ........
	0x00, 0xf6, 0x0f, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x01, 0x00, 0x00, // .........F......
	0x00, 0x3e, 0x00, 0x00, 0x01, 0x00, 0x02, 0x0e, 0x00, 0x01, 0x00, 0x40, 0x08,                   // .>.........@.
};
static const uint8_t vs_debugdraw_fill_mesh_mtl[626] =
{
	0x56, 0x53, 0x48, 0x05, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x0a, 0x75, 0x5f, 0x76, 0x69, 0x65, // VSH........u_vie
	0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x01, 0x00, 0x07, 0x75, 0x5f, 0x6d, 0x6f, // wProj.......u_mo
	0x64, 0x65, 0x6c, 0x04, 0x20, 0x00, 0x00, 0x20, 0x00, 0x44, 0x02, 0x00, 0x00, 0x75, 0x73, 0x69, // del. .. .D...usi
	0x6e, 0x67, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x73, 0x70, 0x61, 0x63, 0x65, 0x20, 0x6d, 0x65, 0x74, // ng namespace met
	0x61, 0x6c, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, // al;.struct xlatM
	0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x20, 0x7b, 0x0a, // tlShaderInput {.
	0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, //   float3 a_posit
	0x69, 0x6f, 0x6e, 0x20, 0x5b, 0x5b, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x28, // ion [[attribute(
	0x30, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, // 0)]];.};.struct 
	0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, // xlatMtlShaderOut
	0x70, 0x75, 0x74, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x67, // put {.  float4 g
	0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x5b, 0x5b, 0x70, 0x6f, 0x73, // l_Position [[pos
	0x69, 0x74, 0x69, 0x6f, 0x6e, 0x5d, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, // ition]];.};.stru
	0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, // ct xlatMtlShader
	0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, // Uniform {.  floa
	0x74, 0x34, 0x78, 0x34, 0x20, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x3b, // t4x4 u_viewProj;
	0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x78, 0x34, 0x20, 0x75, 0x5f, 0x6d, 0x6f, // .  float4x4 u_mo
	0x64, 0x65, 0x6c, 0x5b, 0x33, 0x32, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x76, 0x65, 0x72, 0x74, // del[32];.};.vert
	0x65, 0x78, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, // ex xlatMtlShader
	0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, // Output xlatMtlMa
	0x69, 0x6e, 0x20, 0x28, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, // in (xlatMtlShade
	0x72, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x20, 0x5b, 0x5b, // rInput _mtl_i [[
	0x73, 0x74, 0x61, 0x67, 0x65, 0x5f, 0x69, 0x6e, 0x5d, 0x5d, 0x2c, 0x20, 0x63, 0x6f, 0x6e, 0x73, // stage_in]], cons
	0x74, 0x61, 0x6e, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, // tant xlatMtlShad
	0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x26, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, // erUniform& _mtl_
	0x75, 0x20, 0x5b, 0x5b, 0x62, 0x75, 0x66, 0x66, 0x65, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x29, // u [[buffer(0)]])
	0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, // .{.  xlatMtlShad
	0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x3b, // erOutput _mtl_o;
	0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // .  float4 tmpvar
	0x5f, 0x31, 0x20, 0x3d, 0x20, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // _1 = 0;.  tmpvar
	0x5f, 0x31, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x31, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, // _1.w = 1.0;.  tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x5f, 0x6d, 0x74, // pvar_1.xyz = _mt
	0x6c, 0x5f, 0x69, 0x2e, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, // l_i.a_position;.
	0x20, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x2e, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, //   _mtl_o.gl_Posi
	0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3d, 0x20, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, // tion = (_mtl_u.u
	0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x20, 0x2a, 0x20, 0x28, 0x5f, 0x6d, 0x74, // _viewProj * (_mt
	0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x5b, 0x30, 0x5d, 0x20, 0x2a, // l_u.u_model[0] *
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x72, //  tmpvar_1));.  r
	0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x7d, 0x0a, // eturn _mtl_o;.}.
	0x0a, 0x00,                                                                                     // ..
};
extern const uint8_t* vs_debugdraw_fill_mesh_pssl;
extern const uint32_t vs_debugdraw_fill_mesh_pssl_size;
