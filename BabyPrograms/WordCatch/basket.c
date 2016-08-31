int basket_width = 32;
int basket_height = 16;
unsigned char basket_rgba[2048] = 
{
0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 
0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 
0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 
0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xf9, 0xf9, 0xf9, 0x05, 
0xe4, 0xe4, 0xe4, 0x18, 0xd2, 0xd2, 0xd2, 0x2a, 0xc6, 0xc6, 
0xc6, 0x37, 0xbf, 0xbf, 0xbf, 0x3e, 0xb7, 0xb6, 0xb5, 0x4a, 
0xb7, 0xb6, 0xb5, 0x4a, 0xb7, 0xb6, 0xb5, 0x4a, 0xb7, 0xb6, 
0xb5, 0x4a, 0xba, 0xb9, 0xb8, 0x46, 0xbf, 0xbf, 0xbf, 0x3e, 
0xca, 0xca, 0xca, 0x33, 0xd7, 0xd7, 0xd7, 0x25, 0xeb, 0xeb, 
0xeb, 0x11, 0xfd, 0xfd, 0xfd, 0x01, 0xff, 0xff, 0xff, 0x00, 
0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 
0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 
0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 
0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 
0xfb, 0xfb, 0xfb, 0x03, 0xc4, 0xc3, 0xc3, 0x3a, 0x9d, 0x97, 
0x95, 0x73, 0x82, 0x77, 0x72, 0xa1, 0x6b, 0x5b, 0x55, 0xc9, 
0x58, 0x44, 0x3c, 0xe8, 0x4e, 0x38, 0x2e, 0xfd, 0x57, 0x3e, 
0x34, 0xff, 0x5e, 0x43, 0x38, 0xff, 0x63, 0x47, 0x3b, 0xff, 
0x66, 0x49, 0x3d, 0xff, 0x66, 0x49, 0x3d, 0xff, 0x66, 0x49, 
0x3d, 0xff, 0x66, 0x49, 0x3d, 0xff, 0x66, 0x49, 0x3d, 0xff, 
0x66, 0x49, 0x3d, 0xff, 0x66, 0x49, 0x3d, 0xff, 0x62, 0x46, 
0x3a, 0xff, 0x5c, 0x41, 0x37, 0xff, 0x54, 0x3c, 0x32, 0xff, 
0x4f, 0x39, 0x30, 0xf9, 0x5c, 0x4a, 0x42, 0xe0, 0x72, 0x63, 
0x5e, 0xbd, 0x8a, 0x81, 0x7d, 0x94, 0xa6, 0xa2, 0xa1, 0x63, 
0xd7, 0xd7, 0xd7, 0x25, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 
0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 
0xfd, 0xfd, 0xfd, 0x01, 0x94, 0x8f, 0x8d, 0x79, 0x56, 0x44, 
0x3c, 0xe8, 0x60, 0x45, 0x39, 0xff, 0x66, 0x49, 0x3d, 0xff, 
0x66, 0x49, 0x3d, 0xff, 0x66, 0x49, 0x3d, 0xff, 0x66, 0x49, 
0x3d, 0xff, 0x66, 0x49, 0x3d, 0xff, 0x66, 0x49, 0x3d, 0xff, 
0x66, 0x49, 0x3d, 0xff, 0x66, 0x49, 0x3d, 0xff, 0x66, 0x49, 
0x3d, 0xff, 0x66, 0x49, 0x3d, 0xff, 0x66, 0x49, 0x3d, 0xff, 
0x66, 0x49, 0x3d, 0xff, 0x66, 0x49, 0x3d, 0xff, 0x66, 0x49, 
0x3d, 0xff, 0x66, 0x49, 0x3d, 0xff, 0x66, 0x49, 0x3d, 0xff, 
0x66, 0x49, 0x3d, 0xff, 0x66, 0x49, 0x3d, 0xff, 0x66, 0x49, 
0x3d, 0xff, 0x66, 0x49, 0x3d, 0xff, 0x66, 0x49, 0x3d, 0xff, 
0x66, 0x49, 0x3d, 0xff, 0x66, 0x49, 0x3d, 0xff, 0x59, 0x40, 
0x35, 0xfe, 0x62, 0x53, 0x4d, 0xcf, 0xbc, 0xba, 0xb9, 0x45, 
0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xc0, 0xc0, 
0xc0, 0x3b, 0x47, 0x33, 0x2b, 0xff, 0x66, 0x49, 0x3d, 0xff, 
0x66, 0x49, 0x3d, 0xff, 0x66, 0x49, 0x3d, 0xff, 0x66, 0x49, 
0x3d, 0xff, 0x66, 0x49, 0x3d, 0xff, 0x66, 0x49, 0x3d, 0xff, 
0x66, 0x49, 0x3d, 0xff, 0x66, 0x49, 0x3d, 0xff, 0x66, 0x49, 
0x3d, 0xff, 0x66, 0x49, 0x3d, 0xff, 0x66, 0x49, 0x3d, 0xff, 
0x66, 0x49, 0x3d, 0xff, 0x66, 0x49, 0x3d, 0xff, 0x66, 0x49, 
0x3d, 0xff, 0x66, 0x49, 0x3d, 0xff, 0x66, 0x49, 0x3d, 0xff, 
0x66, 0x49, 0x3d, 0xff, 0x66, 0x49, 0x3d, 0xff, 0x66, 0x49, 
0x3d, 0xff, 0x66, 0x49, 0x3d, 0xff, 0x66, 0x49, 0x3d, 0xff, 
0x66, 0x49, 0x3d, 0xff, 0x66, 0x49, 0x3d, 0xff, 0x66, 0x49, 
0x3d, 0xff, 0x66, 0x49, 0x3d, 0xff, 0x66, 0x49, 0x3d, 0xff, 
0x66, 0x49, 0x3d, 0xff, 0x38, 0x2c, 0x27, 0xec, 0xff, 0xff, 
0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xd3, 0xd3, 0xd3, 0x28, 
0x33, 0x24, 0x1e, 0xff, 0x40, 0x2e, 0x26, 0xff, 0x4a, 0x35, 
0x2c, 0xff, 0x5b, 0x41, 0x36, 0xff, 0x66, 0x49, 0x3d, 0xff, 
0x66, 0x49, 0x3d, 0xff, 0x66, 0x49, 0x3d, 0xff, 0x66, 0x49, 
0x3d, 0xff, 0x66, 0x49, 0x3d, 0xff, 0x66, 0x49, 0x3d, 0xff, 
0x66, 0x49, 0x3d, 0xff, 0x66, 0x49, 0x3d, 0xff, 0x66, 0x49, 
0x3d, 0xff, 0x66, 0x49, 0x3d, 0xff, 0x66, 0x49, 0x3d, 0xff, 
0x66, 0x49, 0x3d, 0xff, 0x66, 0x49, 0x3d, 0xff, 0x66, 0x49, 
0x3d, 0xff, 0x66, 0x49, 0x3d, 0xff, 0x66, 0x49, 0x3d, 0xff, 
0x66, 0x49, 0x3d, 0xff, 0x66, 0x49, 0x3d, 0xff, 0x66, 0x49, 
0x3d, 0xff, 0x66, 0x49, 0x3d, 0xff, 0x65, 0x48, 0x3c, 0xff, 
0x55, 0x3d, 0x32, 0xff, 0x45, 0x31, 0x29, 0xff, 0x3f, 0x2d, 
0x25, 0xff, 0x41, 0x38, 0x35, 0xd8, 0xff, 0xff, 0xff, 0x00, 
0xff, 0xff, 0xff, 0x00, 0xf6, 0xf6, 0xf6, 0x07, 0x29, 0x1d, 
0x18, 0xfd, 0x49, 0x34, 0x2b, 0xff, 0x3b, 0x2a, 0x23, 0xff, 
0x44, 0x30, 0x28, 0xff, 0x3a, 0x29, 0x22, 0xff, 0x40, 0x2e, 
0x26, 0xff, 0x3d, 0x2c, 0x24, 0xff, 0x46, 0x32, 0x2a, 0xff, 
0x49, 0x34, 0x2c, 0xff, 0x49, 0x34, 0x2c, 0xff, 0x4a, 0x35, 
0x2c, 0xff, 0x4b, 0x36, 0x2d, 0xff, 0x4c, 0x37, 0x2d, 0xff, 
0x4c, 0x37, 0x2d, 0xff, 0x4c, 0x37, 0x2e, 0xff, 0x4c, 0x37, 
0x2e, 0xff, 0x4d, 0x37, 0x2e, 0xff, 0x4c, 0x36, 0x2d, 0xff, 
0x49, 0x34, 0x2b, 0xff, 0x4a, 0x35, 0x2c, 0xff, 0x46, 0x32, 
0x2a, 0xff, 0x45, 0x31, 0x29, 0xff, 0x3c, 0x2b, 0x23, 0xff, 
0x3b, 0x2a, 0x23, 0xff, 0x3a, 0x29, 0x22, 0xff, 0x3e, 0x2c, 
0x25, 0xff, 0x44, 0x30, 0x28, 0xff, 0x47, 0x32, 0x2a, 0xff, 
0x5c, 0x55, 0x53, 0xb6, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 
0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0x37, 0x2e, 0x2a, 0xe3, 
0x34, 0x25, 0x1f, 0xff, 0x2b, 0x1e, 0x19, 0xff, 0x38, 0x28, 
0x21, 0xff, 0x3d, 0x2c, 0x24, 0xff, 0x42, 0x2f, 0x27, 0xff, 
0x37, 0x27, 0x20, 0xff, 0x4e, 0x37, 0x2e, 0xff, 0x4a, 0x34, 
0x2c, 0xff, 0x4f, 0x38, 0x2e, 0xff, 0x3f, 0x2c, 0x25, 0xff, 
0x4d, 0x37, 0x2e, 0xff, 0x4c, 0x36, 0x2d, 0xff, 0x4e, 0x37, 
0x2e, 0xff, 0x3c, 0x2a, 0x23, 0xff, 0x4f, 0x38, 0x2f, 0xff, 
0x4e, 0x38, 0x2e, 0xff, 0x4f, 0x38, 0x2f, 0xff, 0x3f, 0x2d, 
0x25, 0xff, 0x4c, 0x36, 0x2d, 0xff, 0x4d, 0x36, 0x2d, 0xff, 
0x4a, 0x34, 0x2c, 0xff, 0x35, 0x26, 0x1f, 0xff, 0x3d, 0x2b, 
0x24, 0xff, 0x3d, 0x2b, 0x24, 0xff, 0x34, 0x25, 0x1f, 0xff, 
0x2b, 0x1f, 0x19, 0xff, 0x36, 0x26, 0x20, 0xff, 0x74, 0x70, 
0x6e, 0x95, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 
0xff, 0xff, 0xff, 0x00, 0x4f, 0x48, 0x45, 0xc4, 0x3d, 0x2b, 
0x24, 0xff, 0x2d, 0x20, 0x1b, 0xff, 0x36, 0x26, 0x20, 0xff, 
0x33, 0x24, 0x1e, 0xff, 0x34, 0x25, 0x1e, 0xff, 0x2d, 0x20, 
0x1a, 0xff, 0x34, 0x25, 0x1f, 0xff, 0x34, 0x25, 0x1e, 0xff, 
0x34, 0x25, 0x1f, 0xff, 0x2b, 0x1e, 0x19, 0xff, 0x38, 0x28, 
0x21, 0xff, 0x38, 0x27, 0x21, 0xff, 0x3a, 0x29, 0x22, 0xff, 
0x2c, 0x1f, 0x1a, 0xff, 0x38, 0x27, 0x21, 0xff, 0x38, 0x28, 
0x21, 0xff, 0x37, 0x27, 0x20, 0xff, 0x2c, 0x1f, 0x1a, 0xff, 
0x35, 0x26, 0x1f, 0xff, 0x33, 0x24, 0x1e, 0xff, 0x36, 0x26, 
0x20, 0xff, 0x2b, 0x1f, 0x1a, 0xff, 0x33, 0x24, 0x1e, 0xff, 
0x36, 0x26, 0x20, 0xff, 0x35, 0x25, 0x1f, 0xff, 0x31, 0x23, 
0x1d, 0xff, 0x3b, 0x2a, 0x23, 0xff, 0x8b, 0x8a, 0x89, 0x75, 
0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 
0xff, 0x00, 0x74, 0x6e, 0x6c, 0x9c, 0x4f, 0x38, 0x2f, 0xff, 
0x3d, 0x2b, 0x24, 0xff, 0x4c, 0x36, 0x2d, 0xff, 0x4e, 0x37, 
0x2e, 0xff, 0x44, 0x31, 0x28, 0xff, 0x41, 0x2e, 0x26, 0xff, 
0x3f, 0x2d, 0x25, 0xff, 0x3f, 0x2d, 0x25, 0xff, 0x3b, 0x2a, 
0x23, 0xff, 0x33, 0x24, 0x1e, 0xff, 0x3d, 0x2c, 0x24, 0xff, 
0x40, 0x2e, 0x26, 0xff, 0x3d, 0x2b, 0x24, 0xff, 0x2f, 0x21, 
0x1c, 0xff, 0x3d, 0x2b, 0x24, 0xff, 0x3c, 0x2b, 0x24, 0xff, 
0x3f, 0x2d, 0x25, 0xff, 0x32, 0x24, 0x1e, 0xff, 0x3e, 0x2c, 
0x25, 0xff, 0x3e, 0x2c, 0x25, 0xff, 0x44, 0x30, 0x28, 0xff, 
0x37, 0x27, 0x20, 0xff, 0x4c, 0x36, 0x2d, 0xff, 0x4f, 0x38, 
0x2f, 0xff, 0x46, 0x31, 0x29, 0xff, 0x42, 0x2f, 0x27, 0xff, 
0x49, 0x34, 0x2b, 0xff, 0xae, 0xae, 0xae, 0x4d, 0xff, 0xff, 
0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 
0x8f, 0x8d, 0x8c, 0x73, 0x4b, 0x35, 0x2c, 0xff, 0x3c, 0x2b, 
0x23, 0xff, 0x50, 0x38, 0x2f, 0xff, 0x4c, 0x36, 0x2d, 0xff, 
0x3e, 0x2c, 0x25, 0xff, 0x4d, 0x37, 0x2d, 0xff, 0x4e, 0x37, 
0x2e, 0xff, 0x4e, 0x37, 0x2e, 0xff, 0x40, 0x2e, 0x26, 0xff, 
0x4b, 0x35, 0x2c, 0xff, 0x4a, 0x35, 0x2c, 0xff, 0x4e, 0x37, 
0x2e, 0xff, 0x4a, 0x35, 0x2c, 0xff, 0x3c, 0x2b, 0x24, 0xff, 
0x50, 0x39, 0x2f, 0xff, 0x4b, 0x35, 0x2c, 0xff, 0x50, 0x39, 
0x2f, 0xff, 0x3c, 0x2a, 0x23, 0xff, 0x4c, 0x36, 0x2d, 0xff, 
0x4f, 0x38, 0x2f, 0xff, 0x4d, 0x37, 0x2e, 0xff, 0x3e, 0x2c, 
0x25, 0xff, 0x4d, 0x37, 0x2e, 0xff, 0x4b, 0x35, 0x2c, 0xff, 
0x40, 0x2d, 0x26, 0xff, 0x4a, 0x35, 0x2c, 0xff, 0x3c, 0x2b, 
0x23, 0xff, 0xd6, 0xd6, 0xd6, 0x25, 0xff, 0xff, 0xff, 0x00, 
0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xb9, 0xb9, 
0xb9, 0x42, 0x45, 0x31, 0x29, 0xff, 0x3f, 0x2d, 0x25, 0xff, 
0x4e, 0x37, 0x2e, 0xff, 0x50, 0x38, 0x2f, 0xff, 0x41, 0x2e, 
0x26, 0xff, 0x4b, 0x35, 0x2c, 0xff, 0x4d, 0x37, 0x2e, 0xff, 
0x49, 0x34, 0x2b, 0xff, 0x3f, 0x2c, 0x25, 0xff, 0x4d, 0x36, 
0x2d, 0xff, 0x4f, 0x38, 0x2f, 0xff, 0x4f, 0x38, 0x2e, 0xff, 
0x4e, 0x38, 0x2e, 0xff, 0x3b, 0x2a, 0x23, 0xff, 0x4e, 0x37, 
0x2e, 0xff, 0x53, 0x3b, 0x31, 0xff, 0x4a, 0x35, 0x2c, 0xff, 
0x3d, 0x2b, 0x24, 0xff, 0x4c, 0x36, 0x2d, 0xff, 0x4d, 0x37, 
0x2d, 0xff, 0x4d, 0x37, 0x2e, 0xff, 0x3d, 0x2b, 0x24, 0xff, 
0x4c, 0x36, 0x2d, 0xff, 0x4f, 0x38, 0x2e, 0xff, 0x3f, 0x2c, 
0x25, 0xff, 0x4e, 0x37, 0x2e, 0xff, 0x39, 0x2c, 0x26, 0xf0, 
0xfc, 0xfc, 0xfc, 0x02, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 
0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xf2, 0xf2, 0xf2, 0x0b, 
0x3a, 0x2b, 0x25, 0xf5, 0x46, 0x32, 0x29, 0xff, 0x43, 0x2f, 
0x27, 0xff, 0x4f, 0x38, 0x2f, 0xff, 0x4a, 0x35, 0x2c, 0xff, 
0x3f, 0x2d, 0x25, 0xff, 0x4b, 0x35, 0x2c, 0xff, 0x4e, 0x37, 
0x2e, 0xff, 0x3f, 0x2d, 0x25, 0xff, 0x4a, 0x35, 0x2c, 0xff, 
0x4d, 0x37, 0x2e, 0xff, 0x4c, 0x36, 0x2d, 0xff, 0x4d, 0x37, 
0x2e, 0xff, 0x3b, 0x2a, 0x23, 0xff, 0x4f, 0x38, 0x2e, 0xff, 
0x4e, 0x38, 0x2e, 0xff, 0x4b, 0x36, 0x2d, 0xff, 0x3c, 0x2a, 
0x23, 0xff, 0x4f, 0x38, 0x2e, 0xff, 0x4b, 0x36, 0x2d, 0xff, 
0x4f, 0x38, 0x2f, 0xff, 0x3a, 0x29, 0x22, 0xff, 0x4e, 0x37, 
0x2e, 0xff, 0x4d, 0x37, 0x2e, 0xff, 0x3c, 0x2a, 0x23, 0xff, 
0x4d, 0x37, 0x2d, 0xff, 0x63, 0x5c, 0x59, 0xb2, 0xff, 0xff, 
0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 
0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0x7b, 0x79, 
0x78, 0x86, 0x33, 0x24, 0x1e, 0xff, 0x2d, 0x20, 0x1a, 0xff, 
0x3d, 0x2b, 0x24, 0xff, 0x40, 0x2d, 0x26, 0xff, 0x31, 0x23, 
0x1d, 0xff, 0x42, 0x2f, 0x27, 0xff, 0x40, 0x2d, 0x26, 0xff, 
0x42, 0x2f, 0x27, 0xff, 0x42, 0x2f, 0x27, 0xff, 0x4e, 0x37, 
0x2e, 0xff, 0x50, 0x39, 0x2f, 0xff, 0x4d, 0x36, 0x2d, 0xff, 
0x3c, 0x2b, 0x24, 0xff, 0x4d, 0x37, 0x2e, 0xff, 0x4e, 0x38, 
0x2e, 0xff, 0x4f, 0x38, 0x2e, 0xff, 0x3c, 0x2a, 0x23, 0xff, 
0x47, 0x32, 0x2a, 0xff, 0x3f, 0x2d, 0x25, 0xff, 0x41, 0x2e, 
0x27, 0xff, 0x31, 0x23, 0x1d, 0xff, 0x3f, 0x2d, 0x25, 0xff, 
0x3a, 0x29, 0x22, 0xff, 0x2c, 0x1f, 0x1a, 0xff, 0x2d, 0x20, 
0x1b, 0xfa, 0xc0, 0xc0, 0xc0, 0x3c, 0xff, 0xff, 0xff, 0x00, 
0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 
0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xfe, 0xfe, 0xfe, 0x00, 
0x90, 0x8f, 0x8e, 0x70, 0x28, 0x1e, 0x1a, 0xf8, 0x37, 0x27, 
0x20, 0xff, 0x39, 0x28, 0x21, 0xff, 0x2a, 0x1d, 0x18, 0xff, 
0x33, 0x24, 0x1e, 0xff, 0x37, 0x27, 0x20, 0xff, 0x37, 0x27, 
0x21, 0xff, 0x29, 0x1d, 0x18, 0xff, 0x33, 0x24, 0x1e, 0xff, 
0x33, 0x24, 0x1e, 0xff, 0x34, 0x25, 0x1f, 0xff, 0x28, 0x1c, 
0x17, 0xff, 0x34, 0x25, 0x1f, 0xff, 0x33, 0x24, 0x1e, 0xff, 
0x32, 0x24, 0x1e, 0xff, 0x2a, 0x1e, 0x19, 0xff, 0x38, 0x28, 
0x21, 0xff, 0x35, 0x26, 0x1f, 0xff, 0x33, 0x24, 0x1e, 0xff, 
0x2d, 0x20, 0x1b, 0xff, 0x37, 0x27, 0x21, 0xff, 0x30, 0x22, 
0x1c, 0xff, 0x3c, 0x33, 0x30, 0xde, 0xc1, 0xc1, 0xc1, 0x3c, 
0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 
0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 
0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 
0xff, 0x00, 0xda, 0xd9, 0xd9, 0x23, 0x6b, 0x64, 0x61, 0xa9, 
0x43, 0x30, 0x28, 0xfd, 0x3f, 0x2d, 0x25, 0xff, 0x4d, 0x37, 
0x2e, 0xff, 0x48, 0x33, 0x2b, 0xff, 0x42, 0x2f, 0x27, 0xff, 
0x34, 0x25, 0x1e, 0xff, 0x3e, 0x2c, 0x25, 0xff, 0x3e, 0x2c, 
0x25, 0xff, 0x3d, 0x2c, 0x24, 0xff, 0x30, 0x22, 0x1c, 0xff, 
0x3d, 0x2b, 0x24, 0xff, 0x3e, 0x2c, 0x24, 0xff, 0x42, 0x2f, 
0x27, 0xff, 0x34, 0x25, 0x1f, 0xff, 0x43, 0x30, 0x28, 0xff, 
0x4b, 0x35, 0x2c, 0xff, 0x45, 0x31, 0x29, 0xff, 0x44, 0x31, 
0x28, 0xff, 0x44, 0x34, 0x2d, 0xf0, 0x87, 0x83, 0x82, 0x80, 
0xf3, 0xf3, 0xf3, 0x0a, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 
0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 
0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 
0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 
0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xe0, 0xe0, 
0xe0, 0x1c, 0xa8, 0xa6, 0xa5, 0x5c, 0x95, 0x90, 0x8e, 0x79, 
0x87, 0x81, 0x7f, 0x8a, 0x87, 0x80, 0x7d, 0x8f, 0x7b, 0x75, 
0x72, 0x97, 0x81, 0x79, 0x76, 0x97, 0x81, 0x79, 0x76, 0x97, 
0x83, 0x7a, 0x77, 0x97, 0x7b, 0x75, 0x72, 0x97, 0x84, 0x7b, 
0x77, 0x97, 0x81, 0x79, 0x76, 0x97, 0x81, 0x79, 0x76, 0x97, 
0x7c, 0x75, 0x73, 0x97, 0x87, 0x81, 0x7e, 0x8b, 0x8c, 0x86, 
0x83, 0x86, 0x96, 0x92, 0x91, 0x73, 0xb5, 0xb4, 0xb3, 0x4c, 
0xf2, 0xf2, 0xf2, 0x0b, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 
0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 
0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 
};


int snowflake_width = 8;
int snowflake_height = 8;
unsigned char snowflake_rgba[256] =
{
	0xaa, 0xaa, 0xaa, 0x00, 0xaa, 0xaa, 0xaa, 0x00, 0xb3, 0xb3,
	0xb3, 0x1f, 0xb9, 0xb9, 0xb9, 0xaf, 0xb3, 0xb3, 0xb3, 0x2f,
	0xaa, 0xaa, 0xaa, 0x00, 0xaa, 0xaa, 0xaa, 0x00, 0xaa, 0xaa,
	0xaa, 0x00, 0xb2, 0xb2, 0xb2, 0x2f, 0xc2, 0xc2, 0xc2, 0x7f,
	0xa3, 0xa3, 0xa3, 0x6f, 0xc5, 0xc5, 0xc5, 0xef, 0xa2, 0xa2,
	0xa2, 0x9f, 0xb3, 0xb3, 0xb3, 0x7f, 0xac, 0xac, 0xac, 0x2f,
	0xaa, 0xaa, 0xaa, 0x00, 0xb6, 0xb6, 0xb6, 0x3f, 0xd4, 0xd4,
	0xd4, 0xff, 0xb4, 0xb4, 0xb4, 0x7f, 0xbb, 0xbb, 0xbb, 0xbf,
	0xc8, 0xc8, 0xc8, 0x8f, 0xb3, 0xb3, 0xb3, 0xff, 0xa4, 0xa4,
	0xa4, 0x4f, 0xaa, 0xaa, 0xaa, 0x00, 0xb5, 0xb5, 0xb5, 0x4f,
	0x9a, 0x9a, 0x9a, 0x4f, 0xb8, 0xb8, 0xb8, 0x7f, 0xd0, 0xd0,
	0xd0, 0xff, 0x96, 0x96, 0x96, 0xaf, 0xac, 0xac, 0xac, 0x4f,
	0xa0, 0xa0, 0xa0, 0x4f, 0xaa, 0xaa, 0xaa, 0x00, 0xb5, 0xb5,
	0xb5, 0x3f, 0xd8, 0xd8, 0xd8, 0xff, 0xa0, 0xa0, 0xa0, 0xaf,
	0xaa, 0xaa, 0xaa, 0xcf, 0xac, 0xac, 0xac, 0x8f, 0xbb, 0xbb,
	0xbb, 0xff, 0x9d, 0x9d, 0x9d, 0x4f, 0xaa, 0xaa, 0xaa, 0x00,
	0xaf, 0xaf, 0xaf, 0x2f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9a, 0x9a,
	0x9a, 0x8f, 0xb8, 0xb8, 0xb8, 0xef, 0xb1, 0xb1, 0xb1, 0x5f,
	0x8e, 0x8e, 0x8e, 0x8f, 0x99, 0x99, 0x99, 0x4f, 0xaa, 0xaa,
	0xaa, 0x00, 0xaa, 0xaa, 0xaa, 0x00, 0xaa, 0xaa, 0xaa, 0x00,
	0xa2, 0xa2, 0xa2, 0x4f, 0x96, 0x96, 0x96, 0xbf, 0xa0, 0xa0,
	0xa0, 0x3f, 0xaa, 0xaa, 0xaa, 0x00, 0xaa, 0xaa, 0xaa, 0x00,
	0xaa, 0xaa, 0xaa, 0x00, 0xaa, 0xaa, 0xaa, 0x00, 0xaa, 0xaa,
	0xaa, 0x00, 0xaa, 0xaa, 0xaa, 0x00, 0xaa, 0xaa, 0xaa, 0x00,
	0xaa, 0xaa, 0xaa, 0x00, 0xaa, 0xaa, 0xaa, 0x00, 0xaa, 0xaa,
	0xaa, 0x00, 0xaa, 0xaa, 0xaa, 0x00,
};