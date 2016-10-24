
void** g100b2d0 = reinterpret_cast<void**>(64);

int32_t g1001184 = 0x7c801d77;

int32_t g10010d0 = 0x7c80ac28;

int32_t g1001004 = 0x77dd7a91;

int32_t g1001000 = 0x77dd7a80;

int32_t g1001194 = 0x7c80aa66;

void** fun_10064de(void** ecx, ...);

int16_t fun_10016b4(int32_t* a1) {
    void** eax2;
    int32_t eax3;
    int32_t edi4;
    int32_t eax5;
    int32_t eax6;
    int32_t v7;
    int32_t v8;
    void** eax9;

    eax2 = g100b2d0;
    eax3 = reinterpret_cast<int32_t>(g1001184());
    if (eax3) {
        eax5 = reinterpret_cast<int32_t>(g10010d0(eax3, "CheckTokenMembership", edi4));
        if (eax5 && (*a1 = 0, eax6 = reinterpret_cast<int32_t>(g1001004(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 12, 2, 32, 0x220, 0, 0, 0, 0, 0, 0, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 20, eax3, "CheckTokenMembership", edi4)), !!eax6)) {
            eax5(0, v7, a1, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 12, 2, 32, 0x220, 0, 0, 0, 0, 0, 0, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 20, eax3, "CheckTokenMembership", edi4);
            g1001000(v8, 0, v7, a1, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 12, 2, 32, 0x220, 0, 0, 0, 0, 0, 0, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 20, eax3, "CheckTokenMembership", edi4);
        }
        g1001194();
    }
    eax9 = fun_10064de(eax2, eax2);
    return *reinterpret_cast<int16_t*>(&eax9);
}

void** fun_10065f6(int32_t a1, int16_t a2);

int32_t g10011a8 = 0x77d6ec40;

int16_t fun_100662b(void** a1, int32_t a2, void** a3, void** a4) {
    void** esi5;
    int32_t v6;
    int32_t eax7;
    void** eax8;
    void** eax9;

    esi5 = a1;
    while (*reinterpret_cast<void***>(esi5)) {
        v6 = a2;
        eax7 = 0;
        *reinterpret_cast<void***>(&eax7) = *reinterpret_cast<void***>(esi5);
        *reinterpret_cast<void***>(&eax7) = fun_10065f6(eax7, *reinterpret_cast<int16_t*>(&v6));
        if (!eax7) 
            goto addr_0x100665d_4;
        eax8 = reinterpret_cast<void**>(g10011a8(esi5));
        esi5 = eax8;
    }
    eax9 = reinterpret_cast<void**>(0);
    addr_0x1006658_7:
    return *reinterpret_cast<int16_t*>(&eax9);
    addr_0x100665d_4:
    eax9 = esi5;
    goto addr_0x1006658_7;
}

int32_t g100105c = 0x7c80c6e0;

struct s0 {
    signed char[1] pad1;
    void** f1;
};

int32_t g10011b0 = 0x77d6ec6a;

int16_t fun_10026c0(void** a1, void** a2, void** a3, void** a4);

void fun_10066cf(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, ...) {
    int32_t v17;
    int32_t ebp18;
    void** edi19;
    void** v20;
    struct s0* eax21;
    void** esi22;
    signed char* eax23;
    void** eax24;

    v17 = ebp18;
    edi19 = a1;
    v20 = edi19;
    eax21 = reinterpret_cast<struct s0*>(g100105c());
    if (reinterpret_cast<unsigned char>(&eax21->f1) < reinterpret_cast<unsigned char>(a2)) {
        esi22 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax21) + reinterpret_cast<unsigned char>(edi19));
        if (reinterpret_cast<unsigned char>(esi22) > reinterpret_cast<unsigned char>(edi19) && (eax23 = reinterpret_cast<signed char*>(g10011b0(edi19, esi22)), *eax23 != 92)) {
            *reinterpret_cast<void***>(esi22) = reinterpret_cast<void**>(92);
            ++esi22;
        }
        eax24 = a3;
        *reinterpret_cast<void***>(esi22) = reinterpret_cast<void**>(0);
        while (*reinterpret_cast<void***>(eax24) == 32) {
            ++eax24;
        }
        fun_10026c0(edi19, a2, eax24, v20);
    }
    goto v17;
}

int16_t g100c898;

int16_t fun_1002ece(void** a1, signed char* a2, int32_t a3);

void** fun_10068b3(void** a1, void** a2, void** a3, void** a4, void** a5);

void** g100c4a4;

int16_t fun_100685e(void** a1, int32_t a2, int32_t a3, void** a4, void** a5, void** a6, void** a7, void** a8);

int32_t g10011f0 = 0x77d8050b;

struct s1 {
    signed char[1] pad1;
    void** f1;
};

int32_t g1001050 = 0x7c8099bd;

int32_t g1001088 = 0x7c80c729;

int32_t g10011a4 = 0x77d4a2de;

int32_t g100120c = 0x77d702d3;

int32_t g100104c = 0x7c80995d;

int16_t fun_1003ebe(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, ...) {
    void* ebp23;
    int1_t zf24;
    void** eax25;
    void** v26;
    void** ebx27;
    void** ebx28;
    void** v29;
    void** esi30;
    void** v31;
    void** edi32;
    int32_t ecx33;
    signed char v34;
    void** eax35;
    void** v36;
    uint32_t eax37;
    void** eax38;
    void** v39;
    struct s1* eax40;
    void** v41;
    void** v42;
    int32_t eax43;
    int32_t esi44;
    void** v45;
    int32_t esi46;
    void* eax47;
    void* eax48;
    void** eax49;
    void** v50;
    uint32_t eax51;
    int32_t esi52;
    void* eax53;
    void* eax54;
    void* eax55;

    ebp23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    zf24 = (*reinterpret_cast<unsigned char*>(&g100c898) & 1) == 0;
    eax25 = g100b2d0;
    v26 = ebx27;
    ebx28 = a4;
    v29 = esi30;
    v31 = edi32;
    ecx33 = 13;
    while (ecx33) {
        --ecx33;
    }
    if (zf24) {
        fun_1002ece(a3, reinterpret_cast<int32_t>(ebp23) - 0x23c, 0x200);
        if (!v34) {
            eax35 = fun_10068b3(v31, v29, v26, a2, a5);
            if (!eax35 || (v36 = g100c4a4, *reinterpret_cast<int16_t*>(&eax35) = fun_100685e(v36, 16, 1, v31, v29, v26, a2, a5), eax35 == 0)) {
                eax37 = 0;
            } else {
                eax37 = 0x180000;
            }
            g10011f0(a2, reinterpret_cast<int32_t>(ebp23) - 60, 0x100bbb4, eax37 | 0x10010);
            goto addr_0x1003f61_14;
        }
        if (!a5) 
            goto addr_0x1003fbd_16; else 
            goto addr_0x1003f72_17;
    }
    addr_0x100408b_18:
    eax38 = fun_10064de(eax25);
    return *reinterpret_cast<int16_t*>(&eax38);
    addr_0x1003fbd_16:
    if (!ebx28) {
        v39 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp23) + 0xfffffdc4);
        eax40 = reinterpret_cast<struct s1*>(g100105c(v39));
        v41 = reinterpret_cast<void**>(&eax40->f1);
        v42 = reinterpret_cast<void**>(64);
        eax43 = reinterpret_cast<int32_t>(g1001050(64, v41, v39));
        esi44 = eax43;
        if (!esi44) {
            addr_0x1003f61_14:
            goto addr_0x100408b_18;
        } else {
            v45 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp23) + 0xfffffdc4);
            g1001088(esi44, v45, 64, v41, v39);
        }
    } else {
        esi46 = g100105c;
        v39 = ebx28;
        eax47 = reinterpret_cast<void*>(esi46(v39));
        v41 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp23) + 0xfffffdc4);
        eax48 = reinterpret_cast<void*>(esi46(v41, v39));
        v42 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax47) + reinterpret_cast<int32_t>(eax48) + 100);
        v45 = reinterpret_cast<void**>(64);
        eax43 = reinterpret_cast<int32_t>(g1001050(64, v42, v41, v39));
        esi44 = eax43;
        if (!esi44) 
            goto addr_0x1003f61_14;
        g10011a4(esi44, reinterpret_cast<int32_t>(ebp23) - 0x23c, ebx28, 64, v42, v41, v39);
    }
    addr_0x100402f_23:
    g100120c(a6, v45, v42, v41, v39);
    eax49 = fun_10068b3(a6, v45, v42, v41, v39);
    if (!eax49 || (v50 = g100c4a4, *reinterpret_cast<int16_t*>(&eax49) = fun_100685e(v50, 16, 1, a6, v45, v42, v41, v39), eax49 == 0)) {
        eax51 = 0;
    } else {
        eax51 = 0x180000;
    }
    g10011f0(a2, esi44, 0x100bbb4, eax51 | reinterpret_cast<unsigned char>(a6) | reinterpret_cast<unsigned char>(a7) | 0x10000, a6, v45, v42, v41, v39);
    g100104c(esi44, a2, esi44, 0x100bbb4, eax51 | reinterpret_cast<unsigned char>(a6) | reinterpret_cast<unsigned char>(a7) | 0x10000, a6, v45, v42, v41, v39);
    goto addr_0x100408b_18;
    addr_0x1003f72_17:
    v39 = a5;
    esi52 = g100105c;
    eax53 = reinterpret_cast<void*>(esi52(v39));
    v41 = ebx28;
    eax54 = reinterpret_cast<void*>(esi52(v41, v39));
    v42 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp23) + 0xfffffdc4);
    eax55 = reinterpret_cast<void*>(esi52(v42, v41, v39));
    v45 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax53) + reinterpret_cast<int32_t>(eax54) + reinterpret_cast<int32_t>(eax55) + 100);
    eax43 = reinterpret_cast<int32_t>(g1001050(64, v45, v42, v41, v39));
    esi44 = eax43;
    if (!esi44) 
        goto addr_0x1003f61_14;
    g10011a4(esi44, reinterpret_cast<int32_t>(ebp23) - 0x23c, ebx28, a5, 64, v45, v42, v41, v39);
    goto addr_0x100402f_23;
}

int32_t g1001024 = 0x77dd761b;

int32_t g100102c = 0x77dd7883;

int32_t g100101c = 0x77dd6bf0;

int16_t fun_1001edf(uint32_t ecx, int32_t a2, int32_t a3) {
    int32_t eax4;
    int32_t eax5;

    eax4 = reinterpret_cast<int32_t>(g1001024());
    if (!eax4) {
        eax5 = reinterpret_cast<int32_t>(g100102c(a2, a3, 0, 0, 0, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4));
        if (eax5) {
        }
        g100101c(a2, a2, a3, 0, 0, 0, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4);
    }
    return 0;
}

int32_t g100117c = 0x7c810386;

int32_t g1001178 = 0x7c862b8a;

int32_t g1001058 = 0x7c80e00d;

int32_t g1001174 = 0x7c801e16;

void** fun_10064de(void** ecx, ...) {
    int1_t zf2;
    void* ebp3;
    int32_t v4;
    int32_t edi5;
    int32_t ecx6;
    void** eax7;
    void** eax8;

    zf2 = ecx == g100b2d0;
    if (!zf2 || reinterpret_cast<unsigned char>(ecx) & 0xffff0000) {
        ebp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
        v4 = edi5;
        ecx6 = 20;
        while (ecx6) {
            --ecx6;
        }
        g100117c(0, v4, 0xc0000409);
        g1001178(reinterpret_cast<int32_t>(ebp3) - 8, 0, v4, 0xc0000409);
        g1001058(0x502, reinterpret_cast<int32_t>(ebp3) - 8, 0, v4, 0xc0000409);
        eax7 = reinterpret_cast<void**>(g1001174());
        return eax7;
    } else {
        return eax8;
    }
}

int16_t fun_100207f(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** eax6;

    g10011a4(a2, "%lu", a1);
    eax6 = a2;
    return *reinterpret_cast<int16_t*>(&eax6);
}

int16_t fun_100160f(void** a1, void* a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11) {
    void* eax12;
    void** edx13;
    void** esi14;

    eax12 = reinterpret_cast<void*>(0);
    if (a2) {
        edx13 = a1;
        esi14 = a3;
        do {
            if (!*reinterpret_cast<void***>(esi14)) 
                break;
            *reinterpret_cast<void***>(edx13) = *reinterpret_cast<void***>(esi14);
            ++edx13;
            ++esi14;
            a2 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(a2) - 1);
        } while (a2);
        if (!a2) 
            goto addr_0x100163f_6;
    } else {
        eax12 = reinterpret_cast<void*>(0x80070057);
        goto addr_0x1001648_8;
    }
    addr_0x1001645_9:
    *reinterpret_cast<void***>(edx13) = reinterpret_cast<void**>(0);
    addr_0x1001648_8:
    return *reinterpret_cast<int16_t*>(&eax12);
    addr_0x100163f_6:
    --edx13;
    eax12 = reinterpret_cast<void*>(0x8007007a);
    goto addr_0x1001645_9;
}

int16_t fun_1001f93(uint16_t a1, void** a2);

int16_t fun_1001fd9(void** a1, int32_t a2) {
    int32_t v3;
    void** ebp4;

    v3 = a2;
    fun_1001f93(*reinterpret_cast<uint16_t*>(&v3), ebp4);
    return 1;
}

void** g100ba60;

int16_t g100ba64;

void** g100bb84;

uint32_t fun_100221e() {
    uint32_t esi1;
    int1_t zf2;
    int32_t eax3;
    void** v4;

    esi1 = 0xffffffff;
    zf2 = g100ba60 == 0;
    if (!zf2 || (eax3 = 0, *reinterpret_cast<int16_t*>(&eax3) = g100ba64, v4 = g100bb84, *reinterpret_cast<int16_t*>(&eax3) = fun_1001fd9(v4, eax3), !!eax3)) {
        esi1 = 2;
    }
    return esi1;
}

int16_t fun_10021c4(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, int32_t a8, void** a9, void** a10, void** a11, void* a12, void* a13, void** a14, int32_t a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26) {
    void** eax27;
    void** edx28;
    void** esi29;

    if (reinterpret_cast<unsigned char>(a2) > reinterpret_cast<unsigned char>(0x7fffffff)) {
        return 87;
    }
    eax27 = reinterpret_cast<void**>(0);
    if (!a2) 
        goto addr_0x100161b_5;
    edx28 = a1;
    esi29 = a3;
    do {
        if (!*reinterpret_cast<void***>(esi29)) 
            break;
        *reinterpret_cast<void***>(edx28) = *reinterpret_cast<void***>(esi29);
        ++edx28;
        ++esi29;
        --a2;
    } while (a2);
    if (!a2) 
        goto addr_0x100163f_10;
    addr_0x1001645_11:
    *reinterpret_cast<void***>(edx28) = reinterpret_cast<void**>(0);
    addr_0x1001648_12:
    return *reinterpret_cast<int16_t*>(&eax27);
    addr_0x100163f_10:
    --edx28;
    eax27 = reinterpret_cast<void**>(0x8007007a);
    goto addr_0x1001645_11;
    addr_0x100161b_5:
    eax27 = reinterpret_cast<void**>(0x80070057);
    goto addr_0x1001648_12;
}

int32_t g1001228 = 0x77c019ff;

void** fun_1009cdc(void** a1, void* a2) {
    goto g1001228;
}

int32_t g1001220 = 0x77c01a50;

int32_t fun_1009cd0(void** a1, int32_t a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void* a9) {
    goto g1001220;
}

int32_t g1001224 = 0x77c018ba;

int32_t fun_1009cc4(void** a1, void** a2, void** a3, void** a4, void** a5, int32_t a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void* a13) {
    goto g1001224;
}

int16_t fun_1002196(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, int32_t a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void* a17) {
    uint32_t eax18;

    if (reinterpret_cast<unsigned char>(a1) < reinterpret_cast<unsigned char>(a3)) 
        goto addr_0x10021a3_2;
    if (reinterpret_cast<unsigned char>(a1) <= reinterpret_cast<unsigned char>(a3)) {
        if (reinterpret_cast<unsigned char>(a4) > reinterpret_cast<unsigned char>(a2)) {
            addr_0x10021a3_2:
            eax18 = 0xffffffff;
        } else {
            eax18 = -(reinterpret_cast<unsigned char>(a2) - (reinterpret_cast<unsigned char>(a2) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(a2) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(a2) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(a4) < reinterpret_cast<unsigned char>(a2))))));
        }
    } else {
        eax18 = 1;
    }
    return *reinterpret_cast<int16_t*>(&eax18);
}

int16_t fun_1006666(void** ecx, signed char* a2, void** a3, void** a4, void** a5, int32_t a6, void** a7, void** a8, void** a9) {
    uint32_t v10;
    signed char* ebx11;
    int32_t edi12;
    int32_t esi13;
    int32_t ebx14;
    int32_t esi15;
    signed char* eax16;
    signed char* edi17;
    uint32_t eax18;
    signed char* eax19;
    signed char* eax20;

    v10 = 0;
    ebx11 = a2;
    g100105c(ebx11, edi12, esi13, ebx14);
    esi15 = g10011b0;
    esi15();
    while (eax16 = reinterpret_cast<signed char*>(esi15()), edi17 = eax16, reinterpret_cast<uint32_t>(edi17) > reinterpret_cast<uint32_t>(ebx11)) {
        if (*edi17 == 92) 
            goto addr_0x10066a0_4;
    }
    if (*edi17 != 92) {
        addr_0x10066c0_7:
        eax18 = v10;
        return *reinterpret_cast<int16_t*>(&eax18);
    } else {
        addr_0x10066a0_4:
        if (edi17 == ebx11 || (eax19 = reinterpret_cast<signed char*>(esi15(ebx11, edi17)), *eax19 == 58)) {
            eax20 = reinterpret_cast<signed char*>(g10011a8(edi17));
            edi17 = eax20;
        }
    }
    *edi17 = 0;
    v10 = 1;
    goto addr_0x10066c0_7;
}

int16_t fun_100168d(uint32_t a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, int32_t a8, void** a9, void** a10, void** a11) {
    void** eax12;
    uint32_t eax13;
    uint32_t eax14;
    int32_t eax15;

    if (reinterpret_cast<unsigned char>(a2) < reinterpret_cast<unsigned char>(eax12) || a1 < reinterpret_cast<unsigned char>(a2) - eax13) {
        eax14 = 0;
    } else {
        eax14 = eax15 - reinterpret_cast<unsigned char>(a2) + a1;
    }
    return *reinterpret_cast<int16_t*>(&eax14);
}

int32_t g1001080 = 0x7c81174c;

int16_t fun_100672a(void** a1) {
    int32_t eax2;
    int32_t ebp3;

    eax2 = reinterpret_cast<int32_t>(g1001080());
    if (eax2 != -1) {
    }
    goto ebp3;
}

int16_t fun_1001651(void** a1, void** a2, void** a3);

int16_t fun_10021e6(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11) {
    void** eax12;
    void** edi13;
    void** esi14;
    void** ebp15;

    eax12 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 12);
    *reinterpret_cast<int16_t*>(&eax12) = fun_1001651(a1, a2, eax12);
    if (reinterpret_cast<signed char>(eax12) >= reinterpret_cast<signed char>(0)) {
        *reinterpret_cast<int16_t*>(&eax12) = fun_100160f(reinterpret_cast<unsigned char>(a2) + reinterpret_cast<unsigned char>(a1), reinterpret_cast<unsigned char>(a2) - reinterpret_cast<unsigned char>(a2), a3, edi13, esi14, ebp15, __return_address(), a1, a2, a3, a4);
    }
    return *reinterpret_cast<int16_t*>(&eax12);
}

int32_t g10010c8 = 0x7c813559;

int32_t g10010c4 = 0x7c81ee79;

int32_t g10010c0 = 0x7c81fb44;

int32_t g10010bc = 0x7c81e85c;

int32_t g10010b8 = 0x7c839019;

int32_t g10010b4 = 0x7c80efd7;

int32_t g10010b0 = 0x7c85b001;

int16_t fun_1002a96(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void* ebp7;
    void** eax8;
    void** v9;
    void** edi10;
    void** edi11;
    void** v12;
    void** v13;
    void** esi14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** eax29;
    void** v30;
    void** v31;
    void** ebx32;
    int32_t ebx33;
    void** v34;
    void** v35;
    void** eax36;
    unsigned char v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    int32_t eax42;
    int32_t eax43;
    void** v44;
    void** v45;
    void** v46;
    int32_t eax47;
    void** eax48;

    ebp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax8 = g100b2d0;
    v9 = edi10;
    edi11 = a1;
    v12 = eax8;
    if (edi11 && *reinterpret_cast<void***>(edi11)) {
        v13 = esi14;
        fun_100160f(reinterpret_cast<int32_t>(ebp7) + 0xfffffef8, 0x104, edi11, v13, v9, v15, v16, v17, v18, v19, v20);
        fun_10021e6(reinterpret_cast<int32_t>(ebp7) + 0xfffffef8, 0x104, 0x100134c, v13, v9, v21, v22, v23, v24, v25, v26);
        v27 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xfffffdb8);
        v28 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xfffffef8);
        eax29 = reinterpret_cast<void**>(g10010c8());
        v30 = eax29;
        if (eax29 != 0xffffffff) {
            v31 = ebx32;
            ebx33 = g10010c4;
            do {
                fun_100160f(reinterpret_cast<int32_t>(ebp7) + 0xfffffef8, 0x104, edi11, v31, v28, v27, v13, v9, v30, v34, v35);
                eax36 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xfffffde4);
                if (!(v37 & 16)) {
                    fun_10021e6(reinterpret_cast<int32_t>(ebp7) + 0xfffffef8, 0x104, eax36, v31, v28, v27, v13, v9, v30, v38, v39);
                    v40 = reinterpret_cast<void**>(0x80);
                    v41 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xfffffef8);
                    g10010c0(v41, 0x80, v31);
                    g10010bc(reinterpret_cast<int32_t>(ebp7) - 0x108, v41, 0x80, v31);
                } else {
                    v40 = reinterpret_cast<void**>(0x1001348);
                    v41 = eax36;
                    eax42 = reinterpret_cast<int32_t>(ebx33(v41, 0x1001348, v31));
                    if (eax42 && (eax43 = reinterpret_cast<int32_t>(ebx33(reinterpret_cast<int32_t>(ebp7) + 0xfffffde4, 0x1001344, v41, 0x1001348, v31)), !!eax43)) {
                        fun_10021e6(reinterpret_cast<int32_t>(ebp7) + 0xfffffef8, 0x104, reinterpret_cast<int32_t>(ebp7) + 0xfffffde4, reinterpret_cast<int32_t>(ebp7) + 0xfffffde4, 0x1001344, v41, 0x1001348, v31, v28, v27, v13);
                        fun_10066cf(reinterpret_cast<int32_t>(ebp7) + 0xfffffef8, 0x104, 0x1001271, reinterpret_cast<int32_t>(ebp7) + 0xfffffde4, 0x1001344, v41, 0x1001348, v31, v28, v27, v13, v9, v30, v44, v45, v46);
                        fun_1002a96(reinterpret_cast<int32_t>(ebp7) + 0xfffffef8, reinterpret_cast<int32_t>(ebp7) + 0xfffffde4, 0x1001344, v41, 0x1001348, v31);
                    }
                }
                eax47 = reinterpret_cast<int32_t>(g10010b8(v30, reinterpret_cast<int32_t>(ebp7) - 0x248, v41, v40, v31));
            } while (eax47);
            g10010b4(v30, v30, reinterpret_cast<int32_t>(ebp7) - 0x248, v41, v40, v31);
            g10010b0();
        }
    }
    eax48 = fun_10064de(v12);
    return *reinterpret_cast<int16_t*>(&eax48);
}

signed char g100b2e0 = 0;

int32_t g1001020 = 0x77ddede5;

void fun_1001a5b(void** ecx) {
    int1_t zf2;
    int32_t eax3;

    zf2 = g100b2e0 == 0;
    if (!zf2 && (eax3 = reinterpret_cast<int32_t>(g1001024(0x80000002, "Software\\Microsoft\\Windows\\CurrentVersion\\RunOnce", 0, 0x20006, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4)), !eax3)) {
        g1001020(ecx, 0x100b2e0, 0x80000002, "Software\\Microsoft\\Windows\\CurrentVersion\\RunOnce", 0, 0x20006, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4);
        g100101c(ecx, ecx, 0x100b2e0, 0x80000002, "Software\\Microsoft\\Windows\\CurrentVersion\\RunOnce", 0, 0x20006, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4);
    }
    return;
}

int16_t fun_1006752(void** a1, int32_t a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** esi8;
    void** edi9;
    int32_t v10;
    int32_t eax11;
    void** eax12;
    void** eax13;

    esi8 = a1;
    edi9 = reinterpret_cast<void**>(0);
    while (*reinterpret_cast<void***>(esi8)) {
        v10 = a2;
        eax11 = 0;
        *reinterpret_cast<void***>(&eax11) = *reinterpret_cast<void***>(esi8);
        *reinterpret_cast<void***>(&eax11) = fun_10065f6(eax11, *reinterpret_cast<int16_t*>(&v10));
        if (!eax11) {
            edi9 = esi8;
        }
        eax12 = reinterpret_cast<void**>(g10011a8(esi8));
        esi8 = eax12;
    }
    eax13 = edi9;
    return *reinterpret_cast<int16_t*>(&eax13);
}

int16_t fun_1003517(void** a1, void** a2, void** a3, void** a4) {
    void** esi5;
    void** al6;
    void* edi7;
    signed char* ebx8;
    void* eax9;
    int32_t eax10;

    esi5 = a1;
    al6 = *reinterpret_cast<void***>(esi5);
    edi7 = reinterpret_cast<void*>(0);
    while (al6 && (al6 == 32 || (al6 == 9 || (al6 == 13 || (al6 == 10 || (al6 == 11 || reinterpret_cast<int1_t>(al6 == 12))))))) {
        edi7 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi7) + 1);
        al6 = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edi7) + reinterpret_cast<unsigned char>(esi5));
    }
    ebx8 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edi7) + reinterpret_cast<unsigned char>(esi5));
    if (*ebx8) {
        eax9 = reinterpret_cast<void*>(g100105c(ebx8));
        do {
            eax9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax9) - 1);
            if (reinterpret_cast<int32_t>(eax9) < reinterpret_cast<int32_t>(0)) 
                break;
        } while (*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebx8) + reinterpret_cast<uint32_t>(eax9)) == 32 || (*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebx8) + reinterpret_cast<uint32_t>(eax9)) == 9 || (*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebx8) + reinterpret_cast<uint32_t>(eax9)) == 13 || (*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebx8) + reinterpret_cast<uint32_t>(eax9)) == 10 || (*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebx8) + reinterpret_cast<uint32_t>(eax9)) == 11 || *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebx8) + reinterpret_cast<uint32_t>(eax9)) == 12)))));
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax9) + reinterpret_cast<uint32_t>(edi7) + reinterpret_cast<unsigned char>(esi5) + 1) = 0;
        *a2 = edi7;
        eax10 = 1;
    } else {
        eax10 = 0;
    }
    return *reinterpret_cast<int16_t*>(&eax10);
}

int32_t g1001214 = 0x77d6ec98;

int16_t fun_1002ece(void** a1, signed char* a2, int32_t a3) {
    void** v4;
    signed char* eax5;

    if (a2) {
        *a2 = 0;
        v4 = g100c4a4;
        g1001214(v4, a1, a2, a3);
    }
    eax5 = a2;
    return *reinterpret_cast<int16_t*>(&eax5);
}

uint32_t g100b2dc = 0xfffffffe;

int32_t g1001120 = 0x7c812851;

int32_t g1001218 = 0x77d48f75;

int16_t fun_100678f(signed char* a1, int32_t* a2, int32_t a3, int32_t a4, int32_t a5, void* a6, void* a7, void* a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, void* a14, int32_t a15, void* a16);

void** fun_10068b3(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** eax6;
    int1_t zf7;
    int32_t eax8;
    int32_t v9;
    int32_t v10;
    uint32_t v11;
    int32_t eax12;
    int32_t eax13;
    int32_t v14;
    int32_t edi15;
    int32_t eax16;
    signed char* eax17;
    void** eax18;

    eax6 = g100b2d0;
    zf7 = g100b2dc == 0xfffffffe;
    if (zf7 && ((g100b2dc = 0, eax8 = reinterpret_cast<int32_t>(g1001120(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0xa4)), !!eax8) && (v9 == 1 && (v10 == 4 && (v11 < 10 && ((eax12 = reinterpret_cast<int32_t>(g1001218(74, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0xa4)), !!eax12) && ((eax13 = reinterpret_cast<int32_t>(g1001024(0x80000001, "Control Panel\\Desktop\\ResourceLocale", 0, 0x20019, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0xac, 74, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0xa4)), !eax13) && ((eax16 = reinterpret_cast<int32_t>(g100102c(v14, 0x1001271, 0, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0xb4, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 16, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0xb0, edi15, 0x80000001, "Control Panel\\Desktop\\ResourceLocale", 0, 0x20019, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0xac, 74, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0xa4)), g100101c(), !eax16) && ((eax17 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 16), *reinterpret_cast<int16_t*>(&eax17) = fun_100678f(eax17, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0xa8, v14, 0x1001271, 0, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0xb4, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 16, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0xb0, edi15, 0x80000001, "Control Panel\\Desktop\\ResourceLocale", 0, 0x20019, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0xac, 74, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0xa4), !!eax17) && static_cast<int1_t>(!1)))))))))) {
        g100b2dc = 1;
    }
    eax18 = fun_10064de(eax6);
    return eax18;
}

uint32_t g100b2d8 = 0xfffffffe;

int16_t fun_1006822(void** a1, int32_t a2, int32_t a3, int16_t a4);

int16_t fun_100685e(void** a1, int32_t a2, int32_t a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    int1_t zf9;
    uint32_t eax10;

    zf9 = g100b2d8 == 0xfffffffe;
    if (zf9 && ((g100b2d8 = 0, fun_1006822(a1, a2, a3, 1), 1) || (fun_1006822(a1, a2, a3, 13), !0))) {
        g100b2d8 = 1;
    }
    eax10 = g100b2d8;
    return *reinterpret_cast<int16_t*>(&eax10);
}

int32_t g100107c = 0x7c826219;

void fun_1002f6b(void** a1) {
    void** edi2;
    void** cl3;
    void** esi4;
    void** al5;
    int32_t v6;
    void** eax7;

    edi2 = a1;
    cl3 = *reinterpret_cast<void***>(edi2);
    if (cl3) {
        esi4 = edi2 + 1;
        al5 = *reinterpret_cast<void***>(esi4);
        v6 = 0;
        if (!reinterpret_cast<int1_t>(al5 == 58) || !reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edi2 + 2) == 92)) {
            if (reinterpret_cast<int1_t>(cl3 == 92) && al5 == cl3) {
                esi4 = edi2 + 2;
                v6 = 2;
            }
        } else {
            esi4 = edi2 + 3;
        }
        while (*reinterpret_cast<void***>(esi4)) {
            if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi4) == 92) && *reinterpret_cast<void***>(esi4 + 0xffffffff) != 58) {
                if (!v6) {
                    *reinterpret_cast<void***>(esi4) = reinterpret_cast<void**>(0);
                    g100107c(edi2, 0);
                    *reinterpret_cast<void***>(esi4) = reinterpret_cast<void**>(92);
                } else {
                    --v6;
                }
            }
            eax7 = reinterpret_cast<void**>(g10011a8(esi4));
            esi4 = eax7;
        }
    }
    return;
}

void fun_1007cde(void** ecx, void** a2, void** a3, void** a4);

void** fun_1006aa4(void** a1, void** a2, void** a3, void** a4, void** a5, int16_t a6, void** a7, void** a8, void** a9) {
    void** eax10;

    eax10 = reinterpret_cast<void**>(a1());
    if (eax10) {
        *reinterpret_cast<void***>(eax10 + 0x88) = reinterpret_cast<void**>(0xffffffff);
        *reinterpret_cast<void***>(eax10 + 0x84) = reinterpret_cast<void**>(0xffffffff);
        *reinterpret_cast<void***>(eax10 + 4) = a2;
        *reinterpret_cast<void***>(eax10 + 12) = a3;
        *reinterpret_cast<void***>(eax10 + 16) = a4;
        *reinterpret_cast<void***>(eax10 + 20) = a5;
        *reinterpret_cast<int16_t*>(eax10 + 24) = a6;
        *reinterpret_cast<void***>(eax10 + 28) = a7;
        *reinterpret_cast<void***>(eax10 + 32) = a8;
        *reinterpret_cast<void***>(eax10 + 72) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(eax10 + 68) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(eax10 + 76) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(eax10 + 8) = a1;
        *reinterpret_cast<void***>(eax10) = a9;
        *reinterpret_cast<unsigned char*>(eax10 + 0xb2) = reinterpret_cast<unsigned char>(15);
        *reinterpret_cast<void***>(eax10 + 0xa0) = reinterpret_cast<void**>(0xffff);
        *reinterpret_cast<void***>(eax10 + 0xa8) = reinterpret_cast<void**>(0xffff);
        *reinterpret_cast<void***>(eax10 + 0xa4) = reinterpret_cast<void**>(0xffff);
    } else {
        fun_1007cde(0, a9, 5, 0);
        eax10 = reinterpret_cast<void**>(0);
    }
    return eax10;
}

void** g100ba4c;

int16_t fun_100412e(void** ecx, void** a2, void** a3, void** a4, void** a5, int32_t a6);

void** g100bba0;

int32_t g100bba4;

void** fun_10041d8(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12) {
    void** v13;
    void** v14;
    void** ebp15;
    void** v16;
    void** ebx17;
    void** v18;
    void** esi19;
    void** esi20;
    int32_t* eax21;
    void** v22;
    uint32_t ecx23;
    void** eax24;
    void** ecx25;
    uint32_t eax26;
    int32_t ecx27;

    v13 = reinterpret_cast<void**>(__return_address());
    v14 = ebp15;
    v16 = ebx17;
    v18 = esi19;
    esi20 = reinterpret_cast<void**>(0);
    eax21 = reinterpret_cast<int32_t*>(0x100c4c0);
    do {
        if (*eax21 == 1) 
            break;
        eax21 = eax21 + 6;
        ++esi20;
    } while (reinterpret_cast<int32_t>(eax21) < reinterpret_cast<int32_t>(0x100c880));
    if (reinterpret_cast<int1_t>(esi20 == 40)) {
        v22 = g100ba4c;
        fun_1003ebe(ecx, v22, 0x4bb, 0, 0, 16, 0, v18, v16, v14, v13, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
        goto addr_0x1004212_6;
    }
    eax21 = reinterpret_cast<int32_t*>(g10010c4(a2, "*MEMCAB"));
    if (eax21) {
        *reinterpret_cast<int16_t*>(&eax21) = fun_100412e(ecx, a2, a3, a4, a2, "*MEMCAB");
        ecx23 = reinterpret_cast<uint32_t>(esi20 + reinterpret_cast<unsigned char>(esi20) * 2) << 3;
        *reinterpret_cast<int32_t**>(ecx23 + 0x100c4d4) = eax21;
        if (eax21 == 0xffffffff) {
            addr_0x1004212_6:
            eax24 = reinterpret_cast<void**>(0xffffffff);
        } else {
            *reinterpret_cast<int32_t*>(ecx23 + 0x100c4c0) = 0;
            *reinterpret_cast<int32_t*>(ecx23 + 0x100c4c4) = 0;
            goto addr_0x1004298_10;
        }
    } else {
        if (*reinterpret_cast<unsigned char*>(&a3 + 1) & 1) 
            goto addr_0x1004212_6;
        if (*reinterpret_cast<unsigned char*>(&a3) & 11) 
            goto addr_0x1004212_6;
        ecx25 = g100bba0;
        eax26 = reinterpret_cast<uint32_t>(esi20 + reinterpret_cast<unsigned char>(esi20) * 2) << 3;
        *reinterpret_cast<void***>(eax26 + 0x100c4c8) = ecx25;
        ecx27 = g100bba4;
        *reinterpret_cast<int32_t*>(eax26 + 0x100c4c0) = 0;
        *reinterpret_cast<int32_t*>(eax26 + 0x100c4c4) = 1;
        *reinterpret_cast<int32_t*>(eax26 + 0x100c4d0) = ecx27;
        *reinterpret_cast<int32_t*>(eax26 + 0x100c4cc) = 0;
        goto addr_0x1004298_10;
    }
    addr_0x1004215_14:
    return eax24;
    addr_0x1004298_10:
    eax24 = esi20;
    goto addr_0x1004215_14;
}

struct s2 {
    int32_t f0;
    int16_t f4;
    int16_t f6;
    int16_t f8;
    int16_t f10;
    uint32_t f12;
    uint32_t f16;
    uint32_t f20;
};

int32_t fun_1006b3b(void** ecx, void** a2, void** a3, struct s2* a4) {
    int32_t eax5;
    int32_t v6;
    int32_t eax7;
    int16_t v8;
    int32_t v9;
    int16_t v10;
    int16_t v11;
    int16_t v12;
    int16_t v13;
    uint32_t ecx14;
    uint16_t v15;
    void** v16;
    uint16_t v17;

    eax5 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a2 + 16)(a3, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 36, 36));
    if (eax5 != 36 || v6 != 0x4643534d) {
        addr_0x1006b7a_2:
        eax7 = 0;
    } else {
        if (v8 == 0x103) {
            a4->f0 = v9;
            a4->f4 = v10;
            a4->f6 = v11;
            a4->f8 = v12;
            a4->f10 = v13;
            ecx14 = static_cast<uint32_t>(v15);
            a4->f12 = ecx14 >> 2 & 1;
            a4->f16 = ecx14 & 1;
            a4->f20 = ecx14 & 2;
            eax7 = 1;
        } else {
            v16 = *reinterpret_cast<void***>(a2);
            fun_1007cde(ecx, v16, 3, static_cast<uint32_t>(v17));
            goto addr_0x1006b7a_2;
        }
    }
    return eax7;
}

int32_t g10010e4 = 0x7c809b77;

void** fun_1003108(void** a1) {
    uint32_t esi2;
    int32_t v3;
    uint32_t eax4;
    void** eax5;

    esi2 = reinterpret_cast<uint32_t>(a1 + reinterpret_cast<unsigned char>(a1) * 2) << 3;
    if (*reinterpret_cast<int32_t*>(esi2 + 0x100c4c4) != 1) {
        v3 = *reinterpret_cast<int32_t*>(esi2 + 0x100c4d4);
        eax4 = reinterpret_cast<uint32_t>(g10010e4(v3));
        if (!eax4) {
            eax5 = reinterpret_cast<void**>(0xffffffff);
        } else {
            eax5 = reinterpret_cast<void**>(0);
            *reinterpret_cast<int32_t*>(esi2 + 0x100c4c0) = 1;
        }
    } else {
        eax5 = reinterpret_cast<void**>(0);
        *reinterpret_cast<int32_t*>(esi2 + 0x100c4c0) = 1;
        *reinterpret_cast<void***>(esi2 + 0x100c4c8) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(esi2 + 0x100c4d0) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(esi2 + 0x100c4cc) = reinterpret_cast<void**>(0);
    }
    return eax5;
}

int16_t fun_1007309(void** ecx, unsigned char a2, void** a3);

int32_t fun_100735b(void** ecx, void** a2) {
    void** v3;
    void** v4;
    void** v5;
    void** v6;
    void** v7;

    fun_1007309(ecx, 15, a2);
    if (*reinterpret_cast<void***>(a2 + 76)) {
        v3 = *reinterpret_cast<void***>(a2 + 76);
        *reinterpret_cast<void***>(a2 + 4)();
        ecx = v3;
    }
    if (*reinterpret_cast<void***>(a2 + 68)) {
        v4 = *reinterpret_cast<void***>(a2 + 68);
        *reinterpret_cast<void***>(a2 + 4)(ecx);
        ecx = v4;
    }
    if (*reinterpret_cast<void***>(a2 + 72)) {
        v5 = *reinterpret_cast<void***>(a2 + 72);
        *reinterpret_cast<void***>(a2 + 4)(ecx);
        ecx = v5;
    }
    if (*reinterpret_cast<void***>(a2 + 0x88) != 0xffffffff) {
        v6 = *reinterpret_cast<void***>(a2 + 0x88);
        *reinterpret_cast<int16_t*>(a2 + 24)(ecx);
        ecx = v6;
    }
    if (*reinterpret_cast<void***>(a2 + 0x84) != 0xffffffff) {
        v7 = *reinterpret_cast<void***>(a2 + 0x84);
        *reinterpret_cast<int16_t*>(a2 + 24)(ecx);
        ecx = v7;
    }
    *reinterpret_cast<void***>(a2 + 4)(ecx);
    return 1;
}

int32_t g1001054 = 0x7c910331;

void** fun_1003aa1(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, ...) {
    int32_t esi13;
    int32_t eax14;
    uint32_t eax15;
    void** eax16;

    esi13 = g1001054;
    eax14 = reinterpret_cast<int32_t>(esi13());
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(eax14 < 0) | reinterpret_cast<uint1_t>(eax14 == 0))) {
        eax15 = reinterpret_cast<uint32_t>(esi13());
        return eax15 & 0xffff | 0x80070000;
    } else {
        eax16 = reinterpret_cast<void**>(esi13());
        return eax16;
    }
}

void** g100ba5c;

int16_t fun_10020a4(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17) {
    void** eax18;
    void** eax19;
    void** edi20;
    void** esi21;
    void** v22;
    void** v23;
    void** v24;
    void** ebp25;
    void** eax26;
    void** ecx27;
    void** v28;
    void** v29;
    void** v30;
    void** eax31;
    void** v32;
    void** v33;
    void** v34;
    void** eax35;

    eax18 = g100b2d0;
    g100ba5c = reinterpret_cast<void**>(0x70);
    if (!reinterpret_cast<int1_t>(a2 == 1)) {
        if (!reinterpret_cast<int1_t>(a2 == 4)) {
            if (reinterpret_cast<int1_t>(a2 == 2) && (eax19 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffff0), *reinterpret_cast<int16_t*>(&eax19) = fun_100207f(a4, eax19, a5, 64, 0x104), *reinterpret_cast<int16_t*>(&eax19) = fun_1003ebe(ecx, 0, 0x4cc, eax19, a5, 64, 0x104, edi20, esi21, v22, v23, v24, eax18, ebp25, __return_address(), a2, a3, a4, a5, a6, a7, a8), reinterpret_cast<int1_t>(eax19 == 6))) {
                g100ba5c = reinterpret_cast<void**>(0);
            }
        } else {
            eax26 = a4;
            ecx27 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a3) + reinterpret_cast<unsigned char>(eax26));
            *reinterpret_cast<int16_t*>(&eax26) = fun_100207f(ecx27, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffff0, 0, 32, 5);
            fun_1003ebe(ecx27, 0, 0x4bd, eax26, 0, 32, 5, edi20, esi21, v28, v29, v30, eax18, ebp25, __return_address(), a2, a3, a4, a5, a6, a7, a8);
        }
    } else {
        eax31 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a3) + reinterpret_cast<unsigned char>(a4));
        *reinterpret_cast<int16_t*>(&eax31) = fun_100207f(eax31, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffff0, 0, 16, 0);
        fun_1003ebe(a4, 0, 0x4fa, eax31, 0, 16, 0, edi20, esi21, v32, v33, v34, eax18, ebp25, __return_address(), a2, a3, a4, a5, a6, a7, a8);
    }
    eax35 = fun_10064de(eax18);
    return *reinterpret_cast<int16_t*>(&eax35);
}

struct s3 {
    void** f0;
    signed char[3] pad4;
    void** f4;
    signed char[11] pad16;
    void** f16;
    signed char[39] pad56;
    void* f56;
};

int16_t fun_10022ac(void** a1, void** a2, void** a3);

int32_t g1001098 = 0x7c80ff2d;

int32_t g1001094 = 0x7c810119;

int32_t g1001090 = 0x7c810082;

struct s4 {
    signed char[8] pad8;
    void** f8;
    signed char[3] pad12;
    void** f12;
};

int32_t g100108c = 0x7c80fe2f;

int16_t fun_1002410(void** a1, void** a2, void** a3, void*** a4) {
    void* ebp5;
    void** edi6;
    int1_t less_or_equal7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    struct s3* esi12;
    void** eax13;
    void* v14;
    void** v15;
    void** eax16;
    void** v17;
    void** eax18;
    void** v19;
    void** eax20;
    void** v21;
    void** v22;
    int32_t v23;
    int32_t v24;
    void** v25;
    int32_t eax26;
    void** v27;
    void** v28;
    void** v29;
    int32_t eax30;
    int32_t v31;
    struct s4* eax32;
    struct s4* v33;
    void** edi34;
    void** ebx35;
    void*** ecx36;
    void* edx37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    int32_t v42;
    int32_t v43;
    int32_t v44;
    int32_t v45;
    void** eax46;

    ebp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    edi6 = a1;
    less_or_equal7 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(edi6 + 0x7c)) <= reinterpret_cast<signed char>(0);
    v8 = reinterpret_cast<void**>(0);
    v9 = reinterpret_cast<void**>(0);
    v10 = reinterpret_cast<void**>(0);
    if (less_or_equal7) {
        addr_0x1002551_2:
        v9 = reinterpret_cast<void**>(1);
    } else {
        v11 = reinterpret_cast<void**>(0);
        while (esi12 = reinterpret_cast<struct s3*>(reinterpret_cast<unsigned char>(v11) + reinterpret_cast<unsigned char>(edi6) + reinterpret_cast<uint16_t>(*reinterpret_cast<void**>(edi6 + 0x80)) + 0x84), eax13 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esi12->f56) + reinterpret_cast<unsigned char>(edi6) + 0x84), *reinterpret_cast<int16_t*>(&eax13) = fun_10022ac(a2, a3, eax13), !!eax13) {
            v14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp5) - 24);
            v15 = a2;
            eax16 = fun_1009cdc(v15, v14);
            if (!eax16) {
                if (esi12->f0) 
                    break;
                if (esi12->f4) 
                    break;
            } else {
                v17 = eax16;
                eax18 = reinterpret_cast<void**>(g1001098(66, v17, v15, v14));
                v8 = eax18;
                if (!eax18) 
                    break;
                v19 = eax18;
                eax20 = reinterpret_cast<void**>(g1001094(v19, 66, v17, v15, v14));
                if (!eax20) 
                    break;
                v21 = eax20;
                v22 = eax16;
                v23 = v24;
                v25 = a2;
                eax26 = fun_1009cd0(v25, v23, v22, v21, v19, 66, v17, v15, v14);
                if (!eax26) 
                    goto addr_0x100252a_11;
                v27 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xffffffe4);
                v28 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xffffffe0);
                v29 = eax20;
                eax30 = fun_1009cc4(v29, 0x10012e8, v28, v27, v25, v23, v22, v21, v19, 66, v17, v15, v14);
                if (!eax30) 
                    goto addr_0x100252a_11;
                if (!v31) 
                    goto addr_0x100252a_11; else 
                    goto addr_0x10024d5_14;
            }
            addr_0x100253e_15:
            ++v10;
            v11 = v11 + 60;
            if (reinterpret_cast<signed char>(v10) >= reinterpret_cast<signed char>(*reinterpret_cast<void***>(edi6 + 0x7c))) 
                goto addr_0x1002551_2;
            continue;
            addr_0x100252a_11:
            g1001090(v8, v25, v23, v22, v21, v19, 66, v17, v15, v14);
            goto addr_0x100253e_15;
            addr_0x10024d5_14:
            eax32 = v33;
            edi34 = eax32->f12;
            ebx35 = eax32->f8;
            ecx36 = &esi12->f16;
            edx37 = reinterpret_cast<void*>(0);
            do {
                v38 = *(ecx36 - 12);
                v39 = *(ecx36 - 16);
                *reinterpret_cast<int16_t*>(&eax32) = fun_1002196(ebx35, edi34, v39, v38, v29, 0x10012e8, v28, v27, v25, v23, v22, v21, v19, 66, v17, v15, v14);
                v40 = *ecx36;
                *reinterpret_cast<struct s4**>(reinterpret_cast<int32_t>(ebp5) + reinterpret_cast<int32_t>(edx37) - 40) = eax32;
                v41 = *(ecx36 - 4);
                *reinterpret_cast<int16_t*>(&eax32) = fun_1002196(ebx35, edi34, v41, v40, v29, 0x10012e8, v28, v27, v25, v23, v22, v21, v19, 66, v17, v15, v14);
                *reinterpret_cast<struct s4**>(reinterpret_cast<int32_t>(ebp5) + reinterpret_cast<int32_t>(edx37) - 48) = eax32;
                edx37 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edx37) + 4);
                ecx36 = ecx36 + 24;
            } while (reinterpret_cast<int32_t>(edx37) < 8);
            if (v42 < 0) 
                goto addr_0x100251b_19;
            if (v43 <= 0) 
                goto addr_0x1002527_21;
            addr_0x100251b_19:
            if (v44 < 0) 
                goto addr_0x1002579_22;
            if (v45 > 0) 
                goto addr_0x1002579_22;
            addr_0x1002527_21:
            edi6 = a1;
            goto addr_0x100252a_11;
        }
    }
    addr_0x1002558_24:
    *a4 = v10;
    if (v8) {
        g100108c(v8);
    }
    eax46 = v9;
    return *reinterpret_cast<int16_t*>(&eax46);
    addr_0x1002579_22:
    g1001090(v8, v29, 0x10012e8, v28, v27, v25, v23, v22, v21, v19, 66, v17, v15, v14);
    goto addr_0x1002558_24;
}

int32_t g10010dc = 0x7c80c7b1;

int32_t g10010d4 = 0x7c80a065;

int32_t g10011f4 = 0x77d86ced;

int32_t g10010cc = 0x7c82d582;

int16_t fun_1004819(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15) {
    void** eax16;
    void** eax17;
    void** edi18;
    void** esi19;
    void** ebx20;
    void** ebp21;
    void** v22;
    int32_t eax23;

    eax16 = reinterpret_cast<void**>(g10010dc());
    if (!eax16 || (eax17 = reinterpret_cast<void**>(g10010d4(a2, eax16)), eax17 == 0)) {
        addr_0x100486b_2:
        fun_1003ebe(ecx, 0, 0x4fb, 0, 0, 16, 0, a2, a3, 5, edi18, esi19, ebx20, ebp21, __return_address(), a2, a3, a4, a5, a6, a7, a8);
    } else {
        if (a6) {
            v22 = a6;
        } else {
            v22 = reinterpret_cast<void**>(0);
        }
        eax23 = reinterpret_cast<int32_t>(g10011f4(a2, eax17, a4, a5, v22, a2, eax16));
        g10010cc(eax17, a2, eax17, a4, a5, v22, a2, eax16);
        if (eax23 == -1) 
            goto addr_0x100486b_2;
    }
    goto esi19;
}

int32_t g10010f8 = 0x7c81ef41;

int32_t g10010f4 = 0x7c8395ea;

int32_t g10010f0 = 0x7c81f955;

int16_t fun_10031ee(void** a1, void** a2, int32_t a3) {
    uint32_t esi4;
    int32_t eax5;
    int32_t eax6;
    int32_t eax7;
    void* eax8;
    int32_t v9;
    int32_t eax10;
    uint32_t eax11;

    esi4 = reinterpret_cast<uint32_t>(a1 + reinterpret_cast<unsigned char>(a1) * 2) << 3;
    if (*reinterpret_cast<int32_t*>(esi4 + 0x100c4c4) == 1 || ((eax5 = reinterpret_cast<int32_t>(g10010f8(a2, a3, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 16)), eax5 == 0) || (eax6 = reinterpret_cast<int32_t>(g10010f4(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 16, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 8, a2, a3, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 16)), eax6 == 0))) {
        eax7 = 0;
    } else {
        eax8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 8);
        v9 = *reinterpret_cast<int32_t*>(esi4 + 0x100c4d4);
        eax10 = reinterpret_cast<int32_t>(g10010f0(v9, eax8, eax8, eax8, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 16, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 8, a2, a3, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 16));
        eax11 = reinterpret_cast<uint32_t>(-eax10);
        eax7 = reinterpret_cast<int32_t>(-(eax11 - (eax11 + reinterpret_cast<uint1_t>(eax11 < eax11 + reinterpret_cast<uint1_t>(!!eax10)))));
    }
    return *reinterpret_cast<int16_t*>(&eax7);
}

int16_t fun_1003255(void** ecx, uint32_t a2) {
    uint32_t eax3;
    uint32_t eax4;

    eax3 = a2;
    if (*reinterpret_cast<int16_t*>(&eax3)) {
        eax4 = eax3 & 39;
    } else {
        eax4 = 0x80;
    }
    return *reinterpret_cast<int16_t*>(&eax4);
}

int32_t g10010e0 = 0x7c838fb9;

int16_t fun_1002efd(void** a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t esi5;
    int32_t eax6;
    int32_t eax7;
    void* eax8;
    void* eax9;
    void* eax10;
    void* eax11;
    int32_t esi12;

    esi5 = g100105c;
    eax6 = reinterpret_cast<int32_t>(esi5());
    eax7 = reinterpret_cast<int32_t>(esi5());
    if (eax6 + eax7 + 1 < a2) {
        g1001088(a1, a3);
        eax8 = reinterpret_cast<void*>(esi5(a1, a1, a3));
        if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax8) + reinterpret_cast<unsigned char>(a1) - 1) != 92 && (eax9 = reinterpret_cast<void*>(esi5(a1, a1, a1, a3)), *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax9) + reinterpret_cast<unsigned char>(a1) - 1) != 47)) {
            eax10 = reinterpret_cast<void*>(esi5(a1, a1, a1, a1, a3));
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax10) + reinterpret_cast<unsigned char>(a1)) = 92;
            eax11 = reinterpret_cast<void*>(esi5(a1, a1, a1, a1, a1, a3));
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax11) + reinterpret_cast<unsigned char>(a1) + 1) = 0;
        }
        g10010e0(a1, a4, a1, a1, a3);
    }
    goto esi12;
}

int32_t g100bc3c;

void** g100be64;

int16_t fun_1003e28(void** a1, int32_t a2, uint32_t a3);

int16_t fun_1004faf(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    int32_t ebx6;
    int1_t zf7;
    int1_t zf8;
    void** v9;
    void** v10;
    void** esi11;
    void** ebx12;
    void** ebp13;
    int32_t eax14;
    int32_t eax15;
    int32_t eax16;
    int32_t eax17;

    ebx6 = 1;
    fun_100672a(a2);
    if (!0) {
        zf7 = g100bc3c == 0;
        if (!zf7 || ((zf8 = (*reinterpret_cast<unsigned char*>(&g100c898) & 1) == 0, !zf8) || (v9 = g100ba4c, g100be64 = a2, v10 = g100c4a4, *reinterpret_cast<int16_t*>(&eax14) = fun_1004819(ecx, v10, 0x7d3, v9, fun_1003e28, 0, 6, esi11, ebx12, ebp13, __return_address(), a2, a3, a4, a5), eax15 = eax14 - 6, eax15 == 0))) {
            addr_0x1005011_3:
            g10010c0(a2, 0x80);
        } else {
            eax16 = eax15 - 1;
            if (!eax16) {
                ebx6 = 0;
            } else {
                if (!(eax16 - 0x832)) {
                    g100bc3c = 1;
                    goto addr_0x1005011_3;
                }
            }
        }
    }
    eax17 = ebx6;
    return *reinterpret_cast<int16_t*>(&eax17);
}

struct s5 {
    struct s5* f0;
    struct s5* f4;
};

struct s6 {
    signed char[1] pad1;
    void** f1;
};

struct s5* g100bc40;

int16_t fun_100409f(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    int32_t edi10;
    struct s5* eax11;
    struct s6* eax12;
    struct s5* eax13;
    struct s5* eax14;
    void** v15;
    void** edi16;
    void** esi17;
    void** ebx18;
    void** ebp19;
    void** v20;

    edi10 = g1001050;
    eax11 = reinterpret_cast<struct s5*>(edi10());
    if (eax11) {
        eax12 = reinterpret_cast<struct s6*>(g100105c(a2));
        eax13 = reinterpret_cast<struct s5*>(edi10(64, &eax12->f1, a2));
        eax11->f0 = eax13;
        if (eax13) {
            g1001088(eax13, a2, 64, &eax12->f1, a2);
            eax14 = g100bc40;
            eax11->f4 = eax14;
            g100bc40 = eax11;
        } else {
            v15 = g100ba4c;
            fun_1003ebe(ecx, v15, 0x4b5, 0, 0, 16, 0, 64, &eax12->f1, a2, 64, 8, edi16, esi17, ebx18, ebp19, __return_address(), a2, a3, a4, a5, a6);
            g100104c(eax11, 64, &eax12->f1, a2);
            goto addr_0x1004103_5;
        }
    } else {
        v20 = g100ba4c;
        fun_1003ebe(ecx, v20, 0x4b5, 0, 0, 16, 0, 64, 8, edi16, esi17, ebx18, ebp19, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9);
        goto addr_0x1004103_5;
    }
    addr_0x1004122_7:
    goto ebx18;
    addr_0x1004103_5:
    goto addr_0x1004122_7;
}

void fun_1003275(int32_t a1);

void fun_100328c(int32_t a1);

uint32_t fun_1002fe5(uint32_t a1, signed char* a2, uint32_t a3);

int32_t fun_1003072(int32_t a1, int32_t a2, int32_t a3);

int32_t fun_1003165(int32_t a1, int32_t a2, int32_t a3);

int16_t fun_10042a4(void** a1) {
    void* ebp2;
    void** v3;
    void** edi4;
    void** ecx5;
    void** esi6;
    void** eax7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** eax14;
    int32_t eax15;
    int1_t zf16;
    int32_t v17;
    int32_t v18;
    int32_t v19;
    void** eax20;
    int32_t eax21;
    uint32_t eax22;

    ebp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v3 = edi4;
    ecx5 = reinterpret_cast<void**>(6);
    while (ecx5) {
        --ecx5;
        esi6 = esi6 + 4;
    }
    eax7 = fun_1006aa4(fun_1003275, fun_100328c, fun_10041d8, fun_1002fe5, fun_1003072, fun_1003108, fun_1003165, 1, reinterpret_cast<int32_t>(ebp2) + 0xfffffff4);
    if (eax7) {
        eax14 = fun_10041d8(ecx5, 0x100b20c, 0x8000, 0x180, esi6, v3, v8, v9, v10, v11, v12, v13);
        if (eax14 == 0xffffffff || ((eax15 = fun_1006b3b(ecx5, eax7, eax14, reinterpret_cast<int32_t>(ebp2) - 36), eax15 == 0) || ((zf16 = v17 == g100bba4, !zf16) || (v18 || (v19 || (eax20 = fun_1003108(eax14), eax20 == 0xffffffff)))))) {
            eax7 = reinterpret_cast<void**>(0);
        } else {
            eax21 = fun_100735b(eax14, eax7);
            eax22 = reinterpret_cast<uint32_t>(-eax21);
            eax7 = reinterpret_cast<void**>(-(eax22 - (eax22 + reinterpret_cast<uint1_t>(eax22 < eax22 + reinterpret_cast<uint1_t>(!!eax21)))));
        }
    }
    return *reinterpret_cast<int16_t*>(&eax7);
}

int16_t fun_10073c0(void** ecx, void** a2, void** a3, int16_t a4, int16_t a5);

int16_t fun_1006e46(void** ecx, void** a2);

int16_t fun_10072b7(void** ecx, void** a2);

int16_t fun_100799f(void** ecx, void** a2);

void** fun_1007af5(void** ecx, void** a2, void** a3, void** a4, int32_t a5, void** a6, void** a7, void** a8) {
    void** v9;
    void** esi10;
    void** eax11;
    void** edi12;
    void** edi13;
    void** esi14;
    void** ebx15;
    void** ebp16;
    void** eax17;
    void** v18;
    void** v19;
    int1_t zf20;
    void*** edi21;
    void** v22;

    v9 = reinterpret_cast<void**>(0);
    esi10 = a2;
    *reinterpret_cast<uint16_t*>(esi10 + 0xae) = 0;
    *reinterpret_cast<void***>(esi10 + 56) = a8;
    *reinterpret_cast<void***>(esi10 + 36) = a6;
    *reinterpret_cast<void***>(esi10 + 40) = a7;
    eax11 = esi10 + 0x5b9;
    edi12 = esi10 + 0x7bc;
    fun_100160f(eax11, 0x101, a4, edi13, esi14, ebx15, 0, ebp16, __return_address(), a2, a3);
    *reinterpret_cast<int16_t*>(&eax11) = fun_10073c0(ecx, esi10, a3, 0, -1);
    if (!eax11 || (*reinterpret_cast<void***>(esi10 + 0x9c) = reinterpret_cast<void**>(0), eax17 = esi10 + 0x5b9, *reinterpret_cast<void**>(esi10 + 0x90) = reinterpret_cast<void*>(0xffff), fun_100160f(eax17, 0x101, a4, edi13, esi14, ebx15, 0, ebp16, __return_address(), a2, a3), *reinterpret_cast<int16_t*>(&eax17) = fun_1006e46(ecx, esi10), eax17 == 0)) {
        addr_0x1007ca6_2:
        if (*reinterpret_cast<void***>(esi10 + 0x88) != 0xffffffff) {
            v18 = *reinterpret_cast<void***>(esi10 + 0x88);
            *reinterpret_cast<int16_t*>(esi10 + 24)(ecx);
            ecx = v18;
        }
    } else {
        do {
            if (!*reinterpret_cast<int16_t*>(esi10 + 0xac)) 
                goto addr_0x1007c98_6;
            while (*reinterpret_cast<int16_t*>(esi10 + 0xac) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(esi10 + 0xac) - 1), *reinterpret_cast<int16_t*>(&eax17) = fun_10072b7(ecx, esi10), !!eax17) {
                *reinterpret_cast<void***>(edi12 + 4) = esi10 + 0xb4;
                *reinterpret_cast<void***>(edi12) = *reinterpret_cast<void***>(esi10 + 0x74);
                *reinterpret_cast<void***>(edi12 + 8) = esi10 + 0x1b5;
                *reinterpret_cast<void***>(edi12 + 12) = esi10 + 0x2b6;
                *reinterpret_cast<int16_t*>(edi12 + 24) = *reinterpret_cast<int16_t*>(esi10 + 0x7e);
                *reinterpret_cast<void**>(edi12 + 26) = *reinterpret_cast<void**>(esi10 + 0x80);
                *reinterpret_cast<void***>(edi12 + 28) = *reinterpret_cast<void***>(esi10 + 0x82);
                eax17 = *reinterpret_cast<void***>(esi10 + 56);
                *reinterpret_cast<void***>(edi12 + 16) = eax17;
                *reinterpret_cast<void***>(edi12 + 34) = *reinterpret_cast<void***>(esi10 + 0x7c);
                if ((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi10 + 0x7c)) & 0xfffd) != 0xfffd) {
                    if (*reinterpret_cast<void***>(esi10 + 0x9c)) {
                        *reinterpret_cast<int16_t*>(esi10 + 0xac) = 0;
                        goto addr_0x1007c74_11;
                    } else {
                        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi12 + 34)) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi10 + 0x6a)) || reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi12 + 34)) >= reinterpret_cast<unsigned char>(0xfffc)) {
                            v19 = edi12;
                        } else {
                            addr_0x1007c74_11:
                            if (*reinterpret_cast<int16_t*>(esi10 + 0xac)) 
                                continue; else 
                                goto addr_0x1007c81_14;
                        }
                    }
                } else {
                    zf20 = *reinterpret_cast<void***>(esi10 + 0x9c) == 0;
                    v19 = edi12;
                    if (zf20) {
                        eax17 = reinterpret_cast<void**>(a6(ecx));
                        ecx = v19;
                        if (!reinterpret_cast<int1_t>(eax17 == 0xffffffff)) 
                            goto addr_0x1007c74_11; else 
                            goto addr_0x1007c0c_17;
                    }
                }
                eax17 = reinterpret_cast<void**>(a6(ecx));
                ecx = v19;
                *reinterpret_cast<void***>(esi10 + 0x8c) = eax17;
                if (eax17 == 0xffffffff) 
                    goto addr_0x1007c0c_17;
                if (!eax17) {
                    if ((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi10 + 0x7c)) & 0xfffe) == 0xfffe) {
                        *reinterpret_cast<uint16_t*>(esi10 + 0xae) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(esi10 + 0xae) + 1);
                        goto addr_0x1007c74_11;
                    }
                } else {
                    *reinterpret_cast<int16_t*>(&eax17) = fun_100799f(ecx, esi10);
                    if (!eax17) 
                        break;
                    goto addr_0x1007c74_11;
                }
            }
            goto addr_0x1007ca6_2;
            addr_0x1007c81_14:
            *reinterpret_cast<int16_t*>(&eax17) = fun_1006e46(ecx, esi10);
        } while (eax17);
        goto addr_0x1007ca6_2;
    }
    edi21 = reinterpret_cast<void***>(esi10 + 0x84);
    if (*edi21 != 0xffffffff) {
        *reinterpret_cast<int16_t*>(esi10 + 24)(ecx);
    }
    *edi21 = reinterpret_cast<void**>(0xffffffff);
    *reinterpret_cast<void***>(esi10 + 0x88) = reinterpret_cast<void**>(0xffffffff);
    return v9;
    addr_0x1007c98_6:
    *reinterpret_cast<int16_t*>(esi10 + 0xac) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(esi10 + 0xac) - 1);
    v9 = reinterpret_cast<void**>(1);
    goto addr_0x1007ca6_2;
    addr_0x1007c0c_17:
    v22 = *reinterpret_cast<void***>(esi10);
    fun_1007cde(ecx, v22, 11, 0);
    goto addr_0x1007ca6_2;
}

void** g100c880;

int32_t g1001100 = 0x7c8606df;

int16_t fun_100342e(void** a1, void** a2, void** a3) {
    void* ebp4;
    void** eax5;
    void** v6;
    void** ebx7;
    void** v8;
    void** v9;
    void** esi10;
    void** esi11;
    int32_t ebx12;
    void** v13;
    void** edi14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    int32_t eax22;
    int32_t edi23;
    int32_t eax24;
    int32_t eax25;
    void** eax26;

    ebp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax5 = g100b2d0;
    v6 = ebx7;
    v8 = eax5;
    v9 = esi10;
    esi11 = a2;
    ebx12 = 0;
    v13 = edi14;
    v15 = a1;
    do {
        g10011a4(reinterpret_cast<int32_t>(ebp4) - 0x108, "IXP%03d.TMP", ebx12, v13, v9, v6);
        ++ebx12;
        g1001088(esi11, v15, v13, v9, v6);
        fun_10066cf(esi11, a3, reinterpret_cast<int32_t>(ebp4) + 0xfffffef8, esi11, v15, v13, v9, v6, v15, 0, v16, v17, v18, v19, v20, v21);
        g10010b0(esi11, esi11, v15, v13, v9, v6);
        eax22 = reinterpret_cast<int32_t>(g1001080());
        edi23 = g100107c;
        if (eax22 == -1) 
            break;
    } while (ebx12 < 0x190);
    goto addr_0x10034ad_4;
    eax24 = reinterpret_cast<int32_t>(edi23());
    if (eax24) {
        g100c880 = reinterpret_cast<void**>(1);
        goto addr_0x10034fd_8;
    }
    addr_0x10034cf_9:
    eax25 = reinterpret_cast<int32_t>(g1001100(v15, "IXP"));
    if (eax25) {
        g10010bc(esi11, v15, "IXP");
        edi23(esi11, 0, esi11, v15, "IXP");
    }
    addr_0x10034fd_8:
    eax26 = fun_10064de(v8, v8);
    return *reinterpret_cast<int16_t*>(&eax26);
    addr_0x10034ad_4:
    goto addr_0x10034cf_9;
}

int32_t g100111c = 0x7c8397a1;

int32_t g10010fc = 0x7c823053;

int16_t fun_1006a45(int32_t a1, void** a2);

int32_t g1001114 = 0x7c827052;

int32_t g1001110 = 0x7c810311;

int32_t g1001118 = 0x7c825f62;

uint32_t g100c494;

void** g100c498;

int16_t fun_100456a(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, ...) {
    void* ebp14;
    void** eax15;
    void** v16;
    void** ebx17;
    void** v18;
    void** edi19;
    void** v20;
    void** v21;
    void** v22;
    void** esi23;
    void** v24;
    int32_t esi25;
    void** v26;
    int32_t eax27;
    void** eax28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    int32_t eax35;
    void** v36;
    void** v37;
    void** v38;
    void** ecx39;
    int32_t eax40;
    void** ecx41;
    int32_t esi42;
    void** eax43;
    void** v44;
    void** v45;
    void** v46;
    void** v47;
    int32_t eax48;
    void** v49;
    void** v50;
    void** v51;
    void** eax52;
    void** eax53;
    void** v54;
    void** v55;
    void** v56;
    void** v57;
    void** v58;
    void** v59;
    void** v60;
    void** v61;
    void** v62;
    void** v63;
    void** v64;
    void** eax65;
    int1_t zf66;
    unsigned char v67;
    void** ecx68;
    void** eax69;
    void** edx70;
    void** esi71;
    int1_t below_or_equal72;
    void** eax73;

    ebp14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax15 = g100b2d0;
    v16 = ebx17;
    v18 = edi19;
    v20 = eax15;
    v21 = a2;
    if (a3) {
        v22 = esi23;
        v24 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp14) + 0xfffffcf0);
        g100111c(0x104, v24, v22);
        esi25 = g10010fc;
        v26 = a2;
        eax27 = reinterpret_cast<int32_t>(esi25());
        if (eax27) {
            eax28 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp14) + 0xfffffce8);
            *reinterpret_cast<int16_t*>(&eax28) = fun_1006a45(0, eax28);
            v29 = eax28;
            if (eax28) {
                v30 = reinterpret_cast<void**>(0);
                v31 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp14) + 0xfffffce0);
                v32 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp14) + 0xfffffcdc);
                v33 = reinterpret_cast<void**>(0);
                v34 = reinterpret_cast<void**>(0);
                eax35 = reinterpret_cast<int32_t>(g1001114(0, 0, 0, 0, v32, v31, 0, 0));
                if (eax35) {
                    v36 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp14) + 0xfffffcf0);
                    esi25(v36, 0, 0, 0, 0, v32, v31, 0, 0);
                    v37 = a2;
                    v38 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp14) + 0xfffffff4);
                    g1001110(v38, v37, 3, v36, 0, 0, 0, 0, v32, v31, 0, 0);
                    ecx39 = reinterpret_cast<void**>(0x200);
                    eax40 = 0;
                    do {
                        if (!ecx39) 
                            break;
                        ecx39 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx39) << 1);
                        ++eax40;
                    } while (*reinterpret_cast<uint16_t*>(&eax40) < 8);
                    if (*reinterpret_cast<uint16_t*>(&eax40) == 8) 
                        goto addr_0x1004707_9;
                } else {
                    ecx41 = reinterpret_cast<void**>(0x7f);
                    while (ecx41) {
                        --ecx41;
                        esi25 = esi25 + 4;
                    }
                    esi42 = esi25 + 2 + 1;
                    eax43 = fun_1003aa1(0, 0, 0, 0, v32, v31, 0, 0, v26, 0x104, v24, v22);
                    v44 = reinterpret_cast<void**>(0);
                    g100ba5c = eax43;
                    v45 = reinterpret_cast<void**>(0x200);
                    v46 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp14) + 0xfffffdf4);
                    v47 = reinterpret_cast<void**>(0);
                    eax48 = reinterpret_cast<int32_t>(g1001054(0, v46, 0x200, 0, 0, 0, 0, 0, v32, v31, 0, 0));
                    g1001118(0x1000, 0, eax48, 0, v46, 0x200, 0, 0, 0, 0, 0, v32, v31, 0, 0);
                    goto addr_0x10046bf_20;
                }
            } else {
                ecx41 = reinterpret_cast<void**>(0x7f);
                while (ecx41) {
                    --ecx41;
                    esi25 = esi25 + 4;
                }
                esi42 = esi25 + 2 + 1;
                eax52 = fun_1003aa1(v26, 0x104, v24, v22, v18, v16, v49, v50, v21, 0, v29, v51);
                g100ba5c = eax52;
                v30 = reinterpret_cast<void**>(0x200);
                v31 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp14) + 0xfffffdf4);
                v32 = reinterpret_cast<void**>(0);
                eax53 = reinterpret_cast<void**>(g1001054(0, v31, 0x200, 0));
                v33 = eax53;
                v34 = reinterpret_cast<void**>(0x1000);
                g1001118(0x1000, 0, v33, 0, v31, 0x200, 0);
                v44 = reinterpret_cast<void**>(16);
                v45 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp14) + 0xfffffdf4);
                v46 = v21;
                v47 = reinterpret_cast<void**>(0x4b0);
                goto addr_0x10046bf_20;
            }
        } else {
            fun_1003ebe(ecx, 0, 0x4bc, 0, 0, 16, 0, v26, 0x104, v24, v22, v18, v16, v54, v55, v21, 0, v56, v57, v58, v59, v60);
            eax65 = fun_1003aa1(v26, 0x104, v24, v22, v18, v16, v61, v62, v21, 0, v63, v64);
            g100ba5c = eax65;
            goto addr_0x10045d7_32;
        }
    } else {
        goto addr_0x10047a0_34;
    }
    zf66 = (*reinterpret_cast<unsigned char*>(&g100c494) & 8) == 0;
    if (zf66 || !(v67 & 0x80)) {
        ecx68 = g100c498;
        eax69 = *reinterpret_cast<void***>(*reinterpret_cast<uint16_t*>(&eax40) * 4 + 0x100cbc0);
    } else {
        edx70 = g100c498;
        eax69 = reinterpret_cast<void**>(*reinterpret_cast<uint32_t*>(*reinterpret_cast<uint16_t*>(&eax40) * 4 + 0x100cbc0) << 1);
        ecx68 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(edx70) >> 2) + reinterpret_cast<unsigned char>(edx70));
    }
    esi71 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a3) & 1);
    if (!esi71 || !(*reinterpret_cast<unsigned char*>(&a3) & 2)) {
        if (!esi71) {
            below_or_equal72 = reinterpret_cast<unsigned char>(ecx68) <= reinterpret_cast<unsigned char>(v29);
        } else {
            below_or_equal72 = reinterpret_cast<unsigned char>(eax69) <= reinterpret_cast<unsigned char>(v29);
        }
    } else {
        below_or_equal72 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(ecx68) + reinterpret_cast<unsigned char>(eax69)) <= reinterpret_cast<unsigned char>(v29);
    }
    if (below_or_equal72) {
        g100ba5c = reinterpret_cast<void**>(0);
    } else {
        fun_10020a4(ecx68, a4, eax69, ecx68, reinterpret_cast<int32_t>(ebp14) + 0xfffffff4, v38, v37, 3, v36, 0, 0, 0, 0, v32, v31, 0, 0);
    }
    addr_0x100479f_46:
    addr_0x10047a0_34:
    eax73 = fun_10064de(v20);
    return *reinterpret_cast<int16_t*>(&eax73);
    addr_0x1004707_9:
    fun_1003ebe(ecx39, 0, 0x4c5, 0, 0, 16, 0, v38, v37, 3, v36, 0, 0, 0, 0, v32, v31, 0, 0, v26, 0x104, v24, ecx39, 0, 0x4c5, 0, 0, 16, 0, v38, v37, 3, v36, 0, 0, 0, 0, v32, v31, 0, 0, v26, 0x104, v24);
    addr_0x10045d7_32:
    goto addr_0x100479f_46;
    addr_0x10046bf_20:
    fun_1003ebe(ecx41, 0, v47, v46, v45, v44, 0, v34, 0, v33, v32, v31, v30, 0, v26, 0x104, v24, v22, v18, v16, 0, 0);
    esi42(reinterpret_cast<int32_t>(ebp14) - 0x310, v34, 0, v33, v32, v31, v30, 0);
    goto addr_0x10045d7_32;
}

int32_t g10010d8 = 0x7c80baf1;

int32_t g1001198 = 0x7c80c6cf;

int16_t fun_1002e55(int32_t a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    int32_t esi10;
    void** eax11;
    int32_t v12;
    int32_t eax13;
    int32_t v14;
    int32_t eax15;
    int32_t v16;
    void** eax17;
    void** edi18;
    void** edx19;
    uint32_t ecx20;
    void** esi21;
    uint32_t ecx22;
    void** v23;

    esi10 = g10010dc;
    esi10();
    eax11 = reinterpret_cast<void**>(g10010d8());
    if (reinterpret_cast<unsigned char>(eax11) > reinterpret_cast<unsigned char>(a3) || !a2) {
        addr_0x1002ec0_2:
    } else {
        if (!(!eax11 || (v12 = a1, eax13 = reinterpret_cast<int32_t>(esi10(0, v12, 10)), v14 = eax13, eax15 = reinterpret_cast<int32_t>(g10010d4(0, v14, 0, v12, 10)), v16 = eax15, eax17 = reinterpret_cast<void**>(g1001198(v16, 0, v14, 0, v12, 10)), !eax17))) {
            edi18 = a2;
            edx19 = eax11;
            ecx20 = reinterpret_cast<unsigned char>(eax11) >> 2;
            esi21 = eax17;
            while (ecx20) {
                --ecx20;
                *reinterpret_cast<void***>(edi18) = *reinterpret_cast<void***>(esi21);
                edi18 = edi18 + 4;
                esi21 = esi21 + 4;
            }
            ecx22 = reinterpret_cast<unsigned char>(edx19) & 3;
            v23 = eax17;
            while (ecx22) {
                --ecx22;
                *reinterpret_cast<void***>(edi18) = *reinterpret_cast<void***>(esi21);
                ++edi18;
                ++esi21;
            }
            g10010cc(v23, v16, 0, v14, 0, v12, 10);
            goto addr_0x1002ec0_2;
        }
    }
    goto 10;
}

void** g100b2c4 = reinterpret_cast<void**>(1);

void** g100b2c8 = reinterpret_cast<void**>(1);

void** g100c894;

struct s7 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

struct s8 {
    void** f0;
    signed char[11] pad12;
    void** f12;
    signed char[3] pad16;
    void** f16;
};

struct s9 {
    void** f0;
    signed char[7] pad8;
    uint32_t f8;
    signed char[8] pad20;
    uint32_t f20;
};

int16_t fun_100216f(void* a1);

int16_t fun_100488c(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    void* ebp11;
    void** eax12;
    void** v13;
    void** esi14;
    void** v15;
    void** v16;
    void** edi17;
    void** v18;
    void** v19;
    int32_t eax20;
    int32_t eax21;
    int32_t v22;
    uint32_t v23;
    uint32_t v24;
    void** v25;
    int1_t zf26;
    void** eax27;
    int1_t zf28;
    void** esi29;
    void** ecx30;
    void** v31;
    void** ebx32;
    int32_t ebx33;
    int32_t v34;
    void** v35;
    struct s7* eax36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    int32_t v42;
    void** v43;
    void** v44;
    void* v45;
    struct s8* eax46;
    void** v47;
    void** v48;
    void** v49;
    void** v50;
    void** v51;
    int32_t v52;
    void** v53;
    void** v54;
    void* v55;
    void** ecx56;
    int32_t edx57;
    int1_t below_or_equal58;
    uint32_t edx59;
    struct s9* eax60;
    void** eax61;
    void** ebx62;
    void** ecx63;
    void* v64;
    signed char* edi65;
    int1_t zf66;
    void** v67;
    void** v68;
    void** v69;
    void** v70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    void** eax75;
    void** v76;
    uint32_t eax77;
    int32_t eax78;
    int1_t zf79;
    void** eax80;
    void** v81;
    void** v82;
    void** v83;
    void** v84;
    void** v85;
    void** v86;
    void** v87;
    void** v88;
    void** v89;

    ebp11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax12 = g100b2d0;
    v13 = esi14;
    v15 = eax12;
    v16 = edi17;
    v18 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp11) + 0xfffffe64);
    v19 = a2;
    eax20 = reinterpret_cast<int32_t>(g1001120());
    if (eax20) {
        eax21 = v22 - 1;
        if (!eax21) {
            g100ba64 = 0;
            g100b2c4 = reinterpret_cast<void**>(1);
            g100b2c8 = reinterpret_cast<void**>(1);
        } else {
            if (!(eax21 - 1)) {
                g100b2c4 = reinterpret_cast<void**>(1);
                g100b2c8 = reinterpret_cast<void**>(1);
                g100ba64 = 2;
                if (v23 > 3) {
                    if (v23 >= 5) {
                        g100ba64 = 3;
                    }
                } else {
                    g100ba64 = 1;
                    if (v23 < 3 || v23 == 3 && v24 < 51) {
                        g100b2c4 = reinterpret_cast<void**>(0);
                        g100b2c8 = reinterpret_cast<void**>(0);
                    }
                }
            } else {
                v25 = reinterpret_cast<void**>(0x4ca);
                goto addr_0x10048d7_11;
            }
        }
    } else {
        v25 = reinterpret_cast<void**>(0x4b4);
        goto addr_0x10048d7_11;
    }
    zf26 = g100c894 == 0;
    if (!zf26 || !a2) {
        addr_0x1004baa_14:
        eax27 = fun_10064de(v15, v15);
        return *reinterpret_cast<int16_t*>(&eax27);
    } else {
        zf28 = g100ba64 == 0;
        if (!zf28) {
            esi29 = a2 + 4;
        } else {
            esi29 = a2 + 64;
        }
        ecx30 = reinterpret_cast<void**>(0);
        v31 = ebx32;
        ebx33 = v34;
        v35 = reinterpret_cast<void**>(0);
        do {
            eax36 = reinterpret_cast<struct s7*>(esi29 + reinterpret_cast<uint32_t>(ecx30 + reinterpret_cast<unsigned char>(ecx30) * 2) * 8);
            v37 = eax36->f4;
            v38 = eax36->f0;
            *reinterpret_cast<int16_t*>(&eax36) = fun_1002196(v39, v40, v38, v37, v31, v18, v16, v13, v41, v42, v43, v44, v35, v19, 0, 0x94, v45);
            *reinterpret_cast<struct s7**>(reinterpret_cast<int32_t>(ebp11) + reinterpret_cast<unsigned char>(v35) * 4 - 0x1b0) = eax36;
            eax46 = reinterpret_cast<struct s8*>(esi29 + reinterpret_cast<uint32_t>(v35 + reinterpret_cast<unsigned char>(v35) * 2) * 8);
            v47 = eax46->f16;
            v48 = eax46->f12;
            *reinterpret_cast<int16_t*>(&eax46) = fun_1002196(v49, v50, v48, v47, v31, v18, v16, v13, v51, v52, v53, v54, v35, v19, 0, 0x94, v55);
            ecx56 = v35;
            edx57 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp11) + reinterpret_cast<unsigned char>(ecx56) * 4 - 0x1b0);
            *reinterpret_cast<struct s8**>(reinterpret_cast<int32_t>(ebp11) + reinterpret_cast<unsigned char>(ecx56) * 4 - 0x1b8) = eax46;
            if (edx57 < 0 || !reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax46) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax46 == 0))) {
                if (ecx56 == 1) 
                    break; else 
                    continue;
            } else {
                if (edx57) 
                    goto addr_0x1004b0e_22;
                if (!eax46) 
                    goto addr_0x1004a1e_24;
            }
            if (edx57) {
                addr_0x1004b0e_22:
                if (eax46) 
                    goto addr_0x1004a50_26;
            } else {
                if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&ebx33)) < *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(esi29 + reinterpret_cast<uint32_t>(ecx56 + reinterpret_cast<unsigned char>(ecx56) * 2) * 8) + 8)) 
                    goto addr_0x1004b26_28; else 
                    goto addr_0x1004a50_26;
            }
            below_or_equal58 = static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&ebx33)) <= *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(esi29 + reinterpret_cast<uint32_t>(ecx56 + reinterpret_cast<unsigned char>(ecx56) * 2) * 8) + 20);
            addr_0x1004b20_30:
            if (below_or_equal58) 
                goto addr_0x1004a50_26; else 
                goto addr_0x1004b26_28;
            addr_0x1004a1e_24:
            edx59 = static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&ebx33));
            eax60 = reinterpret_cast<struct s9*>(esi29 + reinterpret_cast<uint32_t>(ecx56 + reinterpret_cast<unsigned char>(ecx56) * 2) * 8);
            if (edx59 < eax60->f8) {
                addr_0x1004b26_28:
                if (ecx56) 
                    break;
            } else {
                below_or_equal58 = edx59 <= eax60->f20;
                goto addr_0x1004b20_30;
            }
            ecx30 = ecx56 + 1;
            v35 = ecx30;
        } while (reinterpret_cast<signed char>(ecx30) < reinterpret_cast<signed char>(2));
        goto addr_0x1004b4e_33;
    }
    v25 = reinterpret_cast<void**>(0x54c);
    addr_0x1004a8d_35:
    eax61 = v19;
    ebx62 = reinterpret_cast<void**>(0);
    if (reinterpret_cast<int1_t>(v25 == 0x54d)) {
        esi29 = reinterpret_cast<void**>(reinterpret_cast<uint16_t>(*reinterpret_cast<void**>(eax61 + 0x80)) + reinterpret_cast<unsigned char>(ecx56) * 60 + reinterpret_cast<unsigned char>(eax61) + 0x84);
        ebx62 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp11) + 0xfffffef8);
    }
    ecx63 = *reinterpret_cast<void***>(esi29 + 52);
    v64 = *reinterpret_cast<void**>(esi29 + 48);
    edi65 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ecx63) + reinterpret_cast<unsigned char>(eax61) + 0x84);
    *reinterpret_cast<int16_t*>(&eax61) = fun_100216f(v64);
    zf66 = (*reinterpret_cast<unsigned char*>(&g100c898) & 1) == 0;
    v67 = eax61;
    if (!zf66 || !*edi65) {
        fun_1003ebe(ecx63, 0, v25, 0x100bbb4, ebx62, 48, 0, v31, v18, v16, v13, v68, v69, v70, v71, v35, v67, v25, 0x94, v72, v73, v74);
        goto addr_0x1004ba9_39;
    }
    g100120c(0);
    eax75 = fun_10068b3(0, v31, v18, v16, v13);
    if (!eax75 || (v76 = g100c4a4, *reinterpret_cast<int16_t*>(&eax75) = fun_100685e(v76, 16, 1, 0, v31, v18, v16, v13), eax75 == 0)) {
        eax77 = 0;
    } else {
        eax77 = 0x180000;
    }
    eax78 = reinterpret_cast<int32_t>(g10011f0(0, edi65, 0x100bbb4, eax77 | reinterpret_cast<unsigned char>(v67) | 48, 0));
    if (*reinterpret_cast<unsigned char*>(&v67) & 4) 
        goto addr_0x1004b76_44;
    if (!(*reinterpret_cast<unsigned char*>(&v67) & 1)) {
        addr_0x1004ba9_39:
        goto addr_0x1004baa_14;
    } else {
        zf79 = eax78 == 1;
    }
    addr_0x1004b79_47:
    if (zf79) {
        goto addr_0x1004ba9_39;
    }
    addr_0x1004b76_44:
    zf79 = eax78 == 6;
    goto addr_0x1004b79_47;
    addr_0x1004b4e_33:
    addr_0x1004a50_26:
    eax80 = v19;
    if (!*reinterpret_cast<void***>(eax80 + 0x7c)) 
        goto addr_0x1004ba9_39;
    *reinterpret_cast<int16_t*>(&eax80) = fun_1002410(eax80, reinterpret_cast<int32_t>(ebp11) + 0xfffffef8, 0x104, reinterpret_cast<int32_t>(ebp11) - 0x1a8);
    if (eax80) 
        goto addr_0x1004ba9_39;
    ecx56 = v35;
    v25 = reinterpret_cast<void**>(0x54d);
    goto addr_0x1004a8d_35;
    addr_0x10048d7_11:
    fun_1003ebe(ecx, 0, v25, 0, 0, 16, 0, v18, v16, v13, v81, v82, v83, v84, v85, v19, v25, 0x94, v86, v87, v88, v89);
    goto addr_0x1004baa_14;
}

int32_t g100b1fc = 2;

struct s10 {
    struct s10* f0;
    int32_t f4;
};

int32_t g1001010 = 0x77dd7753;

int32_t g100100c = 0x77dd7b76;

int32_t g1001008 = 0x77dd7ee4;

void** fun_1001760(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void** eax9;
    void** v10;
    int32_t eax11;
    struct s10* ebx12;
    int32_t* eax13;
    int32_t eax14;
    int32_t eax15;
    void** eax16;
    int32_t edi17;
    int32_t v18;
    int32_t edi19;
    int32_t eax20;
    int32_t eax21;
    struct s10* eax22;
    struct s10* esi23;
    void* v24;
    int32_t v25;
    int32_t v26;
    struct s10* v27;
    int32_t v28;
    int32_t v29;
    int32_t eax30;
    void* v31;
    void* v32;
    int32_t eax33;
    int32_t v34;
    int32_t* edi35;
    int32_t v36;
    int32_t v37;
    int32_t eax38;

    eax9 = g100b2d0;
    v10 = eax9;
    eax11 = g100b1fc;
    ebx12 = reinterpret_cast<struct s10*>(0);
    if (eax11 != 2) 
        goto addr_0x100188d_2;
    eax13 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 16);
    *reinterpret_cast<int16_t*>(&eax13) = fun_10016b4(eax13);
    if (eax13) {
        if (!1) {
            g100b1fc = 1;
        }
    } else {
        eax14 = reinterpret_cast<int32_t>(g1001058(8, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 20));
        eax15 = reinterpret_cast<int32_t>(g1001010(eax14, 8, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 20));
        if (!eax15) {
            addr_0x100188d_2:
            eax16 = fun_10064de(v10, v10);
            return eax16;
        } else {
            edi17 = g100100c;
            eax20 = reinterpret_cast<int32_t>(edi17(v18, 2, 0, 0, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 24, edi19, eax14, 8, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 20));
            if (eax20 || (eax21 = reinterpret_cast<int32_t>(g1001054(v18, 2, 0, 0, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 24, edi19, eax14, 8, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 20)), eax21 != 0x7a)) {
                addr_0x100186f_8:
                g10010e4();
            } else {
                eax22 = reinterpret_cast<struct s10*>(g1001050());
                esi23 = eax22;
                if (!esi23) {
                    addr_0x100186e_10:
                    goto addr_0x100186f_8;
                } else {
                    v24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 24);
                    v25 = v26;
                    v27 = esi23;
                    v28 = v29;
                    eax30 = reinterpret_cast<int32_t>(edi17(v28, 2, v27, v25, v24));
                    if (!eax30 || (v31 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 28), v32 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 12), eax33 = reinterpret_cast<int32_t>(g1001004(v32, 2, 32, 0x220, 0, 0, 0, 0, 0, 0, v31, v28, 2, v27, v25, v24)), eax33 == 0)) {
                        addr_0x1001867_12:
                        g100104c(esi23, v28, 2, v27, v25, v24);
                        goto addr_0x100186e_10;
                    } else {
                        if (reinterpret_cast<uint32_t>(esi23->f0) <= 0) {
                            addr_0x100185e_14:
                            g1001000(v34, v32, 2, 32, 0x220, 0, 0, 0, 0, 0, 0, v31, v28, 2, v27, v25, v24);
                            goto addr_0x1001867_12;
                        } else {
                            edi35 = &esi23->f4;
                            do {
                                v36 = *edi35;
                                eax38 = reinterpret_cast<int32_t>(g1001008(v36, v37, v32, 2, 32, 0x220, 0, 0, 0, 0, 0, 0, v31, v28, 2, v27, v25, v24));
                                if (eax38) 
                                    goto addr_0x1001853_17;
                                ebx12 = reinterpret_cast<struct s10*>(reinterpret_cast<uint32_t>(ebx12) + 1);
                                edi35 = edi35 + 2;
                            } while (reinterpret_cast<uint32_t>(ebx12) < reinterpret_cast<uint32_t>(esi23->f0));
                            goto addr_0x1001851_19;
                        }
                    }
                }
            }
        }
    }
    goto addr_0x100188d_2;
    addr_0x1001853_17:
    g100b1fc = 1;
    goto addr_0x100185e_14;
    addr_0x1001851_19:
    goto addr_0x100185e_14;
}

int16_t fun_1002c57(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    int32_t eax7;
    int32_t eax8;

    if (!a1 || ((eax7 = reinterpret_cast<int32_t>(g100105c(a1)), eax7 < 3) || *reinterpret_cast<void***>(a1 + 1) != 58 && (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(a1) == 92) || !reinterpret_cast<int1_t>(*reinterpret_cast<void***>(a1 + 1) == 92)))) {
        eax8 = 0;
    } else {
        eax8 = 1;
    }
    return *reinterpret_cast<int16_t*>(&eax8);
}

int16_t fun_1001942(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10);

int16_t fun_1001e13(void** a1, void** a2, void** a3, void** a4);

int32_t g10010ac = 0x7c80b929;

int16_t fun_1002589(void** ecx, void** a2, void** a3, uint32_t a4, void** a5);

int32_t g10010a8 = 0x7c823ebe;

int32_t g10010a4 = 0x7c822a54;

int32_t g10010a0 = 0x7c821f87;

int16_t fun_10026e2(void** a1, void** a2, void** a3, void** a4) {
    void** eax5;
    void** ecx6;
    void** v7;
    void** edi8;
    void** esi9;
    void** ebx10;
    void** v11;
    void** v12;
    signed char v13;
    void** eax14;
    void** v15;
    void** v16;
    void** eax17;
    void** v18;
    void** v19;
    void** eax20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    int32_t esi26;
    void** v27;
    void** v28;
    int32_t eax29;
    void** eax30;
    int32_t eax31;
    void** v32;
    void** v33;
    int32_t esi34;
    void** eax35;
    uint32_t eax36;
    void** eax37;
    void** eax38;
    void** v39;
    void** eax40;
    int32_t esi41;
    void** edi42;
    void** eax43;
    void** eax44;
    void** eax45;
    int32_t eax46;
    int1_t zf47;
    int32_t v48;
    void* eax49;
    void** eax50;
    void** v51;
    void** v52;
    void** v53;

    eax5 = g100b2d0;
    ecx6 = a4;
    v7 = ecx6;
    fun_100160f(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffdf4, 0x104, a1, edi8, esi9, ebx10, a3, a1, v7, v11, v12);
    if (v13 != 34) {
        eax14 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffdf4);
        v15 = reinterpret_cast<void**>(0x100133c);
    } else {
        eax14 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffdf5);
        v15 = reinterpret_cast<void**>(0x1001340);
    }
    v16 = eax14;
    eax17 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffff9f0);
    *reinterpret_cast<int16_t*>(&eax17) = fun_1001942(eax17, v15, edi8, esi9, ebx10, a3, a1, v7, v18, v16);
    v19 = eax17;
    *reinterpret_cast<int16_t*>(&eax17) = fun_1001e13(v16, edi8, esi9, ebx10);
    eax20 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8);
    if (eax17) {
        v21 = v16;
        v22 = eax20;
        g1001088();
    } else {
        v21 = reinterpret_cast<void**>(0x100bc44);
        v22 = eax20;
        g1001088();
        eax20 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8);
        fun_10066cf(eax20, 0x104, v16, v22, 0x100bc44, edi8, esi9, ebx10, a3, a1, v7, v19, v16, v23, v24, v25);
    }
    *reinterpret_cast<int16_t*>(&eax20) = fun_1006752(v16, 46, v22, v21, edi8, esi9, ebx10);
    esi26 = g10010ac;
    if (!eax20 || (v27 = reinterpret_cast<void**>(0x1001334), v28 = eax20, eax20 = reinterpret_cast<void**>(esi26()), !!eax20)) {
        *reinterpret_cast<int16_t*>(&eax20) = fun_1006752(v16, 46, v22, v21, edi8, esi9, ebx10);
        if (!eax20 || (v27 = reinterpret_cast<void**>(0x10012ec), v28 = eax20, eax29 = reinterpret_cast<int32_t>(esi26()), !!eax29)) {
            v27 = reinterpret_cast<void**>(0x400);
            v28 = reinterpret_cast<void**>(64);
            eax30 = reinterpret_cast<void**>(g1001050());
            v16 = eax30;
            if (eax30) {
                eax31 = reinterpret_cast<int32_t>(g1001080(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8));
                if (eax31 == -1 || *reinterpret_cast<unsigned char*>(&eax31) & 16) {
                    fun_100160f(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffff9f4, 0x400, a1, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8, 64, 0x400, v22, v21, edi8, esi9, ebx10);
                } else {
                    fun_100160f(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffff9f4, 0x400, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8, 64, 0x400, v22, v21, edi8, esi9, ebx10);
                    if (v19 && *reinterpret_cast<void***>(v19)) {
                        fun_10021e6(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffff9f4, 0x400, 0x100133c, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8, 64, 0x400, v22, v21, edi8, esi9, ebx10);
                        fun_10021e6(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffff9f4, 0x400, v19, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8, 64, 0x400, v22, v21, edi8, esi9, ebx10);
                    }
                }
                fun_1002589(ecx6, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffff9f4, v16, 0x400, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8);
            } else {
                addr_0x10029da_15:
                v32 = reinterpret_cast<void**>(0);
                v33 = reinterpret_cast<void**>(0x4b5);
                goto addr_0x10029e4_16;
            }
        } else {
            esi34 = g100105c;
            eax35 = reinterpret_cast<void**>(esi34("Command.com /c %s"));
            v7 = eax35;
            eax36 = reinterpret_cast<uint32_t>(esi34(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0x108, "Command.com /c %s"));
            ecx6 = v7;
            eax37 = reinterpret_cast<void**>(g1001050(64, reinterpret_cast<unsigned char>(ecx6) + eax36 + 8, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0x108, "Command.com /c %s"));
            v16 = eax37;
            if (!eax37) 
                goto addr_0x10029da_15;
            g10011a4(eax37, "Command.com /c %s", reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0x108, 64, reinterpret_cast<unsigned char>(ecx6) + eax36 + 8, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0x108, "Command.com /c %s");
        }
    } else {
        eax38 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8);
        *reinterpret_cast<int16_t*>(&eax38) = fun_100672a(eax38);
        if (eax38) {
            v39 = v19;
            eax40 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffff9f0);
            *reinterpret_cast<int16_t*>(&eax40) = fun_1001942(eax40, 0x1001330, v28, 0x1001334, v22, v21, edi8, esi9, ebx10, a3);
            esi41 = g100105c;
            esi41(0x100b0ac);
            if (!eax40) {
                edi42 = v39;
            } else {
                if (*reinterpret_cast<void***>(eax40)) {
                    v39 = eax40;
                }
                fun_1001942(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffff9f0, 0x100132c, 0x100b0ac, v28, 0x1001334, v22, v21, edi8, esi9, ebx10);
                edi42 = v39;
                if (*reinterpret_cast<void***>(edi42)) {
                    esi41(edi42, 0x100b0ac);
                }
            }
            eax43 = reinterpret_cast<void**>(g1001050(64, 0x200, 0x100b0ac));
            v16 = eax43;
            if (!eax43) 
                goto addr_0x10029da_15;
            eax44 = edi42;
            if (!*reinterpret_cast<void***>(edi42)) {
                eax44 = reinterpret_cast<void**>(0x100b0ac);
            }
            eax45 = reinterpret_cast<void**>(g10010a8(eax44, 0x1001324, 0, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0x108, 64, 0x200, 0x100b0ac));
            g100ba60 = eax45;
            *reinterpret_cast<void***>(v7) = reinterpret_cast<void**>(1);
            eax46 = reinterpret_cast<int32_t>(g10010a4(0x1001310, 0x1001318, 0x1001271, v16, 8, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8, eax44, 0x1001324, 0, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0x108, 64, 0x200, 0x100b0ac));
            if (!eax46) {
                g100c494 = g100c494 & 0xfffffffb;
                zf47 = g100ba64 == 0;
                if (!zf47) {
                    v48 = reinterpret_cast<int32_t>("setupapi.dll");
                } else {
                    eax49 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0x108);
                    v48 = reinterpret_cast<int32_t>("setupx.dll");
                    g10010a0(eax49, eax49, 0x104, 0x1001310, 0x1001318, 0x1001271, v16, 8, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8, eax44, 0x1001324, 0, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0x108, 64, 0x200, 0x100b0ac);
                }
                if (!*reinterpret_cast<void***>(edi42)) {
                    edi42 = reinterpret_cast<void**>(0x100b0ac);
                }
                g10011a4(v16, "rundll32.exe %s,InstallHinfSection %s 128 %s", v48, edi42, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0x108, 0x1001310, 0x1001318, 0x1001271, v16, 8, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8, eax44, 0x1001324, 0, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0x108, 64, 0x200, 0x100b0ac);
            } else {
                g100c494 = g100c494 | 4;
                if (!*reinterpret_cast<void***>(edi42)) {
                    edi42 = reinterpret_cast<void**>(0x100b0ac);
                }
                fun_10021c4(a1, a2, edi42, 0x1001310, 0x1001318, 0x1001271, v16, 8, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8, eax44, 0x1001324, 0, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0x108, 64, 0x200, 0x100b0ac, v28, 0x1001334, v22, v21, edi8, esi9, ebx10, a3, a1, v7);
                fun_10021c4(v16, 0x200, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8, 0x1001310, 0x1001318, 0x1001271, v16, 8, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8, eax44, 0x1001324, 0, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0x108, 64, 0x200, 0x100b0ac, v28, 0x1001334, v22, v21, edi8, esi9, ebx10, a3, a1, v7);
            }
        } else {
            v32 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8);
            v33 = reinterpret_cast<void**>(0x525);
            goto addr_0x10029e4_16;
        }
    }
    *reinterpret_cast<void***>(a3) = v16;
    addr_0x1002a82_41:
    eax50 = fun_10064de(eax5, eax5);
    return *reinterpret_cast<int16_t*>(&eax50);
    addr_0x10029e4_16:
    fun_1003ebe(ecx6, 0, v33, v32, 0, 16, 0, v28, v27, v22, v21, edi8, esi9, ebx10, a3, a1, v7, v19, v16, v51, v52, v53);
    goto addr_0x1002a82_41;
}

int32_t g1001030 = 0x77ddeaf4;

int32_t g1001064 = 0x7c814c63;

int32_t g1001060 = 0x7c80b357;

void** g100b330 = reinterpret_cast<void**>(0);

int32_t g1001028 = 0x77ddebe7;

void** fun_1001aa7() {
    void* ebp1;
    void** eax2;
    int32_t ecx3;
    void** v4;
    void* esi5;
    void** ecx6;
    void* esi7;
    void** v8;
    int32_t eax9;
    void** eax10;
    void** v11;
    void** ebx12;
    void** v13;
    void** v14;
    int32_t eax15;
    int32_t ebx16;
    void** v17;
    void** eax18;
    void** v19;
    void** v20;
    int32_t eax21;
    void** v22;
    uint32_t edi23;
    void** edi24;
    int32_t eax25;
    int32_t v26;
    int32_t esi27;
    void* eax28;
    void* eax29;
    void** eax30;
    void** ecx31;
    int32_t eax32;
    int32_t eax33;
    int32_t v34;
    int32_t v35;
    int32_t eax36;

    ebp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax2 = g100b2d0;
    ecx3 = 64;
    v4 = eax2;
    while (ecx3) {
        --ecx3;
        esi5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esi5) + 4);
    }
    ecx6 = reinterpret_cast<void**>(64);
    esi7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esi5) + 2 + 1);
    while (ecx6) {
        --ecx6;
        esi7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esi7) + 4);
    }
    v8 = reinterpret_cast<void**>(0);
    eax9 = reinterpret_cast<int32_t>(g1001030());
    if (eax9) {
        addr_0x1001ce4_20:
        eax10 = fun_10064de(v4, v4);
        return eax10;
    } else {
        v11 = ebx12;
        v13 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esi7) + 2 + 1);
        v14 = reinterpret_cast<void**>(0);
        do {
            g10011a4(0x100b2e0, "wextract_cleanup%d", v14, v13, v11);
            eax15 = reinterpret_cast<int32_t>(g100102c());
            if (eax15) 
                break;
            ++v14;
        } while (reinterpret_cast<signed char>(v14) < reinterpret_cast<signed char>(0xc8));
        if (reinterpret_cast<int1_t>(v14 == 0xc8)) 
            goto addr_0x1001b78_25;
    }
    ebx16 = g1001064;
    ebx16(reinterpret_cast<int32_t>(ebp1) + 0xfffffdf4);
    fun_10066cf(reinterpret_cast<int32_t>(ebp1) + 0xfffffdf4, 0x104, 0x1001298, reinterpret_cast<int32_t>(ebp1) + 0xfffffdf4, 0x104, v17, 0x100b2e0, 0, 0, 0, reinterpret_cast<int32_t>(ebp1) + 0xfffffde0, v13, v11, 0x80000002, 0x100b0cc, 0, reinterpret_cast<int32_t>(ebp1) + 0xfffffdf4, 0x104, 0x1001298, reinterpret_cast<int32_t>(ebp1) + 0xfffffdf4, 0x104, v17, 0x100b2e0, 0, 0, 0, reinterpret_cast<int32_t>(ebp1) + 0xfffffde0, v13, v11, 0x80000002, 0x100b0cc, 0);
    eax18 = reinterpret_cast<void**>(g1001184(reinterpret_cast<int32_t>(ebp1) + 0xfffffdf4, reinterpret_cast<int32_t>(ebp1) + 0xfffffdf4));
    if (!eax18 || (v19 = reinterpret_cast<void**>(0x1001288), v20 = eax18, eax21 = reinterpret_cast<int32_t>(g10010d0(v20, 0x1001288, reinterpret_cast<int32_t>(ebp1) + 0xfffffdf4, reinterpret_cast<int32_t>(ebp1) + 0xfffffdf4)), v22 = eax18, edi23 = reinterpret_cast<uint32_t>(-eax21), edi24 = reinterpret_cast<void**>(-(edi23 - (edi23 + reinterpret_cast<uint1_t>(edi23 < edi23 + reinterpret_cast<uint1_t>(!!eax21))))), v8 = edi24, g1001194(v22, v20, 0x1001288, reinterpret_cast<int32_t>(ebp1) + 0xfffffdf4, reinterpret_cast<int32_t>(ebp1) + 0xfffffdf4), edi24 == 0)) {
        v19 = reinterpret_cast<void**>(0x104);
        v20 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp1) + 0xfffffef8);
        v22 = g100c4a4;
        eax25 = reinterpret_cast<int32_t>(g1001060(v22, v20, 0x104, reinterpret_cast<int32_t>(ebp1) + 0xfffffdf4, reinterpret_cast<int32_t>(ebp1) + 0xfffffdf4));
        if (!eax25) {
            addr_0x1001c70_28:
            g100101c(v26, v22, v20, v19, reinterpret_cast<int32_t>(ebp1) + 0xfffffdf4, reinterpret_cast<int32_t>(ebp1) + 0xfffffdf4);
        } else {
            addr_0x1001c32_29:
            esi27 = g100105c;
            eax28 = reinterpret_cast<void*>(esi27(0x100bc44, v22, v20, v19, reinterpret_cast<int32_t>(ebp1) + 0xfffffdf4, reinterpret_cast<int32_t>(ebp1) + 0xfffffdf4));
            eax29 = reinterpret_cast<void*>(esi27(reinterpret_cast<int32_t>(ebp1) + 0xfffffef8, 0x100bc44, v22, v20, v19, reinterpret_cast<int32_t>(ebp1) + 0xfffffdf4, reinterpret_cast<int32_t>(ebp1) + 0xfffffdf4));
            eax30 = reinterpret_cast<void**>(g1001050(64, reinterpret_cast<int32_t>(eax28) + reinterpret_cast<int32_t>(eax29) + 80, reinterpret_cast<int32_t>(ebp1) + 0xfffffef8, 0x100bc44, v22, v20, v19, reinterpret_cast<int32_t>(ebp1) + 0xfffffdf4, reinterpret_cast<int32_t>(ebp1) + 0xfffffdf4));
            if (eax30) {
                ecx31 = reinterpret_cast<void**>(0);
                *reinterpret_cast<unsigned char*>(&ecx31) = static_cast<unsigned char>(reinterpret_cast<uint1_t>(v8 == 0));
                eax32 = reinterpret_cast<int32_t>("rundll32.exe %sadvpack.dll,DelNodeRunDLL32 \"%s\"");
                g100b330 = ecx31;
                if (!v8) {
                    eax32 = reinterpret_cast<int32_t>("%s /D:%s");
                }
                g10011a4(eax30, eax32, reinterpret_cast<int32_t>(ebp1) - 0x108, 0x100bc44, 64, reinterpret_cast<int32_t>(eax28) + reinterpret_cast<int32_t>(eax29) + 80, reinterpret_cast<int32_t>(ebp1) + 0xfffffef8, 0x100bc44, v22, v20, v19, reinterpret_cast<int32_t>(ebp1) + 0xfffffdf4, reinterpret_cast<int32_t>(ebp1) + 0xfffffdf4);
                eax33 = reinterpret_cast<int32_t>(esi27(eax30, 64, reinterpret_cast<int32_t>(eax28) + reinterpret_cast<int32_t>(eax29) + 80, reinterpret_cast<int32_t>(ebp1) + 0xfffffef8, 0x100bc44, v22, v20, v19, reinterpret_cast<int32_t>(ebp1) + 0xfffffdf4, reinterpret_cast<int32_t>(ebp1) + 0xfffffdf4));
                g1001028(v34, 0x100b2e0, 0, 1, eax30, eax33 + 1, eax30, 64, reinterpret_cast<int32_t>(eax28) + reinterpret_cast<int32_t>(eax29) + 80, reinterpret_cast<int32_t>(ebp1) + 0xfffffef8, 0x100bc44, v22, v20, v19, reinterpret_cast<int32_t>(ebp1) + 0xfffffdf4, reinterpret_cast<int32_t>(ebp1) + 0xfffffdf4);
                g100101c(v35, v34, 0x100b2e0, 0, 1, eax30, eax33 + 1, eax30, 64, reinterpret_cast<int32_t>(eax28) + reinterpret_cast<int32_t>(eax29) + 80, reinterpret_cast<int32_t>(ebp1) + 0xfffffef8, 0x100bc44, v22, v20, v19, reinterpret_cast<int32_t>(ebp1) + 0xfffffdf4, reinterpret_cast<int32_t>(ebp1) + 0xfffffdf4);
                g100104c(eax30, v35, v34, 0x100b2e0, 0, 1, eax30, eax33 + 1, eax30, 64, reinterpret_cast<int32_t>(eax28) + reinterpret_cast<int32_t>(eax29) + 80, reinterpret_cast<int32_t>(ebp1) + 0xfffffef8, 0x100bc44, v22, v20, v19, reinterpret_cast<int32_t>(ebp1) + 0xfffffdf4, reinterpret_cast<int32_t>(ebp1) + 0xfffffdf4);
            } else {
                fun_1003ebe(ecx6, 0, 0x4b5, 0, 0, 16, 0, 64, reinterpret_cast<int32_t>(eax28) + reinterpret_cast<int32_t>(eax29) + 80, reinterpret_cast<int32_t>(ebp1) + 0xfffffef8, 0x100bc44, v22, v20, v19, reinterpret_cast<int32_t>(ebp1) + 0xfffffdf4, reinterpret_cast<int32_t>(ebp1) + 0xfffffdf4, 0x104, v17, 0x100b2e0, 0, 0, 0, ecx6, 0, 0x4b5, 0, 0, 16, 0, 64, reinterpret_cast<int32_t>(eax28) + reinterpret_cast<int32_t>(eax29) + 80, reinterpret_cast<int32_t>(ebp1) + 0xfffffef8, 0x100bc44, v22, v20, v19, reinterpret_cast<int32_t>(ebp1) + 0xfffffdf4, reinterpret_cast<int32_t>(ebp1) + 0xfffffdf4, 0x104, v17, 0x100b2e0, 0, 0, 0);
                goto addr_0x1001c70_28;
            }
        }
    } else {
        eax36 = reinterpret_cast<int32_t>(ebx16(reinterpret_cast<int32_t>(ebp1) + 0xfffffef8, 0x104, v22, v20, 0x1001288, reinterpret_cast<int32_t>(ebp1) + 0xfffffdf4, reinterpret_cast<int32_t>(ebp1) + 0xfffffdf4));
        if (eax36) {
            fun_10066cf(reinterpret_cast<int32_t>(ebp1) + 0xfffffef8, 0x104, 0x1001271, reinterpret_cast<int32_t>(ebp1) + 0xfffffef8, 0x104, v22, v20, 0x1001288, reinterpret_cast<int32_t>(ebp1) + 0xfffffdf4, reinterpret_cast<int32_t>(ebp1) + 0xfffffdf4, 0x104, v17, 0x100b2e0, 0, 0, 0, reinterpret_cast<int32_t>(ebp1) + 0xfffffef8, 0x104, 0x1001271, reinterpret_cast<int32_t>(ebp1) + 0xfffffef8, 0x104, v22, v20, 0x1001288, reinterpret_cast<int32_t>(ebp1) + 0xfffffdf4, reinterpret_cast<int32_t>(ebp1) + 0xfffffdf4, 0x104, v17, 0x100b2e0, 0, 0, 0);
            goto addr_0x1001c32_29;
        }
    }
    addr_0x1001ce2_36:
    goto addr_0x1001ce4_20;
    addr_0x1001b78_25:
    g100101c();
    g100b2e0 = 0;
    goto addr_0x1001ce2_36;
}

int32_t g100110c = 0x7c801d4f;

int16_t fun_1003ccc(void** a1) {
    void** eax2;
    void** esi3;
    void** v4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    int32_t eax14;
    void** eax15;

    eax2 = g100b2d0;
    g1001088(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8, 0x100bc44, esi3);
    fun_10066cf(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8, 0x104, a1, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8, 0x100bc44, esi3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13);
    eax14 = reinterpret_cast<int32_t>(g1001080(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0x108, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8, 0x100bc44, esi3));
    if (eax14 == -1 || *reinterpret_cast<unsigned char*>(&eax14) & 16) {
        g1001184();
    } else {
        g100110c(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0x108, 0);
    }
    eax15 = fun_10064de(eax2, eax2);
    return *reinterpret_cast<int16_t*>(&eax15);
}

void** fun_1001cf4() {
    void* ebp1;
    void** eax2;
    int1_t zf3;
    void** v4;
    void* v5;
    int32_t eax6;
    void** eax7;
    void** v8;
    void** esi9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    int32_t eax14;
    void** v15;
    void** edi16;
    int32_t ecx17;
    int32_t eax18;

    ebp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax2 = g100b2d0;
    zf3 = g100b2e0 == 0;
    v4 = eax2;
    if (zf3 || (v5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp1) - 0x344), eax6 = reinterpret_cast<int32_t>(g1001024(0x80000002, 0x100b0cc, 0, 0x2001f, v5)), !!eax6)) {
        addr_0x1001e03_2:
        eax7 = fun_10064de(v4, v4);
        return eax7;
    } else {
        v8 = esi9;
        v10 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp1) + 0xfffffcb8);
        v11 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp1) + 0xfffffcc0);
        v12 = v13;
        eax14 = reinterpret_cast<int32_t>(g100102c(v12, 0x100b2e0, 0, 0, v11, v10, v8, 0x80000002, 0x100b0cc, 0, 0x2001f, v5));
        if (eax14) {
            addr_0x1001df6_4:
            g100101c();
            goto addr_0x1001e03_2;
        } else {
            v15 = edi16;
            ecx17 = 64;
            while (ecx17) {
                --ecx17;
            }
            eax18 = reinterpret_cast<int32_t>(g1001064(reinterpret_cast<int32_t>(ebp1) + 0xfffffef8, 0x104, v15, v12, 0x100b2e0, 0, 0, v11, v10, v8, 0x80000002, 0x100b0cc, 0, 0x2001f, v5));
            if (eax18) 
                goto addr_0x1001d9c_15;
        }
    }
    addr_0x1001dae_16:
    g10011a4(reinterpret_cast<int32_t>(ebp1) - 0x340, "rundll32.exe %sadvpack.dll,DelNodeRunDLL32 \"%s\"", reinterpret_cast<int32_t>(ebp1) - 0x108, 0x100bc44, reinterpret_cast<int32_t>(ebp1) + 0xfffffef8, 0x104, v15, v12, 0x100b2e0, 0, 0, v11, v10, v8, 0x80000002, 0x100b0cc, 0, 0x2001f, v5);
    g100105c(reinterpret_cast<int32_t>(ebp1) - 0x340, reinterpret_cast<int32_t>(ebp1) + 0xfffffef8, 0x104, v15, v12, 0x100b2e0, 0, 0, v11, v10, v8, 0x80000002, 0x100b0cc, 0, 0x2001f, v5);
    g1001028();
    goto addr_0x1001df6_4;
    addr_0x1001d9c_15:
    fun_10066cf(reinterpret_cast<int32_t>(ebp1) + 0xfffffef8, 0x104, 0x1001271, reinterpret_cast<int32_t>(ebp1) + 0xfffffef8, 0x104, v15, v12, 0x100b2e0, 0, 0, v11, v10, v8, 0x80000002, 0x100b0cc, 0, reinterpret_cast<int32_t>(ebp1) + 0xfffffef8, 0x104, 0x1001271, reinterpret_cast<int32_t>(ebp1) + 0xfffffef8, 0x104, v15, v12, 0x100b2e0, 0, 0, v11, v10, v8, 0x80000002, 0x100b0cc, 0);
    goto addr_0x1001dae_16;
}

int32_t g1001134 = 0x7c812ac6;

int16_t fun_10044bd(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

int16_t fun_10052d4(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15) {
    void** eax16;
    void** eax17;
    void** v18;
    void** ecx19;
    int1_t zf20;
    uint16_t v21;
    void** edi22;
    void** esi23;
    void** ebx24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    int1_t zf30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** eax36;
    void** eax37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** v47;
    void** v48;
    void** v49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;

    eax16 = g100b2d0;
    eax17 = a1;
    if (!a2) {
        v18 = eax17;
        g1001088(0x100bc44, v18);
    } else {
        ecx19 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8);
        *reinterpret_cast<int16_t*>(&eax17) = fun_100342e(eax17, ecx19, 0x104);
        if (!eax17) {
            addr_0x10053e4_4:
            goto addr_0x10053e6_5;
        } else {
            eax17 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8);
            v18 = eax17;
            g1001088(0x100bc44, v18);
            zf20 = (*reinterpret_cast<unsigned char*>(&g100c494) & 32) == 0;
            if (zf20) 
                goto addr_0x1005371_7;
            g1001134(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffed4, 0x100bc44, v18);
            eax17 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(v21))));
            if (!eax17) 
                goto addr_0x1005365_9; else 
                goto addr_0x1005347_10;
        }
    }
    addr_0x100538c_11:
    *reinterpret_cast<int16_t*>(&eax17) = fun_10044bd(ecx19, 0x100bc44, 0x100bc44, v18, edi22, esi23, ebx24, v25);
    if (eax17) {
        addr_0x10053ab_12:
        *reinterpret_cast<int16_t*>(&eax17) = fun_100456a(ecx19, 0x100bc44, a3, 0, 0x100bc44, v18, edi22, esi23, ebx24, v26, v27, v28, v29);
        if (!eax17) {
            zf30 = g100c880 == 0;
            if (!zf30) {
                g100c880 = reinterpret_cast<void**>(0);
                g10010b0(0x100bc44, 0x100bc44, v18);
                goto addr_0x10053e4_4;
            }
        } else {
            g100ba5c = reinterpret_cast<void**>(0);
        }
    } else {
        eax17 = reinterpret_cast<void**>(g100107c(0x100bc44, 0, 0x100bc44, v18));
        if (!eax17) {
            eax36 = fun_1003aa1(0x100bc44, 0, 0x100bc44, v18, edi22, esi23, ebx24, v31, v32, v33, v34, v35);
            g100ba5c = eax36;
            goto addr_0x10053e4_4;
        } else {
            g100c880 = reinterpret_cast<void**>(1);
            goto addr_0x10053ab_12;
        }
    }
    addr_0x10053e6_5:
    eax37 = fun_10064de(eax16);
    return *reinterpret_cast<int16_t*>(&eax37);
    addr_0x1005365_9:
    v38 = reinterpret_cast<void**>(0x1001408);
    addr_0x100536a_19:
    fun_10066cf(0x100bc44, 0x104, v38, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffed4, 0x100bc44, v18, edi22, esi23, ebx24, v39, v40, v41, v42, v43, v44, v45);
    goto addr_0x1005371_7;
    addr_0x1005347_10:
    --eax17;
    if (!eax17) {
        v38 = reinterpret_cast<void**>(0x1001410);
        goto addr_0x100536a_19;
    } else {
        --eax17;
        if (!eax17) {
            v38 = reinterpret_cast<void**>(0x1001418);
            goto addr_0x100536a_19;
        } else {
            --eax17;
            if (eax17) {
                addr_0x1005371_7:
                fun_10066cf(0x100bc44, 0x104, 0x1001271, 0x100bc44, v18, edi22, esi23, ebx24, v46, v47, v48, v49, v50, v51, v52, v53);
                goto addr_0x100538c_11;
            } else {
                v38 = reinterpret_cast<void**>(0x1001420);
                goto addr_0x100536a_19;
            }
        }
    }
}

int32_t g1001078 = 0x7c82293b;

int16_t fun_1002025(void** ecx, void* a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12) {
    void** eax13;
    void** eax14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** eax28;

    eax13 = g100b2d0;
    eax14 = reinterpret_cast<void**>(g1001078(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8, 0x104));
    if (!eax14) {
        fun_1003ebe(ecx, eax14, 0x4f0, eax14, eax14, 16, eax14, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8, 0x104, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27);
    }
    eax28 = fun_10064de(eax13, eax13);
    return *reinterpret_cast<int16_t*>(&eax28);
}

int32_t g1001188 = 0x7c827373;

int32_t g100118c = 0x7c8097f4;

int16_t fun_10069ea(signed char* a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    int1_t zf10;
    int32_t eax11;
    int32_t eax12;

    zf10 = *a1 == 0;
    if (zf10 || (eax11 = reinterpret_cast<int32_t>(g1001188(a1, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 8, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 12, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 16, 0)), !eax11)) {
        eax12 = 0;
    } else {
        *reinterpret_cast<int16_t*>(&eax12) = reinterpret_cast<int16_t>(g100118c(0, 0, 0x400, a1, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 8, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 12, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 16, 0));
    }
    return *reinterpret_cast<int16_t*>(&eax12);
}

int32_t fun_10043ec(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void** edi9;
    void** esi10;
    void** ebx11;
    void** ebp12;
    void** eax13;
    void** eax14;
    void** ebx15;
    int32_t eax16;
    void** eax17;
    int32_t eax18;

    *reinterpret_cast<int16_t*>(&eax13) = fun_1002e55("UPROMPT", 0, 0, edi9, esi10, ebx11, ecx, ebp12, __return_address());
    eax14 = reinterpret_cast<void**>(g1001050());
    ebx15 = eax14;
    if (ebx15) {
        *reinterpret_cast<int16_t*>(&eax14) = fun_1002e55("UPROMPT", ebx15, eax13, 64, eax13 + 1, edi9, esi10, ebx11, eax13);
        if (eax14) {
            eax16 = reinterpret_cast<int32_t>(g10010c4(ebx15, 0x10013d4));
            if (eax16) {
                *reinterpret_cast<int16_t*>(&eax16) = fun_1003ebe(ecx, 0, 0x3e9, ebx15, 0, 32, 4, ebx15, 0x10013d4, 64, eax13 + 1, edi9, esi10, ebx11, eax13, ebp12, __return_address(), a2, a3, a4, a5, a6);
                g100104c(ebx15, ebx15, 0x10013d4);
                if (eax16 != 6) {
                    g100ba5c = reinterpret_cast<void**>(0x800704c7);
                } else {
                    g100ba5c = reinterpret_cast<void**>(0);
                    goto addr_0x100447b_7;
                }
            } else {
                g100104c(ebx15, ebx15, 0x10013d4);
                goto addr_0x100447b_7;
            }
        } else {
            fun_1003ebe(ecx, 0, 0x4b1, 0, 0, 16, 0, 64, eax13 + 1, edi9, esi10, ebx11, eax13, ebp12, __return_address(), a2, a3, a4, a5, a6, a7, a8);
            g100104c(ebx15);
            g100ba5c = reinterpret_cast<void**>(0x80070714);
        }
    } else {
        fun_1003ebe(ecx, 0, 0x4b5, 0, 0, 16, 0, 64, eax13 + 1, edi9, esi10, ebx11, eax13, ebp12, __return_address(), a2, a3, a4, a5, a6, a7, a8);
        eax17 = fun_1003aa1(64, eax13 + 1, edi9, esi10, ebx11, eax13, ebp12, __return_address(), a2, a3, a4, a5);
        g100ba5c = eax17;
    }
    eax18 = 0;
    addr_0x10044b3_12:
    return eax18;
    addr_0x100447b_7:
    eax18 = 1;
    goto addr_0x10044b3_12;
}

void** g100c49c;

int16_t fun_1003d57(void** a1, int32_t a2, int32_t a3);

int32_t fun_1004bc8(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    void** edi11;
    void** esi12;
    void** ebx13;
    void** eax14;
    void** eax15;
    void** v16;
    void** eax17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** eax22;

    *reinterpret_cast<int16_t*>(&eax14) = fun_1002e55("LICENSE", 0, 0, edi11, esi12, ebx13, __return_address(), a2, a3);
    eax15 = reinterpret_cast<void**>(g1001050());
    g100c49c = eax15;
    if (eax15) {
        *reinterpret_cast<int16_t*>(&eax15) = fun_1002e55("LICENSE", eax15, eax14, 64, eax14 + 1, edi11, esi12, ebx13, __return_address());
        if (eax15) {
            v16 = g100c49c;
            eax17 = reinterpret_cast<void**>(g10010c4(v16, 0x10013d4));
            if (!eax17) {
                v18 = g100c49c;
                g100104c(v18, v16, 0x10013d4);
                goto addr_0x1004c9c_5;
            }
            v19 = g100c4a4;
            *reinterpret_cast<int16_t*>(&eax17) = fun_1004819(ecx, v19, 0x7d1, 0, fun_1003d57, 0, 0, v16, 0x10013d4, 64, eax14 + 1, edi11, esi12, ebx13, __return_address());
            v20 = g100c49c;
            g100104c(v20, v16, 0x10013d4);
            if (eax17) {
                addr_0x1004c9c_5:
                g100ba5c = reinterpret_cast<void**>(0);
            } else {
                g100ba5c = reinterpret_cast<void**>(0x800704c7);
                goto addr_0x1004c8c_8;
            }
        } else {
            fun_1003ebe(ecx, 0, 0x4b1, 0, 0, 16, 0, 64, eax14 + 1, edi11, esi12, ebx13, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10);
            v21 = g100c49c;
            g100104c(v21);
            g100ba5c = reinterpret_cast<void**>(0x80070714);
            goto addr_0x1004c8c_8;
        }
    } else {
        fun_1003ebe(ecx, 0, 0x4b5, 0, 0, 16, 0, 64, eax14 + 1, edi11, esi12, ebx13, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10);
        eax22 = fun_1003aa1(64, eax14 + 1, edi11, esi12, ebx13, __return_address(), a2, a3, a4, a5, a6, a7);
        g100ba5c = eax22;
        goto addr_0x1004c8c_8;
    }
    addr_0x1004ca5_11:
    goto esi12;
    addr_0x1004c8c_8:
    goto addr_0x1004ca5_11;
}

int32_t g100cbe0;

int32_t g100be58;

int16_t fun_1003ac7(int32_t a1);

int16_t fun_1003bb6(int32_t a1);

int32_t fun_100435e(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14) {
    void** esi15;
    int32_t eax16;
    void** v17;

    fun_1002e55("FILESIZES", 0x100cbc0, 36, esi15, __return_address(), a2, a3, a4, a5);
    if (0) {
        eax16 = g100cbe0;
        g100be58 = eax16;
        if (eax16) {
            fun_1002e55("PACKINSTSPACE", 0x100c498, 4, esi15, __return_address(), a2, a3, a4, a5);
            *reinterpret_cast<int16_t*>(&eax16) = fun_1003ac7(fun_1003bb6);
            if (eax16) {
                return 1;
            } else {
                fun_1003ebe(ecx, 0, 0x4c6, 0, 0, 16, 0, esi15, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
            }
        } else {
            v17 = reinterpret_cast<void**>(0x4c6);
            goto addr_0x1004383_7;
        }
    } else {
        v17 = reinterpret_cast<void**>(0x4b1);
        goto addr_0x1004383_7;
    }
    addr_0x10043de_9:
    return 0;
    addr_0x1004383_7:
    fun_1003ebe(ecx, 0, v17, 0, 0, 16, 0, esi15, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
    g100ba5c = reinterpret_cast<void**>(0x80070714);
    goto addr_0x10043de_9;
}

void** g100c490;

signed char g100c99e;

void** g100c884;

int16_t fun_1005670(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

int32_t g1001130 = 0x7c8221cf;

int32_t g1001150 = 0x7c822cfb;

int16_t fun_1001ff9(void* a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9);

signed char g100c99f;

void** fun_1005f21(void** ecx) {
    void* ebp2;
    void** eax3;
    void** v4;
    void** ebx5;
    void** v6;
    void** esi7;
    void** v8;
    void** edi9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** eax15;
    void** eax16;
    void** v17;
    void** v18;
    int32_t eax19;
    void** v20;
    signed char al21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** v47;
    void** v48;
    void** eax49;
    int1_t zf50;
    int1_t zf51;
    void** v52;
    int32_t eax53;
    void** v54;
    void** v55;
    void** v56;
    void** v57;
    int32_t edi58;
    void** v59;
    void** eax60;
    signed char v61;
    int32_t eax62;
    int32_t eax63;
    signed char* eax64;
    void** eax65;
    void* eax66;
    void** eax67;
    void* eax68;
    void* eax69;
    void** eax70;
    void** eax71;
    void** eax72;
    int1_t zf73;
    void** eax74;
    void** v75;
    void** v76;
    void** v77;
    void** v78;
    void** v79;
    void** v80;
    void** v81;
    void** v82;
    void** v83;
    void** v84;
    void** v85;

    ebp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax3 = g100b2d0;
    v4 = ebx5;
    v6 = esi7;
    v8 = edi9;
    v10 = eax3;
    *reinterpret_cast<int16_t*>(&eax3) = fun_1002e55("RUNPROGRAM", 0, 0, v8, v6, v4, v11, v12, v13);
    v14 = eax3 + 1;
    eax15 = reinterpret_cast<void**>(g1001050());
    eax16 = reinterpret_cast<void**>(0);
    if (eax15) {
        *reinterpret_cast<int16_t*>(&eax16) = fun_1002e55("RUNPROGRAM", eax15, eax3, 64, v14, v8, v6, v4, v17);
        if (eax16) {
            v18 = eax15;
            eax19 = reinterpret_cast<int32_t>(g10010c4(v18, 0x10013d4));
            if (!eax19) {
                g100c490 = reinterpret_cast<void**>(1);
            }
            v20 = eax15;
            g100104c(v20, v18, 0x10013d4);
            al21 = g100c99e;
            if (al21) 
                goto addr_0x1005fd5_6;
        } else {
            fun_1003ebe(ecx, eax16, 0x4b1, eax16, eax16, 16, eax16, 64, v14, v8, v6, v4, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31);
            g100104c(eax15);
            g100ba5c = reinterpret_cast<void**>(0x80070714);
            goto addr_0x1005f76_8;
        }
    } else {
        fun_1003ebe(ecx, 0, 0x4b5, 0, 0, 16, 0, 64, v14, v8, v6, v4, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41);
        eax49 = fun_1003aa1(64, v14, v8, v6, v4, v42, v43, v44, v45, v46, v47, v48);
        g100ba5c = eax49;
        goto addr_0x1005f76_8;
    }
    zf50 = g100c884 == 0;
    if (!zf50 || (zf51 = g100c490 == 0, !zf51)) {
        v52 = g100c4a4;
        fun_1004819(ecx, v52, 0x7d2, 0, fun_1005670, 0, 0, v20, v18, 0x10013d4, 64, v14, v8, v6, v4);
    } else {
        eax53 = reinterpret_cast<int32_t>(g1001130(0x104, 0x100bc44, v20, v18, 0x10013d4));
        if (!eax53 || (*reinterpret_cast<int16_t*>(&eax53) = fun_10052d4(0x100bc44, 1, 3, 0x104, 0x100bc44, v20, v18, 0x10013d4, 64, v14, v8, v6, v4, v54, v55), !eax53) && ((*reinterpret_cast<int16_t*>(&eax53) = fun_1002025(ecx, 0x100bc44, 0x104, 0x100bc44, v20, v18, 0x10013d4, 64, v14, v8, v6, v4), !!eax53) || (*reinterpret_cast<int16_t*>(&eax53) = fun_10052d4(0x100bc44, 1, 1, 0x104, 0x100bc44, v20, v18, 0x10013d4, 64, v14, v8, v6, v4, v56, v57), eax53 == 0))) {
            edi58 = g1001088;
            do {
                v59 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp2) + 0xfffffef8);
                edi58(v59, 0x10014a4, 0x104, 0x100bc44, v20, v18, 0x10013d4);
                while (eax60 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp2) + 0xfffffef8), v61 <= 90) {
                    eax62 = reinterpret_cast<int32_t>(g1001150(eax60, v59, 0x10014a4, 0x104, 0x100bc44, v20, v18, 0x10013d4));
                    if ((eax62 != 6 && eax62 != 3 || (eax63 = reinterpret_cast<int32_t>(g1001080(reinterpret_cast<int32_t>(ebp2) - 0x108, eax60, v59, 0x10014a4, 0x104, 0x100bc44, v20, v18, 0x10013d4)), eax63 == -1)) && (eax62 != 2 || (v61 == 65 || (v61 == 66 || ((eax64 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp2) + 0xfffffef8), *reinterpret_cast<int16_t*>(&eax64) = fun_10069ea(eax64, eax60, v59, 0x10014a4, 0x104, 0x100bc44, v20, v18, 0x10013d4), eax64 == 0) || reinterpret_cast<uint32_t>(eax64) < 0x19000)))) || (eax65 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp2) + 0xfffffef8), *reinterpret_cast<int16_t*>(&eax65) = fun_100456a(ecx, eax65, 3, 0, eax60, v59, 0x10014a4, 0x104, 0x100bc44, v20, v18, 0x10013d4, 64), !eax65) && ((eax66 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp2) - 0x108), *reinterpret_cast<int16_t*>(&eax66) = fun_1002025(ecx, eax66, eax60, v59, 0x10014a4, 0x104, 0x100bc44, v20, v18, 0x10013d4, 64, v14), !!eax66) || (eax67 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp2) + 0xfffffef8), *reinterpret_cast<int16_t*>(&eax67) = fun_100456a(ecx, eax67, 1, 0, eax60, v59, 0x10014a4, 0x104, 0x100bc44, v20, v18, 0x10013d4, 64), eax67 == 0))) {
                        v61 = reinterpret_cast<signed char>(v61 + 1);
                    } else {
                        eax68 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp2) - 0x108);
                        *reinterpret_cast<int16_t*>(&eax68) = fun_1002025(ecx, eax68, eax60, v59, 0x10014a4, 0x104, 0x100bc44, v20, v18, 0x10013d4, 64, v14);
                        if (eax68) {
                            g1001078(reinterpret_cast<int32_t>(ebp2) - 0x108, 0x104, eax60, v59, 0x10014a4, 0x104, 0x100bc44, v20, v18, 0x10013d4);
                        }
                        fun_10066cf(reinterpret_cast<int32_t>(ebp2) + 0xfffffef8, 0x104, 0x1001494, eax60, v59, 0x10014a4, 0x104, 0x100bc44, v20, v18, 0x10013d4, 64, v14, v8, v6, v4);
                        eax69 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp2) - 0x108);
                        *reinterpret_cast<int16_t*>(&eax69) = fun_1001ff9(eax69, eax60, v59, 0x10014a4, 0x104, 0x100bc44, v20, v18, 0x10013d4);
                        if (eax69) {
                            g10010c0(reinterpret_cast<int32_t>(ebp2) + 0xfffffef8, 2, eax60, v59, 0x10014a4, 0x104, 0x100bc44, v20, v18, 0x10013d4);
                            eax70 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp2) + 0xfffffef8);
                            edi58(0x100bc44, eax70, reinterpret_cast<int32_t>(ebp2) + 0xfffffef8, 2, eax60, v59, 0x10014a4, 0x104, 0x100bc44, v20, v18, 0x10013d4);
                            *reinterpret_cast<int16_t*>(&eax70) = fun_10052d4(0x100bc44, 1, 0, 0x100bc44, eax70, reinterpret_cast<int32_t>(ebp2) + 0xfffffef8, 2, eax60, v59, 0x10014a4, 0x104, 0x100bc44, v20, v18, 0x10013d4);
                            if (eax70) 
                                goto addr_0x10061d0_22;
                        } else {
                            v61 = reinterpret_cast<signed char>(v61 + 1);
                        }
                    }
                }
                g1001078(eax60, 0x104, v59, 0x10014a4, 0x104, 0x100bc44, v20, v18, 0x10013d4);
                eax71 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp2) + 0xfffffef8);
                *reinterpret_cast<int16_t*>(&eax71) = fun_100456a(ecx, eax71, 3, 4, eax60, 0x104, v59, 0x10014a4, 0x104, 0x100bc44, v20, v18, 0x10013d4, ecx, eax71, 3, 4, eax60, 0x104, v59, 0x10014a4, 0x104, 0x100bc44, v20, v18, 0x10013d4);
            } while (eax71);
            goto addr_0x10061cb_25;
        } else {
            addr_0x1006062_26:
        }
    }
    addr_0x10061f3_27:
    eax72 = fun_10064de(v10, v10);
    return eax72;
    addr_0x10061d0_22:
    goto addr_0x10061f3_27;
    addr_0x10061cb_25:
    addr_0x1005f76_8:
    goto addr_0x10061f3_27;
    addr_0x1005fd5_6:
    if (al21 != 92 || (zf73 = g100c99f == al21, !zf73)) {
        eax74 = reinterpret_cast<void**>(1);
    } else {
        eax74 = reinterpret_cast<void**>(0);
    }
    *reinterpret_cast<int16_t*>(&eax74) = fun_10052d4(0x100c99e, 0, eax74, v20, v18, 0x10013d4, 64, v14, v8, v6, v4, v75, v76, v77, v78);
    if (eax74) 
        goto addr_0x1006062_26;
    fun_1003ebe(ecx, 0, 0x4be, 0, 0, 16, 0, v20, v18, 0x10013d4, 64, v14, v8, v6, v4, v79, v80, v81, v82, v83, v84, v85);
    goto addr_0x1005f76_8;
}

void** fun_10047b3(void** ecx) {
    void** eax2;
    void** eax3;
    void** v4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** eax34;
    void** eax35;

    eax2 = g100b2d0;
    eax3 = reinterpret_cast<void**>(g1001078(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8, 0x104));
    if (eax3) {
        fun_100456a(ecx, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8, 2, 2, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8, 0x104, v4, v5, v6, v7, v8, v9, v10);
    } else {
        fun_1003ebe(ecx, eax3, 0x4f0, eax3, eax3, 16, eax3, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8, 0x104, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23);
        eax34 = fun_1003aa1(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8, 0x104, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33);
        g100ba5c = eax34;
    }
    eax35 = fun_10064de(eax2, eax2);
    return eax35;
}

void** fun_1005190(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12);

int16_t fun_100589b(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12);

int16_t fun_1003bf2(void** a1);

int32_t fun_1005a36(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    void** v11;
    void** v12;
    void** ebx13;
    uint32_t eax14;
    int1_t zf15;
    int1_t zf16;
    void** eax17;
    void** eax18;
    void* eax19;
    void** v20;

    v11 = reinterpret_cast<void**>(__return_address());
    v12 = ebx13;
    eax14 = 0;
    do {
        *reinterpret_cast<int32_t*>(eax14 + 0x100c4c0) = 1;
        eax14 = eax14 + 24;
    } while (eax14 < 0x3c0);
    zf15 = (*reinterpret_cast<unsigned char*>(&g100c898) & 1) == 0;
    if (!zf15 || (zf16 = (*reinterpret_cast<unsigned char*>(&g100c494) & 1) == 0, !zf16)) {
        eax17 = fun_1005190(ecx, v12, v11, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    } else {
        eax18 = g100b2c4;
        eax19 = reinterpret_cast<void*>(-reinterpret_cast<unsigned char>(eax18));
        eax17 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax19) - (reinterpret_cast<uint32_t>(eax19) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(eax19) < reinterpret_cast<uint32_t>(eax19) + reinterpret_cast<uint1_t>(!!eax18))) + 0x7d5);
        v20 = g100c4a4;
        *reinterpret_cast<int16_t*>(&eax17) = fun_1004819(ecx, v20, eax17, 0, fun_100589b, 0, 0, v12, v11, a2, a3, a4, a5, a6, a7);
    }
    if (eax17) {
        *reinterpret_cast<int16_t*>(&eax17) = fun_1003ac7(fun_1003bf2);
        if (eax17) {
            g100ba5c = reinterpret_cast<void**>(0);
            return 1;
        }
    } else {
        g100ba5c = reinterpret_cast<void**>(0x8007042b);
    }
    return 0;
}

int16_t fun_1001e53();

int16_t fun_1001f37(uint32_t ecx, int32_t a2);

int16_t fun_1001f93(uint16_t a1, void** a2) {
    uint32_t ecx3;
    int32_t eax4;

    ecx3 = static_cast<uint32_t>(a1);
    eax4 = 0;
    if (!ecx3) {
        *reinterpret_cast<int16_t*>(&eax4) = fun_1001e53();
    } else {
        if (ecx3 == 1) {
            *reinterpret_cast<int16_t*>(&eax4) = fun_1001f37(ecx3, "System\\CurrentControlSet\\Control\\Session Manager\\FileRenameOperations");
        } else {
            if (reinterpret_cast<int32_t>(ecx3) > reinterpret_cast<int32_t>(1) && reinterpret_cast<int32_t>(ecx3) <= reinterpret_cast<int32_t>(3)) {
                *reinterpret_cast<int16_t*>(&eax4) = fun_1001edf(ecx3, "System\\CurrentControlSet\\Control\\Session Manager", "PendingFileRenameOperations");
            }
        }
    }
    return *reinterpret_cast<int16_t*>(&eax4);
}

void** g100c888;

signed char g100caa2;

int16_t fun_1004cae(void** a1, void** a2);

void** g100c890;

uint32_t g100cba8;

void** fun_1005abc(void** ecx, void** a2) {
    void* ebp3;
    void** eax4;
    void** v5;
    void** ebx6;
    int1_t zf7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** esi17;
    int32_t esi18;
    void** v19;
    void** v20;
    void** edi21;
    int1_t zf22;
    void** ecx23;
    void** eax24;
    void** v25;
    void** v26;
    void** v27;
    int32_t v28;
    int32_t v29;
    void** eax30;
    void** v31;
    int1_t zf32;
    int32_t eax33;
    int16_t ax34;
    int32_t v35;
    void** eax36;
    void** v37;
    void** v38;
    int32_t eax39;
    void** eax40;
    int1_t zf41;
    int1_t zf42;
    int1_t zf43;
    int1_t zf44;
    void** eax45;
    void** v46;
    void** eax47;
    int1_t zf48;
    unsigned char cl49;
    unsigned char cl50;
    void** eax51;
    void** eax52;
    void** v53;
    void** v54;
    int32_t v55;
    void** v56;
    void** v57;
    void** v58;
    void** v59;
    void** v60;
    void** v61;
    void** v62;
    void** v63;
    void** v64;
    void** v65;
    void** v66;
    void** v67;
    void** v68;
    void** v69;
    void** eax70;
    int32_t v71;
    int1_t zf72;
    void** v73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;
    void** v78;
    void** v79;
    void** v80;
    void** v81;
    int32_t v82;
    int32_t v83;
    int32_t v84;
    int32_t v85;
    int32_t v86;
    int32_t v87;
    int32_t v88;
    int32_t v89;
    int32_t v90;
    int32_t v91;
    void** v92;
    void** v93;
    void** v94;
    void** v95;
    void** v96;
    void** v97;
    void** v98;
    void** v99;
    void** v100;
    int32_t v101;
    int32_t v102;
    int32_t v103;
    int32_t v104;
    int32_t v105;
    int32_t v106;
    int32_t v107;
    int32_t v108;
    int32_t v109;
    void** v110;
    void** v111;
    void** v112;
    void** v113;
    void** v114;
    void** v115;
    void** v116;
    int32_t v117;
    int32_t v118;
    int32_t v119;
    int32_t v120;
    int32_t v121;
    int32_t v122;
    void** eax123;
    void** v124;
    void** v125;
    void** v126;
    void** v127;
    void** v128;
    void** v129;
    void** v130;
    void** v131;
    int32_t v132;
    int32_t v133;
    int32_t v134;
    int32_t v135;
    int32_t v136;
    int32_t v137;
    int32_t v138;
    int32_t v139;
    void** v140;
    void** v141;
    void** v142;
    void** v143;
    void** v144;
    void** v145;
    void** v146;
    void** v147;
    void** v148;
    int32_t v149;
    int32_t v150;
    int32_t v151;
    int32_t v152;
    int32_t v153;
    int32_t v154;
    int32_t v155;
    int32_t v156;
    int32_t v157;

    ebp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax4 = g100b2d0;
    v5 = ebx6;
    zf7 = g100c888 == 0;
    v8 = eax4;
    v9 = reinterpret_cast<void**>(0);
    v10 = reinterpret_cast<void**>(0);
    g100ba5c = reinterpret_cast<void**>(0);
    if (!zf7 || (*reinterpret_cast<int16_t*>(&eax4) = fun_1002e55("REBOOT", 0x100c48c, 4, v5, v11, v12, v13, v14, v15), !!eax4) && reinterpret_cast<unsigned char>(eax4) <= reinterpret_cast<unsigned char>(4)) {
        v16 = esi17;
        esi18 = g100104c;
        v19 = reinterpret_cast<void**>(0);
        v20 = edi21;
        do {
            zf22 = g100caa2 == 0;
            ecx23 = reinterpret_cast<void**>(17);
            while (ecx23) {
                --ecx23;
                esi18 = esi18 + 4;
            }
            if (!zf22) {
                g1001088(reinterpret_cast<int32_t>(ebp3) - 0x108, 0x100caa2);
                goto addr_0x1005c90_8;
            }
            eax24 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xfffffee8);
            *reinterpret_cast<int16_t*>(&eax24) = fun_1002e55("SHOWWINDOW", eax24, 4, v20, v16, v5, 68, v25, v26);
            if (!eax24) 
                goto addr_0x1005c5a_10;
            if (reinterpret_cast<unsigned char>(eax24) > reinterpret_cast<unsigned char>(4)) 
                goto addr_0x1005c5a_10;
            if (reinterpret_cast<int1_t>(v27 == 1)) 
                goto addr_0x1005b93_13;
            if (v28 != 2) {
                if (v29 != 3) {
                    addr_0x1005bc8_16:
                    if (v19) {
                        addr_0x1005c90_8:
                        if (reinterpret_cast<int1_t>(v19 == 1)) {
                            eax30 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xfffffef8);
                            *reinterpret_cast<int16_t*>(&eax30) = fun_1002e55("POSTRUNPROGRAM", eax30, 0x104, v20, v16, v5, 68, v31, 68);
                            if (!eax30) 
                                goto addr_0x1005c5a_10;
                            zf32 = g100caa2 == 0;
                            if (!zf32) 
                                goto addr_0x1005e7e_19;
                            eax33 = reinterpret_cast<int32_t>(g10010ac(reinterpret_cast<int32_t>(ebp3) - 0x108, "<None>"));
                            if (!eax33) 
                                goto addr_0x1005e7e_19;
                        }
                    } else {
                        ax34 = g100c898;
                        if (ax34) {
                            if (!(*reinterpret_cast<unsigned char*>(&ax34) & 1)) {
                                if (*reinterpret_cast<unsigned char*>(&ax34) & 2) {
                                    v35 = reinterpret_cast<int32_t>("USRQCMD");
                                }
                            } else {
                                v35 = reinterpret_cast<int32_t>("ADMQCMD");
                            }
                            eax36 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xfffffef8);
                            *reinterpret_cast<int16_t*>(&eax36) = fun_1002e55(v35, eax36, 0x104, v20, v16, v5, 68, v37, v38);
                            if (!eax36) 
                                goto addr_0x1005c5a_10;
                            eax39 = reinterpret_cast<int32_t>(g10010ac(reinterpret_cast<int32_t>(ebp3) - 0x108, "<None>"));
                            if (eax39) {
                                v9 = reinterpret_cast<void**>(1);
                            }
                        }
                        if (!v9) 
                            goto addr_0x1005c40_30;
                    }
                } else {
                    goto addr_0x1005bc2_32;
                }
            } else {
                goto addr_0x1005bc2_32;
            }
            eax40 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xfffffef8);
            *reinterpret_cast<int16_t*>(&eax40) = fun_10026e2(eax40, 0x104, reinterpret_cast<int32_t>(ebp3) + 0xfffffef4, reinterpret_cast<int32_t>(ebp3) + 0xfffffeec);
            if (!eax40) 
                break;
            if (v10 || ((zf41 = g100ba64 == 1, zf41) || (zf42 = g100c880 == 0, zf42))) {
                addr_0x1005d2b_36:
                if (1) 
                    goto addr_0x1005e46_37; else 
                    goto addr_0x1005d37_38;
            } else {
                if (0) {
                    addr_0x1005d37_38:
                    zf43 = g100b2c8 == 0;
                    if (zf43) 
                        goto addr_0x1005e9a_40;
                } else {
                    v10 = reinterpret_cast<void**>(1);
                    eax40 = fun_1001aa7();
                    goto addr_0x1005d2b_36;
                }
            }
            if (1 || (zf44 = (*reinterpret_cast<unsigned char*>(&g100c494) & 4) == 0, zf44)) {
                addr_0x1005e46_37:
                eax45 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xfffffe78);
                *reinterpret_cast<int16_t*>(&eax45) = fun_1004cae(v46, eax45);
                if (!eax45) 
                    goto addr_0x1005f0f_43; else 
                    continue;
            } else {
                *reinterpret_cast<int16_t*>(&eax40) = fun_1003ccc(0x1001298);
                if (!eax40) 
                    goto addr_0x1005ec1_45;
                eax47 = reinterpret_cast<void**>(g10010d0(eax40, 0x100b2b4));
                if (!eax47) 
                    goto addr_0x1005ed7_47;
                zf48 = g100c890 == 0;
                if (!zf48) 
                    goto addr_0x1005dd9_49;
            }
            addr_0x1005de0_50:
            cl49 = *reinterpret_cast<unsigned char*>(&g100c494);
            if (cl49 & 8) {
            }
            if (cl49 & 16) {
            }
            cl50 = *reinterpret_cast<unsigned char*>(&g100cba8);
            if (cl50 & 64) {
            }
            if (reinterpret_cast<signed char>(cl50) < reinterpret_cast<signed char>(0)) {
            }
            eax51 = reinterpret_cast<void**>(eax47(reinterpret_cast<int32_t>(ebp3) - 0x144, eax40, 0x100b2b4));
            g100ba5c = eax51;
            if (reinterpret_cast<signed char>(eax51) < reinterpret_cast<signed char>(0)) 
                goto addr_0x1005f09_59;
            g1001194(eax40, reinterpret_cast<int32_t>(ebp3) - 0x144, eax40, 0x100b2b4);
            continue;
            addr_0x1005dd9_49:
            goto addr_0x1005de0_50;
            addr_0x1005c40_30:
            eax52 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xfffffef8);
            *reinterpret_cast<int16_t*>(&eax52) = fun_1002e55("RUNPROGRAM", eax52, 0x104, v20, v16, v5, 68, v53, v54);
            if (eax52) 
                goto addr_0x1005c90_8; else 
                goto addr_0x1005c5a_10;
            addr_0x1005bc2_32:
            goto addr_0x1005bc8_16;
            addr_0x1005b93_13:
            goto addr_0x1005bc2_32;
            esi18(v55);
            ++v19;
        } while (reinterpret_cast<unsigned char>(v19) < reinterpret_cast<unsigned char>(2));
        goto addr_0x1005e7b_62;
    } else {
        fun_1003ebe(ecx, 0, 0x4b1, 0, 0, 16, 0, v5, v56, v57, v58, v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69);
        g100ba5c = reinterpret_cast<void**>(0x80070714);
        goto addr_0x1005e8f_64;
    }
    addr_0x1005c74_65:
    addr_0x1005e8d_66:
    addr_0x1005e8f_64:
    eax70 = fun_10064de(v8, v8);
    return eax70;
    addr_0x1005f0f_43:
    esi18(v71);
    goto addr_0x1005c74_65;
    addr_0x1005e7b_62:
    addr_0x1005e7e_19:
    zf72 = g100b330 == 0;
    if (!zf72) {
        fun_1001cf4();
    }
    goto addr_0x1005e8d_66;
    addr_0x1005e9a_40:
    fun_1003ebe(ecx23, 0, 0x4c7, 0, 0, 16, 0, v20, v16, v5, 68, v73, 68, v74, v75, v76, v77, v78, v79, v80, v81, 1, ecx23, 0, 0x4c7, 0, 0, 16, 0, v20, v16, v5, 68, v82, 68, v83, v84, v85, v86, v87, v88, v89, v90, 1);
    esi18(v91);
    g100ba5c = reinterpret_cast<void**>(0x8007042b);
    goto addr_0x1005c74_65;
    addr_0x1005ec1_45:
    fun_1003ebe(ecx23, 0, 0x4c8, 0x1001298, 0, 16, 0, v20, v16, v5, 68, v92, 68, v93, v94, v95, v96, v97, v98, v99, v100, 1, ecx23, 0, 0x4c8, 0x1001298, 0, 16, 0, v20, v16, v5, 68, v101, 68, v102, v103, v104, v105, v106, v107, v108, v109, 1);
    addr_0x1005ef2_69:
    esi18(v110);
    eax123 = fun_1003aa1(v110, v20, v16, v5, 68, v111, 68, v112, v113, v114, v115, v116, v110, v20, v16, v5, 68, v117, 68, v118, v119, v120, v121, v122);
    g100ba5c = eax123;
    goto addr_0x1005c74_65;
    addr_0x1005ed7_47:
    fun_1003ebe(ecx23, 0, 0x4c9, 0x100b2b4, 0, 16, 0, eax40, 0x100b2b4, v20, v16, v5, 68, v124, 68, v125, v126, v127, v128, v129, v130, v131, ecx23, 0, 0x4c9, 0x100b2b4, 0, 16, 0, eax40, 0x100b2b4, v20, v16, v5, 68, v132, 68, v133, v134, v135, v136, v137, v138, v139);
    g1001194(eax40, eax40, 0x100b2b4);
    goto addr_0x1005ef2_69;
    addr_0x1005f09_59:
    g1001194(eax40, reinterpret_cast<int32_t>(ebp3) - 0x144, eax40, 0x100b2b4);
    goto addr_0x1005f0f_43;
    addr_0x1005c5a_10:
    fun_1003ebe(ecx23, 0, 0x4b1, 0, 0, 16, 0, v20, v16, v5, 68, v140, 68, v141, v142, v143, v144, v145, v146, v147, v148, 1, ecx23, 0, 0x4b1, 0, 0, 16, 0, v20, v16, v5, 68, v149, 68, v150, v151, v152, v153, v154, v155, v156, v157, 1);
    g100ba5c = reinterpret_cast<void**>(0x80070714);
    goto addr_0x1005c74_65;
}

int16_t fun_1004de5(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void** edi9;
    void** esi10;
    void** ebx11;
    void** ebp12;
    void** eax13;
    void** eax14;
    void** v15;
    void** v16;
    void** v17;
    int32_t eax18;
    int16_t ax19;
    void** v20;
    void** v21;

    *reinterpret_cast<int16_t*>(&eax13) = fun_1002e55("FINISHMSG", 0, 0, edi9, esi10, ebx11, ecx, ebp12, __return_address());
    eax14 = reinterpret_cast<void**>(g1001050());
    v15 = eax14;
    if (eax14) {
        *reinterpret_cast<int16_t*>(&eax14) = fun_1002e55("FINISHMSG", eax14, eax13, 64, eax13 + 1, edi9, esi10, ebx11, v15);
        if (eax14) {
            v16 = reinterpret_cast<void**>(0x10013d4);
            v17 = v15;
            eax18 = reinterpret_cast<int32_t>(g10010c4(v17, 0x10013d4));
            if (!eax18) {
                addr_0x1004e60_4:
                ax19 = reinterpret_cast<int16_t>(g100104c(v15));
            } else {
                v20 = reinterpret_cast<void**>(64);
                v21 = reinterpret_cast<void**>(0);
                goto addr_0x1004e5a_6;
            }
        } else {
            v16 = reinterpret_cast<void**>(0);
            v17 = reinterpret_cast<void**>(16);
            v20 = reinterpret_cast<void**>(0);
            v21 = reinterpret_cast<void**>(0x4b1);
            goto addr_0x1004e5a_6;
        }
    } else {
        ax19 = fun_1003ebe(ecx, 0, 0x4b5, 0, 0, 16, 0, 64, eax13 + 1, edi9, esi10, ebx11, v15, ebp12, __return_address(), a2, a3, a4, a5, a6, a7, a8);
    }
    return ax19;
    addr_0x1004e5a_6:
    fun_1003ebe(ecx, 0, v21, v20, 0, v17, v16, 64, eax13 + 1, edi9, esi10, ebx11, v15, ebp12, __return_address(), a2, a3, a4, a5, a6, a7, a8);
    goto addr_0x1004e60_4;
}

void** g100c88c;

void** fun_1006205(void** ecx) {
    void** eax2;
    int1_t zf3;
    int1_t zf4;
    void** edi5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    int32_t eax14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    int32_t eax21;
    int1_t zf22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    int32_t eax35;
    void** eax36;
    void** esi37;
    void** ebx38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** eax47;
    void** eax48;
    int1_t zf49;
    int1_t zf50;
    void** eax51;
    int32_t eax52;
    void** eax53;
    int1_t zf54;
    void** v55;
    int32_t eax56;
    int1_t zf57;
    void** eax58;
    void** v59;
    int1_t zf60;
    int1_t zf61;
    void** eax62;
    int1_t zf63;
    int1_t zf64;
    void** v65;
    void** v66;
    void** v67;
    void** v68;
    void** v69;
    void** v70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    void** v75;
    void** eax76;

    eax2 = g100b2d0;
    zf3 = g100c898 == 0;
    if (zf3) {
        zf4 = g100c884 == 0;
        if (!zf4) {
            addr_0x100623e_3:
            eax14 = fun_1004bc8(ecx, edi5, v6, v7, v8, v9, v10, v11, v12, v13);
            if (!eax14) 
                goto addr_0x1006259_4;
        } else {
            eax21 = fun_10043ec(ecx, edi5, v15, v16, v17, v18, v19, v20);
            if (!eax21) 
                goto addr_0x1006259_4;
            zf22 = g100c898 == 0;
            if (zf22) 
                goto addr_0x100623e_3;
        }
    }
    eax35 = fun_100435e(ecx, edi5, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34);
    if (!eax35 || (eax36 = fun_1005f21(ecx), !eax36)) {
        addr_0x1006259_4:
    } else {
        g1001064(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef4, 0x105, esi37, ebx38);
        fun_10066cf(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef4, 0x105, 0x1001264, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef4, 0x105, esi37, ebx38, edi5, v39, v40, v41, v42, v43, v44, v45, v46);
        eax47 = reinterpret_cast<void**>(g1001184());
        if (eax47 && (eax48 = reinterpret_cast<void**>(g10010d0(eax47, "DecryptFileA")), !!eax48)) {
            eax48(0x100bc44, 0, eax47, "DecryptFileA");
        }
        g1001194();
        zf49 = g100c884 == 0;
        if (!zf49) 
            goto addr_0x10062da_11;
        zf50 = g100c490 == 0;
        if (!zf50) 
            goto addr_0x10062da_11;
        eax51 = fun_10047b3(ecx);
        if (!eax51) 
            goto addr_0x10062d3_14;
        addr_0x10062da_11:
        eax52 = reinterpret_cast<int32_t>(g10010fc(0x100bc44));
        if (eax52) 
            goto addr_0x1006301_15; else 
            goto addr_0x10062e5_16;
    }
    addr_0x100636a_17:
    eax53 = fun_10064de(eax2);
    return eax53;
    addr_0x1006301_15:
    zf54 = g100c88c == 0;
    if (!zf54 || (eax56 = fun_1005a36(ecx, 0x100bc44, eax47, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef4, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef4, 0x105, esi37, ebx38, edi5, v55), !!eax56)) {
        zf57 = (*reinterpret_cast<unsigned char*>(&g100cba8) & 0xc0) == 0;
        if (!zf57) {
            g100bb84 = reinterpret_cast<void**>(0);
        } else {
            eax58 = reinterpret_cast<void**>(0);
            *reinterpret_cast<int16_t*>(&eax58) = g100ba64;
            v59 = eax58;
            *reinterpret_cast<int16_t*>(&eax58) = fun_1001f93(*reinterpret_cast<uint16_t*>(&v59), 0x100bc44);
            g100bb84 = eax58;
        }
        zf60 = g100c884 == 0;
        if (!zf60) 
            goto addr_0x100634f_22;
        zf61 = g100c490 == 0;
        if (!zf61) 
            goto addr_0x100634f_22;
        eax62 = fun_1005abc(ecx, 0x100bc44);
        if (!eax62) 
            goto addr_0x10062d3_14;
    } else {
        addr_0x10062d3_14:
        goto addr_0x1006368_25;
    }
    addr_0x100634f_22:
    zf63 = g100c898 == 0;
    if (zf63 && (zf64 = g100c884 == 0, zf64)) {
        fun_1004de5(ecx, 0x100bc44, eax47, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef4, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef4, 0x105, esi37, ebx38);
    }
    addr_0x1006368_25:
    goto addr_0x100636a_17;
    addr_0x10062e5_16:
    fun_1003ebe(ecx, 0, 0x4bc, 0, 0, 16, 0, 0x100bc44, eax47, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef4, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef4, 0x105, esi37, ebx38, edi5, v65, v66, v67, v68, v69, v70, v71);
    eax76 = fun_1003aa1(0x100bc44, eax47, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef4, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef4, 0x105, esi37, ebx38, edi5, v72, v73, v74, v75);
    g100ba5c = eax76;
    goto addr_0x10062d3_14;
}

void** fun_1003346(void** ecx) {
    void* ebp2;
    void** eax3;
    struct s5* esi4;
    void** v5;
    struct s5* ebx6;
    int32_t v7;
    int32_t edi8;
    int32_t edi9;
    int1_t zf10;
    int1_t zf11;
    struct s5* v12;
    struct s5* v13;
    struct s5* v14;
    int1_t zf15;
    int1_t zf16;
    int1_t zf17;
    int1_t zf18;
    void** v19;
    int32_t v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    int1_t zf26;
    int1_t zf27;
    void** eax28;

    ebp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax3 = g100b2d0;
    esi4 = g100bc40;
    v5 = eax3;
    ebx6 = esi4;
    if (esi4) {
        v7 = edi8;
        edi9 = g100104c;
        do {
            zf10 = g100c884 == 0;
            if (zf10 && (zf11 = g100c490 == 0, zf11)) {
                v12 = esi4->f0;
                g10010c0(v12, 0x80, v7);
                v13 = esi4->f0;
                g10010bc(v13, v12, 0x80, v7);
            }
            v14 = ebx6->f0;
            esi4 = esi4->f4;
            edi9(v14, v7);
            edi9();
            ebx6 = esi4;
        } while (esi4);
    }
    zf15 = g100c880 == 0;
    if (!zf15 && ((zf16 = g100c884 == 0, zf16) && (zf17 = g100c490 == 0, zf17))) {
        g1001088(reinterpret_cast<int32_t>(ebp2) + 0xfffffef8, 0x100bc44);
        zf18 = (*reinterpret_cast<unsigned char*>(&g100c494) & 32) == 0;
        if (!zf18) {
            fun_1006666(ecx, reinterpret_cast<int32_t>(ebp2) + 0xfffffef8, reinterpret_cast<int32_t>(ebp2) + 0xfffffef8, 0x100bc44, v19, v20, v21, v22, v23);
        }
        g10010fc(0x1001344, reinterpret_cast<int32_t>(ebp2) + 0xfffffef8, 0x100bc44);
        fun_1002a96(reinterpret_cast<int32_t>(ebp2) + 0xfffffef8, 0x1001344, reinterpret_cast<int32_t>(ebp2) + 0xfffffef8, 0x100bc44, v24, v25);
    }
    zf26 = g100ba64 == 1;
    if (!zf26 && (zf27 = g100c880 == 0, !zf27)) {
        fun_1001a5b(ecx);
    }
    g100c880 = reinterpret_cast<void**>(0);
    eax28 = fun_10064de(v5);
    return eax28;
}

int16_t fun_10019c3(void** ecx, void** a2, void** a3, void** a4, void** a5);

int32_t g10011a0 = 0x77d89e6d;

int16_t fun_1002251(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14) {
    uint32_t eax15;
    void** ebp16;
    int1_t zf17;

    if ((*reinterpret_cast<unsigned char*>(&a2) & 2 || (eax15 = fun_100221e(), eax15 == 2)) && (*reinterpret_cast<unsigned char*>(&a2) & 4 || (*reinterpret_cast<int16_t*>(&eax15) = fun_1003ebe(ecx, 0, 0x522, 0x1001271, 0, 64, 4, ebp16, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14), eax15 == 6))) {
        zf17 = g100ba64 == 0;
        if (!zf17) {
            *reinterpret_cast<int16_t*>(&eax15) = fun_10019c3(ecx, ebp16, __return_address(), a2, a3);
        } else {
            *reinterpret_cast<int16_t*>(&eax15) = reinterpret_cast<int16_t>(g10011a0(2, 0));
        }
    }
    return *reinterpret_cast<int16_t*>(&eax15);
}

int16_t fun_10026c0(void** a1, void** a2, void** a3, void** a4) {
    void** eax5;
    void** edi6;
    void** esi7;
    void** ebp8;

    if (reinterpret_cast<unsigned char>(a2) > reinterpret_cast<unsigned char>(0x7fffffff)) {
        return 87;
    }
    eax5 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 4 - 4 + 12);
    *reinterpret_cast<int16_t*>(&eax5) = fun_1001651(a1, a2, eax5);
    if (reinterpret_cast<signed char>(eax5) >= reinterpret_cast<signed char>(0)) 
        goto addr_0x1002202_5;
    addr_0x1002213_6:
    return *reinterpret_cast<int16_t*>(&eax5);
    addr_0x1002202_5:
    *reinterpret_cast<int16_t*>(&eax5) = fun_100160f(reinterpret_cast<unsigned char>(a2) + reinterpret_cast<unsigned char>(a1), reinterpret_cast<unsigned char>(a2) - reinterpret_cast<unsigned char>(a2), a3, edi6, esi7, ebp8, __return_address(), a1, a2, a3, a4);
    goto addr_0x1002213_6;
}

int32_t g1001190 = 0x7c8351c7;

int16_t fun_10067ed();

int16_t fun_1006822(void** a1, int32_t a2, int32_t a3, int16_t a4) {
    g1001190(a1, a2, a3, fun_10067ed, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 12, a4);
    return 0;
}

int16_t fun_100678f(signed char* a1, int32_t* a2, int32_t a3, int32_t a4, int32_t a5, void* a6, void* a7, void* a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, void* a14, int32_t a15, void* a16) {
    signed char* eax17;
    int32_t esi18;
    signed char cl19;
    int32_t ecx20;
    int32_t ecx21;
    int32_t eax22;

    eax17 = a1;
    esi18 = 0;
    while (1) {
        cl19 = *eax17;
        if (cl19 < 48 || cl19 > 57) {
            if (cl19 >= 97) {
                cl19 = reinterpret_cast<signed char>(cl19 - 32);
            }
            ecx20 = cl19 - 55;
            if (ecx20 < 10) 
                break;
            if (ecx20 > 15) 
                break;
        } else {
            esi18 = esi18 - 3;
            ecx20 = static_cast<int32_t>(cl19);
        }
        esi18 = (esi18 << 4) + ecx20;
        eax17 = reinterpret_cast<signed char*>(g10011a8(eax17));
    }
    *a2 = esi18;
    ecx21 = 0;
    *reinterpret_cast<unsigned char*>(&ecx21) = static_cast<unsigned char>(reinterpret_cast<uint1_t>(eax17 != a1));
    eax22 = ecx21;
    return *reinterpret_cast<int16_t*>(&eax22);
}

void fun_1007cde(void** ecx, void** a2, void** a3, void** a4) {
    *reinterpret_cast<void***>(a2) = a3;
    *reinterpret_cast<void***>(a2 + 4) = a4;
    *reinterpret_cast<void***>(a2 + 8) = reinterpret_cast<void**>(1);
    return;
}

int16_t fun_1007d01(void** a1, uint32_t a2, void** a3) {
    void** ecx4;
    uint32_t esi5;
    uint32_t eax6;
    void** edi7;
    uint32_t ebx8;
    void** ecx9;
    void** ecx10;
    void** ecx11;
    uint32_t eax12;
    uint32_t esi13;
    uint32_t esi14;
    uint32_t eax15;
    uint32_t edx16;

    ecx4 = a1;
    esi5 = a2;
    eax6 = esi5 >> 2;
    edi7 = a3;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax6) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax6 == 0))) {
        do {
            ebx8 = 0;
            ecx9 = ecx4 + 1;
            *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&ebx8) + 1) = *reinterpret_cast<void***>(ecx9);
            ecx10 = ecx9 + 1;
            ecx11 = ecx10 + 1;
            ecx4 = ecx11 + 1;
            edi7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi7) ^ (static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx4))) | ebx8 | static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx10))) << 16 | static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx11))) << 24));
            --eax6;
        } while (eax6);
    }
    eax12 = 0;
    esi13 = (esi5 & 3) - 1;
    if (esi13) {
        esi14 = esi13 - 1;
        if (esi14) {
            if (esi14 - 1) {
                addr_0x1007d5f_8:
                eax15 = eax12 ^ reinterpret_cast<unsigned char>(edi7);
                return *reinterpret_cast<int16_t*>(&eax15);
            } else {
                eax12 = static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx4))) << 16;
                ++ecx4;
            }
        }
        edx16 = 0;
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&edx16) + 1) = *reinterpret_cast<void***>(ecx4);
        eax12 = eax12 | edx16;
        ++ecx4;
    }
    eax12 = eax12 | static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx4)));
    goto addr_0x1007d5f_8;
}

struct s11 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

int16_t fun_1007f7f(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, int16_t a8, void** a9);

void** fun_1007d6c(void** ecx, void*** a2, struct s11* a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, int16_t a11, void** a12) {
    void** eax13;
    void** eax14;
    void** eax15;
    void** eax16;
    void** eax17;
    void** v18;

    *reinterpret_cast<void***>(a6) = *a2 + 0x1800;
    if (!a7) {
        return a7;
    }
    *reinterpret_cast<void***>(a7) = reinterpret_cast<void**>(0);
    eax13 = reinterpret_cast<void**>(a4());
    if (!eax13) {
        addr_0x1007db3_4:
        eax14 = reinterpret_cast<void**>(1);
    } else {
        eax15 = reinterpret_cast<void**>(a4(44));
        *reinterpret_cast<void***>(eax13 + 40) = eax15;
        if (eax15) {
            *reinterpret_cast<void***>(eax13 + 16) = a9;
            *reinterpret_cast<void***>(eax13 + 20) = a10;
            *reinterpret_cast<int16_t*>(eax13 + 24) = a11;
            *reinterpret_cast<void***>(eax13 + 28) = a12;
            *reinterpret_cast<void***>(eax13 + 4) = a4;
            *reinterpret_cast<void***>(eax13 + 8) = a5;
            *reinterpret_cast<void***>(eax13 + 12) = a8;
            eax16 = *a2;
            *reinterpret_cast<void***>(eax13 + 32) = eax16;
            eax17 = a3->f4;
            *reinterpret_cast<void***>(eax13 + 36) = eax17;
            *reinterpret_cast<void***>(eax13) = reinterpret_cast<void**>(0x4349444c);
            v18 = a3->f0;
            *reinterpret_cast<int16_t*>(&eax17) = fun_1007f7f(eax15, v18, a4, a5, a8, a9, a10, a11, a12);
            if (eax17) {
                *reinterpret_cast<void***>(a7) = eax13;
                eax14 = reinterpret_cast<void**>(0);
            } else {
                a5();
                eax14 = reinterpret_cast<void**>(1);
            }
        } else {
            a5(0x2efc);
            goto addr_0x1007db3_4;
        }
    }
    return eax14;
}

int16_t fun_1006db8(void** ecx, void** a2, void* a3, void** a4) {
    void** esi5;
    void** v6;
    void** eax7;
    void* ebx8;
    void** v9;
    void** v10;
    int32_t eax11;
    void** v12;
    int32_t eax13;
    void** eax14;
    void** edi15;
    void* eax16;
    void** v17;
    int32_t eax18;

    esi5 = a4;
    v6 = *reinterpret_cast<void***>(esi5 + 0x88);
    eax7 = reinterpret_cast<void**>(*reinterpret_cast<void***>(esi5 + 28)(v6, 0, 1));
    ebx8 = a3;
    v9 = *reinterpret_cast<void***>(esi5 + 0x88);
    v10 = eax7;
    eax11 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(esi5 + 16)(v9, a2, ebx8, v6, 0, 1));
    if (reinterpret_cast<uint1_t>(eax11 < 0) | reinterpret_cast<uint1_t>(eax11 == 0)) {
        addr_0x1006e28_2:
        v12 = *reinterpret_cast<void***>(esi5);
        fun_1007cde(ecx, v12, 4, 0);
        eax13 = 0;
    } else {
        *reinterpret_cast<signed char*>(&ecx) = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a2) + reinterpret_cast<uint32_t>(ebx8) + 0xffffffff);
        eax14 = a2;
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a2) + reinterpret_cast<uint32_t>(ebx8) + 0xffffffff) = 0;
        edi15 = eax14 + 1;
        do {
            ++eax14;
        } while (*reinterpret_cast<void***>(eax14));
        eax16 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax14) - reinterpret_cast<unsigned char>(edi15));
        if (reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(eax16) + 1) < reinterpret_cast<int32_t>(ebx8)) 
            goto addr_0x1006e0d_6;
        if (*reinterpret_cast<signed char*>(&ecx)) 
            goto addr_0x1006e28_2;
        addr_0x1006e0d_6:
        ecx = v10;
        v17 = *reinterpret_cast<void***>(esi5 + 0x88);
        eax18 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(esi5 + 28)(v17, reinterpret_cast<uint32_t>(eax16) + reinterpret_cast<unsigned char>(ecx) + 1, 0));
        if (eax18 != -1) 
            goto addr_0x1006e37_8; else 
            goto addr_0x1006e28_2;
    }
    addr_0x1006e3a_9:
    return *reinterpret_cast<int16_t*>(&eax13);
    addr_0x1006e37_8:
    eax13 = 1;
    goto addr_0x1006e3a_9;
}

int16_t fun_1006ef9(void** a1);

int16_t fun_1006f72(void** a1);

int16_t fun_1007309(void** ecx, unsigned char a2, void** a3) {
    void** eax4;
    int32_t eax5;
    uint32_t eax6;
    int32_t eax7;
    void** v8;

    if (a2 != *reinterpret_cast<unsigned char*>(a3 + 0xb2)) {
        *reinterpret_cast<int16_t*>(&eax4) = fun_1006ef9(a3);
        if (1) {
            *reinterpret_cast<unsigned char*>(a3 + 0xb2) = a2;
            *reinterpret_cast<int16_t*>(&eax5) = fun_1006f72(a3);
            eax6 = reinterpret_cast<uint32_t>(-eax5);
            eax7 = reinterpret_cast<int32_t>(-(eax6 - (eax6 + reinterpret_cast<uint1_t>(eax6 < eax6 + 1))));
        } else {
            v8 = *reinterpret_cast<void***>(a3);
            fun_1007cde(ecx, v8, 7, eax4);
            eax7 = 0;
        }
    } else {
        eax7 = 1;
    }
    return *reinterpret_cast<int16_t*>(&eax7);
}

int16_t fun_1006bce(void** ecx, void** a2);

int16_t fun_10073c0(void** ecx, void** a2, void** a3, int16_t a4, int16_t a5) {
    void* ebp6;
    void** ebx7;
    void** edi8;
    void** edi9;
    void** esi10;
    void** ebx11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** eax22;
    void** eax23;
    void** v24;
    void** v25;
    void** v26;
    int32_t eax27;
    int32_t v28;
    int16_t v29;
    int16_t v30;
    int16_t v31;
    int32_t* edi32;
    int32_t v33;
    int1_t zf34;
    void** v35;
    int32_t eax36;
    uint16_t v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** eax42;
    void** eax43;
    void** eax44;
    void** eax45;
    void** eax46;
    void** eax47;
    int32_t eax48;
    void** eax49;
    void** v50;
    uint32_t eax51;
    int32_t v52;
    void** v53;
    int32_t eax54;
    int16_t ax55;
    uint32_t eax56;
    void** v57;
    void** eax58;

    ebp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    ebx7 = a2;
    edi8 = ebx7 + 0x6ba;
    fun_100160f(edi8, 0x101, ebx7 + 0x5b9, edi9, esi10, ebx11, v12, v13, v14, v15, v16);
    fun_10021e6(edi8, 0x101, a3, edi9, esi10, ebx11, v17, v18, v19, v20, v21);
    eax22 = reinterpret_cast<void**>(*reinterpret_cast<void***>(ebx7 + 12)(ebx7 + 0x6ba, 0x8000, 0x180));
    *reinterpret_cast<void***>(ebx7 + 0x88) = eax22;
    if (eax22 == 0xffffffff || (eax23 = reinterpret_cast<void**>(*reinterpret_cast<void***>(ebx7 + 12)(ebx7 + 0x6ba, 0x8000, 0x180)), *reinterpret_cast<void***>(ebx7 + 0x84) = eax23, eax23 == 0xffffffff)) {
        v24 = reinterpret_cast<void**>(0);
        v25 = reinterpret_cast<void**>(1);
    } else {
        v26 = *reinterpret_cast<void***>(ebx7 + 0x88);
        eax27 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(ebx7 + 16)(v26, reinterpret_cast<int32_t>(ebp6) - 36, 36));
        if (eax27 != 36 || v28 != 0x4643534d) {
            v24 = reinterpret_cast<void**>(0);
            goto addr_0x1007523_5;
        } else {
            if (v29 == 0x103) {
                if (a5 == -1 || (*reinterpret_cast<int16_t*>(&ecx) = a4, *reinterpret_cast<int16_t*>(&ecx) == v30) && a5 == v31) {
                    edi32 = reinterpret_cast<int32_t*>(ebx7 + 80);
                    ecx = reinterpret_cast<void**>(9);
                    while (ecx) {
                        --ecx;
                        *edi32 = v33;
                        ++edi32;
                    }
                    zf34 = (*reinterpret_cast<unsigned char*>(ebx7 + 0x6e) & 4) == 0;
                    if (zf34) 
                        goto addr_0x10074cb_12;
                    v35 = *reinterpret_cast<void***>(ebx7 + 0x88);
                    eax36 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(ebx7 + 16)(v35, reinterpret_cast<int32_t>(ebp6) + 8, 4));
                    if (eax36 != 4) 
                        goto addr_0x1007522_14;
                    addr_0x10074cb_12:
                    if (!*reinterpret_cast<void***>(ebx7 + 0xa0)) 
                        goto addr_0x1007500_15; else 
                        goto addr_0x10074d7_16;
                } else {
                    v24 = reinterpret_cast<void**>(0);
                    v25 = reinterpret_cast<void**>(10);
                }
            } else {
                v24 = reinterpret_cast<void**>(static_cast<uint32_t>(v37));
                v25 = reinterpret_cast<void**>(3);
            }
        }
    }
    addr_0x1007656_19:
    v38 = *reinterpret_cast<void***>(ebx7);
    fun_1007cde(ecx, v38, v25, v24);
    goto addr_0x100765d_20;
    addr_0x1007523_5:
    v25 = reinterpret_cast<void**>(2);
    goto addr_0x1007656_19;
    addr_0x1007500_15:
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx7 + 0xa0)) <= reinterpret_cast<unsigned char>(0) || (v39 = *reinterpret_cast<void***>(ebx7 + 0xa0), v40 = *reinterpret_cast<void***>(ebx7 + 76), v41 = *reinterpret_cast<void***>(ebx7 + 0x88), eax42 = reinterpret_cast<void**>(*reinterpret_cast<void***>(ebx7 + 16)(ecx, v41, v40, v39)), *reinterpret_cast<void***>(ebx7 + 0xa0) == eax42)) {
        if (*reinterpret_cast<void***>(ebx7 + 68)) {
            if (!reinterpret_cast<int1_t>(8 == *reinterpret_cast<void***>(ebx7 + 0xa4))) 
                goto addr_0x1007580_23; else 
                goto addr_0x1007552_24;
        }
        *reinterpret_cast<void***>(ebx7 + 0xa4) = reinterpret_cast<void**>(8);
        eax43 = reinterpret_cast<void**>(*reinterpret_cast<void***>(ebx7 + 8)(ecx));
        ecx = reinterpret_cast<void**>(8);
        *reinterpret_cast<void***>(ebx7 + 68) = eax43;
        if (eax43) {
            addr_0x1007552_24:
            if (*reinterpret_cast<void***>(ebx7 + 72)) {
                if (8 == *reinterpret_cast<void***>(ebx7 + 0xa8)) {
                    addr_0x1007588_27:
                    if (!(*reinterpret_cast<unsigned char*>(ebx7 + 0x6e) & 1)) {
                        *reinterpret_cast<void***>(ebx7 + 0x1b5) = reinterpret_cast<void**>(0);
                        *reinterpret_cast<void***>(ebx7 + 0x2b6) = reinterpret_cast<void**>(0);
                    } else {
                        eax44 = ebx7 + 0x1b5;
                        *reinterpret_cast<int16_t*>(&eax44) = fun_1006db8(ecx, eax44, 0x100, ebx7);
                        if (!eax44) 
                            goto addr_0x100765d_20;
                        eax45 = ebx7 + 0x2b6;
                        *reinterpret_cast<int16_t*>(&eax45) = fun_1006db8(ecx, eax45, 0x100, ebx7);
                        if (!eax45) 
                            goto addr_0x10075bb_31;
                    }
                } else {
                    addr_0x1007580_23:
                    v24 = reinterpret_cast<void**>(0);
                    v25 = reinterpret_cast<void**>(9);
                    goto addr_0x1007656_19;
                }
            } else {
                *reinterpret_cast<void***>(ebx7 + 0xa8) = reinterpret_cast<void**>(8);
                eax46 = reinterpret_cast<void**>(*reinterpret_cast<void***>(ebx7 + 8)(ecx));
                ecx = reinterpret_cast<void**>(8);
                *reinterpret_cast<void***>(ebx7 + 72) = eax46;
                if (eax46) 
                    goto addr_0x1007588_27; else 
                    goto addr_0x1007570_33;
            }
        } else {
            goto addr_0x1007570_33;
        }
    } else {
        addr_0x1007522_14:
        v24 = reinterpret_cast<void**>(0);
        goto addr_0x1007523_5;
    }
    if (!(*reinterpret_cast<unsigned char*>(ebx7 + 0x6e) & 2)) {
        *reinterpret_cast<void***>(ebx7 + 0x3b7) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(ebx7 + 0x4b8) = reinterpret_cast<void**>(0);
        goto addr_0x1007608_37;
    }
    eax47 = ebx7 + 0x3b7;
    *reinterpret_cast<int16_t*>(&eax47) = fun_1006db8(ecx, eax47, 0x100, ebx7);
    if (!eax47) {
        addr_0x100765d_20:
        eax48 = 0;
    } else {
        eax49 = ebx7 + 0x4b8;
        *reinterpret_cast<int16_t*>(&eax49) = fun_1006db8(ecx, eax49, 0x100, ebx7);
        if (eax49) {
            addr_0x1007608_37:
            v50 = *reinterpret_cast<void***>(ebx7 + 0x88);
            eax51 = reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(ebx7 + 28)(ecx, v50, 0, 1));
            *reinterpret_cast<uint32_t*>(ebx7 + 44) = eax51;
            v24 = reinterpret_cast<void**>(0);
            if (eax51 == 0xffffffff) {
                addr_0x1007635_40:
                v25 = reinterpret_cast<void**>(4);
                goto addr_0x1007656_19;
            } else {
                v52 = *reinterpret_cast<int32_t*>(ebx7 + 96);
                v53 = *reinterpret_cast<void***>(ebx7 + 0x88);
                eax54 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(ebx7 + 28)(ecx, v53, v52, 0));
                if (eax54 != -1) {
                    ax55 = *reinterpret_cast<int16_t*>(ebx7 + 0x6c);
                    *reinterpret_cast<int16_t*>(ebx7 + 0xac) = ax55;
                    *reinterpret_cast<int16_t*>(&eax54) = fun_1006bce(ecx, ebx7);
                    eax56 = reinterpret_cast<uint32_t>(-eax54);
                    eax48 = reinterpret_cast<int32_t>(-(eax56 - (eax56 + reinterpret_cast<uint1_t>(eax56 < eax56 + reinterpret_cast<uint1_t>(!!eax54)))));
                } else {
                    v24 = reinterpret_cast<void**>(0);
                    goto addr_0x1007635_40;
                }
            }
        } else {
            goto addr_0x100765d_20;
        }
    }
    return *reinterpret_cast<int16_t*>(&eax48);
    addr_0x10075bb_31:
    goto addr_0x100765d_20;
    addr_0x1007570_33:
    v24 = reinterpret_cast<void**>(0);
    v25 = reinterpret_cast<void**>(5);
    goto addr_0x1007656_19;
    addr_0x10074d7_16:
    if (*reinterpret_cast<void***>(ebx7 + 76)) {
        v57 = *reinterpret_cast<void***>(ebx7 + 76);
        *reinterpret_cast<void***>(ebx7 + 4)();
        ecx = v57;
        *reinterpret_cast<void***>(ebx7 + 76) = reinterpret_cast<void**>(0);
    }
    *reinterpret_cast<void***>(ebx7 + 0xa0) = reinterpret_cast<void**>(0);
    if (1) 
        goto addr_0x1007500_15;
    eax58 = reinterpret_cast<void**>(*reinterpret_cast<void***>(ebx7 + 8)(ecx));
    ecx = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(ebx7 + 76) = eax58;
    if (!eax58) 
        goto addr_0x1007570_33; else 
        goto addr_0x1007500_15;
}

int16_t fun_100766b(void** ecx, void** a2, void* a3) {
    void* ebx4;
    uint32_t eax5;
    void** v6;
    void** edi7;
    int32_t eax8;
    void** v9;
    void** v10;
    void** v11;
    void** eax12;
    void** eax13;
    void** v14;
    void** v15;
    int32_t eax16;
    void** v17;
    void** eax18;
    uint32_t eax19;
    uint32_t v20;
    int32_t eax21;
    void** ax22;
    int32_t eax23;
    void** v24;

    ebx4 = a3;
    eax5 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 0xa4)) * reinterpret_cast<uint32_t>(ebx4) + *reinterpret_cast<uint32_t*>(a2 + 44);
    v6 = *reinterpret_cast<void***>(a2 + 0x84);
    edi7 = a2 + 0x7e4;
    *reinterpret_cast<void**>(a2 + 0x90) = ebx4;
    eax8 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a2 + 28)(v6, eax5, 0));
    if (eax8 == -1 || ((v9 = *reinterpret_cast<void***>(a2 + 0xa4), v10 = *reinterpret_cast<void***>(a2 + 68), v11 = *reinterpret_cast<void***>(a2 + 0x84), eax12 = reinterpret_cast<void**>(*reinterpret_cast<void***>(a2 + 16)(v11, v10, v9)), *reinterpret_cast<void***>(a2 + 0xa4) != eax12) || (eax13 = *reinterpret_cast<void***>(a2 + 68), v14 = *reinterpret_cast<void***>(eax13), v15 = *reinterpret_cast<void***>(a2 + 0x84), eax16 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a2 + 28)(v15, v14, 0)), eax16 == -1))) {
        v17 = reinterpret_cast<void**>(4);
    } else {
        eax18 = *reinterpret_cast<void***>(a2 + 68);
        ecx = *reinterpret_cast<void***>(eax18 + 4);
        *reinterpret_cast<void***>(a2 + 0xb0) = ecx;
        eax19 = static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(eax18 + 6));
        v20 = eax19;
        *reinterpret_cast<int16_t*>(&eax19) = fun_1007309(ecx, *reinterpret_cast<unsigned char*>(&v20), a2);
        if (!eax19) {
            addr_0x1007755_4:
            eax21 = 0;
            goto addr_0x1007757_5;
        } else {
            if (!*reinterpret_cast<void***>(a2 + 40)) {
                addr_0x1007745_7:
                eax21 = 1;
                goto addr_0x1007757_5;
            } else {
                *reinterpret_cast<void***>(edi7) = reinterpret_cast<void**>(1);
                *reinterpret_cast<void***>(edi7 + 4) = *reinterpret_cast<void***>(a2 + 56);
                ax22 = *reinterpret_cast<void***>(a2 + 0xa4) - 8;
                *reinterpret_cast<void***>(edi7 + 12) = ax22;
                if (!ax22) {
                    *reinterpret_cast<void***>(edi7 + 8) = reinterpret_cast<void**>(0);
                } else {
                    *reinterpret_cast<void***>(edi7 + 8) = *reinterpret_cast<void***>(a2 + 68) + 8;
                }
                *reinterpret_cast<int16_t*>(edi7 + 14) = *reinterpret_cast<int16_t*>(&ebx4);
                eax23 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a2 + 40)());
                ecx = edi7;
                if (eax23 != -1) 
                    goto addr_0x1007745_7; else 
                    goto addr_0x100773f_12;
            }
        }
    }
    addr_0x100774e_13:
    v24 = *reinterpret_cast<void***>(a2);
    fun_1007cde(ecx, v24, v17, 0);
    goto addr_0x1007755_4;
    addr_0x1007757_5:
    return *reinterpret_cast<int16_t*>(&eax21);
    addr_0x100773f_12:
    v17 = reinterpret_cast<void**>(11);
    goto addr_0x100774e_13;
}

int16_t fun_1007763(void** ecx, void** a2) {
    void** esi3;
    void** bx4;
    int32_t eax5;
    void** edi6;
    int32_t ebx7;
    void** ecx8;
    int32_t v9;
    void** eax10;
    int32_t eax11;
    void** v12;
    int32_t eax13;
    int32_t eax14;
    int32_t v15;
    int32_t v16;
    void** eax17;
    void** eax18;
    void** v19;
    void** v20;
    void** eax21;

    esi3 = a2;
    bx4 = *reinterpret_cast<void***>(esi3 + 0x72);
    eax5 = 0;
    *reinterpret_cast<int16_t*>(&eax5) = *reinterpret_cast<int16_t*>(esi3 + 0x70);
    edi6 = esi3 + 0x7bc;
    *reinterpret_cast<void***>(edi6 + 4) = esi3 + 0x3b7;
    *reinterpret_cast<void***>(edi6 + 8) = esi3 + 0x4b8;
    *reinterpret_cast<void***>(&ebx7) = bx4 + 1;
    *reinterpret_cast<void***>(edi6 + 12) = esi3 + 0x5b9;
    ecx8 = *reinterpret_cast<void***>(esi3 + 56);
    *reinterpret_cast<void***>(edi6 + 36) = reinterpret_cast<void**>(0);
    v9 = eax5;
    *reinterpret_cast<void***>(edi6 + 16) = ecx8;
    *reinterpret_cast<int16_t*>(edi6 + 30) = *reinterpret_cast<int16_t*>(&eax5);
    *reinterpret_cast<void***>(edi6 + 32) = *reinterpret_cast<void***>(&ebx7);
    do {
        eax10 = *reinterpret_cast<void***>(esi3 + 0x84);
        a2 = reinterpret_cast<void**>(0);
        if (eax10 == 0xffffffff) 
            goto addr_0x10077c9_3;
        eax11 = reinterpret_cast<int32_t>(*reinterpret_cast<int16_t*>(esi3 + 24)(ecx8));
        ecx8 = eax10;
        if (eax11) 
            break;
        addr_0x10077c9_3:
        if (*reinterpret_cast<void***>(esi3 + 0x88) == 0xffffffff) 
            goto addr_0x10077dd_5;
        v12 = *reinterpret_cast<void***>(esi3 + 0x88);
        eax13 = reinterpret_cast<int32_t>(*reinterpret_cast<int16_t*>(esi3 + 24)(ecx8));
        ecx8 = v12;
        if (eax13) 
            break;
        addr_0x10077dd_5:
        *reinterpret_cast<void***>(esi3 + 0x88) = reinterpret_cast<void**>(0xffffffff);
        *reinterpret_cast<void***>(esi3 + 0x84) = reinterpret_cast<void**>(0xffffffff);
        eax14 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(esi3 + 36)(ecx8));
        ecx8 = edi6;
        if (eax14 == -1) 
            goto addr_0x1007850_7;
        v15 = ebx7;
        v16 = v9;
        eax17 = esi3 + 0x3b7;
        *reinterpret_cast<int16_t*>(&eax17) = fun_10073c0(ecx8, esi3, eax17, *reinterpret_cast<int16_t*>(&v16), *reinterpret_cast<int16_t*>(&v15));
        if (!eax17 || (*reinterpret_cast<int16_t*>(&eax17) = fun_100766b(ecx8, esi3, 0), !eax17)) {
            if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(esi3)) == 11) 
                goto addr_0x100784c_10;
            a2 = reinterpret_cast<void**>(1);
        }
        eax18 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(esi3));
        *reinterpret_cast<void***>(edi6 + 36) = eax18;
    } while (a2);
    goto addr_0x1007838_13;
    v19 = reinterpret_cast<void**>(4);
    addr_0x1007845_15:
    v20 = *reinterpret_cast<void***>(esi3);
    fun_1007cde(ecx8, v20, v19, 0);
    addr_0x100784c_10:
    eax21 = reinterpret_cast<void**>(0);
    addr_0x1007881_16:
    return *reinterpret_cast<int16_t*>(&eax21);
    addr_0x1007850_7:
    v19 = reinterpret_cast<void**>(11);
    goto addr_0x1007845_15;
    addr_0x1007838_13:
    *reinterpret_cast<uint16_t*>(esi3 + 0xae) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(esi3 + 0xae) + 1);
    do {
        if (!*reinterpret_cast<uint16_t*>(esi3 + 0xae)) 
            break;
        *reinterpret_cast<int16_t*>(esi3 + 0xac) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(esi3 + 0xac) - 1);
        *reinterpret_cast<uint16_t*>(esi3 + 0xae) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(esi3 + 0xae) - 1);
        *reinterpret_cast<int16_t*>(&eax18) = fun_10072b7(ecx8, esi3);
    } while (eax18);
    goto addr_0x100784c_10;
    eax21 = reinterpret_cast<void**>(1);
    *reinterpret_cast<void***>(esi3 + 0x9c) = reinterpret_cast<void**>(1);
    goto addr_0x1007881_16;
}

int16_t fun_1006c78(void** a1, void** a2) {
    void** v3;
    void** edi4;
    void** v5;
    void** v6;
    void** eax7;
    void** ebx8;
    uint32_t v9;
    void* v10;
    void** v11;
    void** eax12;
    void** ecx13;
    int16_t edx14;
    uint32_t eax15;
    void** eax16;
    uint32_t v17;
    void** eax18;
    void** v19;
    int32_t eax20;
    void** ax21;
    void** ax22;
    int32_t eax23;
    void** v24;

    v3 = *reinterpret_cast<void***>(a1 + 0xa8);
    edi4 = a1 + 0x7e4;
    v5 = *reinterpret_cast<void***>(a1 + 72);
    v6 = *reinterpret_cast<void***>(a1 + 0x84);
    eax7 = reinterpret_cast<void**>(*reinterpret_cast<void***>(a1 + 16)(v6, v5, v3));
    if (*reinterpret_cast<void***>(a1 + 0xa8) != eax7) 
        goto addr_0x1006d9f_2;
    ebx8 = a2;
    if (reinterpret_cast<unsigned char>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(a1 + 72) + 4)) + reinterpret_cast<unsigned char>(ebx8)) > reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 0x98))) 
        goto addr_0x1006d9f_2;
    v9 = static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(a1 + 72) + 4)));
    v10 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 60)) + reinterpret_cast<unsigned char>(ebx8));
    v11 = *reinterpret_cast<void***>(a1 + 0x84);
    eax12 = reinterpret_cast<void**>(*reinterpret_cast<void***>(a1 + 16)(v11, v10, v9));
    ecx13 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(a1 + 72) + 4))));
    if (ecx13 != eax12) 
        goto addr_0x1006d9f_2;
    if (!*reinterpret_cast<void***>(*reinterpret_cast<void***>(a1 + 72))) {
        addr_0x1006d25_6:
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(a1 + 72) + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(a1 + 72) + 4)) + reinterpret_cast<unsigned char>(ebx8));
        if (reinterpret_cast<unsigned char>(ebx8) > reinterpret_cast<unsigned char>(0) || !*reinterpret_cast<uint16_t*>(*reinterpret_cast<void***>(a1 + 72) + 6)) {
            edx14 = reinterpret_cast<int16_t>(1);
        } else {
            edx14 = reinterpret_cast<int16_t>(0);
        }
    } else {
        eax15 = static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(a1 + 72) + 4)));
        eax16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 60)) + reinterpret_cast<unsigned char>(ebx8));
        *reinterpret_cast<int16_t*>(&eax16) = fun_1007d01(eax16, eax15, 0);
        v17 = reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a1 + 0xa8) - 4);
        eax18 = *reinterpret_cast<void***>(a1 + 72) + 4;
        *reinterpret_cast<int16_t*>(&eax18) = fun_1007d01(eax18, v17, eax16);
        ecx13 = *reinterpret_cast<void***>(a1 + 72);
        if (eax18 != *reinterpret_cast<void***>(ecx13)) {
            addr_0x1006d9f_2:
            v19 = reinterpret_cast<void**>(4);
            goto addr_0x1006da3_10;
        } else {
            goto addr_0x1006d25_6;
        }
    }
    if (!*reinterpret_cast<void***>(a1 + 40)) {
        addr_0x1006d9a_13:
        eax20 = 1;
    } else {
        *reinterpret_cast<void***>(edi4) = reinterpret_cast<void**>(2);
        *reinterpret_cast<void***>(edi4 + 4) = *reinterpret_cast<void***>(a1 + 56);
        ax21 = *reinterpret_cast<void***>(a1 + 0xa8) - 8;
        *reinterpret_cast<void***>(edi4 + 12) = ax21;
        if (!ax21) {
            *reinterpret_cast<void***>(edi4 + 8) = reinterpret_cast<void**>(0);
        } else {
            *reinterpret_cast<void***>(edi4 + 8) = *reinterpret_cast<void***>(a1 + 72) + 8;
        }
        *reinterpret_cast<void***>(edi4 + 16) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 60)) + reinterpret_cast<unsigned char>(ebx8));
        ax22 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(a1 + 72) + 4);
        *reinterpret_cast<void***>(edi4 + 20) = ax22;
        *reinterpret_cast<int16_t*>(edi4 + 24) = edx14;
        *reinterpret_cast<void***>(edi4 + 28) = ebx8;
        eax23 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a1 + 40)());
        ecx13 = edi4;
        if (eax23 != -1) 
            goto addr_0x1006d9a_13; else 
            goto addr_0x1006d94_18;
    }
    addr_0x1006dac_19:
    return *reinterpret_cast<int16_t*>(&eax20);
    addr_0x1006d94_18:
    v19 = reinterpret_cast<void**>(11);
    addr_0x1006da3_10:
    v24 = *reinterpret_cast<void***>(a1);
    fun_1007cde(ecx13, v24, v19, 0);
    eax20 = 0;
    goto addr_0x1006dac_19;
}

uint32_t fun_1003d51(void** a1, void** a2, uint32_t a3, void** a4, void* a5);

uint32_t fun_1007e83(void** a1);

int16_t fun_100713a(void** a1) {
    uint32_t eax2;
    uint32_t eax3;
    uint32_t eax4;
    void** v5;
    void** edi6;
    uint32_t esi7;
    void** ebp8;
    uint32_t eax9;
    uint32_t eax10;
    uint32_t eax11;
    void** v12;
    void** ecx13;
    int32_t eax14;
    void** v15;

    eax2 = 0;
    *reinterpret_cast<unsigned char*>(&eax2) = *reinterpret_cast<unsigned char*>(a1 + 0xb2);
    eax3 = eax2 & 15;
    if (!eax3) 
        goto addr_0x1007197_2;
    eax4 = eax3 - 1;
    if (!eax4) {
        v5 = *reinterpret_cast<void***>(a1 + 52);
        eax9 = fun_1003d51(v5, edi6, esi7, ebp8, __return_address());
    } else {
        eax10 = eax4 - 1;
        if (!eax10) {
            v5 = *reinterpret_cast<void***>(a1 + 52);
            eax9 = fun_1003d51(v5, edi6, esi7, ebp8, __return_address());
        } else {
            eax11 = eax10 - 1;
            if (!eax11) {
                v5 = *reinterpret_cast<void***>(a1 + 52);
                eax9 = fun_1007e83(v5);
            } else {
                if (!(eax11 - 12)) 
                    goto addr_0x1007197_2;
                v12 = reinterpret_cast<void**>(6);
                goto addr_0x1007166_11;
            }
        }
    }
    ecx13 = v5;
    if (!eax9) {
        addr_0x1007197_2:
        eax14 = 1;
    } else {
        v12 = reinterpret_cast<void**>(7);
        goto addr_0x1007166_11;
    }
    addr_0x100719a_14:
    return *reinterpret_cast<int16_t*>(&eax14);
    addr_0x1007166_11:
    v15 = *reinterpret_cast<void***>(a1);
    fun_1007cde(ecx13, v15, v12, 0);
    eax14 = 0;
    goto addr_0x100719a_14;
}

int16_t fun_10071a5(void** ecx, void** a2, void*** a3);

int16_t fun_100788d(void** ecx, void** a2) {
    void* eax3;
    void** eax4;
    void** eax5;
    uint32_t v6;
    void*** eax7;
    int32_t eax8;
    void** v9;

    eax3 = reinterpret_cast<void*>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(*reinterpret_cast<void***>(a2 + 72) + 6)));
    *reinterpret_cast<void**>(a2 + 48) = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(a2 + 48)) + reinterpret_cast<uint32_t>(eax3));
    if (*reinterpret_cast<void***>(a2 + 0xb0)) 
        goto addr_0x10078b4_2;
    *reinterpret_cast<int16_t*>(&eax3) = fun_1007763(ecx, a2);
    if (!eax3) 
        goto addr_0x1007924_4;
    addr_0x10078b4_2:
    *reinterpret_cast<void***>(a2 + 0xb0) = *reinterpret_cast<void***>(a2 + 0xb0) - 1;
    *reinterpret_cast<int16_t*>(&eax3) = fun_1006c78(a2, 0);
    if (!eax3) 
        goto addr_0x1007924_4;
    eax4 = *reinterpret_cast<void***>(a2 + 72);
    if (!*reinterpret_cast<uint16_t*>(eax4 + 6)) {
        *reinterpret_cast<int16_t*>(&eax4) = fun_1007763(ecx, a2);
        if (!eax4) 
            goto addr_0x1007924_4;
        eax5 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(a2 + 72) + 4))));
        *reinterpret_cast<int16_t*>(&eax5) = fun_1006c78(a2, eax5);
        if (!eax5) 
            goto addr_0x1007924_4;
        *reinterpret_cast<void***>(a2 + 0xb0) = *reinterpret_cast<void***>(a2 + 0xb0) - 1;
    }
    v6 = static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(*reinterpret_cast<void***>(a2 + 72) + 6));
    eax7 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 8);
    *reinterpret_cast<int16_t*>(&eax7) = fun_10071a5(ecx, a2, eax7);
    if (!eax7) {
        addr_0x1007924_4:
        eax8 = 0;
    } else {
        *reinterpret_cast<uint16_t*>(&ecx) = *reinterpret_cast<uint16_t*>(&v6);
        if (*reinterpret_cast<uint16_t*>(&ecx) == *reinterpret_cast<uint16_t*>(*reinterpret_cast<void***>(a2 + 72) + 6)) {
            eax8 = 1;
        } else {
            v9 = *reinterpret_cast<void***>(a2);
            fun_1007cde(ecx, v9, 7, 0);
            goto addr_0x1007924_4;
        }
    }
    return *reinterpret_cast<int16_t*>(&eax8);
}

int16_t fun_1006e46(void** ecx, void** a2) {
    void** v3;
    void** eax4;
    int16_t ax5;
    void** edi6;
    void** eax7;
    int32_t eax8;
    int1_t zf9;
    void** edi10;
    void** v11;
    int32_t eax12;
    void** v13;
    int32_t eax14;
    void** v15;

    v3 = *reinterpret_cast<void***>(a2 + 0x88);
    eax4 = reinterpret_cast<void**>(*reinterpret_cast<void***>(a2 + 28)(v3, 0, 1));
    if (!reinterpret_cast<int1_t>(eax4 == 0xffffffff)) {
        ax5 = *reinterpret_cast<int16_t*>(a2 + 0xac);
        *reinterpret_cast<int16_t*>(a2 + 0x7de) = ax5;
        edi6 = a2 + 0x7bc;
        *reinterpret_cast<int16_t*>(a2 + 0x7da) = *reinterpret_cast<int16_t*>(a2 + 0x70);
        eax7 = *reinterpret_cast<void***>(a2 + 56);
        *reinterpret_cast<void***>(edi6) = eax4;
        *reinterpret_cast<void***>(a2 + 0x7cc) = eax7;
        eax8 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a2 + 36)());
        if (eax8 == -1 || (zf9 = *reinterpret_cast<int16_t*>(a2 + 0x7de) == 0, *reinterpret_cast<int16_t*>(a2 + 0xac) = *reinterpret_cast<int16_t*>(a2 + 0x7de), !zf9) && ((edi10 = *reinterpret_cast<void***>(edi6), edi10 != eax4) && (v11 = *reinterpret_cast<void***>(a2 + 0x88), eax12 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a2 + 28)(edi6, v11, edi10, 0)), eax12 == -1))) {
            v13 = *reinterpret_cast<void***>(a2);
            fun_1007cde(edi6, v13, 11, 0);
            eax14 = 0;
        } else {
            eax14 = 1;
        }
    } else {
        v15 = *reinterpret_cast<void***>(a2);
        fun_1007cde(ecx, v15, 4, 0);
        eax14 = 0;
    }
    return *reinterpret_cast<int16_t*>(&eax14);
}

int16_t fun_1007935(void** a1, void* a2);

int16_t fun_100799f(void** ecx, void** a2) {
    void** esi3;
    void** eax4;
    void* ebx5;
    int1_t cf6;
    void** v7;
    void* eax8;
    void*** edi9;
    void** eax10;
    void** eax11;
    void** cx12;
    void** cx13;
    void* eax14;
    void** edi15;
    void** ecx16;
    void** ecx17;
    void** v18;
    void** eax19;
    void** eax20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;

    esi3 = a2;
    eax4 = *reinterpret_cast<void***>(esi3 + 0x74);
    if (!eax4) 
        goto addr_0x1007a5c_2;
    ebx5 = *reinterpret_cast<void**>(esi3 + 0x78);
    cf6 = reinterpret_cast<uint32_t>(ebx5) < reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(esi3 + 48));
    v7 = eax4;
    if (cf6) {
        *reinterpret_cast<void**>(esi3 + 0x90) = reinterpret_cast<void*>(0xffff);
    }
    eax8 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(esi3 + 0x7c))));
    *reinterpret_cast<int16_t*>(&eax8) = fun_1007935(esi3, eax8);
    while (eax8) {
        eax8 = reinterpret_cast<void*>(*reinterpret_cast<uint16_t*>(*reinterpret_cast<void***>(esi3 + 72) + 6) + reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(esi3 + 48)));
        if (reinterpret_cast<uint32_t>(ebx5) < reinterpret_cast<uint32_t>(eax8)) 
            goto addr_0x10079ef_8;
        *reinterpret_cast<int16_t*>(&eax8) = fun_100788d(ecx, esi3);
    }
    addr_0x1007a40_10:
    edi9 = reinterpret_cast<void***>(esi3 + 0x8c);
    if (*edi9 != 0xffffffff) {
        *reinterpret_cast<int16_t*>(esi3 + 24)();
        *edi9 = reinterpret_cast<void**>(0xffffffff);
    }
    addr_0x1007a55_12:
    eax10 = reinterpret_cast<void**>(0);
    addr_0x1007ae9_13:
    return *reinterpret_cast<int16_t*>(&eax10);
    addr_0x10079ef_8:
    if (!v7) {
        addr_0x1007a5c_2:
        eax11 = esi3 + 0x7bc;
        *reinterpret_cast<void***>(eax11 + 4) = esi3 + 0xb4;
        *reinterpret_cast<void***>(eax11 + 20) = *reinterpret_cast<void***>(esi3 + 0x8c);
        *reinterpret_cast<int16_t*>(eax11 + 24) = *reinterpret_cast<int16_t*>(esi3 + 0x7e);
        *reinterpret_cast<void**>(eax11 + 26) = *reinterpret_cast<void**>(esi3 + 0x80);
        *reinterpret_cast<void***>(eax11 + 28) = *reinterpret_cast<void***>(esi3 + 0x82);
        *reinterpret_cast<void***>(eax11 + 16) = *reinterpret_cast<void***>(esi3 + 56);
        cx12 = *reinterpret_cast<void***>(esi3 + 0x7c);
        *reinterpret_cast<void***>(eax11) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(eax11 + 34) = cx12;
        cx13 = *reinterpret_cast<void***>(eax11 + 28);
        if (*reinterpret_cast<unsigned char*>(&cx13) & 64) {
            *reinterpret_cast<void***>(eax11) = reinterpret_cast<void**>(1);
            *reinterpret_cast<void***>(eax11 + 28) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(cx13) & 0xffbf);
        }
    } else {
        do {
            eax14 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx5) - reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(esi3 + 48)));
            edi15 = reinterpret_cast<void**>(*reinterpret_cast<uint16_t*>(*reinterpret_cast<void***>(esi3 + 72) + 6) - reinterpret_cast<uint32_t>(eax14));
            if (reinterpret_cast<unsigned char>(edi15) > reinterpret_cast<unsigned char>(v7)) {
                edi15 = v7;
            }
            ecx16 = *reinterpret_cast<void***>(esi3 + 64);
            ecx17 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx16) + reinterpret_cast<uint32_t>(eax14));
            v18 = *reinterpret_cast<void***>(esi3 + 0x8c);
            eax19 = reinterpret_cast<void**>(*reinterpret_cast<void***>(esi3 + 20)(v18, ecx17, edi15));
            if (edi15 != eax19) 
                goto addr_0x1007a35_18;
            ebx5 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx5) + reinterpret_cast<unsigned char>(edi15));
            v7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v7) - reinterpret_cast<unsigned char>(edi15));
            if (!v7) 
                goto addr_0x1007a5c_2;
            *reinterpret_cast<int16_t*>(&eax19) = fun_100788d(ecx17, esi3);
        } while (eax19);
        goto addr_0x1007a33_21;
    }
    eax20 = reinterpret_cast<void**>(*reinterpret_cast<void***>(esi3 + 36)());
    *reinterpret_cast<void***>(esi3 + 0x8c) = reinterpret_cast<void**>(0xffffffff);
    if (!reinterpret_cast<int1_t>(eax20 == 0xffffffff)) {
        if (eax20) {
            eax10 = reinterpret_cast<void**>(1);
            goto addr_0x1007ae9_13;
        } else {
            v21 = eax20;
            v22 = reinterpret_cast<void**>(8);
        }
    } else {
        v21 = reinterpret_cast<void**>(0);
        v22 = reinterpret_cast<void**>(11);
    }
    v23 = *reinterpret_cast<void***>(esi3);
    fun_1007cde(eax11, v23, v22, v21);
    goto addr_0x1007a55_12;
    addr_0x1007a35_18:
    v24 = *reinterpret_cast<void***>(esi3);
    fun_1007cde(ecx17, v24, 8, 0);
    goto addr_0x1007a40_10;
    addr_0x1007a33_21:
    goto addr_0x1007a40_10;
}

int16_t fun_1007ff8(void** a1) {
    void** esi2;
    void** edx3;
    void** edi4;
    void** eax5;
    int32_t ecx6;
    int32_t eax7;

    esi2 = a1;
    edx3 = *reinterpret_cast<void***>(esi2 + 4);
    *reinterpret_cast<unsigned char*>(esi2 + 0x2eb5) = 4;
    edi4 = reinterpret_cast<void**>(4);
    do {
        edi4 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi4) + (1 << *reinterpret_cast<unsigned char*>(*reinterpret_cast<unsigned char*>(esi2 + 0x2eb5) + 0x10014e0)));
        *reinterpret_cast<unsigned char*>(esi2 + 0x2eb5) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(esi2 + 0x2eb5) + 1);
    } while (reinterpret_cast<unsigned char>(edi4) < reinterpret_cast<unsigned char>(edx3));
    eax5 = reinterpret_cast<void**>(*reinterpret_cast<void***>(esi2 + 0x2ee0)());
    ecx6 = 0;
    *reinterpret_cast<unsigned char*>(&ecx6) = static_cast<unsigned char>(reinterpret_cast<uint1_t>(!!eax5));
    *reinterpret_cast<void***>(esi2) = eax5;
    eax7 = ecx6;
    return *reinterpret_cast<int16_t*>(&eax7);
}

void fun_10084cd(void** a1, uint32_t a2);

int16_t fun_1008589(void** a1, uint32_t a2) {
    uint32_t esi3;
    uint32_t ecx4;
    uint32_t eax5;

    esi3 = *reinterpret_cast<uint32_t*>(a1 + 0x2eb0);
    ecx4 = 32 - a2;
    fun_10084cd(a1, a2);
    eax5 = esi3 >> *reinterpret_cast<signed char*>(&ecx4);
    return *reinterpret_cast<int16_t*>(&eax5);
}

int16_t fun_1009b93(void** a1, unsigned char* a2, int32_t* a3);

int16_t fun_1009931(void** a1) {
    void** esi2;
    void* ebx3;
    unsigned char* edi4;
    int16_t ax5;
    int32_t* eax6;
    uint32_t eax7;
    int32_t eax8;

    esi2 = a1;
    ebx3 = reinterpret_cast<void*>(0);
    edi4 = reinterpret_cast<unsigned char*>(esi2 + 0xe34);
    do {
        ax5 = fun_1008589(esi2, 3);
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edi4) + reinterpret_cast<uint32_t>(ebx3)) = *reinterpret_cast<signed char*>(&ax5);
        ebx3 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx3) + 1);
    } while (reinterpret_cast<int32_t>(ebx3) < reinterpret_cast<int32_t>(8));
    if (!*reinterpret_cast<void***>(esi2 + 0x2ebc)) {
        eax6 = reinterpret_cast<int32_t*>(esi2 + 0xdb4);
        *reinterpret_cast<int16_t*>(&eax6) = fun_1009b93(esi2, edi4, eax6);
        eax7 = -reinterpret_cast<uint32_t>(eax6);
        eax8 = reinterpret_cast<int32_t>(-(eax7 - (eax7 + reinterpret_cast<uint1_t>(eax7 < eax7 + reinterpret_cast<uint1_t>(!!eax6)))));
    } else {
        eax8 = 0;
    }
    return *reinterpret_cast<int16_t*>(&eax8);
}

int16_t fun_1008646(void** a1) {
    void** eax2;
    void*** esi3;
    int32_t edi4;
    uint32_t edx5;
    int32_t eax6;

    eax2 = a1;
    *reinterpret_cast<void***>(eax2 + 0x2b04) = *reinterpret_cast<void***>(eax2 + 0x2b04) + 0xfffffffe;
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax2 + 0x2b04) + 4) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax2 + 0x2b08))) {
        esi3 = reinterpret_cast<void***>(eax2 + 12);
        edi4 = 3;
        do {
            edx5 = 0;
            *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&edx5) + 1) = *reinterpret_cast<void***>(*reinterpret_cast<void***>(eax2 + 0x2b04) + 3);
            *reinterpret_cast<void***>(&edx5) = *reinterpret_cast<void***>(*reinterpret_cast<void***>(eax2 + 0x2b04) + 2);
            *esi3 = reinterpret_cast<void**>((edx5 << 8 | static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(eax2 + 0x2b04) + 1)))) << 8 | static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(eax2 + 0x2b04)))));
            *reinterpret_cast<void***>(eax2 + 0x2b04) = *reinterpret_cast<void***>(eax2 + 0x2b04) + 4;
            esi3 = esi3 + 4;
            --edi4;
        } while (edi4);
        eax6 = 1;
    } else {
        eax6 = 0;
    }
    return *reinterpret_cast<int16_t*>(&eax6);
}

int16_t fun_1009548(void** ecx, void* a2, signed char* a3, signed char* a4);

int16_t fun_1009982(void** ecx, void** a2, void* a3, signed char* a4, unsigned char a5, void** a6, void*** a7);

int16_t fun_1009862(void** a1) {
    signed char* edi2;
    signed char* eax3;
    void* eax4;
    signed char* eax5;
    void* ecx6;
    void* eax7;
    void** ecx8;
    signed char* ebx9;
    void** eax10;
    uint32_t eax11;

    edi2 = reinterpret_cast<signed char*>(a1 + 0xa18);
    eax3 = reinterpret_cast<signed char*>(a1 + 0x2b14);
    *reinterpret_cast<int16_t*>(&eax3) = fun_1009548(a1, 0x100, eax3, edi2);
    if (!eax3 || (eax4 = reinterpret_cast<void*>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(a1 + 0x2eb5)) << 3), *reinterpret_cast<int16_t*>(&eax4) = fun_1009548(a1, eax4, a1 + 0x2c14, a1 + 0xb18), eax4 == 0)) {
        addr_0x100988a_2:
        eax5 = reinterpret_cast<signed char*>(0);
    } else {
        ecx6 = reinterpret_cast<void*>(*reinterpret_cast<unsigned char*>(a1 + 0x2eb5) * 8 + 0x100);
        eax7 = reinterpret_cast<void*>(0x2a0);
        if (reinterpret_cast<int32_t>(ecx6) < reinterpret_cast<int32_t>(0x2a0)) {
            eax7 = ecx6;
        }
        ecx8 = a1 + 24;
        *reinterpret_cast<int16_t*>(&eax7) = fun_1009982(ecx8, a1, eax7, edi2, 10, ecx8, a1 + 0xe3c);
        if (!eax7) 
            goto addr_0x100988a_2; else 
            goto addr_0x10098e7_6;
    }
    addr_0x1009926_7:
    return *reinterpret_cast<int16_t*>(&eax5);
    addr_0x10098e7_6:
    ebx9 = reinterpret_cast<signed char*>(a1 + 0xcb8);
    eax5 = reinterpret_cast<signed char*>(a1 + 0x2db4);
    *reinterpret_cast<int16_t*>(&eax5) = fun_1009548(a1, 0xf9, eax5, ebx9);
    if (eax5) {
        eax10 = a1 + 0x818;
        *reinterpret_cast<int16_t*>(&eax10) = fun_1009982(a1, a1, 0xf9, ebx9, 8, eax10, a1 + 0x233c);
        eax11 = reinterpret_cast<uint32_t>(-reinterpret_cast<unsigned char>(eax10));
        eax5 = reinterpret_cast<signed char*>(-(eax11 - (eax11 + reinterpret_cast<uint1_t>(eax11 < eax11 + reinterpret_cast<uint1_t>(!!eax10)))));
    }
    goto addr_0x1009926_7;
}

int16_t fun_1008d30(void** a1, void** a2);

int16_t fun_10090ef(void** a1, void** a2, void** a3);

int16_t fun_100948e(void** a1, void** a2, void** a3) {
    void** esi4;
    void** eax5;
    void** eax6;

    esi4 = a2;
    if (reinterpret_cast<signed char>(esi4) >= reinterpret_cast<signed char>(0x101)) 
        goto addr_0x10094df_2;
    eax5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(0x101) - reinterpret_cast<unsigned char>(esi4));
    if (reinterpret_cast<signed char>(eax5) >= reinterpret_cast<signed char>(a3)) {
        eax5 = a3;
    }
    *reinterpret_cast<int16_t*>(&eax5) = fun_1008d30(esi4, eax5);
    if (reinterpret_cast<int1_t>(eax5 == 0xffffffff)) 
        goto addr_0x10094b9_6;
    a3 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a3) + (reinterpret_cast<unsigned char>(esi4) - reinterpret_cast<unsigned char>(eax5)));
    esi4 = eax5;
    *reinterpret_cast<void***>(a1 + 0x2ec0) = eax5;
    if (reinterpret_cast<signed char>(a3) > reinterpret_cast<signed char>(0)) {
        addr_0x10094df_2:
        *reinterpret_cast<int16_t*>(&eax6) = fun_10090ef(a1, esi4, a3);
    } else {
        eax6 = a3;
    }
    addr_0x10094e9_9:
    return *reinterpret_cast<int16_t*>(&eax6);
    addr_0x10094b9_6:
    *reinterpret_cast<void***>(a1 + 0x2ebc) = reinterpret_cast<void**>(1);
    eax6 = eax5;
    goto addr_0x10094e9_9;
}

int16_t fun_10089c7(void** a1, void** a2, void** a3);

int16_t fun_10086b0(void** a1, void** a2);

int16_t fun_1008cde(void** a1, void** a2, void** a3) {
    void** esi4;
    void** eax5;
    void** eax6;

    esi4 = a2;
    if (reinterpret_cast<signed char>(esi4) >= reinterpret_cast<signed char>(0x101)) {
        addr_0x1008d1c_2:
        *reinterpret_cast<int16_t*>(&eax5) = fun_10089c7(a1, esi4, a3);
    } else {
        eax6 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(0x101) - reinterpret_cast<unsigned char>(esi4));
        if (reinterpret_cast<signed char>(eax6) >= reinterpret_cast<signed char>(a3)) {
            eax6 = a3;
        }
        *reinterpret_cast<int16_t*>(&eax6) = fun_10086b0(esi4, eax6);
        a3 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a3) + (reinterpret_cast<unsigned char>(esi4) - reinterpret_cast<unsigned char>(eax6)));
        esi4 = eax6;
        *reinterpret_cast<void***>(a1 + 0x2ec0) = eax6;
        if (reinterpret_cast<signed char>(a3) > reinterpret_cast<signed char>(0)) 
            goto addr_0x1008d1c_2; else 
            goto addr_0x1008d17_6;
    }
    addr_0x1008d26_7:
    return *reinterpret_cast<int16_t*>(&eax5);
    addr_0x1008d17_6:
    eax5 = a3;
    goto addr_0x1008d26_7;
}

int16_t fun_10085b5(void** a1, void** a2, void** a3) {
    void** ecx4;
    void** edx5;
    void** esi6;
    void** edi7;
    void** ebx8;
    void** v9;
    void** v10;
    void* eax11;

    ecx4 = a1;
    edx5 = *reinterpret_cast<void***>(ecx4 + 0x2b04);
    esi6 = a2;
    edi7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi6) + reinterpret_cast<unsigned char>(a3));
    ebx8 = esi6;
    v9 = ebx8;
    if (reinterpret_cast<signed char>(esi6) >= reinterpret_cast<signed char>(edi7)) {
        addr_0x10085fc_2:
        *reinterpret_cast<void***>(ecx4 + 0x2b04) = edx5;
        v10 = reinterpret_cast<void**>(0x101);
        if (reinterpret_cast<signed char>(edi7) <= reinterpret_cast<signed char>(0x101)) {
            v10 = edi7;
        }
    } else {
        do {
            if (reinterpret_cast<unsigned char>(edx5) >= reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx4 + 0x2b08))) 
                goto addr_0x1008613_5;
            if (reinterpret_cast<signed char>(esi6) >= reinterpret_cast<signed char>(*reinterpret_cast<void***>(ecx4 + 4) + 0x105)) 
                goto addr_0x1008613_5;
            *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(esi6) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx4))) = *reinterpret_cast<void***>(edx5);
            ++esi6;
            ++edx5;
        } while (reinterpret_cast<signed char>(esi6) < reinterpret_cast<signed char>(edi7));
        goto addr_0x10085f9_8;
    }
    while (reinterpret_cast<unsigned char>(ebx8) < reinterpret_cast<unsigned char>(v10)) {
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx4 + 4)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx4)) + reinterpret_cast<unsigned char>(ebx8)) = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx4)) + reinterpret_cast<unsigned char>(ebx8));
        ++ebx8;
    }
    *reinterpret_cast<void***>(ecx4 + 0x2ec0) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx4 + 8)) & reinterpret_cast<unsigned char>(esi6));
    eax11 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(esi6) - reinterpret_cast<unsigned char>(edi7));
    addr_0x100863a_12:
    return *reinterpret_cast<int16_t*>(&eax11);
    addr_0x1008613_5:
    eax11 = reinterpret_cast<void*>(0xffffffff);
    goto addr_0x100863a_12;
    addr_0x10085f9_8:
    ebx8 = v9;
    goto addr_0x10085fc_2;
}

int16_t fun_1008462(void** a1) {
    void** eax2;
    void** esi3;
    uint32_t edx4;
    uint32_t edi5;

    if (*reinterpret_cast<void***>(a1 + 0x2ed8) != 3) {
        eax2 = *reinterpret_cast<void***>(a1 + 0x2b04);
        esi3 = eax2 + 4;
        if (reinterpret_cast<unsigned char>(esi3) <= reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 0x2b08))) {
            edx4 = 0;
            *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&edx4) + 1) = *reinterpret_cast<void***>(eax2 + 1);
            edi5 = static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax2 + 3)));
            *reinterpret_cast<void***>(&edx4) = *reinterpret_cast<void***>(eax2);
            eax2 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax2 + 2))));
            *reinterpret_cast<unsigned char*>(a1 + 0x2eb4) = 16;
            *reinterpret_cast<void***>(a1 + 0x2b04) = esi3;
            *reinterpret_cast<uint32_t*>(a1 + 0x2eb0) = (edx4 << 8 | edi5) << 8 | reinterpret_cast<unsigned char>(eax2);
        }
    }
    return *reinterpret_cast<int16_t*>(&eax2);
}

int16_t fun_1008172(void** a1, void** a2, void** a3);

int16_t fun_10094f3(void** a1, void** a2, void*** a3) {
    void** eax4;
    void** edi5;
    void** edx6;
    void*** esi7;
    uint32_t ecx8;
    uint32_t ecx9;
    void** v10;

    eax4 = a1;
    edi5 = *reinterpret_cast<void***>(eax4 + 0x2b0c);
    if (!edi5) {
        addr_0x100953e_2:
        return *reinterpret_cast<int16_t*>(&eax4);
    } else {
        edx6 = a2;
        esi7 = a3;
        ecx8 = reinterpret_cast<unsigned char>(a2) >> 2;
        while (ecx8) {
            --ecx8;
            *reinterpret_cast<void***>(edi5) = *esi7;
            edi5 = edi5 + 4;
            esi7 = esi7 + 4;
        }
        ecx9 = reinterpret_cast<unsigned char>(edx6) & 3;
        while (ecx9) {
            --ecx9;
            *reinterpret_cast<void***>(edi5) = *esi7;
            ++edi5;
            ++esi7;
        }
        if (!*reinterpret_cast<void***>(eax4 + 0x2ec4)) 
            goto addr_0x100953e_2;
        if (*reinterpret_cast<uint32_t*>(eax4 + 0x2ecc) >= 0x8000) 
            goto addr_0x100953e_2;
    }
    v10 = *reinterpret_cast<void***>(eax4 + 0x2b0c);
    *reinterpret_cast<int16_t*>(&eax4) = fun_1008172(eax4, v10, edx6);
    goto addr_0x100953e_2;
}

struct s12 {
    int32_t f0;
    int16_t f4;
};

int16_t fun_1008172(void** a1, void** a2, void** a3) {
    void** eax4;
    void** ecx5;
    void** edx6;
    void** v7;
    void* eax8;
    struct s12* esi9;
    int32_t v10;
    void* v11;
    int16_t v12;
    struct s12* edi13;
    void* ebx14;
    void* v15;
    void** edx16;
    struct s12* edi17;
    void** eax18;

    eax4 = g100b2d0;
    ecx5 = a1;
    edx6 = a2;
    v7 = eax4;
    if (reinterpret_cast<signed char>(a3) > reinterpret_cast<signed char>(6)) {
        eax8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx6) + reinterpret_cast<unsigned char>(a3));
        esi9 = reinterpret_cast<struct s12*>(reinterpret_cast<uint32_t>(eax8) + 0xfffffffa);
        v10 = esi9->f0;
        v11 = eax8;
        v12 = esi9->f4;
        edi13 = reinterpret_cast<struct s12*>(reinterpret_cast<uint32_t>(v11) + 0xfffffffa);
        edi13->f0 = 0xe8e8e8e8;
        edi13->f4 = 0xe8e8;
        ebx14 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(ecx5 + 0x2ec8)) + reinterpret_cast<unsigned char>(a3) + 0xfffffff6);
        v15 = ebx14;
        while (1) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edx6) == 0xe8)) {
                ++edx6;
                *reinterpret_cast<void**>(ecx5 + 0x2ec8) = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(ecx5 + 0x2ec8)) + 1);
                continue;
            }
            edx16 = edx6 + 1;
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(ecx5 + 0x2ec8)) >= reinterpret_cast<uint32_t>(ebx14)) 
                break;
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx16)) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx5 + 0x2ec4))) 
                goto addr_0x10081ed_19;
            if (reinterpret_cast<uint32_t>(-reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx16))) <= reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(ecx5 + 0x2ec8))) {
                *reinterpret_cast<void***>(edx16) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx5 + 0x2ec4)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx16)));
            }
            addr_0x10081ff_22:
            ebx14 = v15;
            edx6 = edx16 + 4;
            *reinterpret_cast<void**>(ecx5 + 0x2ec8) = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(ecx5 + 0x2ec8)) + 5);
            continue;
            addr_0x10081ed_19:
            *reinterpret_cast<void***>(edx16) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx16)) - reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(ecx5 + 0x2ec8)));
            goto addr_0x10081ff_22;
        }
        edi17 = reinterpret_cast<struct s12*>(reinterpret_cast<uint32_t>(v11) + 0xfffffffa);
        *reinterpret_cast<void**>(ecx5 + 0x2ec8) = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx14) + 10);
        edi17->f0 = v10;
        edi17->f4 = v12;
    } else {
        *reinterpret_cast<void**>(ecx5 + 0x2ec8) = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(ecx5 + 0x2ec8)) + reinterpret_cast<unsigned char>(a3));
    }
    eax18 = fun_10064de(v7);
    return *reinterpret_cast<int16_t*>(&eax18);
}

void fun_10084cd(void** a1, uint32_t a2) {
    uint32_t ecx3;
    unsigned char dl4;
    uint32_t edi5;
    void** esi6;
    uint32_t ebx7;
    int32_t ecx8;
    unsigned char dl9;
    void** esi10;
    int32_t ecx11;
    uint32_t ebx12;
    int32_t ecx13;
    int32_t ecx14;

    ecx3 = a2;
    *reinterpret_cast<unsigned char*>(a1 + 0x2eb4) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(a1 + 0x2eb4) - *reinterpret_cast<unsigned char*>(&ecx3));
    *reinterpret_cast<uint32_t*>(a1 + 0x2eb0) = *reinterpret_cast<uint32_t*>(a1 + 0x2eb0) << *reinterpret_cast<unsigned char*>(&ecx3);
    dl4 = *reinterpret_cast<unsigned char*>(a1 + 0x2eb4);
    edi5 = *reinterpret_cast<uint32_t*>(a1 + 0x2eb0);
    if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(dl4) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(dl4 == 0))) {
        esi6 = *reinterpret_cast<void***>(a1 + 0x2b04);
        if (reinterpret_cast<unsigned char>(esi6) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 0x2b08))) {
            ebx7 = 0;
            *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&ebx7) + 1) = *reinterpret_cast<void***>(esi6 + 1);
            ecx8 = 0;
            *reinterpret_cast<unsigned char*>(&ecx8) = dl4;
            dl9 = reinterpret_cast<unsigned char>(dl4 + 16);
            *reinterpret_cast<void***>(&ebx7) = *reinterpret_cast<void***>(esi6);
            esi10 = esi6 + 2;
            ecx11 = -ecx8;
            *reinterpret_cast<void***>(a1 + 0x2b04) = esi10;
            *reinterpret_cast<unsigned char*>(a1 + 0x2eb4) = dl9;
            *reinterpret_cast<uint32_t*>(a1 + 0x2eb0) = ebx7 << *reinterpret_cast<unsigned char*>(&ecx11) | edi5;
            if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(dl9) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(dl9 == 0))) {
                if (reinterpret_cast<unsigned char>(esi10) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 0x2b08))) {
                    ebx12 = 0;
                    *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&ebx12) + 1) = *reinterpret_cast<void***>(esi10 + 1);
                    ecx13 = 0;
                    *reinterpret_cast<unsigned char*>(&ecx13) = dl9;
                    *reinterpret_cast<void***>(&ebx12) = *reinterpret_cast<void***>(esi10);
                    ecx14 = -ecx13;
                    *reinterpret_cast<void***>(a1 + 0x2b04) = esi10 + 2;
                    *reinterpret_cast<uint32_t*>(a1 + 0x2eb0) = *reinterpret_cast<uint32_t*>(a1 + 0x2eb0) | ebx12 << *reinterpret_cast<unsigned char*>(&ecx14);
                    *reinterpret_cast<unsigned char*>(a1 + 0x2eb4) = reinterpret_cast<unsigned char>(dl9 + 16);
                } else {
                    *reinterpret_cast<void***>(a1 + 0x2ebc) = reinterpret_cast<void**>(1);
                }
            }
        } else {
            *reinterpret_cast<void***>(a1 + 0x2ebc) = reinterpret_cast<void**>(1);
        }
    }
    return;
}

int16_t fun_1009548(void** ecx, void* a2, signed char* a3, signed char* a4) {
    void* ebp5;
    void** eax6;
    void** v7;
    void** edi8;
    void** v9;
    signed char* v10;
    void* esi11;
    int16_t ax12;
    void* esi13;
    uint32_t eax14;
    void* ebx15;
    uint32_t edx16;
    int32_t ebx17;
    void* eax18;
    uint32_t v19;
    uint32_t eax20;
    int32_t edx21;
    int16_t ax22;
    uint32_t eax23;
    uint32_t v24;
    uint32_t v25;
    uint32_t eax26;
    uint16_t ax27;
    uint32_t v28;
    uint32_t eax29;
    int32_t edx30;
    int16_t ax31;
    void* edx32;
    int16_t ax33;
    uint32_t ecx34;
    signed char* edi35;
    uint32_t ecx36;
    void** eax37;

    ebp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax6 = g100b2d0;
    v7 = eax6;
    edi8 = ecx;
    v9 = edi8;
    v10 = a4;
    esi11 = reinterpret_cast<void*>(0);
    do {
        ax12 = fun_1008589(edi8, 4);
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp5) + reinterpret_cast<int32_t>(esi11) - 28) = *reinterpret_cast<signed char*>(&ax12);
        esi11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esi11) + 1);
    } while (reinterpret_cast<int32_t>(esi11) < 20);
    if (!*reinterpret_cast<void***>(edi8 + 0x2ebc)) {
        fun_1009982(ecx, edi8, 20, reinterpret_cast<int32_t>(ebp5) + 0xffffffe4, 8, reinterpret_cast<int32_t>(ebp5) + 0xfffffd28, reinterpret_cast<int32_t>(ebp5) + 0xffffff28);
        esi13 = reinterpret_cast<void*>(0);
        if (reinterpret_cast<int32_t>(a2) <= reinterpret_cast<int32_t>(0)) {
            addr_0x100983f_5:
        } else {
            do {
                eax14 = *reinterpret_cast<uint32_t*>(edi8 + 0x2eb0) >> 24;
                if (eax14 >= 0x100) {
                    *reinterpret_cast<void***>(edi8 + 0x2ebc) = reinterpret_cast<void**>(1);
                    ebx15 = reinterpret_cast<void*>(0);
                } else {
                    *reinterpret_cast<uint16_t*>(&ebx15) = *reinterpret_cast<uint16_t*>(reinterpret_cast<int32_t>(ebp5) + eax14 * 2 - 0x2d8);
                }
                if (reinterpret_cast<int16_t>(*reinterpret_cast<uint16_t*>(&ebx15)) < reinterpret_cast<int16_t>(0)) {
                    edx16 = 0x800000;
                    do {
                        ebx17 = reinterpret_cast<int32_t>(-reinterpret_cast<uint32_t>(ebx15));
                        eax18 = reinterpret_cast<void*>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&ebx17)));
                        if (!(*reinterpret_cast<uint32_t*>(edi8 + 0x2eb0) & edx16)) {
                            ebx15 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax18) + reinterpret_cast<uint32_t>(eax18));
                            if (reinterpret_cast<uint32_t>(ebx15) >= 94) {
                                addr_0x100961b_13:
                                ebx15 = reinterpret_cast<void*>(0);
                                *reinterpret_cast<void***>(edi8 + 0x2ebc) = reinterpret_cast<void**>(1);
                            } else {
                                *reinterpret_cast<uint16_t*>(&ebx15) = *reinterpret_cast<uint16_t*>(reinterpret_cast<int32_t>(ebp5) + reinterpret_cast<uint32_t>(eax18) * 4 - 0xd8);
                            }
                        } else {
                            ebx15 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax18) + reinterpret_cast<uint32_t>(eax18) + 1);
                            if (reinterpret_cast<uint32_t>(ebx15) >= 94) 
                                goto addr_0x100961b_13;
                            *reinterpret_cast<uint16_t*>(&ebx15) = *reinterpret_cast<uint16_t*>(reinterpret_cast<int32_t>(ebp5) + reinterpret_cast<uint32_t>(eax18) * 4 - 0xd6);
                        }
                        edx16 = edx16 >> 1;
                    } while (reinterpret_cast<int16_t>(*reinterpret_cast<uint16_t*>(&ebx15)) < reinterpret_cast<int16_t>(0));
                }
                if (*reinterpret_cast<uint16_t*>(&ebx15) >= 24 || reinterpret_cast<int16_t>(*reinterpret_cast<uint16_t*>(&ebx15)) < reinterpret_cast<int16_t>(0)) {
                    *reinterpret_cast<void***>(edi8 + 0x2ebc) = reinterpret_cast<void**>(1);
                } else {
                    if (*reinterpret_cast<void***>(edi8 + 0x2ebc)) 
                        goto addr_0x1009859_21;
                    v19 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ebp5) + reinterpret_cast<int16_t>(*reinterpret_cast<uint16_t*>(&ebx15)) - 28));
                    fun_10084cd(edi8, v19);
                }
                if (*reinterpret_cast<void***>(edi8 + 0x2ebc)) 
                    goto addr_0x1009859_21;
                if (*reinterpret_cast<uint16_t*>(&ebx15) != 17) {
                    if (*reinterpret_cast<uint16_t*>(&ebx15) != 18) {
                        if (*reinterpret_cast<uint16_t*>(&ebx15) != 19) {
                            eax20 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(esi13) + reinterpret_cast<uint32_t>(a3)) - static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<uint16_t*>(&ebx15))) + 17;
                            __asm__("cdq ");
                            edx21 = reinterpret_cast<int32_t>(eax20) % 17;
                            *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(v10) + reinterpret_cast<uint32_t>(esi13)) = *reinterpret_cast<signed char*>(&edx21);
                            continue;
                        } else {
                            ax22 = fun_1008589(edi8, 1);
                            ebx15 = reinterpret_cast<void*>(*reinterpret_cast<unsigned char*>(&ax22) + 4);
                            if (reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(ebx15) + reinterpret_cast<uint32_t>(esi13)) >= reinterpret_cast<int32_t>(a2)) {
                                ebx15 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(a2) - reinterpret_cast<uint32_t>(esi13));
                            }
                            eax23 = *reinterpret_cast<uint32_t*>(edi8 + 0x2eb0) >> 24;
                            if (eax23 >= 0x100) {
                                v24 = 0;
                                *reinterpret_cast<void***>(edi8 + 0x2ebc) = reinterpret_cast<void**>(1);
                            } else {
                                *reinterpret_cast<uint16_t*>(&v24) = *reinterpret_cast<uint16_t*>(reinterpret_cast<int32_t>(ebp5) + eax23 * 2 - 0x2d8);
                            }
                            if (reinterpret_cast<int16_t>(*reinterpret_cast<uint16_t*>(&v24)) < reinterpret_cast<int16_t>(0)) {
                                v25 = 0x800000;
                                do {
                                    v24 = -v24;
                                    eax26 = reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<uint16_t*>(&v24))));
                                    if (!(*reinterpret_cast<uint32_t*>(edi8 + 0x2eb0) & v25)) {
                                        if (eax26 + eax26 >= 94) {
                                            addr_0x100977d_37:
                                            v24 = 0;
                                            *reinterpret_cast<void***>(edi8 + 0x2ebc) = reinterpret_cast<void**>(1);
                                            continue;
                                        } else {
                                            ax27 = *reinterpret_cast<uint16_t*>(reinterpret_cast<int32_t>(ebp5) + eax26 * 4 - 0xd8);
                                        }
                                    } else {
                                        if (eax26 + eax26 + 1 >= 94) 
                                            goto addr_0x100977d_37;
                                        ax27 = *reinterpret_cast<uint16_t*>(reinterpret_cast<int32_t>(ebp5) + eax26 * 4 - 0xd6);
                                    }
                                    *reinterpret_cast<uint16_t*>(&v24) = ax27;
                                    v25 = v25 >> 1;
                                } while (reinterpret_cast<int16_t>(*reinterpret_cast<uint16_t*>(&v24)) < reinterpret_cast<int16_t>(0));
                            }
                            if (*reinterpret_cast<uint16_t*>(&v24) >= 24 || reinterpret_cast<int16_t>(*reinterpret_cast<uint16_t*>(&v24)) < reinterpret_cast<int16_t>(0)) {
                                *reinterpret_cast<void***>(edi8 + 0x2ebc) = reinterpret_cast<void**>(1);
                            } else {
                                if (*reinterpret_cast<void***>(edi8 + 0x2ebc)) 
                                    goto addr_0x1009859_21;
                                v28 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ebp5) + reinterpret_cast<int16_t>(*reinterpret_cast<uint16_t*>(&v24)) - 28));
                                fun_10084cd(edi8, v28);
                            }
                            if (*reinterpret_cast<void***>(edi8 + 0x2ebc)) 
                                goto addr_0x1009859_21;
                            eax29 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(esi13) + reinterpret_cast<uint32_t>(a3)) - static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<uint16_t*>(&v24))) + 17;
                            __asm__("cdq ");
                            edx30 = reinterpret_cast<int32_t>(eax29) % 17;
                            while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(ebx15) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(ebx15 == 0))) {
                                ebx15 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx15) - 1);
                                if (reinterpret_cast<int32_t>(esi13) >= reinterpret_cast<int32_t>(a2)) 
                                    goto addr_0x10096b1_51;
                                *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(v10) + reinterpret_cast<uint32_t>(esi13)) = *reinterpret_cast<signed char*>(&edx30);
                                esi13 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi13) + 1);
                            }
                        }
                    } else {
                        ax31 = fun_1008589(edi8, 5);
                        edx32 = reinterpret_cast<void*>(*reinterpret_cast<unsigned char*>(&ax31) + 20);
                        goto addr_0x100967d_54;
                    }
                } else {
                    ax33 = fun_1008589(edi8, 4);
                    edx32 = reinterpret_cast<void*>(*reinterpret_cast<unsigned char*>(&ax33) + 4);
                    goto addr_0x100967d_54;
                }
                addr_0x10096b1_51:
                esi13 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi13) - 1);
                continue;
                addr_0x100967d_54:
                if (reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(edx32) + reinterpret_cast<uint32_t>(esi13)) >= reinterpret_cast<int32_t>(a2)) {
                    edx32 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(a2) - reinterpret_cast<uint32_t>(esi13));
                }
                if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(edx32) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(edx32 == 0))) {
                    ebx15 = edx32;
                    ecx34 = reinterpret_cast<uint32_t>(edx32) >> 2;
                    edi35 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(v10) + reinterpret_cast<uint32_t>(esi13));
                    while (ecx34) {
                        --ecx34;
                        *edi35 = reinterpret_cast<signed char>(0);
                        edi35 = edi35 + 4;
                        esi13 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi13) + 4);
                    }
                    ecx36 = reinterpret_cast<uint32_t>(ebx15) & 3;
                    while (ecx36) {
                        --ecx36;
                        *edi35 = 0;
                        ++edi35;
                        esi13 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi13) + 1);
                    }
                    edi8 = v9;
                    esi13 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi13) + reinterpret_cast<uint32_t>(edx32));
                    goto addr_0x10096b1_51;
                }
                esi13 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi13) + 1);
            } while (reinterpret_cast<int32_t>(esi13) < reinterpret_cast<int32_t>(a2));
            goto addr_0x100983f_5;
        }
    } else {
        goto addr_0x100984b_68;
    }
    addr_0x100984a_69:
    addr_0x100984b_68:
    eax37 = fun_10064de(v7);
    return *reinterpret_cast<int16_t*>(&eax37);
    addr_0x1009859_21:
    goto addr_0x100984a_69;
}

int16_t fun_1009982(void** ecx, void** a2, void* a3, signed char* a4, unsigned char a5, void** a6, void*** a7) {
    void* ebp8;
    int32_t ecx9;
    void* ecx10;
    int32_t* eax11;
    uint32_t eax12;
    int32_t edi13;
    uint32_t ecx14;
    int32_t v15;
    uint32_t esi16;
    unsigned char bl17;
    uint32_t eax18;
    uint32_t v19;
    uint32_t ecx20;
    uint32_t edi21;
    uint32_t ecx22;
    uint32_t ecx23;
    void* v24;
    uint32_t eax25;
    void** edi26;
    void* esi27;
    uint32_t ecx28;
    uint32_t ecx29;
    int32_t edx30;
    uint32_t ecx31;
    void** ebx32;
    uint32_t edx33;
    uint32_t v34;
    uint32_t ecx35;
    void*** edi36;
    uint32_t edx37;
    uint32_t ecx38;
    uint32_t ecx39;
    void* eax40;
    void* v41;
    void* v42;
    void* ecx43;
    uint32_t* esi44;
    uint32_t edi45;
    uint32_t edx46;
    uint32_t ecx47;
    unsigned char al48;
    uint32_t ecx49;
    unsigned char v50;
    uint32_t edi51;
    void*** edx52;
    void* eax53;
    int32_t eax54;
    void*** ecx55;
    uint32_t ecx56;
    void* eax57;
    void*** ebx58;
    void*** edi59;
    void** ebx60;
    uint32_t ecx61;
    uint1_t cf62;
    void** eax63;
    uint32_t ecx64;

    ebp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    ecx9 = 16;
    while (ecx9) {
        --ecx9;
    }
    ecx10 = reinterpret_cast<void*>(0);
    if (reinterpret_cast<uint32_t>(a3) > 0) {
        do {
            eax11 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp8) + *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx10) + reinterpret_cast<uint32_t>(a4)) * 4 - 0xa0);
            *eax11 = *eax11 + 1;
            ecx10 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx10) + 1);
        } while (reinterpret_cast<uint32_t>(ecx10) < reinterpret_cast<uint32_t>(a3));
    }
    eax12 = 1;
    do {
        edi13 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp8) + eax12 * 4 - 0xa0);
        ecx14 = 16 - eax12;
        ++eax12;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp8) + eax12 * 4 - 92) = edi13 << *reinterpret_cast<unsigned char*>(&ecx14);
    } while (eax12 <= 16);
    if (v15 == 0x10000) {
        esi16 = static_cast<uint32_t>(a5);
        bl17 = reinterpret_cast<unsigned char>(16 - a5);
        eax18 = 1;
        v19 = esi16;
        if (esi16 < 1) {
            addr_0x1009a51_10:
            ecx20 = 16 - eax18;
        } else {
            edi21 = esi16 - 1;
            do {
                ecx22 = static_cast<uint32_t>(bl17);
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(ebp8) + eax18 * 4 - 92) = 0 >> *reinterpret_cast<signed char*>(&ecx22);
                ecx23 = edi21;
                ++eax18;
                --edi21;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp8) + eax18 * 4 - 0xa4) = 1 << *reinterpret_cast<unsigned char*>(&ecx23);
            } while (eax18 <= esi16);
            if (eax18 > 16) 
                goto addr_0x1009a69_14; else 
                goto addr_0x1009a51_10;
        }
    } else {
        if (v24) {
            eax25 = 0;
            goto addr_0x1009b84_17;
        } else {
            edi26 = a6;
            esi27 = reinterpret_cast<void*>(1 << a5 << 1);
            ecx28 = 1 << a5 << 1 >> 2;
            while (ecx28) {
                --ecx28;
                *reinterpret_cast<void***>(edi26) = reinterpret_cast<void**>(0);
                edi26 = edi26 + 4;
                esi27 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi27) + 4);
            }
            ecx29 = reinterpret_cast<uint32_t>(esi27) & 3;
            while (ecx29) {
                --ecx29;
                *reinterpret_cast<void***>(edi26) = reinterpret_cast<void**>(0);
                ++edi26;
            }
            eax25 = 1;
            goto addr_0x1009b84_17;
        }
    }
    do {
        edx30 = 1 << *reinterpret_cast<unsigned char*>(&ecx20);
        ++eax18;
        --ecx20;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp8) + eax18 * 4 - 0xa4) = edx30;
    } while (eax18 <= 16);
    addr_0x1009a69_14:
    ecx31 = static_cast<uint32_t>(bl17);
    ebx32 = a6;
    edx33 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(ebp8) + esi16 * 4 - 88) >> *reinterpret_cast<signed char*>(&ecx31);
    v34 = ecx31;
    if (edx33 != 0x10000) {
        ecx35 = esi16;
        edi36 = reinterpret_cast<void***>(ebx32 + edx33 * 2);
        edx37 = (1 << *reinterpret_cast<unsigned char*>(&ecx35)) - edx33 << 1;
        ecx38 = (1 << *reinterpret_cast<unsigned char*>(&ecx35)) - edx33 << 1 >> 2;
        while (ecx38) {
            --ecx38;
            *edi36 = reinterpret_cast<void**>(0);
            edi36 = edi36 + 4;
        }
        ecx39 = edx37 & 3;
        while (ecx39) {
            --ecx39;
            *edi36 = reinterpret_cast<void**>(0);
            ++edi36;
        }
    }
    eax40 = reinterpret_cast<void*>(0);
    v41 = a3;
    v42 = reinterpret_cast<void*>(0);
    if (reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(a3) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(a3 == 0)) {
        addr_0x1009b80_33:
        eax25 = 1;
    } else {
        while (1) {
            if (!*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax40) + reinterpret_cast<uint32_t>(a4))) {
                addr_0x1009b70_35:
                eax40 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v42) + 1);
                v42 = eax40;
                if (reinterpret_cast<int32_t>(eax40) < reinterpret_cast<int32_t>(a3)) 
                    continue; else 
                    goto addr_0x1009b80_33;
            } else {
                ecx43 = reinterpret_cast<void*>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax40) + reinterpret_cast<uint32_t>(a4))) << 2);
                esi44 = reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(ebp8) + reinterpret_cast<uint32_t>(ecx43) - 92);
                edi45 = *esi44;
                edx46 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp8) + reinterpret_cast<uint32_t>(ecx43) - 0xa0) + edi45;
                if (*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax40) + reinterpret_cast<uint32_t>(a4)) > a5) {
                    ecx47 = v34;
                    al48 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax40) + reinterpret_cast<uint32_t>(a4)) - a5);
                    *esi44 = edx46;
                    ecx49 = v19;
                    v50 = al48;
                    edi51 = edi45 << *reinterpret_cast<unsigned char*>(&ecx49);
                    edx52 = reinterpret_cast<void***>(ebx32 + (edi45 >> *reinterpret_cast<signed char*>(&ecx47)) * 2);
                    do {
                        if (!*edx52) {
                            eax53 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v41) << 2);
                            *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(eax53) + reinterpret_cast<uint32_t>(a7) + 2) = reinterpret_cast<void**>(0);
                            *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(eax53) + reinterpret_cast<uint32_t>(a7)) = reinterpret_cast<void**>(0);
                            eax54 = reinterpret_cast<int32_t>(-reinterpret_cast<uint32_t>(v41));
                            v41 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v41) + 1);
                            *edx52 = *reinterpret_cast<void***>(&eax54);
                        }
                        ecx55 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(a7) - (reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<int16_t>(*edx52))) << 2));
                        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(&edi51)) < reinterpret_cast<signed char>(0)) {
                            ecx55 = ecx55 + 1 + 1;
                        }
                        edi51 = edi51 << 1;
                        v50 = reinterpret_cast<unsigned char>(v50 - 1);
                        edx52 = ecx55;
                    } while (v50);
                    *edx52 = *reinterpret_cast<void***>(&v42);
                    goto addr_0x1009b70_35;
                } else {
                    ecx56 = v19;
                    if (edx46 > 1 << *reinterpret_cast<unsigned char*>(&ecx56)) 
                        goto addr_0x1009b8a_45;
                    if (edi45 < edx46) 
                        goto addr_0x1009aef_47;
                }
            }
            addr_0x1009b12_48:
            *esi44 = edx46;
            goto addr_0x1009b70_35;
            addr_0x1009aef_47:
            eax57 = v42;
            ebx58 = reinterpret_cast<void***>(ebx32 + edi45 * 2);
            edi59 = ebx58;
            *reinterpret_cast<int16_t*>(&ebx58) = *reinterpret_cast<int16_t*>(&eax57);
            ebx60 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebx58) << 16);
            *reinterpret_cast<int16_t*>(&ebx60) = *reinterpret_cast<int16_t*>(&eax57);
            ecx61 = edx46 - edi45 >> 1;
            cf62 = __intrinsic();
            eax63 = ebx60;
            ebx32 = a6;
            while (ecx61) {
                --ecx61;
                *edi59 = eax63;
                edi59 = edi59 + 4;
                ++esi44;
            }
            ecx64 = ecx61 + ecx61 + cf62;
            while (*reinterpret_cast<int16_t*>(&ecx64)) {
                *reinterpret_cast<int16_t*>(&ecx64) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ecx64) - 1);
                *edi59 = eax63;
                edi59 = edi59 + 2;
                esi44 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(esi44) + 2);
            }
            goto addr_0x1009b12_48;
        }
    }
    addr_0x1009b83_54:
    addr_0x1009b84_17:
    return *reinterpret_cast<int16_t*>(&eax25);
    addr_0x1009b8a_45:
    eax25 = 0;
    goto addr_0x1009b83_54;
}

int32_t g10011dc = 0x77d4b57c;

int32_t g10011d8 = 0x77d48697;

int32_t g1001044 = 0x77f158a2;

int32_t g10011d4 = 0x77d4866d;

int32_t g10011d0 = 0x77d4c78e;

void fun_1002d83(void** a1, int32_t a2, void** a3, void** a4) {
    int32_t edi5;
    int32_t edi6;
    int32_t esi7;
    int32_t ebx8;
    int32_t esi9;
    int32_t v10;
    int32_t v11;
    int32_t ebx12;
    int32_t v13;
    int32_t v14;
    int32_t eax15;
    int32_t eax16;
    int32_t eax17;
    int32_t ecx18;
    int32_t v19;
    int32_t v20;
    int32_t edx21;
    int32_t v22;
    int32_t edx23;
    int32_t eax24;
    int32_t v25;
    int32_t v26;
    int32_t v27;

    edi5 = g10011dc;
    edi5(a1, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 44, edi6, esi7, ebx8);
    esi9 = v10 - v11;
    ebx12 = v13 - v14;
    edi5(a2, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 28, a1, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 44, edi6, esi7, ebx8);
    eax15 = reinterpret_cast<int32_t>(g10011d8(a1, a2, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 28, a1, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 44, edi6, esi7, ebx8));
    eax16 = reinterpret_cast<int32_t>(g1001044(eax15, 8, a1, a2, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 28, a1, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 44, edi6, esi7, ebx8));
    eax17 = reinterpret_cast<int32_t>(g1001044(eax15, 10, eax15, 8, a1, a2, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 28, a1, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 44, edi6, esi7, ebx8));
    g10011d4(a1, eax15, eax15, 10, eax15, 8, a1, a2, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 28, a1, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 44, edi6, esi7, ebx8);
    __asm__("cdq ");
    ecx18 = (v19 - v20 - esi9 - edx21 >> 1) + v22;
    if (ecx18 >= 0) {
        edx23 = ecx18 + esi9;
        if (edx23 > eax16) {
        }
    }
    __asm__("cdq ");
    eax24 = (v25 - v26 - ebx12 - edx23 >> 1) + v27;
    if (eax24 >= 0) {
        if (eax24 + ebx12 > eax17) {
        }
    }
    g10011d0();
    return;
}

int32_t g1001034 = 0x77dfc1b5;

int16_t fun_1001f37(uint32_t ecx, int32_t a2) {
    int32_t eax3;
    int32_t eax4;

    eax3 = reinterpret_cast<int32_t>(g1001024());
    if (!eax3) {
        eax4 = reinterpret_cast<int32_t>(g1001034(a2, 0, 0, 0, 0, 0, 0, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4, 0, 0, 0, 0));
        if (eax4) {
        }
        g100101c(a2, a2, 0, 0, 0, 0, 0, 0, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4, 0, 0, 0, 0);
    }
    return 0;
}

int32_t g1001018 = 0x77dfd11b;

int32_t g1001014 = 0x77dfc534;

int16_t fun_10019c3(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    void** esi6;
    void** eax7;
    int32_t eax8;
    void** v9;
    void** v10;
    void** v11;
    int32_t v12;
    int32_t eax13;
    int32_t eax14;
    int32_t eax15;
    void** ebp16;

    eax7 = reinterpret_cast<void**>(g1001058(40, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffffc, esi6));
    eax8 = reinterpret_cast<int32_t>(g1001010());
    if (eax8) {
        v9 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffff0);
        v10 = reinterpret_cast<void**>(0x1001274);
        g1001018(0, 0x1001274, v9);
        v11 = reinterpret_cast<void**>(0);
        eax13 = reinterpret_cast<int32_t>(g1001014(v12, 0, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 20, 0, 0, 0, 0, 0x1001274, v9));
        if (eax13) {
            eax14 = reinterpret_cast<int32_t>(g10011a0(2, 0, v12, 0, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 20, 0, 0, 0, 0, 0x1001274, v9));
            if (eax14) {
                eax15 = 1;
            } else {
                goto addr_0x1001a46_6;
            }
        } else {
            goto addr_0x1001a46_6;
        }
    } else {
        v9 = reinterpret_cast<void**>(0);
        v10 = reinterpret_cast<void**>(16);
        v11 = reinterpret_cast<void**>(0x4f5);
        goto addr_0x1001a46_6;
    }
    addr_0x1001a53_9:
    return *reinterpret_cast<int16_t*>(&eax15);
    addr_0x1001a46_6:
    fun_1003ebe(ecx, 0, v11, 0, 0, v10, v9, eax7, 40, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffffc, esi6, 1, 0, 0, 2, 0, ebp16, __return_address(), a2, a3, a4, a5);
    eax15 = 0;
    goto addr_0x1001a53_9;
}

int32_t g10011ac = 0x77d48d03;

int32_t g1001084 = 0x7c8227c7;

int16_t fun_10022ac(void** a1, void** a2, void** a3) {
    void** eax4;
    void** v5;
    void** edi6;
    int1_t zf7;
    void** edi8;
    void** v9;
    signed char al10;
    void** v11;
    int32_t edi12;
    void** eax13;
    void** eax14;
    void** edi15;
    void** esi16;
    void** ebx17;
    void** v18;
    void** v19;
    void** v20;
    int32_t eax21;
    void** v22;
    int32_t eax23;
    int32_t v24;
    int32_t eax25;
    void** eax26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    int32_t v33;
    int32_t v34;

    eax4 = g100b2d0;
    v5 = reinterpret_cast<void**>(0);
    edi6 = a3;
    *reinterpret_cast<void***>(a1) = reinterpret_cast<void**>(0);
    zf7 = reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edi6) == 35);
    if (!zf7 || (edi8 = edi6 + 1, v9 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(edi8)))), al10 = reinterpret_cast<signed char>(g10011ac()), v11 = edi8, edi12 = g10011a8, eax13 = reinterpret_cast<void**>(edi12()), eax14 = reinterpret_cast<void**>(edi12(eax13)), edi6 = eax14, al10 == 83)) {
        v9 = a2;
        v11 = a1;
        g1001064();
    } else {
        if (al10 == 87) {
            g1001078(a1, a2, eax13);
            goto addr_0x10023ef_5;
        }
        g1001088(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8, 0x10012b4, eax13);
        fun_10066cf(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8, 0x104, edi6, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8, 0x10012b4, eax13, v11, v9, edi15, esi16, ebx17, 0x104, v18, v19, 0, v20);
        eax21 = reinterpret_cast<int32_t>(g1001024(0x80000002, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8, 0, 0x20019, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef0, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8, 0x10012b4, eax13));
        if (eax21) 
            goto addr_0x10023ef_5;
        eax23 = reinterpret_cast<int32_t>(g100102c(v22, 0x1001271, 0, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffeec, a1, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0x118, 0x80000002, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8, 0, 0x20019, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef0, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8, 0x10012b4, eax13));
        if (eax23) 
            goto addr_0x10023c2_8;
        if (v24 != 2) 
            goto addr_0x10023af_10;
        eax25 = reinterpret_cast<int32_t>(g1001084(a1, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8, 0x104, v22, 0x1001271, 0, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffeec, a1, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0x118, 0x80000002, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8, 0, 0x20019, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef0, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8, 0x10012b4, eax13));
        if (!eax25) 
            goto addr_0x10023af_10; else 
            goto addr_0x100239d_12;
    }
    addr_0x10023e6_13:
    if (v5) {
        addr_0x10023f9_14:
        eax26 = fun_10064de(eax4, eax4);
        return *reinterpret_cast<int16_t*>(&eax26);
    } else {
        addr_0x10023ef_5:
        fun_10066cf(a1, a2, edi6, v11, v9, edi15, esi16, ebx17, 0x104, v27, v28, v5, v29, v30, v31, v32);
        goto addr_0x10023f9_14;
    }
    addr_0x10023af_10:
    if (v33 != 1) {
        addr_0x10023c2_8:
        g100101c(v34, v22, 0x1001271, 0, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffeec, a1, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0x118, 0x80000002, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8, 0, 0x20019, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef0, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8, 0x10012b4, eax13);
        goto addr_0x10023e6_13;
    } else {
        addr_0x10023b8_15:
        v5 = reinterpret_cast<void**>(1);
        goto addr_0x10023c2_8;
    }
    addr_0x100239d_12:
    fun_10021c4(a1, a2, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8, a1, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8, 0x104, v22, 0x1001271, 0, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffeec, a1, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0x118, 0x80000002, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8, 0, 0x20019, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef0, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8, 0x10012b4, eax13, v11, v9, edi15, esi16, ebx17, 0x104);
    goto addr_0x10023b8_15;
}

int16_t fun_1001942(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    void** ebx11;
    void** v12;
    void** esi13;
    void** esi14;
    void** v15;
    void** edi16;
    void* edi17;
    int32_t eax18;
    int32_t eax19;
    signed char* eax20;

    ebx11 = a1;
    v12 = esi13;
    esi14 = *reinterpret_cast<void***>(ebx11);
    v15 = edi16;
    edi17 = reinterpret_cast<void*>(0);
    while (*reinterpret_cast<int16_t*>(&eax18) = static_cast<int16_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(esi14))), fun_100662b(a2, eax18, v15, v12), 1) {
        if (!*reinterpret_cast<void***>(esi14)) 
            goto addr_0x1001972_4;
        ++esi14;
    }
    *reinterpret_cast<void***>(ebx11) = esi14;
    *reinterpret_cast<int16_t*>(&eax19) = static_cast<int16_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(esi14)));
    while ((fun_100662b(a2, eax19, v15, v12), 0) && *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi17) + reinterpret_cast<unsigned char>(esi14))) {
        edi17 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edi17) + 1);
        *reinterpret_cast<int16_t*>(&eax19) = static_cast<int16_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi17) + reinterpret_cast<unsigned char>(esi14)));
    }
    eax20 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi17) + reinterpret_cast<unsigned char>(esi14));
    if (*eax20) {
        *eax20 = 0;
        ++eax20;
    }
    addr_0x100199b_11:
    return *reinterpret_cast<int16_t*>(&eax20);
    addr_0x1001972_4:
    eax20 = reinterpret_cast<signed char*>(0);
    goto addr_0x100199b_11;
}

int16_t fun_1001e13(void** a1, void** a2, void** a3, void** a4) {
    int32_t eax5;
    int32_t eax6;

    if (!a1 || ((eax5 = reinterpret_cast<int32_t>(g100105c(a1)), eax5 < 3) || (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(a1 + 1) == 58) || *reinterpret_cast<void***>(a1 + 2) != 92) && (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(a1) == 92) || !reinterpret_cast<int1_t>(*reinterpret_cast<void***>(a1 + 1) == 92)))) {
        eax6 = 0;
    } else {
        eax6 = 1;
    }
    return *reinterpret_cast<int16_t*>(&eax6);
}

int32_t g100109c = 0x7c80b664;

int16_t fun_1002589(void** ecx, void** a2, void** a3, uint32_t a4, void** a5) {
    void* ebp6;
    void** eax7;
    void* v8;
    void* esi9;
    void** esi10;
    void* v11;
    void* edi12;
    void** edi13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** eax18;
    int32_t v19;
    int32_t ebx20;
    int32_t ebx21;
    int32_t eax22;
    void** v23;
    void** eax24;
    void** v25;
    signed char al26;
    void** v27;
    signed char al28;
    void** eax29;
    int32_t eax30;
    signed char* eax31;
    void** eax32;
    int32_t v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void** v44;
    void* eax45;
    void** eax46;

    ebp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax7 = g100b2d0;
    v8 = esi9;
    esi10 = a2;
    v11 = edi12;
    edi13 = a3;
    v14 = eax7;
    v15 = edi13;
    *reinterpret_cast<void***>(edi13) = reinterpret_cast<void**>(0);
    if (esi10 && *reinterpret_cast<void***>(esi10)) {
        v16 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffef8);
        v17 = g100c4a4;
        g1001060(v17, v16, 0x104);
        eax18 = reinterpret_cast<void**>(0);
        eax18 = *reinterpret_cast<void***>(esi10);
        if (eax18) {
            v19 = ebx20;
            ebx21 = g100105c;
            while (1) {
                eax22 = reinterpret_cast<int32_t>(g100109c(eax18, v19, v17, v16, 0x104));
                *reinterpret_cast<void***>(edi13) = *reinterpret_cast<void***>(esi10);
                if (eax22) {
                    *reinterpret_cast<void***>(edi13 + 1) = *reinterpret_cast<void***>(esi10 + 1);
                }
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi10) == 35)) 
                    goto addr_0x100268d_7;
                v23 = esi10;
                eax24 = reinterpret_cast<void**>(g10011a8(v23, eax18, v19, v17, v16, 0x104));
                v25 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax24))));
                al26 = reinterpret_cast<signed char>(g10011ac(v25, v23, eax18, v19, v17, v16, 0x104));
                if (al26 != 68) {
                    v27 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax24))));
                    al28 = reinterpret_cast<signed char>(g10011ac(v27, v25, v23, eax18, v19, v17, v16, 0x104));
                    if (al28 != 69) {
                        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax24) == 35)) {
                            addr_0x1002696_11:
                            eax18 = reinterpret_cast<void**>(g10011a8());
                            esi10 = eax18;
                            eax18 = *reinterpret_cast<void***>(esi10);
                            if (eax18) 
                                continue; else 
                                break;
                        } else {
                            addr_0x100268d_7:
                            eax29 = reinterpret_cast<void**>(g10011a8(edi13, eax18, v19, v17, v16, 0x104));
                            edi13 = eax29;
                            goto addr_0x1002696_11;
                        }
                    }
                } else {
                    fun_1006666(ecx, reinterpret_cast<int32_t>(ebp6) + 0xfffffef8, v25, v23, eax18, v19, v17, v16, 0x104);
                    v27 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffef8);
                    eax30 = reinterpret_cast<int32_t>(ebx21(v27, v25, v23, eax18, v19, v17, v16, 0x104));
                    eax31 = reinterpret_cast<signed char*>(g10011b0(reinterpret_cast<int32_t>(ebp6) - 0x108, reinterpret_cast<int32_t>(ebp6) + eax30 - 0x108, v27, v25, v23, eax18, v19, v17, v16, 0x104));
                    if (eax31 && *eax31 == 92) {
                        *eax31 = 0;
                    }
                }
                eax32 = v15;
                *reinterpret_cast<int16_t*>(&eax32) = fun_100168d(a4, edi13, reinterpret_cast<int32_t>(ebp6) + 0xfffffef8, v27, v25, v23, eax18, v19, v17, v16, 0x104);
                fun_10021c4(edi13, eax32, reinterpret_cast<int32_t>(ebp6) + 0xfffffef8, v27, v25, v23, eax18, v19, v17, v16, 0x104, v11, v8, v15, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44);
                eax45 = reinterpret_cast<void*>(ebx21(edi13, v27, v25, v23, eax18, v19, v17, v16, 0x104));
                edi13 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi13) + reinterpret_cast<uint32_t>(eax45));
                goto addr_0x1002696_11;
            }
        }
        *reinterpret_cast<void***>(edi13) = reinterpret_cast<void**>(0);
    }
    eax46 = fun_10064de(v14);
    return *reinterpret_cast<int16_t*>(&eax46);
}

int16_t fun_1001651(void** a1, void** a2, void** a3) {
    void** esi4;
    void** eax5;
    void** ecx6;
    void** edx7;

    esi4 = a2;
    eax5 = reinterpret_cast<void**>(0);
    ecx6 = esi4;
    if (!esi4) {
        addr_0x1001671_2:
        eax5 = reinterpret_cast<void**>(0x80070057);
    } else {
        edx7 = a1;
        do {
            if (!*reinterpret_cast<void***>(edx7)) 
                break;
            ++edx7;
            --esi4;
        } while (esi4);
        if (esi4) 
            goto addr_0x1001678_8; else 
            goto addr_0x1001671_2;
    }
    addr_0x1001683_10:
    return *reinterpret_cast<int16_t*>(&eax5);
    addr_0x1001678_8:
    if (a3) {
        *reinterpret_cast<void***>(a3) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx6) - reinterpret_cast<unsigned char>(esi4));
        goto addr_0x1001683_10;
    }
}

int32_t fun_10019a7(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15) {
    int32_t eax16;

    eax16 = 0;
    *reinterpret_cast<int16_t*>(&eax16) = fun_1003ebe(ecx, 0, 0x521, 0x1001271, 0, 64, 0, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
    return eax16;
}

int32_t g10011b8 = 0x77d4947c;

int32_t g100c4a0;

int32_t g10011b4 = 0x77d4ded3;

void fun_1002bec(int32_t a1, void** a2) {
    int32_t ebp3;
    int32_t eax4;

    eax4 = reinterpret_cast<int32_t>(g10011b8(a1, 0xfc, ebp3, __return_address()));
    g100c4a0 = eax4;
    g10011b4();
    goto 0xfc;
}

int32_t g1001108 = 0x7c801a24;

int16_t fun_100412e(void** ecx, void** a2, void** a3, void** a4, void** a5, int32_t a6) {
    void** eax7;
    int32_t v8;
    uint32_t eax9;
    uint32_t eax10;
    uint32_t eax11;
    uint32_t eax12;
    uint32_t v13;
    int32_t esi14;
    uint32_t eax15;
    uint32_t eax16;

    eax7 = a3;
    if (!(*reinterpret_cast<unsigned char*>(&eax7) & 8)) {
        v8 = 0x80000000;
        if (*reinterpret_cast<unsigned char*>(&eax7) & 3) {
            v8 = 0x40000000;
        }
        if (*reinterpret_cast<unsigned char*>(&eax7 + 1) & 1) 
            goto addr_0x100415a_5;
    } else {
        eax9 = 0xffffffff;
        goto addr_0x10041cf_7;
    }
    eax10 = reinterpret_cast<unsigned char>(eax7) & 0x200;
    eax11 = -eax10;
    eax12 = (eax11 - (eax11 + reinterpret_cast<uint1_t>(eax11 < eax11 + reinterpret_cast<uint1_t>(!!eax10))) & 2) + 3;
    addr_0x1004188_9:
    v13 = eax12;
    addr_0x100418b_10:
    esi14 = g1001108;
    eax9 = reinterpret_cast<uint32_t>(esi14());
    if (eax9 == 0xffffffff && v13 != 3) {
        fun_1002f6b(a2);
        *reinterpret_cast<int16_t*>(&eax9) = reinterpret_cast<int16_t>(esi14(a2, v8, 0, 0, v13, 0x80, 0));
    }
    addr_0x10041cf_7:
    return *reinterpret_cast<int16_t*>(&eax9);
    addr_0x100415a_5:
    if (!(*reinterpret_cast<unsigned char*>(&eax7 + 1) & 4)) {
        eax15 = reinterpret_cast<unsigned char>(eax7) & 0x200;
        eax16 = -eax15;
        eax12 = (eax16 - (eax16 + reinterpret_cast<uint1_t>(eax16 < eax16 + reinterpret_cast<uint1_t>(!!eax15))) & 0xfffffffe) + 4;
        goto addr_0x1004188_9;
    } else {
        v13 = 1;
        goto addr_0x100418b_10;
    }
}

struct s13 {
    int32_t f0;
    int32_t f4;
};

int16_t fun_1003ac7(int32_t a1) {
    void* ebp2;
    void** eax3;
    int32_t ebx4;
    void** v5;
    int32_t v6;
    struct s13* v7;
    int32_t edi8;
    int32_t ebx9;
    struct s13* eax10;
    void** eax11;
    int32_t v12;
    int32_t esi13;
    struct s13* eax14;
    int32_t v15;
    int32_t eax16;
    int32_t edi17;
    int32_t eax18;
    int32_t eax19;

    ebp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax3 = g100b2d0;
    ebx4 = g10011a4;
    v5 = eax3;
    v6 = a1;
    v7 = reinterpret_cast<struct s13*>(0);
    ebx4(reinterpret_cast<int32_t>(ebp2) - 24, "UPDFILE%lu", 0, edi8, ebx9);
    eax10 = reinterpret_cast<struct s13*>(g10010dc());
    if (!eax10) {
        addr_0x1003ba0_2:
        eax11 = fun_10064de(v5, v5);
        return *reinterpret_cast<int16_t*>(&eax11);
    } else {
        v12 = esi13;
        while (g10010d4(0, eax10, v12), eax14 = reinterpret_cast<struct s13*>(g1001198()), !!eax14) {
            v15 = eax14->f0;
            eax16 = eax14->f4;
            edi17 = reinterpret_cast<int32_t>(eax14 + 1);
            eax18 = reinterpret_cast<int32_t>(g100105c(edi17));
            eax19 = reinterpret_cast<int32_t>(v6(v15, eax16, edi17, eax18 + edi17 + 1, edi17));
            if (!eax19) 
                goto addr_0x1003b95_6;
            g10010cc(eax14, v15, eax16, edi17, eax18 + edi17 + 1, edi17);
            v7 = reinterpret_cast<struct s13*>(reinterpret_cast<int32_t>(v7) + 1);
            ebx4(reinterpret_cast<int32_t>(ebp2) - 24, "UPDFILE%lu", v7, eax14, v15, eax16, edi17, eax18 + edi17 + 1, edi17);
            eax10 = reinterpret_cast<struct s13*>(g10010dc(0, reinterpret_cast<int32_t>(ebp2) - 24, 10, eax14, v15, eax16, edi17, eax18 + edi17 + 1, edi17));
            if (!eax10) 
                goto addr_0x1003b84_8;
        }
    }
    g100ba5c = reinterpret_cast<void**>(0x80070714);
    addr_0x1003b9f_11:
    goto addr_0x1003ba0_2;
    addr_0x1003b95_6:
    g10010cc(eax14, v15, eax16, edi17, eax18 + edi17 + 1, edi17);
    goto addr_0x1003b9f_11;
    addr_0x1003b84_8:
    goto addr_0x1003b9f_11;
}

int16_t fun_1006a45(int32_t a1, void** a2) {
    int32_t eax3;

    eax3 = reinterpret_cast<int32_t>(g1001188(a1, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 8, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 12, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 16));
    if (eax3) {
        *reinterpret_cast<int16_t*>(&eax3) = reinterpret_cast<int16_t>(g100118c());
        if (a2) {
            *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(0);
        }
    }
    return *reinterpret_cast<int16_t*>(&eax3);
}

int16_t fun_100216f(void* a1) {
    void* eax2;
    unsigned char al3;
    uint32_t eax4;

    eax2 = a1;
    if (!(*reinterpret_cast<unsigned char*>(&eax2) & 1)) {
        al3 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax2) & 2);
        *reinterpret_cast<unsigned char*>(&eax2) = -al3;
        eax4 = reinterpret_cast<uint32_t>(eax2) - (reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(eax2) < reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint1_t>(!!al3))) & 0x101;
    } else {
        eax4 = 0x104;
    }
    return *reinterpret_cast<int16_t*>(&eax4);
}

void fun_1002d03(void** a1, int32_t a2, void* a3, int32_t a4, int32_t a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16) {
    int1_t zf17;
    uint32_t eax18;
    void** eax19;
    int1_t zf20;

    zf17 = (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&g100c494) + 1) & 8) == 0;
    if (zf17) {
        eax18 = fun_100221e();
        if (eax18 == 2 || (eax19 = a1, (reinterpret_cast<unsigned char>(eax19) & 0xff000000) == 0xaa000000) && *reinterpret_cast<unsigned char*>(&eax19) & 1) {
            g100ba5c = reinterpret_cast<void**>(0xbc2);
            goto addr_0x1002d51_4;
        } else {
            zf20 = (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&g100c494) + 1) & 2) == 0;
            if (zf20) {
                addr_0x1002d51_4:
                return;
            } else {
                addr_0x1002d40_6:
                g100ba5c = eax19;
                goto addr_0x1002d51_4;
            }
        }
    } else {
        eax19 = a1;
        goto addr_0x1002d40_6;
    }
}

struct s14 {
    signed char[4] pad4;
    int32_t f4;
    signed char[4] pad12;
    int32_t f12;
    signed char[4] pad20;
    void** f20;
    signed char[3] pad24;
    int16_t f24;
    int16_t f26;
    int16_t f28;
    int16_t f30;
    int16_t f32;
};

int16_t g100c488;

int16_t g100c48a;

void fun_10032a1(struct s14* a1) {
    int32_t v2;
    int32_t v3;
    int32_t ebp4;
    int32_t v5;
    int32_t esi6;
    int32_t v7;
    int32_t edi8;
    int32_t* esi9;
    int32_t ecx10;
    int32_t* edi11;
    int32_t v12;
    int32_t edi13;
    int32_t v14;

    v2 = reinterpret_cast<int32_t>(__return_address());
    v3 = ebp4;
    v5 = esi6;
    v7 = edi8;
    esi9 = reinterpret_cast<int32_t*>(0x100c17c);
    ecx10 = 0xc4;
    edi11 = reinterpret_cast<int32_t*>(0x100be6c);
    while (ecx10) {
        --ecx10;
        *edi11 = *esi9;
        ++edi11;
        ++esi9;
    }
    v12 = a1->f12;
    edi13 = g1001088;
    edi13(0x100c17c, v12, v7, v5, v3, v2);
    v14 = a1->f4;
    edi13();
    edi13();
    g100c488 = a1->f30;
    g100c48a = a1->f32;
    goto v14;
}

struct s15 {
    signed char[3] pad3;
    void** f3;
};

void** g100c48c;

struct s16 {
    signed char[3] pad3;
    void** f3;
};

struct s17 {
    signed char[1] pad1;
    signed char f1;
};

void** g100ba54;

int32_t g1001104 = 0x7c81caa2;

int16_t fun_100359c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void* ebp7;
    void** eax8;
    void** v9;
    void** ebx10;
    void** v11;
    void** esi12;
    void** v13;
    void** edi14;
    void** v15;
    void** v16;
    void** ebx17;
    void** eax18;
    void** ecx19;
    void** edx20;
    void** esi21;
    void** eax22;
    signed char v23;
    signed char v24;
    int32_t esi25;
    void** v26;
    signed char v27;
    signed char al28;
    int32_t eax29;
    int32_t eax30;
    signed char v31;
    signed char v32;
    struct s15* eax33;
    signed char v34;
    void** edi35;
    int32_t eax36;
    void** eax37;
    void** v38;
    int32_t eax39;
    signed char v40;
    int32_t eax41;
    signed char v42;
    signed char v43;
    signed char v44;
    signed char v45;
    signed char al46;
    int32_t eax47;
    int32_t eax48;
    signed char v49;
    uint32_t eax50;
    signed char v51;
    signed char v52;
    signed char v53;
    signed char al54;
    uint32_t eax55;
    signed char v56;
    signed char v57;
    int32_t eax58;
    signed char v59;
    signed char v60;
    signed char al61;
    int32_t eax62;
    int32_t eax63;
    int32_t eax64;
    int32_t eax65;
    int32_t eax66;
    signed char v67;
    struct s16* eax68;
    signed char v69;
    void** edi70;
    int32_t eax71;
    void** eax72;
    signed char v73;
    signed char al74;
    void* eax75;
    void** esi76;
    void** v77;
    void** v78;
    void** v79;
    void** eax80;
    int1_t zf81;
    int1_t zf82;
    void** v83;
    struct s17* eax84;
    void** v85;
    void** v86;
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** v92;
    void** eax93;

    ebp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax8 = g100b2d0;
    v9 = ebx10;
    v11 = esi12;
    v13 = edi14;
    v15 = eax8;
    v16 = reinterpret_cast<void**>(1);
    if (!(!a1 || !*reinterpret_cast<void***>(a1))) {
        ebx17 = a1;
        do {
            if (!v16) 
                goto addr_0x10036a4_5;
            eax18 = ebx17;
            while (*reinterpret_cast<void***>(eax18) == 32 || (*reinterpret_cast<void***>(eax18) == 9 || (*reinterpret_cast<void***>(eax18) == 13 || (*reinterpret_cast<void***>(eax18) == 10 || (*reinterpret_cast<void***>(eax18) == 11 || reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax18) == 12)))))) {
                eax18 = reinterpret_cast<void**>(g10011a8(eax18));
            }
            if (!*reinterpret_cast<void***>(eax18)) 
                goto addr_0x10036a4_5;
            ecx19 = reinterpret_cast<void**>(0);
            edx20 = reinterpret_cast<void**>(0);
            ebx17 = eax18;
            esi21 = reinterpret_cast<void**>(0);
            do {
                if (edx20) {
                    if (esi21) 
                        break;
                } else {
                    if (*reinterpret_cast<void***>(ebx17) == 32) 
                        break;
                    if (*reinterpret_cast<void***>(ebx17) == 9) 
                        break;
                    if (*reinterpret_cast<void***>(ebx17) == 13) 
                        break;
                    if (*reinterpret_cast<void***>(ebx17) == 10) 
                        break;
                    if (*reinterpret_cast<void***>(ebx17) == 11) 
                        break;
                    if (*reinterpret_cast<void***>(ebx17) == 12) 
                        break;
                }
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebx17) == 34)) {
                    if (reinterpret_cast<unsigned char>(ecx19) >= reinterpret_cast<unsigned char>(0x103)) 
                        goto addr_0x10039a1_22;
                    *reinterpret_cast<void***>(reinterpret_cast<int32_t>(ebp7) + reinterpret_cast<unsigned char>(ecx19) + 0xfffffef8) = *reinterpret_cast<void***>(ebx17);
                    ++ecx19;
                    ++ebx17;
                } else {
                    eax22 = ebx17 + 1;
                    if (*reinterpret_cast<void***>(eax22) == 34) {
                        if (reinterpret_cast<unsigned char>(ecx19) >= reinterpret_cast<unsigned char>(0x103)) 
                            goto addr_0x10039a1_22;
                        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp7) + reinterpret_cast<unsigned char>(ecx19) + 0xfffffef8) = 34;
                        ++ecx19;
                        ebx17 = ebx17 + 1 + 1;
                    } else {
                        if (edx20) {
                            esi21 = reinterpret_cast<void**>(1);
                        } else {
                            edx20 = reinterpret_cast<void**>(1);
                        }
                        ebx17 = eax22;
                    }
                }
            } while (*reinterpret_cast<void***>(ebx17));
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp7) + reinterpret_cast<unsigned char>(ecx19) + 0xfffffef8) = 0;
            if (!edx20) {
                if (esi21) 
                    goto addr_0x100369d_34;
            } else {
                if (!esi21) 
                    goto addr_0x100369d_34;
            }
            if (v23 == 47) 
                goto addr_0x1003708_37;
            if (v24 != 45) 
                goto addr_0x10039a1_22;
            addr_0x1003708_37:
            esi25 = g10011ac;
            v26 = reinterpret_cast<void**>(static_cast<int32_t>(v27));
            al28 = reinterpret_cast<signed char>(esi25(v26));
            eax29 = al28 - 63;
            if (!eax29) 
                goto addr_0x1003a5f_39;
            eax30 = eax29 - 4;
            if (!eax30) {
                if (v31) {
                    if (v32 != 58) {
                        addr_0x1003753_43:
                        v16 = reinterpret_cast<void**>(0);
                        continue;
                    } else {
                        eax33 = reinterpret_cast<struct s15*>(0);
                        *reinterpret_cast<unsigned char*>(&eax33) = static_cast<unsigned char>(reinterpret_cast<uint1_t>(v34 == 34));
                        edi35 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + reinterpret_cast<unsigned char>(&eax33->f3) + 0xfffffef8);
                        eax36 = reinterpret_cast<int32_t>(g100105c(edi35, v26));
                        if (!eax36 || ((*reinterpret_cast<int16_t*>(&eax36) = fun_100662b(edi35, 91, edi35, v26), !!eax36) && (*reinterpret_cast<int16_t*>(&eax36) = fun_100662b(edi35, 93, edi35, v26), eax36 == 0) || ((*reinterpret_cast<int16_t*>(&eax36) = fun_100662b(edi35, 93, edi35, v26), !!eax36) && (*reinterpret_cast<int16_t*>(&eax36) = fun_100662b(edi35, 91, edi35, v26), eax36 == 0) || (eax37 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) - 0x110), v38 = reinterpret_cast<void**>(&eax33->f3), *reinterpret_cast<int16_t*>(&eax37) = fun_1003517(edi35, eax37, edi35, v26), !eax37)))) {
                            addr_0x1003a33_45:
                            v16 = reinterpret_cast<void**>(0);
                        } else {
                            g1001088(0x100caa2, reinterpret_cast<int32_t>(ebp7) + (reinterpret_cast<unsigned char>(v38) + reinterpret_cast<unsigned char>(&eax33->f3)) + 0xfffffef8, edi35, v26);
                        }
                    }
                } else {
                    g100c884 = reinterpret_cast<void**>(1);
                    continue;
                }
            } else {
                eax39 = eax30 - 1;
                if (!eax39) {
                    addr_0x10038fb_49:
                    if (v40 != 58) 
                        goto addr_0x1003753_43; else 
                        goto addr_0x1003908_50;
                } else {
                    eax41 = eax39 - 10;
                    if (!eax41) {
                        if (v42) {
                            if (v43 != 58) 
                                goto addr_0x1003753_43;
                            if (v44) {
                                do {
                                    al46 = reinterpret_cast<signed char>(g10011ac(static_cast<int32_t>(v45), v26));
                                    eax47 = al46 - 69;
                                    if (!eax47) {
                                        g100c88c = reinterpret_cast<void**>(1);
                                    } else {
                                        eax48 = eax47 - 1 - 1;
                                        if (!eax48) {
                                            g100c890 = reinterpret_cast<void**>(1);
                                        } else {
                                            if (!(eax48 - 15)) {
                                                g100c894 = reinterpret_cast<void**>(1);
                                            } else {
                                                v16 = reinterpret_cast<void**>(0);
                                            }
                                        }
                                    }
                                } while (v49);
                                continue;
                            }
                        } else {
                            g100c88c = reinterpret_cast<void**>(1);
                            continue;
                        }
                    } else {
                        eax50 = eax41 - reinterpret_cast<unsigned char>(3);
                        if (!eax50) {
                            if (!v51) {
                                addr_0x1003868_68:
                                g100c898 = 2;
                                continue;
                            } else {
                                if (v52 != 58) 
                                    goto addr_0x1003753_43;
                                al54 = reinterpret_cast<signed char>(esi25(static_cast<int32_t>(v53), v26));
                                if (al54 == 49) 
                                    goto addr_0x1003868_68; else 
                                    goto addr_0x100385c_71;
                            }
                        } else {
                            eax55 = eax50 - 1;
                            if (!eax55) {
                                if (v56) {
                                    if (v57 != 58) {
                                        eax58 = reinterpret_cast<int32_t>(g10010ac("RegServer", reinterpret_cast<int32_t>(ebp7) - 0x107, v26));
                                        if (eax58) {
                                            goto addr_0x1003753_43;
                                        }
                                    } else {
                                        g100c48c = reinterpret_cast<void**>(1);
                                        if (v59) {
                                            do {
                                                al61 = reinterpret_cast<signed char>(g10011ac(static_cast<int32_t>(v60), v26));
                                                eax62 = al61 - 65;
                                                if (!eax62) {
                                                    g100c48c = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(g100c48c) | 2);
                                                } else {
                                                    eax63 = eax62 - 3;
                                                    if (!eax63) {
                                                        g100cba8 = g100cba8 | 64;
                                                        continue;
                                                    } else {
                                                        eax64 = eax63 - 5;
                                                        if (!eax64) {
                                                            g100c48c = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(g100c48c) & 0xfffffffd);
                                                        } else {
                                                            eax65 = eax64 - 5;
                                                            if (!eax65) {
                                                                g100c48c = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(g100c48c) & 0xfffffffe);
                                                            } else {
                                                                eax66 = eax65 - 1 - 1;
                                                                if (!eax66) {
                                                                    *reinterpret_cast<unsigned char*>(&g100cba8) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&g100cba8) | 0x80);
                                                                    continue;
                                                                } else {
                                                                    if (!(eax66 - 3)) {
                                                                        g100c48c = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(g100c48c) | 4);
                                                                    } else {
                                                                        v16 = reinterpret_cast<void**>(0);
                                                                        continue;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                                g100c888 = reinterpret_cast<void**>(1);
                                            } while (v67);
                                            continue;
                                        }
                                    }
                                } else {
                                    g100c48c = reinterpret_cast<void**>(3);
                                    g100c888 = reinterpret_cast<void**>(1);
                                    continue;
                                }
                            } else {
                                if (!(eax55 - 1 - 1)) 
                                    goto addr_0x10038fb_49; else 
                                    goto addr_0x1003753_43;
                            }
                        }
                    }
                }
            }
            addr_0x1003a3a_97:
            continue;
            addr_0x1003908_50:
            eax68 = reinterpret_cast<struct s16*>(0);
            *reinterpret_cast<unsigned char*>(&eax68) = static_cast<unsigned char>(reinterpret_cast<uint1_t>(v69 == 34));
            edi70 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + reinterpret_cast<unsigned char>(&eax68->f3) + 0xfffffef8);
            eax71 = reinterpret_cast<int32_t>(g100105c(edi70, v26));
            if (!eax71) 
                goto addr_0x1003a33_45;
            eax72 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) - 0x110);
            v38 = reinterpret_cast<void**>(&eax68->f3);
            *reinterpret_cast<int16_t*>(&eax72) = fun_1003517(edi70, eax72, edi70, v26);
            if (!eax72) 
                goto addr_0x1003a33_45;
            al74 = reinterpret_cast<signed char>(g10011ac(static_cast<int32_t>(v73), edi70, v26));
            if (al74 != 84) {
                eax75 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(v38) + reinterpret_cast<unsigned char>(&eax68->f3));
                esi76 = reinterpret_cast<void**>(0x100c89a);
            } else {
                eax75 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(v38) + reinterpret_cast<unsigned char>(&eax68->f3));
                esi76 = reinterpret_cast<void**>(0x100c99e);
            }
            g1001088(esi76, reinterpret_cast<int32_t>(ebp7) + reinterpret_cast<uint32_t>(eax75) + 0xfffffef8, static_cast<int32_t>(v73), edi70, v26);
            fun_10066cf(esi76, 0x104, 0x1001271, esi76, reinterpret_cast<int32_t>(ebp7) + reinterpret_cast<uint32_t>(eax75) + 0xfffffef8, static_cast<int32_t>(v73), edi70, v26, v13, v11, v9, v38, v16, v77, v78, v79);
            fun_1002c57(esi76, esi76, reinterpret_cast<int32_t>(ebp7) + reinterpret_cast<uint32_t>(eax75) + 0xfffffef8, static_cast<int32_t>(v73), edi70, v26);
            if (1) 
                goto addr_0x1003a3a_97; else 
                goto addr_0x10039a1_22;
            addr_0x100385c_71:
            if (al54 == 65) {
                g100c898 = 1;
            } else {
                if (al54 != 85) 
                    goto addr_0x1003753_43; else 
                    goto addr_0x1003868_68;
            }
        } while (*reinterpret_cast<void***>(ebx17));
        goto addr_0x1003763_106;
    }
    addr_0x1003a8d_107:
    eax80 = fun_10064de(v15);
    return *reinterpret_cast<int16_t*>(&eax80);
    addr_0x10036a4_5:
    zf81 = g100c88c == 0;
    if (!zf81 && (zf82 = g100c99e == 0, zf82)) {
        v83 = g100c4a4;
        eax84 = reinterpret_cast<struct s17*>(g1001060(v83, 0x100c99e, 0x104));
        if (!eax84) {
            addr_0x1003a7c_109:
        } else {
            *reinterpret_cast<int16_t*>(&eax84) = fun_1006752(0x100c99e, 92, v83, 0x100c99e, 0x104, v13, v11);
            eax84->f1 = 0;
        }
    }
    goto addr_0x1003a8d_107;
    addr_0x10039a1_22:
    goto addr_0x1003a8d_107;
    addr_0x100369d_34:
    goto addr_0x10036a4_5;
    addr_0x1003a5f_39:
    fun_10019a7(ecx19, v26, v13, v11, v9, v38, v16, v85, v86, v87, v88, v89, v90, v91, v92);
    eax93 = g100ba54;
    if (eax93) {
        g10010e4(eax93, v26);
    }
    g1001104(0, v26);
    goto addr_0x1003a7c_109;
    addr_0x1003763_106:
    goto addr_0x10036a4_5;
}

signed char g100ba80;

int16_t fun_1004e73(void** ecx, void** a2, int32_t a3, signed char* a4, void** a5, void** a6, void** a7, void** a8) {
    void** eax9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    int32_t esi14;
    void** eax15;
    void** eax16;
    void** v17;
    void** eax18;
    void** v19;
    int1_t zf20;
    int32_t eax21;
    int32_t edi22;
    signed char* eax23;
    int1_t zf24;
    signed char* eax25;
    void** eax26;
    int1_t zf27;
    int32_t eax28;
    void** edi29;
    void** esi30;
    void** ebx31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;

    eax9 = reinterpret_cast<void**>(g1001184());
    if (!eax9) {
        v10 = reinterpret_cast<void**>(0);
        v11 = reinterpret_cast<void**>(16);
        v12 = reinterpret_cast<void**>(0);
        v13 = reinterpret_cast<void**>(0x4c2);
    } else {
        esi14 = g10010d0;
        v10 = reinterpret_cast<void**>(0x100b26c);
        v11 = eax9;
        eax15 = reinterpret_cast<void**>(esi14(v11, 0x100b26c));
        if (!eax15 || ((eax16 = reinterpret_cast<void**>(esi14(eax9, 0xc3, v11, 0x100b26c)), v17 = eax16, eax16 == 0) || (eax18 = reinterpret_cast<void**>(esi14(eax9, "SHGetPathFromIDList", eax9, 0xc3, v11, 0x100b26c)), v19 = eax18, eax18 == 0))) {
            v12 = eax9;
            g1001194(v12, v11, 0x100b26c);
            v13 = reinterpret_cast<void**>(16);
        } else {
            zf20 = g100ba80 == 0;
            if (zf20 && ((g1001130(0x104, 0x100ba80, eax9, "SHGetPathFromIDList", eax9, 0xc3, v11, 0x100b26c), eax21 = reinterpret_cast<int32_t>(g100105c(0x100ba80, 0x104, 0x100ba80, eax9, "SHGetPathFromIDList", eax9, 0xc3, v11, 0x100b26c)), edi22 = g10011b0, eax23 = reinterpret_cast<signed char*>(edi22(0x100ba80, eax21 + 0x100ba80, 0x100ba80, 0x104, 0x100ba80, eax9, "SHGetPathFromIDList", eax9, 0xc3, v11, 0x100b26c)), zf24 = *eax23 == 92, zf24) && (eax25 = reinterpret_cast<signed char*>(edi22(0x100ba80, eax23, 0x100ba80, eax21 + 0x100ba80, 0x100ba80, 0x104, 0x100ba80, eax9, "SHGetPathFromIDList", eax9, 0xc3, v11, 0x100b26c)), *eax25 != 58))) {
                *eax23 = 0;
            }
            *a4 = 0;
            eax26 = reinterpret_cast<void**>(eax15(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 52, eax9, "SHGetPathFromIDList", eax9, 0xc3, v11, 0x100b26c));
            if (eax26) {
                v19(eax26, 0x100ba80, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 52, eax9, "SHGetPathFromIDList", eax9, 0xc3, v11, 0x100b26c);
                zf27 = g100ba80 == 0;
                if (!zf27) {
                    g1001088(a4, 0x100ba80, eax26, 0x100ba80, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 52, eax9, "SHGetPathFromIDList", eax9, 0xc3, v11, 0x100b26c);
                }
                v17(eax26, eax26, 0x100ba80, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 52, eax9, "SHGetPathFromIDList", eax9, 0xc3, v11, 0x100b26c);
            }
            g1001194(eax9, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 52, eax9, "SHGetPathFromIDList", eax9, 0xc3, v11, 0x100b26c);
            eax28 = 0;
            *reinterpret_cast<unsigned char*>(&eax28) = static_cast<unsigned char>(reinterpret_cast<uint1_t>(!!*a4));
            goto addr_0x1004fa3_12;
        }
    }
    fun_1003ebe(ecx, a2, v13, 0, v12, v11, v10, 0x100b244, edi29, esi30, ebx31, v32, v33, v34, v35, v36, v37, v38, v39, eax9, v17, v19);
    eax28 = 0;
    addr_0x1004fa3_12:
    return *reinterpret_cast<int16_t*>(&eax28);
}

struct s18 {
    signed char[20] pad20;
    void** f20;
};

int16_t fun_10044bd(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    struct s18* eax9;
    void** esi10;
    void** eax11;
    void** edi12;
    void** esi13;
    void** ebx14;
    void** ebp15;
    int32_t eax16;
    int32_t eax17;
    void** eax18;

    eax9 = reinterpret_cast<struct s18*>(g100105c());
    esi10 = reinterpret_cast<void**>(&eax9->f20);
    eax11 = reinterpret_cast<void**>(g1001050());
    if (eax11) {
        g1001088(eax11, a2);
        fun_10066cf(eax11, esi10, 0x10013e4, eax11, a2, 64, esi10, a2, edi12, esi13, ebx14, ebp15, __return_address(), a2, a3, a4);
        eax16 = reinterpret_cast<int32_t>(g1001108(eax11, 0x40000000, 0, 0, 1, 0x4000080, 0, eax11, a2));
        g100104c(eax11, eax11, 0x40000000, 0, 0, 1, 0x4000080, 0, eax11, a2);
        if (eax16 == -1 || ((g10010e4(eax16, eax11, eax11, 0x40000000, 0, 0, 1, 0x4000080, 0, eax11, a2), eax17 = reinterpret_cast<int32_t>(g1001080(a2, eax16, eax11, eax11, 0x40000000, 0, 0, 1, 0x4000080, 0, eax11, a2)), eax17 == -1) || !(*reinterpret_cast<unsigned char*>(&eax17) & 16))) {
            addr_0x10044f4_3:
            eax18 = fun_1003aa1(64, esi10, a2, edi12, esi13, ebx14, ebp15, __return_address(), a2, a3, a4, a5);
            g100ba5c = eax18;
        } else {
            g100ba5c = reinterpret_cast<void**>(0);
        }
        goto esi13;
    } else {
        fun_1003ebe(ecx, 0, 0x4b5, 0, 0, 16, 0, 64, esi10, a2, edi12, esi13, ebx14, ebp15, __return_address(), a2, a3, a4, a5, a6, a7, a8);
        goto addr_0x10044f4_3;
    }
}

int32_t g10011c8 = 0x77d4cefd;

int32_t g10011c4 = 0x77d4bc8e;

int32_t g10011c0 = 0x77d4bcbd;

int16_t fun_1002c91(void** a1, void** a2, void** a3) {
    void* ebp4;
    int32_t esi5;
    int32_t v6;
    int32_t eax7;
    void* v8;
    int32_t eax9;
    int32_t v10;

    ebp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    esi5 = g10011c8;
    v6 = 0;
    do {
        addr_0x1002caa_2:
        eax7 = reinterpret_cast<int32_t>(g10011c4());
        if (!eax7) 
            break;
        v8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp4) - 32);
        eax9 = reinterpret_cast<int32_t>(esi5(v8, 0, 0, 0, 1));
        if (!eax9) 
            goto addr_0x1002caa_2;
        do {
            if (v10 != 18) {
                g10011c0(reinterpret_cast<int32_t>(ebp4) - 32, v8, 0, 0, 0, 1);
            } else {
                v6 = 1;
            }
            eax7 = reinterpret_cast<int32_t>(esi5(reinterpret_cast<int32_t>(ebp4) - 32, 0, 0, 0, 1, v8, 0, 0, 0, 1));
        } while (eax7);
    } while (!v6);
    return *reinterpret_cast<int16_t*>(&eax7);
}

void** fun_10032ff(void** a1, void** a2, void** a3, void** a4);

int32_t g10011e4 = 0x77d552a4;

int32_t g10011f8 = 0x77d4d4de;

void** fun_100502e(void** ecx, void* a2, struct s14* a3);

struct s19 {
    signed char[1300] pad1300;
    void** f1300;
};

struct s19* g100bba8;

void** g100bc38;

int32_t g10011cc = 0x77d4e2ae;

void** fun_1005190(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12) {
    void** eax13;
    void** eax14;
    int32_t edi15;
    void** v16;
    int32_t eax17;
    int32_t ebx18;
    void** v19;
    void** v20;
    void** eax21;
    void** eax22;
    void** edi23;
    int32_t eax24;
    struct s19* eax25;
    void** v26;
    void** eax27;
    void** v28;
    void** edi29;
    void** esi30;
    void** ebx31;
    int1_t zf32;
    int1_t zf33;
    int1_t zf34;
    void** v35;

    eax13 = fun_10032ff(__return_address(), a2, a3, a4);
    if (!eax13) {
        return eax13;
    }
    eax14 = g100ba4c;
    if (eax14) {
        edi15 = g10011e4;
        v16 = eax14;
        eax17 = reinterpret_cast<int32_t>(edi15(v16, 0x842, 0));
        ebx18 = g10011f8;
        ebx18(eax17, v16, 0x842, 0);
        v19 = g100ba4c;
        eax14 = reinterpret_cast<void**>(edi15(v19, 0x841, 5, eax17, v16, 0x842, 0));
        ebx18(eax14, v19, 0x841, 5, eax17, v16, 0x842, 0);
    }
    v20 = g100bba0;
    *reinterpret_cast<int16_t*>(&eax14) = fun_10042a4(v20);
    if (!eax14) 
        goto addr_0x10051e1_6;
    eax21 = fun_1006aa4(fun_1003275, fun_100328c, fun_10041d8, fun_1002fe5, fun_1003072, fun_1003108, fun_1003165, 1, 0x100bba8);
    if (!eax21 || (eax22 = fun_1007af5(ecx, eax21, 0x100b20c, 0x1001271, 0, fun_100502e, 0, 0x100bba0), edi23 = eax22, !!edi23) && (eax24 = fun_100735b(ecx, eax21), ecx = eax21, !eax24)) {
        eax25 = g100bba8;
        v26 = reinterpret_cast<void**>(&eax25->f1300);
    } else {
        addr_0x1005272_9:
        eax27 = g100bba0;
        if (eax27) {
            g10010cc(ecx, eax27);
            g100bba0 = reinterpret_cast<void**>(0);
            goto addr_0x1005288_11;
        }
    }
    addr_0x1005265_12:
    v28 = g100ba4c;
    fun_1003ebe(ecx, v28, v26, 0, 0, 16, 0, edi29, esi30, ebx31, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    edi23 = reinterpret_cast<void**>(0);
    goto addr_0x1005272_9;
    addr_0x1005288_11:
    if (!edi23 && (zf32 = g100bc38 == 0, zf32)) {
        fun_1003ebe(ecx, 0, 0x4f8, 0, 0, 16, 0, edi29, esi30, ebx31, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    }
    zf33 = (*reinterpret_cast<unsigned char*>(&g100c898) & 1) == 0;
    if (zf33 && (zf34 = (*reinterpret_cast<unsigned char*>(&g100c494) & 1) == 0, zf34)) {
        v35 = g100ba4c;
        g10011cc(ecx, v35, 0xfa1, edi23, 0);
    }
    return edi23;
    addr_0x10051e1_6:
    v26 = reinterpret_cast<void**>(0x4ba);
    goto addr_0x1005265_12;
}

int32_t g100112c = 0x7c802367;

int32_t g1001128 = 0x7c802530;

int32_t g1001124 = 0x7c81aae7;

int16_t fun_1004cae(void** a1, void** a2) {
    void** eax3;
    void** eax4;
    void** edi5;
    int32_t eax6;
    void** esi7;
    void** eax8;
    void** eax9;
    int1_t zf10;
    unsigned char al11;
    void** v12;
    int32_t edi13;
    int1_t zf14;
    void** v15;

    eax3 = g100b2d0;
    if (!a1) {
        addr_0x1004dd2_2:
        eax4 = fun_10064de(eax3, eax3);
        return *reinterpret_cast<int16_t*>(&eax4);
    } else {
        eax6 = reinterpret_cast<int32_t>(g100112c(16, a1, 16, 16, 16, 32, 16, 16, a2, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffde4, edi5));
        if (eax6) 
            goto addr_0x1004d05_16;
    }
    eax8 = fun_1003aa1(16, a1, 16, 16, 16, 32, 16, 16, a2, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffde4, edi5, esi7, 16, a1, 16, 16, 16, 32, 16, 16, a2, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffde4, edi5, esi7);
    g100ba5c = eax8;
    eax9 = reinterpret_cast<void**>(g1001054(16, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffdfc, 0x200, 16, 16, a1, 16, 16, 16, 32, 16, 16, a2, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffde4, edi5));
    g1001118(0x1000);
    fun_1003ebe(a2, 16, 0x4c4, a1, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffdfc, 16, 16, 0x1000, 16, eax9, 16, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffdfc, 0x200, 16, 16, a1, 16, 16, 16, 32, 16, 16, a2, 16, 0x4c4, a1, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffdfc, 16, 16, 0x1000, 16, eax9, 16, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffdfc, 0x200, 16, 16, a1, 16, 16, 16, 32, 16, 16);
    addr_0x1004dc5_18:
    goto addr_0x1004dcb_19;
    addr_0x1004d05_16:
    g1001128(0, 0xff, 16, a1, 16, 16, 16, 32, 16, 16, a2, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffde4, edi5);
    g1001124(0, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0x20c, 0, 0xff, 16, a1, 16, 16, 16, 32, 16, 16, a2, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffde4, edi5);
    zf10 = reinterpret_cast<int1_t>(g100c888 == 16);
    if (zf10 && ((al11 = *reinterpret_cast<unsigned char*>(&g100c48c), !!(al11 & 1)) && (!(al11 & 2) && (reinterpret_cast<unsigned char>(v12) & 0xff000000) == 0xaa000000))) {
        g100c48c = v12;
    }
    fun_1002d03(v12, 0, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0x20c, 0, 0xff, 16, a1, 16, 16, 16, 32, 16, 16, a2, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffde4, edi5);
    edi13 = g10010e4;
    edi13(0, 0, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0x20c, 0, 0xff, 16, a1, 16, 16, 16, 32, 16, 16, a2, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffde4, edi5);
    edi13();
    zf14 = (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&g100c494) + 1) & 4) == 0;
    if (zf14 || reinterpret_cast<signed char>(v15) >= reinterpret_cast<signed char>(16)) {
        addr_0x1004dcb_19:
        goto addr_0x1004dd2_2;
    } else {
        goto addr_0x1004dc5_18;
    }
}

int16_t fun_1001ff9(void* a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    int32_t eax10;
    int32_t ebp11;

    eax10 = reinterpret_cast<int32_t>(g1001080());
    if (eax10 == -1) {
        g100107c(a1, 0);
    }
    goto ebp11;
}

int16_t fun_10053fa(void** a1, void** a2, void** a3);

signed char g100c89a;

int16_t fun_100637a(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11) {
    void** eax12;
    int1_t zf13;
    void** eax14;
    void** ebp15;
    void** eax16;
    void** eax17;

    g100ba5c = reinterpret_cast<void**>(0);
    fun_10053fa(a2, a4, a5);
    if (!0 && ((eax12 = fun_1006205(ecx), fun_1003346(ecx), !!eax12) && ((zf13 = g100c89a == 0, zf13) && (eax14 = g100c48c, !!(*reinterpret_cast<unsigned char*>(&eax14) & 1))))) {
        fun_1002251(ecx, eax14, ebp15, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    }
    eax16 = g100ba54;
    if (eax16) {
        g10010e4(eax16);
    }
    eax17 = g100ba5c;
    return *reinterpret_cast<int16_t*>(&eax17);
}

int32_t g1001170 = 0x7c8017e5;

int32_t g100116c = 0x7c80994e;

int32_t g1001168 = 0x7c809737;

int32_t g1001164 = 0x7c8092ac;

int32_t g1001160 = 0x7c80a417;

int32_t g100b2cc = 0xffff44bf;

void fun_100646b(void** a1, void** a2, void** a3, void** a4) {
    void** eax5;
    int32_t esi6;
    uint32_t eax7;
    uint32_t eax8;
    uint32_t eax9;
    uint32_t v10;
    uint32_t v11;
    uint32_t v12;
    uint32_t v13;

    eax5 = g100b2d0;
    if (!eax5 || reinterpret_cast<int1_t>(eax5 == 0xbb40)) {
        g1001170(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 8, esi6);
        eax7 = reinterpret_cast<uint32_t>(g100116c(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 8, esi6));
        eax8 = reinterpret_cast<uint32_t>(g1001168(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 8, esi6));
        eax9 = reinterpret_cast<uint32_t>(g1001164(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 8, esi6));
        g1001160();
        eax5 = reinterpret_cast<void**>((v10 ^ v11 ^ (v12 ^ v13 ^ eax7 ^ eax8 ^ eax9)) & 0xffff);
        if (!eax5) {
            eax5 = reinterpret_cast<void**>(0xbb40);
        }
        g100b2d0 = eax5;
    }
    g100b2cc = reinterpret_cast<int32_t>(~reinterpret_cast<unsigned char>(eax5));
    return;
}

void** fun_10065f6(int32_t a1, int16_t a2) {
    int32_t ebx3;
    int32_t eax4;
    int32_t eax5;

    ebx3 = a1;
    if (*reinterpret_cast<signed char*>(&ebx3) != *reinterpret_cast<signed char*>(&a2)) {
        eax4 = 1;
    } else {
        eax5 = reinterpret_cast<int32_t>(g100109c(ebx3));
        if (!eax5) {
            eax4 = 0;
        } else {
            eax4 = 0;
            *reinterpret_cast<unsigned char*>(&eax4) = static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&ebx3) != a2));
        }
    }
    return *reinterpret_cast<void***>(&eax4);
}

uint32_t fun_1003d51(void** a1, void** a2, uint32_t a3, void** a4, void* a5) {
    uint32_t eax6;

    return eax6;
}

void fun_1007ee0(void** a1);

uint32_t fun_1007ea9(void** a1) {
    void** v2;
    uint32_t eax3;

    if (*reinterpret_cast<void***>(a1) == 0x4349444c) {
        v2 = *reinterpret_cast<void***>(a1 + 40);
        fun_1007ee0(v2);
        *reinterpret_cast<void***>(a1) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(a1 + 8)();
        *reinterpret_cast<void***>(a1 + 8)();
        eax3 = 0;
    } else {
        eax3 = 2;
    }
    return eax3;
}

void** fun_1003d49(void** ecx, void*** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, int16_t a11, void** a12, void** a13) {
    return 0;
}

void fun_1007ef0(void** a1);

uint32_t fun_1007e83(void** a1) {
    void** v2;

    if (*reinterpret_cast<void***>(a1) == 0x4349444c) {
        v2 = *reinterpret_cast<void***>(a1 + 40);
        fun_1007ef0(v2);
        return 0;
    } else {
        return 2;
    }
}

int16_t fun_1007f1c(void** a1, void** a2, void** a3, void* a4, void** a5, void** a6, void*** a7);

uint32_t fun_1007e2e(void** ecx, void** a2, void** a3, void* a4, void** a5, void*** a6) {
    void** eax7;
    void** v8;
    uint32_t eax9;
    uint32_t eax10;

    if (*reinterpret_cast<void***>(a2) == 0x4349444c) {
        eax7 = *a6;
        if (reinterpret_cast<unsigned char>(eax7) <= reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 32))) {
            v8 = *reinterpret_cast<void***>(a2 + 40);
            *reinterpret_cast<int16_t*>(&eax7) = fun_1007f1c(v8, eax7, a3, a4, a5, eax7, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4);
            eax9 = reinterpret_cast<uint32_t>(-reinterpret_cast<unsigned char>(eax7));
            *a6 = reinterpret_cast<void**>(0);
            eax10 = eax9 - (eax9 + reinterpret_cast<uint1_t>(eax9 < eax9 + reinterpret_cast<uint1_t>(!!eax7))) & 4;
        } else {
            eax10 = 3;
        }
        return eax10;
    } else {
        return 2;
    }
}

int16_t fun_1006ef9(void** a1) {
    uint32_t eax2;
    uint32_t eax3;
    uint32_t eax4;
    void** v5;
    void** edi6;
    uint32_t esi7;
    void** ebp8;
    uint32_t eax9;
    uint32_t eax10;
    uint32_t eax11;
    int32_t eax12;
    void** v13;
    void** ecx14;
    void** v15;

    eax2 = 0;
    *reinterpret_cast<unsigned char*>(&eax2) = *reinterpret_cast<unsigned char*>(a1 + 0xb2);
    eax3 = eax2 & 15;
    if (!eax3) 
        goto addr_0x1006f56_2;
    eax4 = eax3 - 1;
    if (!eax4) {
        v5 = *reinterpret_cast<void***>(a1 + 52);
        eax9 = fun_1003d51(v5, edi6, esi7, ebp8, __return_address());
    } else {
        eax10 = eax4 - 1;
        if (!eax10) {
            v5 = *reinterpret_cast<void***>(a1 + 52);
            eax9 = fun_1003d51(v5, edi6, esi7, ebp8, __return_address());
        } else {
            eax11 = eax10 - 1;
            if (!eax11) {
                v5 = *reinterpret_cast<void***>(a1 + 52);
                eax9 = fun_1007ea9(v5);
            } else {
                if (!(eax11 - 12)) {
                    addr_0x1006f64_10:
                    eax12 = 1;
                    goto addr_0x1006f67_11;
                } else {
                    v13 = reinterpret_cast<void**>(6);
                    goto addr_0x1006f25_13;
                }
            }
        }
    }
    ecx14 = v5;
    if (!eax9) {
        addr_0x1006f56_2:
        *reinterpret_cast<void***>(a1 + 4)(ecx14);
        *reinterpret_cast<void***>(a1 + 4)(ecx14);
        goto addr_0x1006f64_10;
    } else {
        v13 = reinterpret_cast<void**>(7);
    }
    addr_0x1006f25_13:
    v15 = *reinterpret_cast<void***>(a1);
    fun_1007cde(ecx14, v15, v13, 0);
    eax12 = 0;
    addr_0x1006f67_11:
    return *reinterpret_cast<int16_t*>(&eax12);
}

int16_t fun_1006f72(void** a1) {
    void** ecx2;
    uint32_t eax3;
    void*** edx4;
    void** ebx5;
    uint32_t eax6;
    void** edi7;
    void** esi8;
    void** ebx9;
    void** v10;
    int16_t v11;
    void** v12;
    void** v13;
    void** eax14;
    uint32_t eax15;
    void** eax16;
    void** v17;
    void** v18;
    uint32_t eax19;
    void** v20;
    void** v21;
    void** v22;
    void** eax23;
    void** v24;
    void** eax25;
    uint32_t eax26;
    uint32_t eax27;
    void** v28;
    void** v29;
    int16_t v30;
    void** eax31;
    uint32_t eax32;
    void** v33;
    int16_t v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    int16_t v41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    int32_t eax47;
    void** v48;
    void* ebx49;
    void** v50;
    void** v51;
    void** v52;

    ecx2 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<unsigned char*>(a1 + 0xb2))));
    eax3 = reinterpret_cast<unsigned char>(ecx2) & 15;
    edx4 = reinterpret_cast<void***>(a1 + 0x94);
    *edx4 = reinterpret_cast<void**>(0x8000);
    if (!eax3) {
        ebx5 = a1 + 0x98;
        *reinterpret_cast<void***>(ebx5) = reinterpret_cast<void**>(0x8000);
        goto addr_0x100703b_3;
    }
    eax6 = eax3 - 1;
    if (!eax6) {
        ebx5 = a1 + 0x98;
        eax14 = fun_1003d49(ecx2, edx4, 0, 0, ebx5, 0, edi7, esi8, ebx9, v10, v11, v12, v13);
    } else {
        eax15 = eax6 - 1;
        if (!eax15) {
            eax16 = *reinterpret_cast<void***>(a1 + 32);
            ebx5 = a1 + 0x98;
            v17 = eax16;
            ecx2 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx2) >> 8 & 31);
            v18 = ecx2;
            eax14 = fun_1003d49(ecx2, edx4, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffff8, 0, 0, ebx5, 0, 0, 0, 0, 0, 0, edi7);
            goto addr_0x1006fdf_8;
        } else {
            eax19 = eax15 - 1;
            if (!eax19) {
                ecx2 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx2) >> 8 & 31);
                ebx5 = a1 + 0x98;
                v20 = reinterpret_cast<void**>(1 << *reinterpret_cast<unsigned char*>(&ecx2));
                eax14 = fun_1007d6c(ecx2, edx4, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 16, 0, 0, ebx5, 0, 0, 0, 0, 0, 0);
                goto addr_0x1006fdf_8;
            } else {
                if (!(eax19 - 12)) 
                    goto addr_0x100712b_12;
                v21 = reinterpret_cast<void**>(6);
                goto addr_0x1007027_14;
            }
        }
    }
    addr_0x1007021_15:
    if (!eax14) {
        addr_0x100703b_3:
        v22 = *reinterpret_cast<void***>(ebx5);
        eax23 = reinterpret_cast<void**>(*reinterpret_cast<void***>(a1 + 8)());
        ecx2 = v22;
        *reinterpret_cast<void***>(a1 + 60) = eax23;
        if (eax23) {
            v24 = *reinterpret_cast<void***>(a1 + 0x94);
            eax25 = reinterpret_cast<void**>(*reinterpret_cast<void***>(a1 + 8)(ecx2));
            *reinterpret_cast<void***>(a1 + 64) = eax25;
            if (eax25) {
                eax26 = 0;
                *reinterpret_cast<unsigned char*>(&eax26) = *reinterpret_cast<unsigned char*>(a1 + 0xb2);
                eax27 = (eax26 & 15) - 1;
                if (!eax27) {
                    v28 = *reinterpret_cast<void***>(a1 + 4);
                    v29 = *reinterpret_cast<void***>(a1 + 8);
                    eax31 = fun_1003d49(v24, a1 + 0x94, v29, v28, ebx5, a1 + 52, edi7, esi8, ebx9, v20, v30, v18, v17);
                } else {
                    eax32 = eax27 - 1;
                    if (!eax32) {
                        v33 = *reinterpret_cast<void***>(a1 + 28);
                        v34 = *reinterpret_cast<int16_t*>(a1 + 24);
                        v35 = *reinterpret_cast<void***>(a1 + 20);
                        v36 = *reinterpret_cast<void***>(a1 + 16);
                        v37 = *reinterpret_cast<void***>(a1 + 12);
                        v38 = *reinterpret_cast<void***>(a1 + 4);
                        v39 = *reinterpret_cast<void***>(a1 + 8);
                        eax31 = fun_1003d49(v24, a1 + 0x94, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffff8, v39, v38, ebx5, a1 + 52, v37, v36, v35, v34, v33, edi7);
                    } else {
                        if (eax32 - 1) 
                            goto addr_0x100712b_12;
                        v40 = *reinterpret_cast<void***>(a1 + 28);
                        v41 = *reinterpret_cast<int16_t*>(a1 + 24);
                        v42 = *reinterpret_cast<void***>(a1 + 20);
                        v43 = *reinterpret_cast<void***>(a1 + 16);
                        v44 = *reinterpret_cast<void***>(a1 + 12);
                        v45 = *reinterpret_cast<void***>(a1 + 4);
                        v46 = *reinterpret_cast<void***>(a1 + 8);
                        eax31 = fun_1007d6c(v24, a1 + 0x94, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 16, v46, v45, ebx5, a1 + 52, v44, v43, v42, v41, v40);
                    }
                }
                if (!eax31) {
                    addr_0x100712b_12:
                    eax47 = 1;
                } else {
                    v48 = *reinterpret_cast<void***>(a1 + 60);
                    ebx49 = reinterpret_cast<void*>(0);
                    *reinterpret_cast<unsigned char*>(&ebx49) = static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(eax31 == 1)));
                    *reinterpret_cast<void***>(a1 + 4)(v24);
                    *reinterpret_cast<void***>(a1 + 4)(v24);
                    ecx2 = v48;
                    v50 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebx49) + reinterpret_cast<int32_t>(ebx49) + 5);
                    goto addr_0x1007117_26;
                }
            } else {
                v51 = *reinterpret_cast<void***>(a1 + 60);
                *reinterpret_cast<void***>(a1 + 4)(v24);
                ecx2 = v51;
                goto addr_0x1007048_28;
            }
        } else {
            addr_0x1007048_28:
            v50 = reinterpret_cast<void**>(5);
            goto addr_0x1007117_26;
        }
    } else {
        v21 = reinterpret_cast<void**>(7);
        goto addr_0x1007027_14;
    }
    addr_0x100712e_30:
    return *reinterpret_cast<int16_t*>(&eax47);
    addr_0x1007117_26:
    v52 = *reinterpret_cast<void***>(a1);
    fun_1007cde(ecx2, v52, v50, 0);
    *reinterpret_cast<unsigned char*>(a1 + 0xb2) = reinterpret_cast<unsigned char>(15);
    eax47 = 0;
    goto addr_0x100712e_30;
    addr_0x1007027_14:
    v50 = v21;
    goto addr_0x1007117_26;
    addr_0x1006fdf_8:
    goto addr_0x1007021_15;
}

int16_t fun_1006bce(void** ecx, void** a2) {
    void** eax3;
    int16_t cx4;
    void** cx5;
    void** edi6;
    int32_t eax7;
    void** ecx8;
    void** eax9;
    int32_t eax10;
    void** v11;
    int32_t eax12;

    eax3 = a2 + 0x7bc;
    *reinterpret_cast<void***>(eax3 + 4) = a2 + 0x3b7;
    *reinterpret_cast<void***>(eax3 + 8) = a2 + 0x4b8;
    *reinterpret_cast<void***>(eax3 + 12) = a2 + 0x5b9;
    *reinterpret_cast<void***>(eax3 + 16) = *reinterpret_cast<void***>(a2 + 56);
    cx4 = *reinterpret_cast<int16_t*>(a2 + 0x70);
    *reinterpret_cast<int16_t*>(eax3 + 30) = cx4;
    cx5 = *reinterpret_cast<void***>(a2 + 0x72);
    edi6 = a2 + 0x7e4;
    *reinterpret_cast<void***>(eax3 + 32) = cx5;
    eax7 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a2 + 36)());
    ecx8 = eax3;
    if (eax7 == -1 || *reinterpret_cast<void***>(a2 + 40) && (*reinterpret_cast<void***>(edi6) = reinterpret_cast<void**>(0), *reinterpret_cast<void***>(edi6 + 4) = *reinterpret_cast<void***>(a2 + 56), *reinterpret_cast<void***>(edi6 + 8) = *reinterpret_cast<void***>(a2 + 76), *reinterpret_cast<void***>(edi6 + 12) = *reinterpret_cast<void***>(a2 + 0xa0), *reinterpret_cast<int16_t*>(edi6 + 14) = *reinterpret_cast<int16_t*>(a2 + 0x70), eax9 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(a2 + 0x72)))), *reinterpret_cast<void***>(edi6 + 16) = eax9, eax10 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a2 + 40)(ecx8)), ecx8 = edi6, eax10 == -1)) {
        v11 = *reinterpret_cast<void***>(a2);
        fun_1007cde(ecx8, v11, 11, 0);
        eax12 = 0;
    } else {
        eax12 = 1;
    }
    return *reinterpret_cast<int16_t*>(&eax12);
}

int16_t fun_10072b7(void** ecx, void** a2) {
    void** v3;
    int32_t eax4;
    void** eax5;
    void** v6;
    int32_t eax7;

    v3 = *reinterpret_cast<void***>(a2 + 0x88);
    eax4 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a2 + 16)(v3, a2 + 0x74, 16));
    if (eax4 != 16 || (eax5 = a2 + 0xb4, *reinterpret_cast<int16_t*>(&eax5) = fun_1006db8(ecx, eax5, 0x100, a2), eax5 == 0)) {
        v6 = *reinterpret_cast<void***>(a2);
        fun_1007cde(ecx, v6, 4, 0);
        eax7 = 0;
    } else {
        eax7 = 1;
    }
    return *reinterpret_cast<int16_t*>(&eax7);
}

int16_t fun_10071a5(void** ecx, void** a2, void*** a3) {
    uint32_t eax4;
    uint32_t eax5;
    void** ax6;
    void** v7;
    void** esi8;
    void** edi9;
    uint32_t ecx10;
    uint32_t eax11;
    uint32_t ecx12;
    uint32_t ecx13;
    uint32_t eax14;
    void** v15;
    void** eax16;
    void** v17;
    uint32_t v18;
    void** v19;
    void** v20;
    uint32_t eax21;
    uint32_t eax22;
    void*** esi23;
    uint32_t v24;
    void** eax25;
    void** v26;
    uint32_t v27;
    void** v28;
    void** v29;
    uint32_t eax30;
    void** eax31;
    void** v32;
    void* v33;
    void** v34;
    void** v35;
    void** v36;
    int32_t eax37;

    eax4 = 0;
    *reinterpret_cast<unsigned char*>(&eax4) = *reinterpret_cast<unsigned char*>(a2 + 0xb2);
    eax5 = eax4 & 15;
    if (!eax5) {
        ax6 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(a2 + 72) + 4);
        ecx = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(ax6)));
        if (reinterpret_cast<unsigned char>(ecx) > reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 0x94))) {
            addr_0x100729f_3:
            v7 = reinterpret_cast<void**>(7);
        } else {
            *a3 = ax6;
            esi8 = *reinterpret_cast<void***>(a2 + 60);
            edi9 = *reinterpret_cast<void***>(a2 + 64);
            ecx10 = static_cast<uint32_t>(reinterpret_cast<uint16_t>(ax6));
            eax11 = ecx10;
            ecx12 = ecx10 >> 2;
            while (ecx12) {
                --ecx12;
                *reinterpret_cast<void***>(edi9) = *reinterpret_cast<void***>(esi8);
                edi9 = edi9 + 4;
                esi8 = esi8 + 4;
            }
            ecx13 = eax11 & 3;
            while (ecx13) {
                --ecx13;
                *reinterpret_cast<void***>(edi9) = *reinterpret_cast<void***>(esi8);
                ++edi9;
                ++esi8;
            }
            goto addr_0x100729a_10;
        }
    } else {
        eax14 = eax5 - 1;
        if (!eax14) {
            v15 = *reinterpret_cast<void***>(a2 + 0x94);
            eax16 = *reinterpret_cast<void***>(a2 + 72);
            v17 = *reinterpret_cast<void***>(a2 + 64);
            v18 = static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(eax16 + 4)));
            v19 = *reinterpret_cast<void***>(a2 + 60);
            v20 = *reinterpret_cast<void***>(a2 + 52);
            eax21 = fun_1003d51(v20, v19, v18, v17, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 8);
            if (eax21) 
                goto addr_0x100729f_3;
            *a3 = v15;
            goto addr_0x100729a_10;
        } else {
            eax22 = eax14 - 1;
            if (!eax22) {
                esi23 = a3;
                v24 = static_cast<uint32_t>(reinterpret_cast<uint16_t>(*esi23));
                eax25 = *reinterpret_cast<void***>(a2 + 72);
                v26 = *reinterpret_cast<void***>(a2 + 64);
                v27 = static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(eax25 + 4)));
                v28 = *reinterpret_cast<void***>(a2 + 60);
                v29 = *reinterpret_cast<void***>(a2 + 52);
                eax30 = fun_1003d51(v29, v28, v27, v26, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 8);
                goto addr_0x10071f9_16;
            } else {
                if (!(eax22 - 1)) {
                    esi23 = a3;
                    v24 = static_cast<uint32_t>(reinterpret_cast<uint16_t>(*esi23));
                    eax31 = *reinterpret_cast<void***>(a2 + 72);
                    v32 = *reinterpret_cast<void***>(a2 + 64);
                    v33 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(eax31 + 4))));
                    v34 = *reinterpret_cast<void***>(a2 + 60);
                    v35 = *reinterpret_cast<void***>(a2 + 52);
                    eax30 = fun_1007e2e(ecx, v35, v34, v33, v32, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 8);
                    goto addr_0x10071f9_16;
                } else {
                    v7 = reinterpret_cast<void**>(6);
                }
            }
        }
    }
    v36 = *reinterpret_cast<void***>(a2);
    fun_1007cde(ecx, v36, v7, 0);
    eax37 = 0;
    addr_0x10072ab_21:
    return *reinterpret_cast<int16_t*>(&eax37);
    addr_0x100729a_10:
    eax37 = 1;
    goto addr_0x10072ab_21;
    addr_0x10071f9_16:
    if (eax30) 
        goto addr_0x100729f_3;
    *esi23 = *reinterpret_cast<void***>(&v24);
    goto addr_0x100729a_10;
}

int16_t fun_1007935(void** a1, void* a2) {
    void* esi3;
    void** eax4;
    void** ecx5;
    int32_t eax6;

    if (!*reinterpret_cast<void***>(a1 + 0x9c)) {
        esi3 = a2;
        eax4 = reinterpret_cast<void**>(0xfffe);
        ecx5 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esi3) & reinterpret_cast<unsigned char>(0xfffe));
        if (reinterpret_cast<int1_t>(ecx5 == 0xfffe)) {
            esi3 = reinterpret_cast<void*>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(a1 + 0x6a)) - 1);
        }
        if (*reinterpret_cast<void**>(a1 + 0x90) != esi3) 
            goto addr_0x100796a_5;
    } else {
        eax6 = 1;
        goto addr_0x1007995_7;
    }
    addr_0x1007991_8:
    eax6 = 1;
    addr_0x1007994_9:
    addr_0x1007995_7:
    return *reinterpret_cast<int16_t*>(&eax6);
    addr_0x100796a_5:
    *reinterpret_cast<int16_t*>(&eax4) = fun_100713a(a1);
    if (!eax4 || ((*reinterpret_cast<int16_t*>(&eax4) = fun_100766b(ecx5, a1, esi3), eax4 == 0) || (*reinterpret_cast<int16_t*>(&eax4) = fun_100788d(ecx5, a1), !eax4))) {
        eax6 = 0;
        goto addr_0x1007994_9;
    } else {
        *reinterpret_cast<void**>(a1 + 48) = reinterpret_cast<void*>(0);
        goto addr_0x1007991_8;
    }
}

int16_t fun_1007f7f(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, int16_t a8, void** a9) {
    void** eax10;
    void** ecx11;
    int32_t eax12;

    *reinterpret_cast<void***>(a1 + 0x2ee0) = a3;
    *reinterpret_cast<void***>(a1 + 0x2ee4) = a4;
    *reinterpret_cast<void***>(a1 + 0x2ee8) = a5;
    *reinterpret_cast<void***>(a1 + 0x2eec) = a6;
    *reinterpret_cast<void***>(a1 + 0x2ef0) = a7;
    *reinterpret_cast<int16_t*>(a1 + 0x2ef4) = a8;
    *reinterpret_cast<void***>(a1 + 0x2ef8) = a9;
    eax10 = a2;
    ecx11 = eax10 + 0xffffffff;
    *reinterpret_cast<void***>(a1 + 4) = eax10;
    *reinterpret_cast<void***>(a1 + 8) = ecx11;
    if (reinterpret_cast<unsigned char>(eax10) & reinterpret_cast<unsigned char>(ecx11) || (*reinterpret_cast<int16_t*>(&eax10) = fun_1007ff8(a1), !eax10)) {
        eax12 = 0;
    } else {
        fun_1007ef0(a1);
        eax12 = 1;
    }
    return *reinterpret_cast<int16_t*>(&eax12);
}

void fun_10084bd(void** a1);

int16_t fun_1008237(void* ecx, void** a2, void** a3);

int16_t fun_1007f1c(void** a1, void** a2, void** a3, void* a4, void** a5, void** a6, void*** a7) {
    void** eax8;
    int32_t eax9;

    *reinterpret_cast<void***>(a1 + 0x2b04) = a3;
    *reinterpret_cast<void***>(a1 + 0x2b08) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a3) + reinterpret_cast<uint32_t>(a4) + 4);
    eax8 = a5;
    *reinterpret_cast<void***>(a1 + 0x2b0c) = eax8;
    fun_10084bd(a1);
    *reinterpret_cast<int16_t*>(&eax8) = fun_1008237(a4, a1, a2);
    *reinterpret_cast<uint32_t*>(a1 + 0x2ecc) = *reinterpret_cast<uint32_t*>(a1 + 0x2ecc) + 1;
    if (reinterpret_cast<signed char>(eax8) >= reinterpret_cast<signed char>(0)) {
        *a7 = eax8;
        *reinterpret_cast<void***>(a1 + 0x2b10) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 0x2b10)) + reinterpret_cast<unsigned char>(eax8));
        eax9 = 0;
    } else {
        *a7 = reinterpret_cast<void**>(0);
        eax9 = 1;
    }
    return *reinterpret_cast<int16_t*>(&eax9);
}

void fun_100807b(void** a1);

void fun_100810b(void** a1);

void fun_100815a(void** a1);

void fun_1007ef0(void** a1) {
    fun_100807b(a1);
    fun_100810b(a1);
    fun_100815a(a1);
    *reinterpret_cast<uint32_t*>(a1 + 0x2ecc) = 0;
    return;
}

void fun_1007ee0(void** a1) {
    if (*reinterpret_cast<void***>(a1)) {
        *reinterpret_cast<void***>(a1 + 0x2ee4)();
        *reinterpret_cast<void***>(a1) = reinterpret_cast<void**>(0);
    }
    return;
}

struct s20 {
    signed char f0;
    signed char f1;
};

struct s21 {
    signed char[12] pad12;
    uint32_t f12;
};

struct s22 {
    signed char[20] pad20;
    int32_t f20;
};

struct s23 {
    signed char[16] pad16;
    int32_t f16;
};

struct s24 {
    signed char[16] pad16;
    int32_t f16;
};

struct s25 {
    signed char[12] pad12;
    int32_t f12;
};

struct s26 {
    signed char[4] pad4;
    void* f4;
};

struct s27 {
    signed char[8] pad8;
    uint32_t f8;
};

struct s28 {
    signed char[4] pad4;
    void* f4;
};

struct s29 {
    signed char[12] pad12;
    uint32_t f12;
};

int16_t fun_10086b0(void** a1, void** a2) {
    void* eax3;
    int32_t edx4;
    uint32_t v5;
    int32_t edx6;
    struct s20* v7;
    int32_t edx8;
    struct s20* ecx9;
    int32_t edx10;
    struct s20* v11;
    void** ecx12;
    void** esi13;
    unsigned char v14;
    void** v15;
    int32_t edx16;
    int32_t edx17;
    int32_t edx18;
    void** eax19;
    uint32_t ecx20;
    int32_t edx21;
    int32_t ebx22;
    void* edx23;
    uint32_t ecx24;
    uint32_t ebx25;
    int32_t edx26;
    void* edx27;
    void* edx28;
    int32_t edx29;
    uint32_t ebx30;
    uint32_t edi31;
    int32_t ebx32;
    uint32_t* ecx33;
    void* edx34;
    uint32_t esi35;
    uint32_t edi36;
    uint32_t ecx37;
    struct s21* edx38;
    int32_t ebx39;
    uint32_t eax40;
    uint32_t ecx41;
    uint32_t esi42;
    uint32_t ecx43;
    uint32_t ecx44;
    int32_t ecx45;
    int32_t ecx46;
    struct s20* eax47;
    uint32_t ecx48;
    int32_t ecx49;
    int32_t ecx50;
    struct s22* edx51;
    struct s23* edx52;
    struct s24* edx53;
    struct s25* edx54;
    uint32_t ecx55;
    int32_t edx56;
    int32_t edi57;
    void* edx58;
    uint32_t ecx59;
    uint32_t edi60;
    int32_t edx61;
    int32_t edx62;
    int32_t edx63;
    int32_t edx64;
    void** edx65;
    struct s26* edx66;
    void** edx67;
    unsigned char cl68;
    void* edx69;
    void** edx70;
    struct s27* edx71;
    struct s28* edx72;
    void** edx73;
    struct s29* edx74;
    int32_t edx75;
    unsigned char cl76;
    void* edx77;
    struct s20* esi78;
    uint32_t ecx79;
    int32_t ecx80;
    int32_t ecx81;
    struct s20* esi82;
    uint32_t ecx83;
    int32_t ecx84;
    int32_t ecx85;

    *reinterpret_cast<unsigned char*>(&eax3) = *reinterpret_cast<unsigned char*>(edx4 + 0x2eb4);
    v5 = *reinterpret_cast<uint32_t*>(edx6 + 0x2eb0);
    v7 = *reinterpret_cast<struct s20**>(edx8 + 0x2b04);
    ecx9 = *reinterpret_cast<struct s20**>(edx10 + 0x2b08);
    v11 = ecx9;
    ecx12 = a1;
    esi13 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a2) + reinterpret_cast<unsigned char>(ecx12));
    v14 = *reinterpret_cast<unsigned char*>(&eax3);
    v15 = esi13;
    if (reinterpret_cast<signed char>(ecx12) >= reinterpret_cast<signed char>(esi13)) {
        addr_0x100899c_2:
        *reinterpret_cast<unsigned char*>(edx16 + 0x2eb4) = *reinterpret_cast<unsigned char*>(&eax3);
        *reinterpret_cast<uint32_t*>(edx17 + 0x2eb0) = v5;
        *reinterpret_cast<struct s20**>(edx18 + 0x2b04) = v7;
        eax19 = ecx12;
    } else {
        do {
            ecx20 = v5 >> 22;
            if (ecx20 >= 0x400) {
                *reinterpret_cast<int32_t*>(edx21 + 0x2ebc) = 1;
                ebx22 = 0;
            } else {
                ebx22 = static_cast<int32_t>(*reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(edx23) + ecx20 * 2 + 24));
            }
            if (ebx22 < 0) {
                ecx24 = 0x200000;
                do {
                    ebx25 = reinterpret_cast<uint32_t>(-ebx22);
                    if (!(v5 & ecx24)) {
                        if (ebx25 + ebx25 >= 0xa80) {
                            addr_0x100874f_10:
                            ebx22 = 0;
                            *reinterpret_cast<int32_t*>(edx26 + 0x2ebc) = 1;
                        } else {
                            ebx22 = static_cast<int32_t>(*reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(edx27) + ebx25 * 4 + 0xe3c));
                        }
                    } else {
                        if (ebx25 + ebx25 + 1 >= 0xa80) 
                            goto addr_0x100874f_10;
                        ebx22 = static_cast<int32_t>(*reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(edx28) + ebx25 * 4 + 0xe3e));
                    }
                    ecx24 = ecx24 >> 1;
                } while (ebx22 < 0);
            }
            if (*reinterpret_cast<int32_t*>(edx29 + 0x2ebc)) {
                addr_0x10087ac_16:
                ebx30 = ebx22 - 0x100;
                if (reinterpret_cast<int32_t>(ebx30) >= reinterpret_cast<int32_t>(0)) {
                    edi31 = ebx30 & 7;
                    if (edi31 != 7) {
                        addr_0x10088a6_18:
                        ebx32 = reinterpret_cast<int32_t>(ebx30) >> 3;
                        if (*reinterpret_cast<signed char*>(&ebx32) <= 2) {
                            ecx33 = reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(edx34) + *reinterpret_cast<signed char*>(&ebx32) * 4 + 12);
                            esi35 = *ecx33;
                            if (!*reinterpret_cast<signed char*>(&ebx32)) {
                                addr_0x1008957_20:
                                edi36 = edi31 + 1 + 1;
                                ecx37 = reinterpret_cast<unsigned char>(a1) - esi35;
                            } else {
                                *ecx33 = edx38->f12;
                                goto addr_0x1008954_22;
                            }
                        } else {
                            if (*reinterpret_cast<signed char*>(&ebx32) <= 3) {
                                esi35 = 1;
                            } else {
                                ebx39 = static_cast<int32_t>(*reinterpret_cast<signed char*>(&ebx32));
                                eax40 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ebx39 + 0x10014e0));
                                ecx41 = 32 - eax40;
                                esi42 = v5 >> *reinterpret_cast<signed char*>(&ecx41);
                                ecx43 = eax40;
                                v14 = reinterpret_cast<unsigned char>(v14 - *reinterpret_cast<unsigned char*>(ebx39 + 0x10014e0));
                                v5 = v5 << *reinterpret_cast<unsigned char*>(&ecx43);
                                if (reinterpret_cast<signed char>(v14) <= reinterpret_cast<signed char>(0) && (ecx44 = 0, *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx44) + 1) = v7->f1, *reinterpret_cast<signed char*>(&ecx44) = v7->f0, ecx45 = 0, *reinterpret_cast<unsigned char*>(&ecx45) = v14, v14 = reinterpret_cast<unsigned char>(v14 + 16), ecx46 = -ecx45, v5 = v5 | ecx44 << *reinterpret_cast<unsigned char*>(&ecx46), eax47 = reinterpret_cast<struct s20*>(&v7->f1 + 1), v7 = eax47, reinterpret_cast<signed char>(v14) <= reinterpret_cast<signed char>(0))) {
                                    ecx48 = 0;
                                    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx48) + 1) = eax47->f1;
                                    ++v7;
                                    *reinterpret_cast<signed char*>(&ecx48) = eax47->f0;
                                    ecx49 = 0;
                                    *reinterpret_cast<unsigned char*>(&ecx49) = v14;
                                    ecx50 = -ecx49;
                                    v5 = v5 | ecx48 << *reinterpret_cast<unsigned char*>(&ecx50);
                                    v14 = reinterpret_cast<unsigned char>(v14 + 16);
                                }
                                esi35 = esi42 + *reinterpret_cast<int32_t*>(ebx39 * 4 + 0x1001518);
                            }
                            edx51->f20 = edx52->f16;
                            edx53->f16 = edx54->f12;
                            goto addr_0x1008954_22;
                        }
                    } else {
                        ecx55 = v5 >> 24;
                        if (ecx55 >= 0x100) {
                            *reinterpret_cast<int32_t*>(edx56 + 0x2ebc) = 1;
                            edi57 = 0;
                        } else {
                            edi57 = static_cast<int32_t>(*reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(edx58) + ecx55 * 2 + 0x818));
                        }
                        if (edi57 < 0) {
                            ecx59 = 0x800000;
                            do {
                                edi60 = reinterpret_cast<uint32_t>(-edi57);
                                if (!(v5 & ecx59)) {
                                    if (edi60 + edi60 >= 0x3e4) {
                                        addr_0x1008839_36:
                                        edi57 = 0;
                                        *reinterpret_cast<int32_t*>(edx61 + 0x2ebc) = 1;
                                    } else {
                                        edi57 = static_cast<int32_t>(*reinterpret_cast<int16_t*>(edx62 + edi60 * 4 + 0x233c));
                                    }
                                } else {
                                    if (edi60 + edi60 + 1 >= 0x3e4) 
                                        goto addr_0x1008839_36;
                                    edi57 = static_cast<int32_t>(*reinterpret_cast<int16_t*>(edx63 + edi60 * 4 + 0x233e));
                                }
                                ecx59 = ecx59 >> 1;
                            } while (edi57 < 0);
                        }
                        if (*reinterpret_cast<int32_t*>(edx64 + 0x2ebc)) 
                            goto addr_0x1008896_42; else 
                            goto addr_0x1008854_43;
                    }
                } else {
                    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<uint32_t>(*edx65)) = *reinterpret_cast<signed char*>(&ebx30);
                    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edx66->f4) + reinterpret_cast<int32_t>(*edx67) + reinterpret_cast<unsigned char>(a1)) = *reinterpret_cast<signed char*>(&ebx30);
                    ++a1;
                    continue;
                }
            } else {
                if (reinterpret_cast<uint32_t>(v7) >= reinterpret_cast<uint32_t>(v11)) 
                    goto addr_0x10089bd_46;
                cl68 = *reinterpret_cast<unsigned char*>(ebx22 + reinterpret_cast<int32_t>(edx69) + 0xa18);
                v5 = v5 << cl68;
                *reinterpret_cast<unsigned char*>(&eax3) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax3) - cl68);
                v14 = *reinterpret_cast<unsigned char*>(&eax3);
                if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<unsigned char*>(&eax3)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) == 0))) 
                    goto addr_0x10087ac_16; else 
                    goto addr_0x1008785_48;
            }
            do {
                *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(*edx70) + reinterpret_cast<unsigned char>(a1)) = *reinterpret_cast<signed char*>((ecx37 & edx71->f8) + reinterpret_cast<uint32_t>(*edx70));
                if (reinterpret_cast<signed char>(a1) < reinterpret_cast<signed char>(0x101)) {
                    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edx72->f4) + reinterpret_cast<uint32_t>(*edx73) + reinterpret_cast<unsigned char>(a1)) = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(*edx73) + reinterpret_cast<unsigned char>(a1));
                }
                ++ecx37;
                --edi36;
                ++a1;
            } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(edi36) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(edi36 == 0)));
            *reinterpret_cast<unsigned char*>(&eax3) = v14;
            continue;
            addr_0x1008954_22:
            edx74->f12 = esi35;
            goto addr_0x1008957_20;
            addr_0x1008896_42:
            edi31 = edi57 + 7;
            if (*reinterpret_cast<int32_t*>(edx75 + 0x2ebc)) 
                goto addr_0x10089bd_46; else 
                goto addr_0x10088a6_18;
            addr_0x1008854_43:
            if (reinterpret_cast<uint32_t>(v7) >= reinterpret_cast<uint32_t>(v11)) 
                goto addr_0x10089bd_46;
            cl76 = *reinterpret_cast<unsigned char*>(edi57 + reinterpret_cast<int32_t>(edx77) + 0xcb8);
            v5 = v5 << cl76;
            *reinterpret_cast<unsigned char*>(&eax3) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax3) - cl76);
            v14 = *reinterpret_cast<unsigned char*>(&eax3);
            if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<unsigned char*>(&eax3)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) == 0))) 
                goto addr_0x1008896_42;
            esi78 = v7;
            ecx79 = 0;
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx79) + 1) = esi78->f1;
            ++v7;
            *reinterpret_cast<signed char*>(&ecx79) = esi78->f0;
            ecx80 = 0;
            *reinterpret_cast<unsigned char*>(&ecx80) = *reinterpret_cast<unsigned char*>(&eax3);
            ecx81 = -ecx80;
            v5 = v5 | ecx79 << *reinterpret_cast<unsigned char*>(&ecx81);
            v14 = reinterpret_cast<unsigned char>(v14 + 16);
            goto addr_0x1008896_42;
            addr_0x1008785_48:
            esi82 = v7;
            ecx83 = 0;
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx83) + 1) = esi82->f1;
            ++v7;
            *reinterpret_cast<signed char*>(&ecx83) = esi82->f0;
            ecx84 = 0;
            *reinterpret_cast<unsigned char*>(&ecx84) = *reinterpret_cast<unsigned char*>(&eax3);
            ecx85 = -ecx84;
            v5 = v5 | ecx83 << *reinterpret_cast<unsigned char*>(&ecx85);
            *reinterpret_cast<unsigned char*>(&eax3) = reinterpret_cast<unsigned char>(v14 + 16);
            v14 = *reinterpret_cast<unsigned char*>(&eax3);
            goto addr_0x10087ac_16;
            ecx12 = a1;
        } while (reinterpret_cast<signed char>(ecx12) < reinterpret_cast<signed char>(v15));
        goto addr_0x100899c_2;
    }
    addr_0x10089b6_56:
    return *reinterpret_cast<int16_t*>(&eax19);
    addr_0x10089bd_46:
    eax19 = reinterpret_cast<void**>(0xffffffff);
    goto addr_0x10089b6_56;
}

void** g1001524 = reinterpret_cast<void**>(1);

int16_t fun_10089c7(void** a1, void** a2, void** a3) {
    void** edx4;
    unsigned char al5;
    uint32_t ecx6;
    void** ebx7;
    unsigned char v8;
    void** eax9;
    void** v10;
    void** eax11;
    void** esi12;
    uint32_t v13;
    void** v14;
    void** v15;
    void** ecx16;
    void* eax17;
    uint32_t eax18;
    void* edi19;
    void* v20;
    uint32_t v21;
    uint32_t edi22;
    unsigned char cl23;
    uint32_t ecx24;
    int32_t ecx25;
    int32_t ecx26;
    uint32_t v27;
    void* edi28;
    int32_t ecx29;
    void*** eax30;
    void** esi31;
    uint32_t edi32;
    void* ecx33;
    int32_t eax34;
    uint32_t eax35;
    uint32_t ecx36;
    void* esi37;
    uint32_t ecx38;
    uint32_t eax39;
    int32_t ecx40;
    int32_t ecx41;
    void** ebx42;
    uint32_t eax43;
    int32_t ecx44;
    int32_t ecx45;
    uint32_t ecx46;
    void* edi47;
    uint32_t ecx48;
    uint32_t edi49;
    void** ecx50;
    unsigned char cl51;
    uint32_t ecx52;
    int32_t ecx53;
    int32_t ecx54;

    edx4 = a1;
    al5 = *reinterpret_cast<unsigned char*>(edx4 + 0x2eb4);
    ecx6 = *reinterpret_cast<uint32_t*>(edx4 + 0x2eb0);
    ebx7 = *reinterpret_cast<void***>(edx4 + 0x2b04);
    v8 = al5;
    eax9 = *reinterpret_cast<void***>(edx4 + 0x2b08);
    v10 = eax9;
    eax11 = a2;
    esi12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a3) + reinterpret_cast<unsigned char>(eax11));
    v13 = ecx6;
    v14 = ebx7;
    v15 = esi12;
    if (reinterpret_cast<signed char>(eax11) >= reinterpret_cast<signed char>(esi12)) {
        addr_0x1008ca7_2:
        *reinterpret_cast<unsigned char*>(edx4 + 0x2eb4) = v8;
        *reinterpret_cast<uint32_t*>(edx4 + 0x2eb0) = v13;
        ecx16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx4 + 8)) & reinterpret_cast<unsigned char>(eax11));
        eax17 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax11) - reinterpret_cast<unsigned char>(v15));
        *reinterpret_cast<void***>(edx4 + 0x2b04) = ebx7;
        *reinterpret_cast<void***>(edx4 + 0x2ec0) = ecx16;
    } else {
        while (1) {
            eax18 = ecx6 >> 22;
            if (eax18 >= 0x400) {
                *reinterpret_cast<void***>(edx4 + 0x2ebc) = reinterpret_cast<void**>(1);
                edi19 = reinterpret_cast<void*>(0);
            } else {
                edi19 = reinterpret_cast<void*>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(edx4 + eax18 * 2) + 24)));
            }
            v20 = edi19;
            if (reinterpret_cast<int32_t>(edi19) < 0) {
                v21 = 0x200000;
                do {
                    edi22 = reinterpret_cast<uint32_t>(-reinterpret_cast<int32_t>(edi19));
                    if (!(v21 & ecx6)) {
                        if (edi22 + edi22 >= 0xa80) {
                            addr_0x1008a6d_11:
                            edi19 = reinterpret_cast<void*>(0);
                            *reinterpret_cast<void***>(edx4 + 0x2ebc) = reinterpret_cast<void**>(1);
                        } else {
                            edi19 = reinterpret_cast<void*>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(edx4 + edi22 * 4) + 0xe3c)));
                        }
                    } else {
                        if (edi22 + edi22 + 1 >= 0xa80) 
                            goto addr_0x1008a6d_11;
                        edi19 = reinterpret_cast<void*>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(edx4 + edi22 * 4) + 0xe3e)));
                    }
                    v21 = v21 >> 1;
                } while (reinterpret_cast<int32_t>(edi19) < 0);
                v20 = edi19;
            }
            if (*reinterpret_cast<void***>(edx4 + 0x2ebc)) 
                goto addr_0x1008cd4_18;
            if (reinterpret_cast<unsigned char>(ebx7) >= reinterpret_cast<unsigned char>(v10)) 
                goto addr_0x1008cd4_18;
            cl23 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(edi19) + reinterpret_cast<unsigned char>(edx4) + 0xa18);
            v13 = v13 << cl23;
            *reinterpret_cast<unsigned char*>(&eax18) = reinterpret_cast<unsigned char>(v8 - cl23);
            v8 = *reinterpret_cast<unsigned char*>(&eax18);
            if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<unsigned char*>(&eax18)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax18) == 0))) {
                ecx24 = 0;
                *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&ecx24) + 1) = *reinterpret_cast<void***>(ebx7 + 1);
                *reinterpret_cast<void***>(&ecx24) = *reinterpret_cast<void***>(ebx7);
                ecx25 = 0;
                *reinterpret_cast<unsigned char*>(&ecx25) = *reinterpret_cast<unsigned char*>(&eax18);
                ecx26 = -ecx25;
                v13 = v13 | ecx24 << *reinterpret_cast<unsigned char*>(&ecx26);
                ebx7 = ebx7 + 1 + 1;
                *reinterpret_cast<unsigned char*>(&eax18) = reinterpret_cast<unsigned char>(v8 + 16);
                v14 = ebx7;
                v8 = *reinterpret_cast<unsigned char*>(&eax18);
            }
            v27 = reinterpret_cast<int32_t>(v20) - 0x100;
            if (reinterpret_cast<int32_t>(v27) >= reinterpret_cast<int32_t>(0)) {
                edi28 = reinterpret_cast<void*>(v27 & 7);
                if (!reinterpret_cast<int1_t>(edi28 == 7)) {
                    addr_0x1008bc5_24:
                    ecx29 = reinterpret_cast<int32_t>(v27) >> 3;
                    if (*reinterpret_cast<signed char*>(&ecx29) <= 2) {
                        eax30 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edx4 + *reinterpret_cast<signed char*>(&ecx29) * 4) + 12);
                        esi31 = *eax30;
                        if (!*reinterpret_cast<signed char*>(&ecx29)) {
                            addr_0x1008c7a_26:
                            eax11 = a2;
                            edi32 = reinterpret_cast<uint32_t>(edi28) + 1 + 1;
                            ecx33 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax11) - reinterpret_cast<unsigned char>(esi31) & reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx4 + 8)));
                        } else {
                            *eax30 = *reinterpret_cast<void***>(edx4 + 12);
                            goto addr_0x1008c77_28;
                        }
                    } else {
                        if (*reinterpret_cast<signed char*>(&ecx29) <= 3) {
                            esi31 = g1001524;
                        } else {
                            eax34 = static_cast<int32_t>(*reinterpret_cast<signed char*>(&ecx29));
                            eax35 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(eax34 + 0x10014e0));
                            ecx36 = 32 - eax35;
                            esi37 = reinterpret_cast<void*>(v13 >> *reinterpret_cast<signed char*>(&ecx36));
                            ecx38 = eax35;
                            v8 = reinterpret_cast<unsigned char>(v8 - *reinterpret_cast<unsigned char*>(eax34 + 0x10014e0));
                            v13 = v13 << *reinterpret_cast<unsigned char*>(&ecx38);
                            if (reinterpret_cast<signed char>(v8) <= reinterpret_cast<signed char>(0) && (eax39 = 0, *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&eax39) + 1) = *reinterpret_cast<void***>(ebx7 + 1), ecx40 = 0, *reinterpret_cast<unsigned char*>(&ecx40) = v8, v8 = reinterpret_cast<unsigned char>(v8 + 16), *reinterpret_cast<void***>(&eax39) = *reinterpret_cast<void***>(ebx7), ecx41 = -ecx40, v13 = v13 | eax39 << *reinterpret_cast<unsigned char*>(&ecx41), ebx42 = ebx7 + 1 + 1, v14 = ebx42, reinterpret_cast<signed char>(v8) <= reinterpret_cast<signed char>(0))) {
                                eax43 = 0;
                                *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&eax43) + 1) = *reinterpret_cast<void***>(ebx42 + 1);
                                ecx44 = 0;
                                *reinterpret_cast<unsigned char*>(&ecx44) = v8;
                                *reinterpret_cast<void***>(&eax43) = *reinterpret_cast<void***>(ebx42);
                                ecx45 = -ecx44;
                                v13 = v13 | eax43 << *reinterpret_cast<unsigned char*>(&ecx45);
                                v8 = reinterpret_cast<unsigned char>(v8 + 16);
                                v14 = ebx42 + 1 + 1;
                            }
                            esi31 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esi37) + reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(eax34 * 4 + 0x1001518)));
                        }
                        *reinterpret_cast<void***>(edx4 + 20) = *reinterpret_cast<void***>(edx4 + 16);
                        *reinterpret_cast<void***>(edx4 + 16) = *reinterpret_cast<void***>(edx4 + 12);
                        goto addr_0x1008c77_28;
                    }
                } else {
                    ecx46 = v13 >> 24;
                    if (ecx46 >= 0x100) {
                        *reinterpret_cast<void***>(edx4 + 0x2ebc) = reinterpret_cast<void**>(1);
                        edi47 = reinterpret_cast<void*>(0);
                    } else {
                        edi47 = reinterpret_cast<void*>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(edx4 + ecx46 * 2) + 0x818)));
                    }
                    if (reinterpret_cast<int32_t>(edi47) < 0) {
                        ecx48 = 0x800000;
                        do {
                            edi49 = reinterpret_cast<uint32_t>(-reinterpret_cast<int32_t>(edi47));
                            if (!(v13 & ecx48)) {
                                if (edi49 + edi49 >= 0x3e4) {
                                    addr_0x1008b5d_42:
                                    edi47 = reinterpret_cast<void*>(0);
                                    *reinterpret_cast<void***>(edx4 + 0x2ebc) = reinterpret_cast<void**>(1);
                                } else {
                                    edi47 = reinterpret_cast<void*>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(edx4 + edi49 * 4) + 0x233c)));
                                }
                            } else {
                                if (edi49 + edi49 + 1 >= 0x3e4) 
                                    goto addr_0x1008b5d_42;
                                edi47 = reinterpret_cast<void*>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(edx4 + edi49 * 4) + 0x233e)));
                            }
                            ecx48 = ecx48 >> 1;
                        } while (reinterpret_cast<int32_t>(edi47) < 0);
                    }
                    if (*reinterpret_cast<void***>(edx4 + 0x2ebc)) 
                        goto addr_0x1008bb5_48; else 
                        goto addr_0x1008b78_49;
                }
            } else {
                ecx50 = *reinterpret_cast<void***>(edx4);
                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a2) + reinterpret_cast<unsigned char>(ecx50)) = *reinterpret_cast<signed char*>(&v27);
                edx4 = edx4;
                eax11 = a2 + 1;
                goto addr_0x1008c9b_51;
            }
            do {
                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx4)) + reinterpret_cast<unsigned char>(eax11)) = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx4)) + reinterpret_cast<uint32_t>(ecx33));
                ++eax11;
                ecx33 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx33) + 1);
                --edi32;
            } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(edi32) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(edi32 == 0)));
            ebx7 = v14;
            addr_0x1008c9b_51:
            a2 = eax11;
            if (reinterpret_cast<signed char>(eax11) >= reinterpret_cast<signed char>(v15)) 
                goto addr_0x1008ca7_2;
            ecx6 = v13;
            continue;
            addr_0x1008c77_28:
            *reinterpret_cast<void***>(edx4 + 12) = esi31;
            goto addr_0x1008c7a_26;
            addr_0x1008bb5_48:
            edi28 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edi47) + 7);
            if (*reinterpret_cast<void***>(edx4 + 0x2ebc)) 
                goto addr_0x1008cd4_18; else 
                goto addr_0x1008bc5_24;
            addr_0x1008b78_49:
            if (reinterpret_cast<unsigned char>(ebx7) >= reinterpret_cast<unsigned char>(v10)) 
                goto addr_0x1008cd4_18;
            cl51 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(edi47) + reinterpret_cast<unsigned char>(edx4) + 0xcb8);
            v13 = v13 << cl51;
            *reinterpret_cast<unsigned char*>(&eax18) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax18) - cl51);
            v8 = *reinterpret_cast<unsigned char*>(&eax18);
            if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<unsigned char*>(&eax18)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax18) == 0))) 
                goto addr_0x1008bb5_48;
            ecx52 = 0;
            *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&ecx52) + 1) = *reinterpret_cast<void***>(ebx7 + 1);
            *reinterpret_cast<void***>(&ecx52) = *reinterpret_cast<void***>(ebx7);
            ecx53 = 0;
            *reinterpret_cast<unsigned char*>(&ecx53) = *reinterpret_cast<unsigned char*>(&eax18);
            ecx54 = -ecx53;
            v13 = v13 | ecx52 << *reinterpret_cast<unsigned char*>(&ecx54);
            ebx7 = ebx7 + 1 + 1;
            v8 = reinterpret_cast<unsigned char>(v8 + 16);
            v14 = ebx7;
            goto addr_0x1008bb5_48;
        }
    }
    addr_0x1008ccd_57:
    return *reinterpret_cast<int16_t*>(&eax17);
    addr_0x1008cd4_18:
    eax17 = reinterpret_cast<void*>(0xffffffff);
    goto addr_0x1008ccd_57;
}

struct s30 {
    signed char f0;
    signed char f1;
};

struct s31 {
    signed char[12] pad12;
    uint32_t f12;
};

struct s32 {
    signed char[4] pad4;
    void* f4;
};

struct s33 {
    signed char[8] pad8;
    uint32_t f8;
};

struct s34 {
    signed char[4] pad4;
    void* f4;
};

struct s35 {
    signed char[12] pad12;
    uint32_t f12;
};

struct s36 {
    signed char[20] pad20;
    int32_t f20;
};

struct s37 {
    signed char[16] pad16;
    int32_t f16;
};

struct s38 {
    signed char[16] pad16;
    int32_t f16;
};

struct s39 {
    signed char[12] pad12;
    int32_t f12;
};

int16_t fun_1008d30(void** a1, void** a2) {
    unsigned char v3;
    int32_t edx4;
    struct s30* v5;
    int32_t edx6;
    void* v7;
    void** edx8;
    uint32_t esi9;
    int32_t edx10;
    void** eax11;
    struct s30* edi12;
    int32_t edx13;
    void** v14;
    int32_t edx15;
    void** eax16;
    int32_t edx17;
    int32_t edx18;
    uint32_t eax19;
    int32_t edx20;
    int32_t ebx21;
    void* edx22;
    uint32_t v23;
    uint32_t ebx24;
    int32_t edx25;
    void* edx26;
    void* edx27;
    int32_t edx28;
    int32_t ecx29;
    void* edx30;
    uint32_t v31;
    void* edx32;
    uint32_t eax33;
    int32_t ecx34;
    uint32_t ebx35;
    uint32_t eax36;
    uint32_t v37;
    int32_t ebx38;
    uint32_t* ecx39;
    void* edx40;
    uint32_t esi41;
    void** ebx42;
    uint32_t eax43;
    uint32_t v44;
    struct s31* edx45;
    int32_t ebx46;
    unsigned char cl47;
    int32_t v48;
    int32_t ecx49;
    uint32_t esi50;
    unsigned char cl51;
    uint32_t esi52;
    uint32_t esi53;
    uint32_t ecx54;
    int32_t ecx55;
    int32_t ecx56;
    uint32_t eax57;
    int32_t edx58;
    void* edx59;
    uint32_t v60;
    uint32_t ecx61;
    uint32_t eax62;
    int32_t edx63;
    int32_t edx64;
    int32_t edx65;
    int32_t edx66;
    struct s32* edx67;
    void** ecx68;
    signed char cl69;
    struct s33* edx70;
    struct s34* edx71;
    struct s35* edx72;
    struct s36* edx73;
    struct s37* edx74;
    struct s38* edx75;
    struct s39* edx76;
    uint32_t eax77;
    int32_t ecx78;
    int32_t ecx79;
    uint32_t esi80;
    uint32_t ecx81;
    void* edx82;
    uint32_t edx83;
    uint32_t edx84;
    uint32_t ebx85;
    int32_t ecx86;
    int32_t ecx87;
    uint32_t eax88;
    int32_t ecx89;
    int32_t ecx90;
    int1_t zf91;
    int32_t edx92;
    void* edx93;
    int32_t ecx94;
    void* edx95;
    uint32_t eax96;
    int32_t ecx97;

    v3 = *reinterpret_cast<unsigned char*>(edx4 + 0x2eb4);
    v5 = *reinterpret_cast<struct s30**>(edx6 + 0x2b08);
    v7 = *edx8;
    esi9 = *reinterpret_cast<uint32_t*>(edx10 + 0x2eb0);
    eax11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a2) + reinterpret_cast<unsigned char>(a1));
    edi12 = *reinterpret_cast<struct s30**>(edx13 + 0x2b04);
    v14 = eax11;
    if (reinterpret_cast<signed char>(a1) >= reinterpret_cast<signed char>(eax11)) {
        addr_0x10090c6_2:
        *reinterpret_cast<unsigned char*>(edx15 + 0x2eb4) = v3;
        eax16 = a1;
        *reinterpret_cast<uint32_t*>(edx17 + 0x2eb0) = esi9;
        *reinterpret_cast<struct s30**>(edx18 + 0x2b04) = edi12;
    } else {
        do {
            eax19 = esi9 >> 22;
            if (eax19 >= 0x400) {
                *reinterpret_cast<uint32_t*>(edx20 + 0x2ebc) = 1;
                ebx21 = 0;
            } else {
                ebx21 = static_cast<int32_t>(*reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(edx22) + eax19 * 2 + 24));
            }
            if (ebx21 < 0) {
                v23 = 0x200000;
                do {
                    ebx24 = reinterpret_cast<uint32_t>(-ebx21);
                    if (!(v23 & esi9)) {
                        if (ebx24 + ebx24 >= 0xa80) {
                            addr_0x1008dcf_10:
                            ebx21 = 0;
                            *reinterpret_cast<uint32_t*>(edx25 + 0x2ebc) = 1;
                        } else {
                            ebx21 = static_cast<int32_t>(*reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(edx26) + ebx24 * 4 + 0xe3c));
                        }
                    } else {
                        if (ebx24 + ebx24 + 1 >= 0xa80) 
                            goto addr_0x1008dcf_10;
                        ebx21 = static_cast<int32_t>(*reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(edx27) + ebx24 * 4 + 0xe3e));
                    }
                    v23 = v23 >> 1;
                } while (ebx21 < 0);
            }
            if (*reinterpret_cast<int32_t*>(edx28 + 0x2ebc)) 
                goto addr_0x10090e5_16;
            if (reinterpret_cast<uint32_t>(edi12) >= reinterpret_cast<uint32_t>(v5)) 
                goto addr_0x10090e5_16;
            ecx29 = 0;
            *reinterpret_cast<unsigned char*>(&ecx29) = reinterpret_cast<unsigned char>(v3 - *reinterpret_cast<unsigned char*>(ebx21 + reinterpret_cast<int32_t>(edx30) + 0xa18));
            v31 = esi9 << *reinterpret_cast<unsigned char*>(ebx21 + reinterpret_cast<int32_t>(edx32) + 0xa18);
            v3 = *reinterpret_cast<unsigned char*>(&ecx29);
            if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<unsigned char*>(&ecx29)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&ecx29) == 0))) {
                eax33 = 0;
                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax33) + 1) = edi12->f1;
                ecx34 = -ecx29;
                *reinterpret_cast<signed char*>(&eax33) = edi12->f0;
                v31 = v31 | eax33 << *reinterpret_cast<unsigned char*>(&ecx34);
                edi12 = reinterpret_cast<struct s30*>(&edi12->f1 + 1);
                v3 = reinterpret_cast<unsigned char>(v3 + 16);
            }
            ebx35 = ebx21 - 0x100;
            if (reinterpret_cast<int32_t>(ebx35) >= reinterpret_cast<int32_t>(0)) {
                eax36 = ebx35 & 7;
                v37 = eax36;
                if (eax36 != 7) {
                    addr_0x1008f29_22:
                    ebx38 = reinterpret_cast<int32_t>(ebx35) >> 3;
                    if (*reinterpret_cast<signed char*>(&ebx38) <= 2) {
                        ecx39 = reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(edx40) + *reinterpret_cast<signed char*>(&ebx38) * 4 + 12);
                        esi41 = *ecx39;
                        if (!*reinterpret_cast<signed char*>(&ebx38)) {
                            addr_0x1009080_24:
                            ebx42 = a1;
                            eax43 = eax36 + 1 + 1;
                            v44 = reinterpret_cast<unsigned char>(ebx42) - esi41;
                        } else {
                            *ecx39 = edx45->f12;
                            goto addr_0x100907d_26;
                        }
                    } else {
                        ebx46 = static_cast<int32_t>(*reinterpret_cast<signed char*>(&ebx38));
                        cl47 = *reinterpret_cast<unsigned char*>(ebx46 + 0x10014e0);
                        *reinterpret_cast<unsigned char*>(&v48) = cl47;
                        if (cl47 < 3) {
                            if (!cl47) {
                                esi41 = 1;
                                goto addr_0x100905d_30;
                            } else {
                                ecx49 = 32 - v48;
                                esi50 = v31 >> *reinterpret_cast<signed char*>(&ecx49);
                                if (reinterpret_cast<uint32_t>(edi12) >= reinterpret_cast<uint32_t>(v5)) 
                                    goto addr_0x10090e5_16;
                                cl51 = *reinterpret_cast<unsigned char*>(ebx46 + 0x10014e0);
                                v31 = v31 << cl51;
                                v3 = reinterpret_cast<unsigned char>(v3 - cl51);
                                if (reinterpret_cast<signed char>(v3) > reinterpret_cast<signed char>(0)) 
                                    goto addr_0x100904e_33; else 
                                    goto addr_0x1009035_34;
                            }
                        } else {
                            esi52 = static_cast<uint32_t>(cl47);
                            if (!(esi52 - 3)) {
                                esi53 = 0;
                                goto addr_0x1008fa6_37;
                            } else {
                                ecx54 = 35 - esi52;
                                esi53 = v31 >> *reinterpret_cast<signed char*>(&ecx54);
                                if (reinterpret_cast<uint32_t>(edi12) >= reinterpret_cast<uint32_t>(v5)) 
                                    goto addr_0x10090e5_16;
                                ecx55 = 0;
                                *reinterpret_cast<unsigned char*>(&ecx55) = *reinterpret_cast<unsigned char*>(ebx46 + 0x10014e0);
                                v3 = reinterpret_cast<unsigned char>(v3 + reinterpret_cast<unsigned char>(3 - *reinterpret_cast<unsigned char*>(ebx46 + 0x10014e0)));
                                ecx56 = ecx55 - 3;
                                v31 = v31 << *reinterpret_cast<unsigned char*>(&ecx56);
                                if (reinterpret_cast<signed char>(v3) > reinterpret_cast<signed char>(0)) 
                                    goto addr_0x1008fa3_40; else 
                                    goto addr_0x1008f8a_41;
                            }
                        }
                    }
                } else {
                    eax57 = v31 >> 24;
                    if (eax57 >= 0x100) {
                        *reinterpret_cast<int32_t*>(edx58 + 0x2ebc) = 1;
                        eax36 = 0;
                    } else {
                        eax36 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(edx59) + eax57 * 2 + 0x818)));
                    }
                    v60 = eax36;
                    if (reinterpret_cast<int32_t>(eax36) < reinterpret_cast<int32_t>(0)) {
                        ecx61 = 0x800000;
                        do {
                            eax62 = -eax36;
                            if (!(v31 & ecx61)) {
                                if (eax62 + eax62 >= 0x3e4) {
                                    addr_0x1008ebb_49:
                                    eax36 = 0;
                                    *reinterpret_cast<int32_t*>(edx63 + 0x2ebc) = 1;
                                } else {
                                    eax36 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(edx64 + eax62 * 4 + 0x233c)));
                                }
                            } else {
                                if (eax62 + eax62 + 1 >= 0x3e4) 
                                    goto addr_0x1008ebb_49;
                                eax36 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(edx65 + eax62 * 4 + 0x233e)));
                            }
                            ecx61 = ecx61 >> 1;
                        } while (reinterpret_cast<int32_t>(eax36) < reinterpret_cast<int32_t>(0));
                        v60 = eax36;
                    }
                    if (*reinterpret_cast<int32_t*>(edx66 + 0x2ebc)) 
                        goto addr_0x1008f16_56; else 
                        goto addr_0x1008ed9_57;
                }
            } else {
                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(v7) + reinterpret_cast<unsigned char>(a1)) = *reinterpret_cast<signed char*>(&ebx35);
                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edx67->f4) + reinterpret_cast<int32_t>(v7) + reinterpret_cast<unsigned char>(a1)) = *reinterpret_cast<signed char*>(&ebx35);
                ecx68 = a1 + 1;
                a1 = ecx68;
                continue;
            }
            do {
                cl69 = *reinterpret_cast<signed char*>((v44 & edx70->f8) + reinterpret_cast<int32_t>(v7));
                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(v7) + reinterpret_cast<unsigned char>(ebx42)) = cl69;
                if (reinterpret_cast<signed char>(ebx42) < reinterpret_cast<signed char>(0x101)) {
                    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edx71->f4) + reinterpret_cast<int32_t>(v7) + reinterpret_cast<unsigned char>(ebx42)) = cl69;
                }
                ++ebx42;
                ++v44;
                --eax43;
            } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax43) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax43 == 0)));
            a1 = ebx42;
            ecx68 = ebx42;
            continue;
            addr_0x100907d_26:
            edx72->f12 = esi41;
            goto addr_0x1009080_24;
            addr_0x100905d_30:
            edx73->f20 = edx74->f16;
            edx75->f16 = edx76->f12;
            goto addr_0x100907d_26;
            addr_0x100904e_33:
            esi41 = esi50 + *reinterpret_cast<int32_t*>(ebx46 * 4 + 0x1001518);
            eax36 = v37;
            goto addr_0x100905d_30;
            addr_0x1009035_34:
            eax77 = 0;
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax77) + 1) = edi12->f1;
            ecx78 = 0;
            *reinterpret_cast<unsigned char*>(&ecx78) = v3;
            *reinterpret_cast<signed char*>(&eax77) = edi12->f0;
            ecx79 = -ecx78;
            v31 = v31 | eax77 << *reinterpret_cast<unsigned char*>(&ecx79);
            edi12 = reinterpret_cast<struct s30*>(&edi12->f1 + 1);
            v3 = reinterpret_cast<unsigned char>(v3 + 16);
            goto addr_0x100904e_33;
            addr_0x1008fa6_37:
            esi80 = *reinterpret_cast<int32_t*>(ebx46 * 4 + 0x1001518) + esi53 * 8;
            ecx81 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>((v31 >> 25) + reinterpret_cast<int32_t>(edx82) + 0xdb4)));
            if (reinterpret_cast<uint32_t>(edi12) >= reinterpret_cast<uint32_t>(v5)) 
                goto addr_0x10090e5_16;
            v31 = v31 << *reinterpret_cast<unsigned char*>(ecx81 + edx83 + 0xe34);
            v3 = reinterpret_cast<unsigned char>(v3 - *reinterpret_cast<unsigned char*>(ecx81 + edx84 + 0xe34));
            if (reinterpret_cast<signed char>(v3) <= reinterpret_cast<signed char>(0)) {
                ebx85 = 0;
                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx85) + 1) = edi12->f1;
                ecx86 = 0;
                *reinterpret_cast<unsigned char*>(&ecx86) = v3;
                *reinterpret_cast<signed char*>(&ebx85) = edi12->f0;
                ecx87 = -ecx86;
                v31 = v31 | ebx85 << *reinterpret_cast<unsigned char*>(&ecx87);
                edi12 = reinterpret_cast<struct s30*>(&edi12->f1 + 1);
                v3 = reinterpret_cast<unsigned char>(v3 + 16);
            }
            esi41 = esi80 + ecx81;
            goto addr_0x100905d_30;
            addr_0x1008fa3_40:
            eax36 = v37;
            goto addr_0x1008fa6_37;
            addr_0x1008f8a_41:
            eax88 = 0;
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax88) + 1) = edi12->f1;
            ecx89 = 0;
            *reinterpret_cast<unsigned char*>(&ecx89) = v3;
            *reinterpret_cast<signed char*>(&eax88) = edi12->f0;
            ecx90 = -ecx89;
            v31 = v31 | eax88 << *reinterpret_cast<unsigned char*>(&ecx90);
            edi12 = reinterpret_cast<struct s30*>(&edi12->f1 + 1);
            v3 = reinterpret_cast<unsigned char>(v3 + 16);
            goto addr_0x1008fa3_40;
            addr_0x1008f16_56:
            eax36 = eax36 + 7;
            zf91 = *reinterpret_cast<int32_t*>(edx92 + 0x2ebc) == 0;
            v37 = eax36;
            if (!zf91) 
                goto addr_0x10090e5_16; else 
                goto addr_0x1008f29_22;
            addr_0x1008ed9_57:
            if (reinterpret_cast<uint32_t>(edi12) >= reinterpret_cast<uint32_t>(v5)) 
                goto addr_0x10090e5_16;
            v31 = v31 << *reinterpret_cast<unsigned char*>(eax36 + reinterpret_cast<uint32_t>(edx93) + 0xcb8);
            ecx94 = 0;
            *reinterpret_cast<unsigned char*>(&ecx94) = reinterpret_cast<unsigned char>(v3 - *reinterpret_cast<unsigned char*>(eax36 + reinterpret_cast<uint32_t>(edx95) + 0xcb8));
            v3 = *reinterpret_cast<unsigned char*>(&ecx94);
            if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<unsigned char*>(&ecx94)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&ecx94) == 0))) 
                goto addr_0x1008eff_67;
            addr_0x1008f13_68:
            eax36 = v60;
            goto addr_0x1008f16_56;
            addr_0x1008eff_67:
            eax96 = 0;
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax96) + 1) = edi12->f1;
            ecx97 = -ecx94;
            *reinterpret_cast<signed char*>(&eax96) = edi12->f0;
            v31 = v31 | eax96 << *reinterpret_cast<unsigned char*>(&ecx97);
            edi12 = reinterpret_cast<struct s30*>(&edi12->f1 + 1);
            v3 = reinterpret_cast<unsigned char>(v3 + 16);
            goto addr_0x1008f13_68;
            esi9 = v31;
        } while (reinterpret_cast<signed char>(ecx68) < reinterpret_cast<signed char>(v14));
        goto addr_0x10090c6_2;
    }
    addr_0x10090de_70:
    return *reinterpret_cast<int16_t*>(&eax16);
    addr_0x10090e5_16:
    eax16 = reinterpret_cast<void**>(0xffffffff);
    goto addr_0x10090de_70;
}

struct s40 {
    signed char[16782560] pad16782560;
    unsigned char f16782560;
};

int16_t fun_10090ef(void** a1, void** a2, void** a3) {
    void** edx4;
    unsigned char v5;
    uint32_t v6;
    void** v7;
    void** eax8;
    void** v9;
    void** eax10;
    void** ecx11;
    void** edi12;
    void** v13;
    void** ecx14;
    void* eax15;
    uint32_t eax16;
    struct s40* eax17;
    uint32_t esi18;
    uint32_t eax19;
    struct s40* v20;
    void* ebx21;
    void* v22;
    int32_t eax23;
    void*** ecx24;
    void** esi25;
    void** esi26;
    uint32_t ebx27;
    signed char* ecx28;
    signed char* v29;
    unsigned char cl30;
    int32_t v31;
    int32_t ecx32;
    void* esi33;
    unsigned char cl34;
    uint32_t esi35;
    uint32_t esi36;
    uint32_t ecx37;
    int32_t ecx38;
    int32_t ecx39;
    uint32_t ecx40;
    void* ebx41;
    uint32_t ecx42;
    uint32_t ebx43;
    void** esi44;
    void** esi45;
    unsigned char cl46;
    signed char al47;
    void** ecx48;
    uint32_t ebx49;
    int32_t ecx50;
    int32_t ecx51;
    void* esi52;
    unsigned char cl53;
    uint32_t eax54;
    int32_t ecx55;
    int32_t ecx56;
    uint32_t ebx57;
    int32_t ecx58;
    int32_t ecx59;
    unsigned char cl60;
    uint32_t eax61;
    int32_t ecx62;
    int32_t ecx63;
    uint32_t ebx64;
    int32_t ecx65;
    int32_t ecx66;

    edx4 = a1;
    v5 = *reinterpret_cast<unsigned char*>(edx4 + 0x2eb4);
    v6 = *reinterpret_cast<uint32_t*>(edx4 + 0x2eb0);
    v7 = *reinterpret_cast<void***>(edx4 + 0x2b08);
    eax8 = *reinterpret_cast<void***>(edx4);
    v9 = eax8;
    eax10 = a2;
    ecx11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a3) + reinterpret_cast<unsigned char>(eax10));
    edi12 = *reinterpret_cast<void***>(edx4 + 0x2b04);
    v13 = ecx11;
    if (reinterpret_cast<signed char>(eax10) >= reinterpret_cast<signed char>(ecx11)) {
        addr_0x1009457_2:
        *reinterpret_cast<unsigned char*>(edx4 + 0x2eb4) = v5;
        *reinterpret_cast<uint32_t*>(edx4 + 0x2eb0) = v6;
        ecx14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx4 + 8)) & reinterpret_cast<unsigned char>(eax10));
        eax15 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax10) - reinterpret_cast<unsigned char>(v13));
        *reinterpret_cast<void***>(edx4 + 0x2b04) = edi12;
        *reinterpret_cast<void***>(edx4 + 0x2ec0) = ecx14;
    } else {
        do {
            eax16 = v6 >> 22;
            if (eax16 >= 0x400) {
                *reinterpret_cast<void***>(edx4 + 0x2ebc) = reinterpret_cast<void**>(1);
                eax17 = reinterpret_cast<struct s40*>(0);
            } else {
                eax17 = reinterpret_cast<struct s40*>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(edx4 + eax16 * 2) + 24)));
            }
            if (reinterpret_cast<int32_t>(eax17) < reinterpret_cast<int32_t>(0)) {
                esi18 = 0x200000;
                do {
                    eax19 = -reinterpret_cast<uint32_t>(eax17);
                    if (!(v6 & esi18)) {
                        if (eax19 + eax19 >= 0xa80) {
                            addr_0x1009192_10:
                            eax17 = reinterpret_cast<struct s40*>(0);
                            *reinterpret_cast<void***>(edx4 + 0x2ebc) = reinterpret_cast<void**>(1);
                        } else {
                            eax17 = reinterpret_cast<struct s40*>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(edx4 + eax19 * 4) + 0xe3c)));
                        }
                    } else {
                        if (eax19 + eax19 + 1 >= 0xa80) 
                            goto addr_0x1009192_10;
                        eax17 = reinterpret_cast<struct s40*>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(edx4 + eax19 * 4) + 0xe3e)));
                    }
                    esi18 = esi18 >> 1;
                } while (reinterpret_cast<int32_t>(eax17) < reinterpret_cast<int32_t>(0));
            }
            if (*reinterpret_cast<void***>(edx4 + 0x2ebc)) {
                addr_0x10091de_16:
                eax17 = reinterpret_cast<struct s40*>(reinterpret_cast<uint32_t>(eax17) - 0x100);
                v20 = eax17;
                if (reinterpret_cast<int32_t>(eax17) >= reinterpret_cast<int32_t>(0)) {
                    ebx21 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax17) & 7);
                    v22 = ebx21;
                    if (!reinterpret_cast<int1_t>(ebx21 == 7)) {
                        addr_0x10092cd_18:
                        eax23 = reinterpret_cast<int32_t>(eax17) >> 3;
                        if (*reinterpret_cast<signed char*>(&eax23) <= 2) {
                            ecx24 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edx4 + *reinterpret_cast<signed char*>(&eax23) * 4) + 12);
                            esi25 = *ecx24;
                            if (!*reinterpret_cast<signed char*>(&eax23)) {
                                addr_0x1009422_20:
                                esi26 = v9;
                                ebx27 = reinterpret_cast<uint32_t>(ebx21) + 1 + 1;
                                ecx28 = reinterpret_cast<signed char*>((reinterpret_cast<unsigned char>(a2) - reinterpret_cast<unsigned char>(esi25) & reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx4 + 8))) + reinterpret_cast<unsigned char>(esi26));
                                v29 = ecx28;
                            } else {
                                *ecx24 = *reinterpret_cast<void***>(edx4 + 12);
                                goto addr_0x100941f_22;
                            }
                        } else {
                            eax17 = reinterpret_cast<struct s40*>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax23)));
                            cl30 = eax17->f16782560;
                            *reinterpret_cast<unsigned char*>(&v31) = cl30;
                            if (cl30 < 3) {
                                if (!cl30) {
                                    esi25 = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(eax17) * 4 + 0x1001518);
                                    goto addr_0x10093ff_26;
                                } else {
                                    ecx32 = 32 - v31;
                                    esi33 = reinterpret_cast<void*>(v6 >> *reinterpret_cast<signed char*>(&ecx32));
                                    if (reinterpret_cast<unsigned char>(edi12) >= reinterpret_cast<unsigned char>(v7)) 
                                        goto addr_0x1009484_28;
                                    cl34 = eax17->f16782560;
                                    v5 = reinterpret_cast<unsigned char>(v5 - cl34);
                                    v6 = v6 << cl34;
                                    if (reinterpret_cast<signed char>(v5) > reinterpret_cast<signed char>(0)) 
                                        goto addr_0x10093ec_30; else 
                                        goto addr_0x10093d3_31;
                                }
                            } else {
                                esi35 = static_cast<uint32_t>(cl30);
                                if (!(esi35 - 3)) {
                                    esi36 = 0;
                                    goto addr_0x1009349_34;
                                } else {
                                    ecx37 = 35 - esi35;
                                    esi36 = v6 >> *reinterpret_cast<signed char*>(&ecx37);
                                    if (reinterpret_cast<unsigned char>(edi12) >= reinterpret_cast<unsigned char>(v7)) 
                                        goto addr_0x1009484_28;
                                    ecx38 = 0;
                                    *reinterpret_cast<unsigned char*>(&ecx38) = eax17->f16782560;
                                    ecx39 = ecx38 - 3;
                                    v6 = v6 << *reinterpret_cast<unsigned char*>(&ecx39);
                                    v5 = reinterpret_cast<unsigned char>(v5 + reinterpret_cast<unsigned char>(3 - eax17->f16782560));
                                    if (reinterpret_cast<signed char>(v5) > reinterpret_cast<signed char>(0)) 
                                        goto addr_0x1009346_37; else 
                                        goto addr_0x100932d_38;
                                }
                            }
                        }
                    } else {
                        ecx40 = v6 >> 24;
                        if (ecx40 >= 0x100) {
                            *reinterpret_cast<void***>(edx4 + 0x2ebc) = reinterpret_cast<void**>(1);
                            ebx41 = reinterpret_cast<void*>(0);
                        } else {
                            ebx41 = reinterpret_cast<void*>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(edx4 + ecx40 * 2) + 0x818)));
                        }
                        if (reinterpret_cast<int32_t>(ebx41) < 0) {
                            ecx42 = 0x800000;
                            do {
                                ebx43 = reinterpret_cast<uint32_t>(-reinterpret_cast<int32_t>(ebx41));
                                if (!(v6 & ecx42)) {
                                    if (ebx43 + ebx43 >= 0x3e4) {
                                        addr_0x1009269_46:
                                        ebx41 = reinterpret_cast<void*>(0);
                                        *reinterpret_cast<void***>(edx4 + 0x2ebc) = reinterpret_cast<void**>(1);
                                    } else {
                                        ebx41 = reinterpret_cast<void*>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(edx4 + ebx43 * 4) + 0x233c)));
                                    }
                                } else {
                                    if (ebx43 + ebx43 + 1 >= 0x3e4) 
                                        goto addr_0x1009269_46;
                                    ebx41 = reinterpret_cast<void*>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(edx4 + ebx43 * 4) + 0x233e)));
                                }
                                ecx42 = ecx42 >> 1;
                            } while (reinterpret_cast<int32_t>(ebx41) < 0);
                        }
                        esi44 = *reinterpret_cast<void***>(edx4 + 0x2ebc);
                        if (esi44) 
                            goto addr_0x10092bf_52; else 
                            goto addr_0x1009285_53;
                    }
                } else {
                    esi45 = a2;
                    ++a2;
                    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v9) + reinterpret_cast<unsigned char>(esi45)) = *reinterpret_cast<signed char*>(&eax17);
                    continue;
                }
            } else {
                if (reinterpret_cast<unsigned char>(edi12) >= reinterpret_cast<unsigned char>(v7)) 
                    goto addr_0x1009484_28;
                cl46 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax17) + reinterpret_cast<unsigned char>(edx4) + 0xa18);
                v5 = reinterpret_cast<unsigned char>(v5 - cl46);
                v6 = v6 << cl46;
                if (reinterpret_cast<signed char>(v5) > reinterpret_cast<signed char>(0)) 
                    goto addr_0x10091de_16; else 
                    goto addr_0x10091c5_57;
            }
            do {
                al47 = *ecx28;
                ecx48 = a2;
                ++a2;
                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(esi26) + reinterpret_cast<unsigned char>(ecx48)) = al47;
                ecx28 = v29 + 1;
                --ebx27;
                v29 = ecx28;
            } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(ebx27) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(ebx27 == 0)));
            continue;
            addr_0x100941f_22:
            *reinterpret_cast<void***>(edx4 + 12) = esi25;
            goto addr_0x1009422_20;
            addr_0x10093ff_26:
            *reinterpret_cast<void***>(edx4 + 20) = *reinterpret_cast<void***>(edx4 + 16);
            *reinterpret_cast<void***>(edx4 + 16) = *reinterpret_cast<void***>(edx4 + 12);
            goto addr_0x100941f_22;
            addr_0x10093ec_30:
            esi25 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esi33) + reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax17) * 4 + 0x1001518)));
            ebx21 = v22;
            goto addr_0x10093ff_26;
            addr_0x10093d3_31:
            ebx49 = 0;
            *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&ebx49) + 1) = *reinterpret_cast<void***>(edi12 + 1);
            ecx50 = 0;
            *reinterpret_cast<unsigned char*>(&ecx50) = v5;
            *reinterpret_cast<void***>(&ebx49) = *reinterpret_cast<void***>(edi12);
            ecx51 = -ecx50;
            v6 = v6 | ebx49 << *reinterpret_cast<unsigned char*>(&ecx51);
            edi12 = edi12 + 1 + 1;
            v5 = reinterpret_cast<unsigned char>(v5 + 16);
            goto addr_0x10093ec_30;
            addr_0x1009349_34:
            esi52 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax17) * 4 + 0x1001518)) + esi36 * 8);
            eax17 = reinterpret_cast<struct s40*>(static_cast<int32_t>(*reinterpret_cast<signed char*>((v6 >> 25) + reinterpret_cast<unsigned char>(edx4) + 0xdb4)));
            if (reinterpret_cast<unsigned char>(edi12) >= reinterpret_cast<unsigned char>(v7)) 
                goto addr_0x1009484_28;
            cl53 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax17) + reinterpret_cast<unsigned char>(edx4) + 0xe34);
            v5 = reinterpret_cast<unsigned char>(v5 - *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax17) + reinterpret_cast<unsigned char>(edx4) + 0xe34));
            v6 = v6 << cl53;
            if (reinterpret_cast<signed char>(v5) <= reinterpret_cast<signed char>(0)) {
                eax54 = 0;
                *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&eax54) + 1) = *reinterpret_cast<void***>(edi12 + 1);
                ecx55 = 0;
                *reinterpret_cast<unsigned char*>(&ecx55) = v5;
                *reinterpret_cast<void***>(&eax54) = *reinterpret_cast<void***>(edi12);
                ecx56 = -ecx55;
                v6 = v6 | eax54 << *reinterpret_cast<unsigned char*>(&ecx56);
                edi12 = edi12 + 1 + 1;
                v5 = reinterpret_cast<unsigned char>(v5 + 16);
            }
            esi25 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esi52) + reinterpret_cast<uint32_t>(eax17));
            goto addr_0x10093ff_26;
            addr_0x1009346_37:
            ebx21 = v22;
            goto addr_0x1009349_34;
            addr_0x100932d_38:
            ebx57 = 0;
            *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&ebx57) + 1) = *reinterpret_cast<void***>(edi12 + 1);
            ecx58 = 0;
            *reinterpret_cast<unsigned char*>(&ecx58) = v5;
            *reinterpret_cast<void***>(&ebx57) = *reinterpret_cast<void***>(edi12);
            ecx59 = -ecx58;
            v6 = v6 | ebx57 << *reinterpret_cast<unsigned char*>(&ecx59);
            edi12 = edi12 + 1 + 1;
            v5 = reinterpret_cast<unsigned char>(v5 + 16);
            goto addr_0x1009346_37;
            addr_0x10092bf_52:
            ebx21 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebx41) + 7);
            v22 = ebx21;
            if (esi44) 
                goto addr_0x1009484_28; else 
                goto addr_0x10092cd_18;
            addr_0x1009285_53:
            if (reinterpret_cast<unsigned char>(edi12) >= reinterpret_cast<unsigned char>(v7)) 
                goto addr_0x1009484_28;
            cl60 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ebx41) + reinterpret_cast<unsigned char>(edx4) + 0xcb8);
            v6 = v6 << cl60;
            v5 = reinterpret_cast<unsigned char>(v5 - cl60);
            if (reinterpret_cast<signed char>(v5) <= reinterpret_cast<signed char>(0)) 
                goto addr_0x10092a3_63;
            addr_0x10092bc_64:
            eax17 = v20;
            goto addr_0x10092bf_52;
            addr_0x10092a3_63:
            eax61 = 0;
            *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&eax61) + 1) = *reinterpret_cast<void***>(edi12 + 1);
            ecx62 = 0;
            *reinterpret_cast<unsigned char*>(&ecx62) = v5;
            *reinterpret_cast<void***>(&eax61) = *reinterpret_cast<void***>(edi12);
            ecx63 = -ecx62;
            v6 = v6 | eax61 << *reinterpret_cast<unsigned char*>(&ecx63);
            edi12 = edi12 + 1 + 1;
            v5 = reinterpret_cast<unsigned char>(v5 + 16);
            goto addr_0x10092bc_64;
            addr_0x10091c5_57:
            ebx64 = 0;
            *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&ebx64) + 1) = *reinterpret_cast<void***>(edi12 + 1);
            ecx65 = 0;
            *reinterpret_cast<unsigned char*>(&ecx65) = v5;
            *reinterpret_cast<void***>(&ebx64) = *reinterpret_cast<void***>(edi12);
            ecx66 = -ecx65;
            v6 = v6 | ebx64 << *reinterpret_cast<unsigned char*>(&ecx66);
            edi12 = edi12 + 1 + 1;
            v5 = reinterpret_cast<unsigned char>(v5 + 16);
            goto addr_0x10091de_16;
            eax10 = a2;
        } while (reinterpret_cast<signed char>(eax10) < reinterpret_cast<signed char>(v13));
        goto addr_0x1009457_2;
    }
    addr_0x100947d_66:
    return *reinterpret_cast<int16_t*>(&eax15);
    addr_0x1009484_28:
    eax15 = reinterpret_cast<void*>(0xffffffff);
    goto addr_0x100947d_66;
}

int16_t fun_1009b93(void** a1, unsigned char* a2, int32_t* a3) {
    void* ebp4;
    void** eax5;
    unsigned char* ebx6;
    int32_t* esi7;
    int32_t edx8;
    void** v9;
    int32_t ecx10;
    unsigned char* v11;
    int32_t* v12;
    unsigned char* ecx13;
    int16_t* eax14;
    int32_t ecx15;
    void* eax16;
    int32_t edx17;
    int16_t di18;
    void* eax19;
    int16_t v20;
    int32_t ecx21;
    int32_t edx22;
    int32_t edi23;
    uint32_t edx24;
    int32_t ecx25;
    int32_t* edi26;
    unsigned char v27;
    void* eax28;
    uint16_t* ecx29;
    int32_t esi30;
    uint16_t* v31;
    uint32_t eax32;
    uint32_t ecx33;
    unsigned char* edi34;
    uint32_t ecx35;
    unsigned char eax36;
    uint32_t ecx37;
    void** eax38;

    ebp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax5 = g100b2d0;
    ebx6 = a2;
    esi7 = a3;
    edx8 = 8;
    v9 = eax5;
    ecx10 = 8;
    while (ecx10) {
        --ecx10;
        ++esi7;
    }
    v11 = ebx6;
    v12 = esi7;
    ecx13 = ebx6;
    do {
        eax14 = reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(ebp4) + *ecx13 * 2 - 76);
        *eax14 = reinterpret_cast<int16_t>(*eax14 + 1);
        ++ecx13;
        --edx8;
    } while (edx8);
    ecx15 = 15;
    eax16 = reinterpret_cast<void*>(0);
    edx17 = 16;
    do {
        di18 = reinterpret_cast<int16_t>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(ebp4) + reinterpret_cast<int32_t>(eax16) - 74) << *reinterpret_cast<unsigned char*>(&ecx15))));
        --ecx15;
        *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(ebp4) + reinterpret_cast<int32_t>(eax16) - 36) = di18;
        eax16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax16) + 1 + 1);
        --edx17;
    } while (edx17);
    eax19 = reinterpret_cast<void*>(0);
    if (v20) {
        addr_0x1009cbb_9:
    } else {
        ecx21 = 6;
        edx22 = 7;
        do {
            *reinterpret_cast<uint16_t*>(reinterpret_cast<int32_t>(ebp4) + reinterpret_cast<int32_t>(eax19) - 38) = 0;
            edi23 = 1 << *reinterpret_cast<unsigned char*>(&ecx21);
            --ecx21;
            eax19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax19) + 1 + 1);
            --edx22;
            *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(ebp4) + reinterpret_cast<int32_t>(eax19) - 76) = *reinterpret_cast<int16_t*>(&edi23);
        } while (edx22);
        edx24 = 9;
        do {
            --edx24;
        } while (edx24);
        ecx25 = 32;
        edi26 = esi7;
        while (ecx25) {
            --ecx25;
            *edi26 = 0;
            ++edi26;
        }
        v27 = 0;
        while (1) {
            if (!*reinterpret_cast<unsigned char*>(v27 + reinterpret_cast<uint32_t>(ebx6))) {
                addr_0x1009ca0_19:
                v27 = reinterpret_cast<unsigned char>(v27 + 1);
                if (v27 < 8) 
                    continue; else 
                    goto addr_0x1009ca9_20;
            } else {
                eax28 = reinterpret_cast<void*>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(v27 + reinterpret_cast<uint32_t>(ebx6))) << 1);
                ecx29 = reinterpret_cast<uint16_t*>(reinterpret_cast<int32_t>(ebp4) + reinterpret_cast<uint32_t>(eax28) - 40);
                *reinterpret_cast<uint16_t*>(&edx24) = *ecx29;
                esi30 = 0;
                *reinterpret_cast<uint16_t*>(&esi30) = reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(ebp4) + reinterpret_cast<uint32_t>(eax28) - 76) + *reinterpret_cast<uint16_t*>(&edx24));
                v31 = ecx29;
                if (*reinterpret_cast<uint16_t*>(&esi30) > 0x80) 
                    goto addr_0x1009cbb_9;
                if (*reinterpret_cast<uint16_t*>(&edx24) < *reinterpret_cast<uint16_t*>(&esi30)) 
                    goto addr_0x1009c6d_23;
            }
            addr_0x1009c9d_24:
            *ecx29 = *reinterpret_cast<uint16_t*>(&esi30);
            goto addr_0x1009ca0_19;
            addr_0x1009c6d_23:
            eax32 = esi30 - edx24;
            ecx33 = static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax32));
            *reinterpret_cast<unsigned char*>(&ebx6) = v27;
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx6) + 1) = *reinterpret_cast<unsigned char*>(&ebx6);
            edi34 = reinterpret_cast<unsigned char*>(*reinterpret_cast<uint16_t*>(&edx24) + reinterpret_cast<uint32_t>(v12));
            edx24 = ecx33;
            ecx35 = ecx33 >> 2;
            eax36 = reinterpret_cast<unsigned char>(reinterpret_cast<uint32_t>(ebx6) << 16);
            *reinterpret_cast<int16_t*>(&eax36) = *reinterpret_cast<int16_t*>(&ebx6);
            ebx6 = v11;
            while (ecx35) {
                --ecx35;
                *edi34 = eax36;
                edi34 = edi34 + 4;
                esi30 = esi30 + 4;
            }
            ecx37 = edx24 & 3;
            while (ecx37) {
                --ecx37;
                *edi34 = eax36;
                ++edi34;
                ++esi30;
            }
            ecx29 = v31;
            goto addr_0x1009c9d_24;
        }
    }
    addr_0x1009cac_32:
    eax38 = fun_10064de(v9);
    return *reinterpret_cast<int16_t*>(&eax38);
    addr_0x1009ca9_20:
    goto addr_0x1009cac_32;
}

int32_t g1001074 = 0x7c822bb7;

int32_t g1001070 = 0x7c85e610;

int32_t g100106c = 0x7c839450;

int32_t g1001068 = 0x7c839308;

int16_t fun_1001e53() {
    void** eax1;
    int32_t eax2;
    void** edi3;
    void** esi4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    int32_t eax14;
    void** eax15;

    eax1 = g100b2d0;
    eax2 = reinterpret_cast<int32_t>(g1001078());
    if (eax2 && (fun_10066cf(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8, 0x104, 0x10012a4, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8, 0x104, edi3, esi4, v5, v6, v7, v8, v9, v10, v11, v12, v13), g1001074(0, 0, 0, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0x108), eax14 = reinterpret_cast<int32_t>(g1001070(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0x108, 64, 0, 0, 0, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0x108)), eax14 != -1)) {
        g100106c(eax14, 0, 2, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0x108, 64, 0, 0, 0, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0x108);
        g1001068(eax14, eax14, 0, 2, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0x108, 64, 0, 0, 0, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0x108);
    }
    eax15 = fun_10064de(eax1, eax1);
    return *reinterpret_cast<int16_t*>(&eax15);
}

void** fun_10032ff(void** a1, void** a2, void** a3, void** a4) {
    void** esi5;
    int32_t eax6;
    void** eax7;

    *reinterpret_cast<int16_t*>(&eax6) = fun_1002e55("CABINET", 0, 0, esi5, __return_address(), a1, a2, a3, a4);
    g100bba4 = eax6;
    g10010dc(0, "CABINET", 10, esi5, __return_address());
    g10010d4();
    eax7 = reinterpret_cast<void**>(g1001198());
    g100bba0 = eax7;
    goto 0;
}

void** g100be4c;

int32_t g1001140 = 0x7c81e4bd;

void** g100ba50;

int32_t g100113c = 0x7c809c28;

int32_t g1001138 = 0x7c80eb3f;

int32_t g100103c = 0x773d405c;

int16_t fun_100189d(void** a1, int32_t a2, uint32_t a3, int32_t a4);

int16_t fun_10053fa(void** a1, void** a2, void** a3) {
    void* ebp4;
    void** eax5;
    void** v6;
    void** ebx7;
    void** v8;
    void** esi9;
    void** v10;
    void** edi11;
    void** v12;
    void** v13;
    void** v14;
    void** eax15;
    int32_t ecx16;
    void*** edi17;
    int32_t ecx18;
    void*** edi19;
    void** ecx20;
    void*** edi21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** eax26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    int1_t zf31;
    void** eax32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** eax42;
    int1_t zf43;
    void** v44;
    int1_t zf45;
    void** eax46;
    int1_t zf47;
    int1_t zf48;
    int16_t ax49;
    int1_t zf50;
    int1_t zf51;
    void** eax52;
    void** v53;
    void** v54;
    void** v55;

    ebp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax5 = g100b2d0;
    v6 = ebx7;
    v8 = esi9;
    v10 = edi11;
    v12 = a2;
    v13 = eax5;
    v14 = a1;
    g100c4a4 = a1;
    eax15 = reinterpret_cast<void**>(0);
    ecx16 = 0x23f;
    edi17 = reinterpret_cast<void***>(0x100bba0);
    while (ecx16) {
        --ecx16;
        *edi17 = reinterpret_cast<void**>(0);
        edi17 = edi17 + 4;
    }
    ecx18 = 0xcb;
    edi19 = reinterpret_cast<void***>(0x100c880);
    while (ecx18) {
        --ecx18;
        *edi19 = reinterpret_cast<void**>(0);
        edi19 = edi19 + 4;
    }
    ecx20 = reinterpret_cast<void**>(65);
    edi21 = reinterpret_cast<void***>(0x100ba80);
    while (ecx20) {
        --ecx20;
        *edi21 = reinterpret_cast<void**>(0);
        edi21 = edi21 + 4;
    }
    v22 = reinterpret_cast<void**>(0);
    g100be4c = reinterpret_cast<void**>(1);
    *reinterpret_cast<int16_t*>(&eax15) = fun_1002e55("TITLE", 0x100bbb4, 0x7f, v10, v8, v6, v12, v14, 0);
    if (!eax15 || reinterpret_cast<unsigned char>(eax15) > reinterpret_cast<unsigned char>(0x80)) {
        v23 = reinterpret_cast<void**>(16);
        v24 = reinterpret_cast<void**>(0);
        v25 = reinterpret_cast<void**>(0x4b1);
    } else {
        v23 = reinterpret_cast<void**>(1);
        v24 = reinterpret_cast<void**>(1);
        eax26 = reinterpret_cast<void**>(g1001140(0, 1, 1, 0));
        v25 = eax26;
        g100ba50 = eax26;
        g100113c(v25, 0, 1, 1, 0);
        *reinterpret_cast<int16_t*>(&eax26) = fun_1002e55("EXTRACTOPT", 0x100c494, 4, v25, 0, 1, 1, 0, v10);
        if (!eax26) {
            addr_0x10054d3_13:
            fun_1003ebe(ecx20, 0, 0x4b1, 0, 0, 16, 0, v25, 0, 1, 1, 0, v10, v8, v6, v12, v14, 0, v27, v28, v29, v30);
            g100ba5c = reinterpret_cast<void**>(0x80070714);
            goto addr_0x100565a_14;
        } else {
            zf31 = (*reinterpret_cast<unsigned char*>(&g100c494) & 0xc0) == 0;
            if (zf31) 
                goto addr_0x1005563_16;
            eax32 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp4) + 0xfffffef8);
            *reinterpret_cast<int16_t*>(&eax32) = fun_1002e55("INSTANCECHECK", eax32, 0x104, v25, 0, 1, 1, 0, v10);
            if (eax32) 
                goto addr_0x10054f2_18; else 
                goto addr_0x10054d3_13;
        }
    }
    addr_0x1005654_19:
    fun_1003ebe(ecx20, 0, v25, 0, v24, v23, 0, v10, v8, v6, v12, v14, 0, v33, v34, v35, v36, v37, v38, v39, v40, v41);
    addr_0x100565a_14:
    addr_0x100565c_20:
    eax42 = fun_10064de(v13);
    return *reinterpret_cast<int16_t*>(&eax42);
    addr_0x10054f2_18:
    eax26 = reinterpret_cast<void**>(g1001138(0, 1, reinterpret_cast<int32_t>(ebp4) + 0xfffffef8, v25, 0, 1, 1, 0));
    g100ba54 = eax26;
    if (!eax26) 
        goto addr_0x1005563_16;
    eax26 = reinterpret_cast<void**>(g1001054(0, 1, reinterpret_cast<int32_t>(ebp4) + 0xfffffef8, v25, 0, 1, 1, 0));
    if (!reinterpret_cast<int1_t>(eax26 == 0xb7)) 
        goto addr_0x1005563_16;
    zf43 = (*reinterpret_cast<unsigned char*>(&g100c494) & 0x80) == 0;
    if (!zf43) 
        goto addr_0x1005520_23;
    *reinterpret_cast<int16_t*>(&eax26) = fun_1003ebe(ecx20, 0, 0x524, 0x100bbb4, 0, 32, 4, 0, 1, reinterpret_cast<int32_t>(ebp4) + 0xfffffef8, v25, 0, 1, 1, 0, v10, v8, v6, v12, v14, 0, v44);
    if (eax26 == 6) {
        addr_0x1005563_16:
        g100ba60 = reinterpret_cast<void**>(0);
        *reinterpret_cast<int16_t*>(&eax26) = fun_100359c(v12, v25, 0, 1, 1, 0);
        if (eax26) {
            zf45 = g100c89a == 0;
            if (zf45) {
                eax46 = reinterpret_cast<void**>(g10010dc(v14, 0x1001424, 10, v25, 0, 1, 1, 0));
                if (eax46) {
                    eax46 = reinterpret_cast<void**>(g10010d4(v14, eax46, v14, 0x1001424, 10, v25, 0, 1, 1, 0));
                    v22 = eax46;
                }
                zf47 = g100b2c4 == 0;
                if (!zf47) {
                    g100103c(v14, 0x1001424, 10, v25, 0, 1, 1, 0);
                }
                zf48 = g100c884 == 0;
                if (!zf48) 
                    goto addr_0x1005646_31;
                *reinterpret_cast<int16_t*>(&eax46) = fun_100488c(ecx20, v22, v14, 0x1001424, 10, v25, 0, 1, 1, 0);
                if (!eax46) 
                    goto addr_0x100565a_14;
                ax49 = g100ba64;
                if (ax49 == 1) 
                    goto addr_0x1005604_34;
                if (ax49 == 2) 
                    goto addr_0x1005604_34;
                if (ax49 != 3) 
                    goto addr_0x1005646_31;
                addr_0x1005604_34:
                zf50 = (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&g100c494) + 1) & 1) == 0;
                if (zf50) 
                    goto addr_0x1005646_31;
                zf51 = (*reinterpret_cast<unsigned char*>(&g100c898) & 1) == 0;
                if (!zf51) 
                    goto addr_0x1005646_31;
                eax52 = fun_1001760(v14, 0x1001424, 10, v25, 0, 1, 1, 0);
                if (eax52) 
                    goto addr_0x1005646_31;
                v53 = g100c4a4;
                *reinterpret_cast<int16_t*>(&eax52) = fun_1004819(ecx20, v53, 0x7d6, 0, fun_100189d, 0x547, 0x83e, v14, 0x1001424, 10, v25, 0, 1, 1, 0);
                if (!reinterpret_cast<int1_t>(eax52 == 0x83d)) 
                    goto addr_0x100565a_14;
            } else {
                fun_1002a96(0x100c89a, v25, 0, 1, 1, 0);
                goto addr_0x100565a_14;
            }
        } else {
            goto addr_0x1005654_19;
        }
    } else {
        addr_0x1005548_42:
        v54 = g100ba54;
        g10010e4(v54, 0, 1, reinterpret_cast<int32_t>(ebp4) + 0xfffffef8, v25, 0, 1, 1, 0);
        g100ba5c = reinterpret_cast<void**>(0x800700b7);
        goto addr_0x100565a_14;
    }
    addr_0x1005646_31:
    goto addr_0x100565c_20;
    addr_0x1005520_23:
    fun_1003ebe(ecx20, 0, 0x54b, 0x100bbb4, 0, 16, 0, 0, 1, reinterpret_cast<int32_t>(ebp4) + 0xfffffef8, v25, 0, 1, 1, 0, v10, v8, v6, v12, v14, 0, v55);
    goto addr_0x1005548_42;
}

void fun_10084bd(void** a1) {
    void** eax2;
    void** esi3;
    uint32_t edx4;
    uint32_t edi5;
    uint32_t eax6;

    if (*reinterpret_cast<void***>(a1 + 0x2ed8) != 3) {
        eax2 = *reinterpret_cast<void***>(a1 + 0x2b04);
        esi3 = eax2 + 4;
        if (reinterpret_cast<unsigned char>(esi3) <= reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 0x2b08))) {
            edx4 = 0;
            *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&edx4) + 1) = *reinterpret_cast<void***>(eax2 + 1);
            edi5 = static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax2 + 3)));
            *reinterpret_cast<void***>(&edx4) = *reinterpret_cast<void***>(eax2);
            eax6 = static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax2 + 2)));
            *reinterpret_cast<unsigned char*>(a1 + 0x2eb4) = 16;
            *reinterpret_cast<void***>(a1 + 0x2b04) = esi3;
            *reinterpret_cast<uint32_t*>(a1 + 0x2eb0) = (edx4 << 8 | edi5) << 8 | eax6;
        }
    }
    return;
}

int16_t fun_1008237(void* ecx, void** a2, void** a3) {
    void** ebx4;
    void** v5;
    int1_t less_or_equal6;
    void** eax7;
    void** esi8;
    void** esi9;
    void** edi10;
    void** eax11;
    int1_t zf12;
    void** eax13;
    void** ecx14;
    uint32_t ecx15;
    signed char* esi16;
    signed char* edi17;
    uint32_t ecx18;
    int32_t ecx19;
    signed char* esi20;
    signed char* edi21;
    void** esi22;
    void** eax23;
    void** ecx24;
    void*** v25;
    void** eax26;

    ebx4 = a2;
    v5 = reinterpret_cast<void**>(0);
    while (1) {
        less_or_equal6 = reinterpret_cast<signed char>(a3) <= reinterpret_cast<signed char>(0);
        do {
            if (less_or_equal6) 
                goto addr_0x100842c_4;
            if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebx4 + 0x2edc) == 1)) {
                eax7 = ebx4 + 0x2eb8;
                if (*reinterpret_cast<void***>(eax7)) {
                    *reinterpret_cast<void***>(eax7) = reinterpret_cast<void**>(0);
                    *reinterpret_cast<int16_t*>(&eax7) = fun_1008589(ebx4, 1);
                    if (!eax7) {
                        *reinterpret_cast<void***>(ebx4 + 0x2ec4) = reinterpret_cast<void**>(0);
                    } else {
                        *reinterpret_cast<int16_t*>(&eax7) = fun_1008589(ebx4, 16);
                        esi8 = eax7;
                        *reinterpret_cast<int16_t*>(&eax7) = fun_1008589(ebx4, 16);
                        eax7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax7) | reinterpret_cast<unsigned char>(esi8) << 16);
                        *reinterpret_cast<void***>(ebx4 + 0x2ec4) = eax7;
                    }
                }
                if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebx4 + 0x2ed8) == 3)) {
                    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx4 + 0x2ed0)) & 1 && (eax7 = ebx4 + 0x2b04, reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax7)) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx4 + 0x2b08)))) {
                        *reinterpret_cast<void***>(eax7) = *reinterpret_cast<void***>(eax7) + 1;
                    }
                    *reinterpret_cast<void***>(ebx4 + 0x2ed8) = reinterpret_cast<void**>(0);
                    fun_1008462(ebx4);
                }
                *reinterpret_cast<int16_t*>(&eax7) = fun_1008589(ebx4, 3);
                *reinterpret_cast<void***>(ebx4 + 0x2ed8) = eax7;
                *reinterpret_cast<int16_t*>(&eax7) = fun_1008589(ebx4, 8);
                esi9 = eax7;
                *reinterpret_cast<int16_t*>(&eax7) = fun_1008589(ebx4, 8);
                edi10 = eax7;
                *reinterpret_cast<int16_t*>(&eax7) = fun_1008589(ebx4, 8);
                eax11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax7) + ((reinterpret_cast<unsigned char>(esi9) << 8) + reinterpret_cast<unsigned char>(edi10) << 8));
                zf12 = reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebx4 + 0x2ed8) == 2);
                *reinterpret_cast<void***>(ebx4 + 0x2ed0) = eax11;
                *reinterpret_cast<void***>(ebx4 + 0x2ed4) = eax11;
                if (zf12) {
                    fun_1009931(ebx4);
                }
                eax13 = *reinterpret_cast<void***>(ebx4 + 0x2ed8);
                if (eax13 == 1 || eax13 == 2) {
                    ecx14 = reinterpret_cast<void**>(*reinterpret_cast<unsigned char*>(ebx4 + 0x2eb5) * 8 + 0x100);
                    if (reinterpret_cast<signed char>(ecx14) >= reinterpret_cast<signed char>(0x2a0)) {
                        ecx14 = reinterpret_cast<void**>(0x2a0);
                    }
                    eax13 = ecx14;
                    ecx15 = reinterpret_cast<unsigned char>(ecx14) >> 2;
                    esi16 = reinterpret_cast<signed char*>(ebx4 + 0xa18);
                    edi17 = reinterpret_cast<signed char*>(ebx4 + 0x2b14);
                    while (ecx15) {
                        --ecx15;
                        *edi17 = *esi16;
                        edi17 = edi17 + 4;
                        esi16 = esi16 + 4;
                    }
                    ecx18 = reinterpret_cast<unsigned char>(eax13) & 3;
                    while (ecx18) {
                        --ecx18;
                        *edi17 = *esi16;
                        ++edi17;
                        ++esi16;
                    }
                    ecx19 = 62;
                    esi20 = reinterpret_cast<signed char*>(ebx4 + 0xcb8);
                    edi21 = reinterpret_cast<signed char*>(ebx4 + 0x2db4);
                    while (ecx19) {
                        --ecx19;
                        *edi21 = *esi20;
                        edi21 = edi21 + 4;
                        esi20 = esi20 + 4;
                    }
                    *edi21 = *esi20;
                    fun_1009862(ebx4);
                } else {
                    if (!reinterpret_cast<int1_t>(eax13 == 3)) 
                        goto addr_0x1008336_33;
                    *reinterpret_cast<int16_t*>(&eax13) = fun_1008646(ebx4);
                    if (!eax13) 
                        goto addr_0x1008336_33;
                }
                *reinterpret_cast<void***>(ebx4 + 0x2edc) = reinterpret_cast<void**>(2);
            }
            while (reinterpret_cast<signed char>(*reinterpret_cast<void***>(ebx4 + 0x2ed4)) > reinterpret_cast<signed char>(0) && reinterpret_cast<signed char>(a3) > reinterpret_cast<signed char>(0)) {
                esi22 = *reinterpret_cast<void***>(ebx4 + 0x2ed4);
                if (reinterpret_cast<signed char>(esi22) >= reinterpret_cast<signed char>(a3)) {
                    esi22 = a3;
                }
                if (!esi22) 
                    goto addr_0x1008336_33;
                eax13 = *reinterpret_cast<void***>(ebx4 + 0x2ec0);
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebx4 + 0x2ed8) == 2)) {
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebx4 + 0x2ed8) == 1)) {
                        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebx4 + 0x2ed8) == 3)) {
                            eax13 = reinterpret_cast<void**>(0xffffffff);
                        } else {
                            *reinterpret_cast<int16_t*>(&eax13) = fun_10085b5(ebx4, eax13, esi22);
                        }
                    } else {
                        *reinterpret_cast<int16_t*>(&eax13) = fun_1008cde(ebx4, eax13, esi22);
                    }
                } else {
                    *reinterpret_cast<int16_t*>(&eax13) = fun_100948e(ebx4, eax13, esi22);
                }
                if (eax13) 
                    goto addr_0x1008336_33;
                *reinterpret_cast<void***>(ebx4 + 0x2ed4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx4 + 0x2ed4)) - reinterpret_cast<unsigned char>(esi22));
                a3 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a3) - reinterpret_cast<unsigned char>(esi22));
                v5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v5) + reinterpret_cast<unsigned char>(esi22));
            }
            if (!*reinterpret_cast<void***>(ebx4 + 0x2ed4)) {
                *reinterpret_cast<void***>(ebx4 + 0x2edc) = reinterpret_cast<void**>(1);
            }
            less_or_equal6 = reinterpret_cast<signed char>(a3) <= reinterpret_cast<signed char>(0);
        } while (a3);
        fun_1008462(ebx4);
    }
    addr_0x100842c_4:
    eax23 = *reinterpret_cast<void***>(ebx4 + 0x2ec0);
    if (!eax23) {
        eax23 = *reinterpret_cast<void***>(ebx4 + 4);
    }
    ecx24 = reinterpret_cast<void**>(0x9800);
    if (reinterpret_cast<signed char>(v5) < reinterpret_cast<signed char>(0x9800)) {
        ecx24 = v5;
    }
    v25 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax23) - reinterpret_cast<unsigned char>(v5) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx4)));
    fun_10094f3(ebx4, ecx24, v25);
    eax26 = v5;
    addr_0x1008456_57:
    return *reinterpret_cast<int16_t*>(&eax26);
    addr_0x1008336_33:
    eax26 = reinterpret_cast<void**>(0xffffffff);
    goto addr_0x1008456_57;
}

void fun_100807b(void** a1) {
    void** edx2;
    uint32_t eax3;
    void* eax4;
    void* esi5;
    void* ebx6;
    uint32_t ecx7;
    signed char* edi8;
    uint32_t ecx9;
    void* eax10;
    void* esi11;
    uint32_t ecx12;
    signed char* edi13;
    uint32_t ecx14;
    int32_t ecx15;
    signed char* edi16;
    int32_t ecx17;
    signed char* edi18;

    edx2 = a1;
    eax3 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(edx2 + 0x2eb5));
    eax4 = reinterpret_cast<void*>(eax3 * 8 + 0x100);
    esi5 = reinterpret_cast<void*>(0x2a0);
    if (reinterpret_cast<int32_t>(eax4) >= reinterpret_cast<int32_t>(0x2a0)) {
        eax4 = reinterpret_cast<void*>(0x2a0);
    }
    ebx6 = eax4;
    ecx7 = reinterpret_cast<uint32_t>(eax4) >> 2;
    edi8 = reinterpret_cast<signed char*>(edx2 + 0xa18);
    while (ecx7) {
        --ecx7;
        *edi8 = reinterpret_cast<signed char>(0);
        edi8 = edi8 + 4;
        esi5 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi5) + 4);
    }
    ecx9 = reinterpret_cast<uint32_t>(ebx6) & 3;
    while (ecx9) {
        --ecx9;
        *edi8 = 0;
        ++edi8;
        esi5 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi5) + 1);
    }
    eax10 = reinterpret_cast<void*>(*reinterpret_cast<unsigned char*>(edx2 + 0x2eb5) * 8 + 0x100);
    if (reinterpret_cast<int32_t>(eax10) >= reinterpret_cast<int32_t>(esi5)) {
        eax10 = esi5;
    }
    esi11 = eax10;
    ecx12 = reinterpret_cast<uint32_t>(eax10) >> 2;
    edi13 = reinterpret_cast<signed char*>(edx2 + 0x2b14);
    while (ecx12) {
        --ecx12;
        *edi13 = reinterpret_cast<signed char>(0);
        edi13 = edi13 + 4;
        esi11 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi11) + 4);
    }
    ecx14 = reinterpret_cast<uint32_t>(esi11) & 3;
    while (ecx14) {
        --ecx14;
        *edi13 = 0;
        ++edi13;
    }
    ecx15 = 62;
    edi16 = reinterpret_cast<signed char*>(edx2 + 0xcb8);
    while (ecx15) {
        --ecx15;
        *edi16 = reinterpret_cast<signed char>(0);
        edi16 = edi16 + 4;
    }
    *edi16 = 0;
    ecx17 = 62;
    edi18 = reinterpret_cast<signed char*>(edx2 + 0x2db4);
    while (ecx17) {
        --ecx17;
        *edi18 = reinterpret_cast<signed char>(0);
        edi18 = edi18 + 4;
    }
    *edi18 = 0;
    return;
}

void fun_100810b(void** a1) {
    *reinterpret_cast<void***>(a1 + 12) = reinterpret_cast<void**>(1);
    *reinterpret_cast<void***>(a1 + 16) = reinterpret_cast<void**>(1);
    *reinterpret_cast<void***>(a1 + 20) = reinterpret_cast<void**>(1);
    *reinterpret_cast<void***>(a1 + 0x2ec0) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(a1 + 0x2b10) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(a1 + 0x2edc) = reinterpret_cast<void**>(1);
    *reinterpret_cast<void***>(a1 + 0x2ed4) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(a1 + 0x2ed8) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(a1 + 0x2eb8) = reinterpret_cast<void**>(1);
    *reinterpret_cast<void***>(a1 + 0x2ec4) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(a1 + 0x2ebc) = reinterpret_cast<void**>(0);
    return;
}

void fun_100815a(void** a1) {
    *reinterpret_cast<void**>(a1 + 0x2ec8) = reinterpret_cast<void*>(0);
    return;
}

void fun_1001038() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_1001040() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_1001048() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_100119c() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_100121c() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

struct s41 {
    signed char[16] pad16;
    int32_t f16;
};

struct s42 {
    signed char[16] pad16;
    int32_t f16;
};

struct s43 {
    signed char[1] pad1;
    void** f1;
};

struct s44 {
    signed char[110] pad110;
    int32_t f110;
};

struct s45 {
    signed char[110] pad110;
    int32_t f110;
};

struct s46 {
    signed char[1] pad1;
    void** f1;
};

struct s47 {
    signed char[101] pad101;
    unsigned char f101;
};

struct s48 {
    signed char[1] pad1;
    void** f1;
};

struct s49 {
    signed char[117835269] pad117835269;
    void** f117835269;
};

struct s50 {
    signed char[105] pad105;
    signed char f105;
};

struct s51 {
    signed char[105] pad105;
    signed char f105;
};

unsigned char gfe000001;

signed char g7fe0000;

struct s52 {
    signed char[110] pad110;
    int32_t f110;
};

void fun_100122c(void** ecx) {
    signed char* eax2;
    signed char* eax3;
    signed char al4;
    signed char* eax5;
    signed char* eax6;
    signed char al7;
    signed char* eax8;
    signed char* eax9;
    signed char al10;
    signed char* eax11;
    signed char* eax12;
    signed char al13;
    struct s41* ebx14;
    struct s42* ebx15;
    signed char* eax16;
    signed char* eax17;
    signed char al18;
    signed char* eax19;
    signed char* eax20;
    signed char al21;
    signed char* eax22;
    signed char al23;
    signed char* eax24;
    void** eax25;
    void** ebx26;
    struct s43* ebx27;
    void** esp28;
    struct s44* ebp29;
    void** esi30;
    uint1_t cf31;
    uint1_t zf32;
    void** edx33;
    void** ebp34;
    struct s45* edi35;
    unsigned char dl36;
    void** esp37;
    void** esp38;
    uint32_t* edx39;
    uint1_t below_or_equal40;
    void** esp41;
    void** esp42;
    struct s46* edx43;
    void** edx44;
    int1_t zf45;
    void** esp46;
    void** ebp47;
    void** edi48;
    struct s48* edi49;
    void** esp50;
    void** esp51;
    void** ebp52;
    void** esp53;
    void** esp54;
    void** esp55;
    void** esp56;
    void* edi57;
    void** ebp58;
    void** esp59;
    void** esp60;
    void** esp61;
    void** esp62;
    void** ecx63;
    void** esi64;
    void** edi65;
    void** esp66;
    void** esp67;
    void** ebp68;
    void** edx69;
    void** edi70;
    void** esp71;
    uint1_t cf72;
    uint1_t zf73;
    void** esp74;
    int16_t es75;
    int1_t zf76;
    struct s49* eax77;
    void** esp78;
    void** esp79;
    void** eax80;
    void** ebx81;
    void** esp82;
    void** esp83;
    void** ebp84;
    void** esp85;
    void** esp86;
    void** ebx87;
    void** esp88;
    void** esp89;
    void** esp90;
    void** esp91;
    void** esp92;
    void** ebp93;
    void** esp94;
    void** esp95;
    void** esp96;
    void** esp97;
    void** esp98;
    void** esp99;
    void** esp100;
    void** ebp101;
    void** esp102;
    void** esp103;
    void** esp104;
    void** esp105;
    void** esp106;
    void** ebp107;
    void** esp108;
    void** esp109;
    void** esp110;
    void** esp111;
    void** esp112;
    void** esp113;
    uint32_t* edx114;
    struct s50* edi115;
    struct s51* edi116;
    signed char dh117;
    void** edi118;
    void** esp119;
    void** esp120;
    void** esp121;
    struct s52* edi122;

    *eax2 = reinterpret_cast<signed char>(*eax3 + al4);
    *eax5 = reinterpret_cast<signed char>(*eax6 + al7);
    *eax8 = reinterpret_cast<signed char>(*eax9 + al10);
    *eax11 = reinterpret_cast<signed char>(*eax12 + al13);
    ebx14->f16 = ebx15->f16 >> 65;
    *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
    *eax19 = reinterpret_cast<signed char>(*eax20 + al21);
    *reinterpret_cast<signed char*>(&eax22) = reinterpret_cast<signed char>(al23 + *eax24);
    *eax22 = reinterpret_cast<signed char>(*eax22 + *reinterpret_cast<signed char*>(&eax22));
    eax25 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>((reinterpret_cast<uint32_t>(eax22) & 0xe4000000) + 0x9e40000)));
    *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
    ebx26 = reinterpret_cast<void**>(&ebx27->f1);
    __asm__("outsd ");
    esp28 = reinterpret_cast<void**>(ebp29->f110 * 77);
    __asm__("insd ");
    if (!__intrinsic()) {
        goto addr_0x10012c7_3;
    }
    esi30 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) * 0x61000000);
    cf31 = __intrinsic();
    zf32 = __undefined();
    if (cf31 | zf32) {
        addr_0x10012c9_5:
        ++ebx26;
        zf32 = reinterpret_cast<uint1_t>(ebx26 == 0);
        if (!zf32) {
            addr_0x1001344_6:
            *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
            *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
            *reinterpret_cast<void***>(edx33) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx33)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx + 1)));
            goto addr_0x100134d_7;
        } else {
            if (cf31) {
                addr_0x1001339_9:
                *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                *reinterpret_cast<void**>(&eax25) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)) & reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)));
                *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                goto addr_0x1001344_6;
            } else {
                addr_0x10012d4_10:
                __asm__("outsb ");
                if (zf32) {
                    addr_0x100132d_11:
                    *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                    goto addr_0x1001330_12;
                } else {
                    if (cf31) {
                        addr_0x100134d_7:
                        *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                        goto addr_0x100134e_14;
                    } else {
                        ebp34 = reinterpret_cast<void**>(edi35->f110 * 0x7070415c);
                        *reinterpret_cast<unsigned char*>(eax25 + 97) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax25 + 97) & dl36);
                        if (!*reinterpret_cast<unsigned char*>(eax25 + 97)) {
                            addr_0x100134e_14:
                            *reinterpret_cast<signed char*>(ebp34 + 80) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebp34 + 80) + *reinterpret_cast<signed char*>(&edx33));
                            ++esi30;
                            --ecx;
                            esp37 = esp28 + 1 - 1;
                            ++ebp34;
                            eax25 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax25) & 0x756c);
                            goto addr_0x100135b_16;
                        }
                        esp38 = *reinterpret_cast<void***>(esp28) + 4;
                        *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                    }
                }
            }
        }
    } else {
        if (__intrinsic()) {
            goto addr_0x10012d4_10;
        }
        esi30 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi30) ^ *edx39);
        __asm__("insb ");
        __asm__("insb ");
        *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        below_or_equal40 = reinterpret_cast<uint1_t>(__intrinsic() | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(eax25) == 0));
        esp41 = esp28 - 4;
        *reinterpret_cast<void***>(esp41) = ebx26;
        esp42 = esp41 - 4;
        *reinterpret_cast<void***>(esp42) = ebx26;
        esp38 = esp42 - 4;
        *reinterpret_cast<void***>(esp38) = reinterpret_cast<void**>(0x6f647475);
        if (!below_or_equal40) 
            goto addr_0x10012ec_22;
        esp38 = esp38 - 4;
        *reinterpret_cast<void***>(esp38) = eax25;
        if (!__intrinsic()) 
            goto addr_0x1001281_24;
    }
    *reinterpret_cast<void***>(esi30) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi30)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx + 1)));
    goto addr_0x10012ec_22;
    addr_0x1001281_24:
    if (below_or_equal40) {
        addr_0x10012ec_22:
        edx33 = reinterpret_cast<void**>(&edx43->f1);
        ++ecx;
        esp37 = esp38 - 4;
        *reinterpret_cast<void***>(esp37) = esp37;
        *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        if (!__intrinsic()) 
            goto addr_0x100135b_16;
    } else {
        __asm__("insb ");
        *reinterpret_cast<unsigned char*>(&(*reinterpret_cast<struct s47**>(&esi30))->f101) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&(*reinterpret_cast<struct s47**>(&esi30))->f101) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        __asm__("insb ");
        --esi30;
        __asm__("outsd ");
        esp37 = esp38 - 4;
        *reinterpret_cast<void***>(esp37) = edx44;
        if (esi30) {
            addr_0x1001300_27:
            *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
            *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
            zf45 = *reinterpret_cast<void***>(eax25) == 0;
            if (!__intrinsic()) {
                addr_0x100136b_28:
                eax25 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax25) & 0x2e643330);
                goto addr_0x100136d_29;
            } else {
                if (zf45) {
                    goto addr_0x100137e_32;
                } else {
                    if (__intrinsic()) {
                        addr_0x1001382_34:
                        __asm__("popad ");
                        esp28 = esp37 - 4;
                        *reinterpret_cast<void***>(esp28) = ebx26;
                        if (zf45) {
                            addr_0x10013f9_35:
                            esp46 = esp28 - 4;
                            *reinterpret_cast<void***>(esp46) = ebx26;
                            ebp47 = ebp34 + 1;
                            *reinterpret_cast<unsigned char*>(esi30 + 73) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(esi30 + 73) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                            --ecx;
                            esp28 = esp46 - 4;
                            *reinterpret_cast<void***>(esp28) = ebx26;
                            --eax25;
                            goto addr_0x1001402_36;
                        } else {
                            addr_0x1001387_37:
                            ebp47 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(esi30 + 0x67) * 0x45202928);
                            if (__intrinsic()) {
                                addr_0x1001402_36:
                                --ebp47;
                                esp28 = esp28 - 4;
                                *reinterpret_cast<void***>(esp28) = ebx26;
                                edi48 = reinterpret_cast<void**>(&edi49->f1);
                                goto addr_0x1001405_38;
                            } else {
                                __asm__("outsd ");
                                if (__intrinsic()) {
                                    addr_0x10013c1_40:
                                    esp50 = esp28 - 4;
                                    *reinterpret_cast<void***>(esp50) = eax25;
                                    ++ebx26;
                                    *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                                    *reinterpret_cast<unsigned char*>(esi30 + 73) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(esi30 + 73) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                                    esp51 = esp50 - 1 - 4;
                                    *reinterpret_cast<void***>(esp51) = ebx26;
                                    ecx = ecx + 1 - 1;
                                    edx33 = *reinterpret_cast<void***>(esp51);
                                    ebp52 = ebp47 + 1 + 1 + 1;
                                    esp53 = esp51 + 4 - 4;
                                    *reinterpret_cast<void***>(esp53) = ebx26;
                                    *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                                    *reinterpret_cast<void***>(esi30 + reinterpret_cast<unsigned char>(ecx) * 2) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi30 + reinterpret_cast<unsigned char>(ecx) * 2)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx26 + 1)));
                                    __asm__("outsd ");
                                    __asm__("outsb ");
                                    *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                                    esp54 = esp53 - 4;
                                    *reinterpret_cast<void***>(esp54) = ebp52;
                                    esp55 = esp54 - 4;
                                    *reinterpret_cast<void***>(esp55) = eax25;
                                    esp56 = esp55 - 4;
                                    *reinterpret_cast<void***>(esp56) = edx33;
                                    edi49 = reinterpret_cast<struct s48*>(reinterpret_cast<int32_t>(edi57) - 1);
                                    ebp58 = ebp52 - 1;
                                    esp59 = esp56 - 4;
                                    *reinterpret_cast<void***>(esp59) = eax25;
                                    esp60 = esp59 - 4;
                                    *reinterpret_cast<void***>(esp60) = esp60;
                                    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebp58 + reinterpret_cast<unsigned char>(ecx) * 2) + 80) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebp58 + reinterpret_cast<unsigned char>(ecx) * 2) + 80) + *reinterpret_cast<signed char*>(&edx33));
                                    *reinterpret_cast<void**>(&eax25) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)) ^ 51);
                                    eax25 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax25) ^ 0x542e2431);
                                    ebp34 = ebp58 - 1;
                                    esp37 = esp60 - 4;
                                    *reinterpret_cast<void***>(esp37) = eax25;
                                    *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                                    goto addr_0x10013f1_41;
                                } else {
                                    *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(0);
                                    ++ebx26;
                                    __asm__("outsd ");
                                    if (ebx26) {
                                        addr_0x1001405_38:
                                        *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                                        *reinterpret_cast<unsigned char*>(ecx + 51) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ecx + 51) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx + 1)));
                                        *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                                        *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                                        __asm__("insd ");
                                        goto addr_0x1001411_43;
                                    } else {
                                        *reinterpret_cast<unsigned char*>(esi30 + 0x6f) = 0;
                                        if (!*reinterpret_cast<unsigned char*>(esi30 + 0x6f)) {
                                            addr_0x10013bf_45:
                                            esp61 = esp28 - 4;
                                            *reinterpret_cast<void***>(esp61) = esp61;
                                            esp28 = esp61 - 4;
                                            *reinterpret_cast<void***>(esp28) = ebx26;
                                            goto addr_0x10013c1_40;
                                        } else {
                                            __asm__("insb ");
                                            __asm__("outsd ");
                                            __asm__("popad ");
                                            *reinterpret_cast<unsigned char*>(ebx26 + 0x74) = 0;
                                            if (0) {
                                                addr_0x1001411_43:
                                                esi30 = reinterpret_cast<void**>(0);
                                                __asm__("popad ");
                                                __asm__("insb ");
                                                if (__intrinsic()) {
                                                    addr_0x1001484_47:
                                                    esp62 = esp28 - 4;
                                                    *reinterpret_cast<void***>(esp62) = edi48;
                                                    ecx63 = ecx - 1;
                                                    esi64 = esi30 - 1;
                                                    edi65 = edi48 - 1;
                                                    esp66 = esp62 + 1 - 4;
                                                    *reinterpret_cast<void***>(esp66) = edi65;
                                                    *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                                                    esp67 = esp66 - 4;
                                                    *reinterpret_cast<void***>(esp67) = edx33;
                                                    ebp68 = ebp47 + 1;
                                                    edx69 = edx33 + 1;
                                                    edi70 = edi65 - 1 - 1;
                                                    esp71 = esp67 - 4;
                                                    *reinterpret_cast<void***>(esp71) = esp71;
                                                    *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                                                    cf72 = __intrinsic();
                                                    zf73 = reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(eax25) == 0);
                                                    __asm__("insd ");
                                                    if (!cf72) {
                                                        addr_0x10014fb_48:
                                                        eax25 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax25) | 0xf0e0e0d);
                                                        __asm__("movups xmm2, [eax]");
                                                        *reinterpret_cast<void***>(ecx63) = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx63)) + reinterpret_cast<unsigned char>(edx69))));
                                                        *reinterpret_cast<void***>(ecx63) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx63)) + reinterpret_cast<unsigned char>(edx69) + __intrinsic());
                                                        cf72 = __intrinsic();
                                                        goto addr_0x1001508_49;
                                                    } else {
                                                        __asm__("outsd ");
                                                        if (!reinterpret_cast<uint1_t>(cf72 | zf73)) {
                                                            addr_0x1001508_49:
                                                            *reinterpret_cast<void***>(ecx63) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx63)) + reinterpret_cast<unsigned char>(edx69) + cf72);
                                                            *reinterpret_cast<void***>(ecx63) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx63)) + reinterpret_cast<unsigned char>(edx69) + __intrinsic());
                                                            cf72 = __intrinsic();
                                                            goto addr_0x100150c_51;
                                                        } else {
                                                            __asm__("insb ");
                                                            if (zf73) {
                                                                addr_0x100150c_51:
                                                                *reinterpret_cast<void***>(ecx63) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx63)) + reinterpret_cast<unsigned char>(edx69) + cf72);
                                                                *reinterpret_cast<void***>(ecx63) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx63)) + reinterpret_cast<unsigned char>(edx69) + __intrinsic());
                                                                *reinterpret_cast<void***>(ecx63) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx63)) + reinterpret_cast<unsigned char>(edx69) + __intrinsic());
                                                                *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(eax25) + __intrinsic());
                                                                *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                                                                *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                                                            } else {
                                                                *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                                                                *reinterpret_cast<unsigned char*>(ecx63 + 58) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ecx63 + 58) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                                                                esp74 = *reinterpret_cast<void***>(esp71) + 4;
                                                                *reinterpret_cast<unsigned char*>(ebp68 + 99) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp68 + 99) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                                                                if (__intrinsic()) {
                                                                    addr_0x1001526_55:
                                                                    *reinterpret_cast<void***>(edx69) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx69)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                                                                    *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                                                                    goto addr_0x100152a_56;
                                                                } else {
                                                                    if (__intrinsic()) {
                                                                        *reinterpret_cast<void***>(ecx63) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx63)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                                                                        *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                                                                        goto addr_0x1001526_55;
                                                                    } else {
                                                                        ++esi64;
                                                                        ++ebx26;
                                                                        __asm__("outsd ");
                                                                        __asm__("outsb ");
                                                                        if (!ebx26) {
                                                                            addr_0x100152f_60:
                                                                            *reinterpret_cast<int16_t*>(esp74 - 2) = es75;
                                                                            *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                                                                            *reinterpret_cast<void***>(edx69) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx69)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx63)));
                                                                            goto addr_0x1001535_61;
                                                                        } else {
                                                                            __asm__("outsd ");
                                                                            __asm__("insb ");
                                                                            *reinterpret_cast<unsigned char*>(eax25 + 97) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax25 + 97) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx69)));
                                                                            __asm__("outsb ");
                                                                            __asm__("insb ");
                                                                            esp74 = *reinterpret_cast<void***>(esp74) + 4 + 1;
                                                                            zf76 = esp74 == 0;
                                                                            if (1) {
                                                                                addr_0x1001535_61:
                                                                                *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                                                                                *reinterpret_cast<void***>(esi64) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi64)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx63)));
                                                                                *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                                                                                goto addr_0x100153b_63;
                                                                            } else {
                                                                                if (zf76) {
                                                                                    addr_0x100153b_63:
                                                                                    *reinterpret_cast<void***>(esi64) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi64)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx69)));
                                                                                    *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                                                                                    *reinterpret_cast<void***>(esi64) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi64)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx26)));
                                                                                    goto addr_0x1001541_65;
                                                                                } else {
                                                                                    if (__intrinsic()) {
                                                                                        addr_0x100152a_56:
                                                                                        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax25) + reinterpret_cast<unsigned char>(eax25)) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax25) + reinterpret_cast<unsigned char>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                                                                                        *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                                                                                        goto addr_0x100152f_60;
                                                                                    } else {
                                                                                        *reinterpret_cast<void***>(esp74 - 4) = edx69;
                                                                                        if (1) {
                                                                                            addr_0x1001541_65:
                                                                                            *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                                                                                            *reinterpret_cast<void***>(esi64) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi64)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx63 + 1)));
                                                                                            *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                                                                                            goto addr_0x1001546_68;
                                                                                        } else {
                                                                                            if (!zf76) {
                                                                                                addr_0x1001546_68:
                                                                                                *reinterpret_cast<void***>(esi64) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi64)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx26 + 1)));
                                                                                                *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                                                                                                *reinterpret_cast<void***>(esi64) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi64)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx26)));
                                                                                                *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                                                                                                if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax25)) < reinterpret_cast<signed char>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(eax25) == 0)) 
                                                                                                    goto addr_0x1001552_70; else 
                                                                                                    goto addr_0x1001552_70;
                                                                                            } else {
                                                                                                __asm__("arpl [ebp+0x4c], sp");
                                                                                                __asm__("outsd ");
                                                                                                __asm__("arpl [ecx+0x6c], sp");
                                                                                                *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                                                                                                *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                                                                                                *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                                                                                                *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                                                                                                *reinterpret_cast<void***>(ecx63) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx63)) + reinterpret_cast<unsigned char>(eax25));
                                                                                                *reinterpret_cast<void**>(&eax25) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx69)));
                                                                                                eax77 = reinterpret_cast<struct s49*>(reinterpret_cast<unsigned char>(eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx26)));
                                                                                                *reinterpret_cast<signed char*>(&eax77) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax77) + 4);
                                                                                                eax25 = reinterpret_cast<void**>(&eax77->f117835269);
                                                                                                *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) | reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx63)));
                                                                                                *reinterpret_cast<void***>(ecx63) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx63)) | reinterpret_cast<unsigned char>(ecx63));
                                                                                                *reinterpret_cast<void**>(&ecx63) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx63)) | reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx69)));
                                                                                                ecx63 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx63) | reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx26)));
                                                                                                *reinterpret_cast<void**>(&eax25) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)) | 12);
                                                                                                goto addr_0x10014fb_48;
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    __asm__("popad ");
                                                    *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                                                    goto addr_0x100141e_73;
                                                }
                                            } else {
                                                __asm__("outsb ");
                                                *reinterpret_cast<unsigned char*>(reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebp47) + reinterpret_cast<int16_t>(*reinterpret_cast<struct s47**>(&esi30))) + 0x65) = 0;
                                                if (1) {
                                                    addr_0x100141e_73:
                                                    *reinterpret_cast<unsigned char*>(eax25 + 0x70) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax25 + 0x70) + *reinterpret_cast<unsigned char*>(&edx33 + 1));
                                                    __asm__("arpl [eax], ax");
                                                    goto addr_0x1001423_75;
                                                } else {
                                                    if (*reinterpret_cast<signed char*>(reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebp47) + reinterpret_cast<int16_t>(*reinterpret_cast<struct s47**>(&esi30))) + 0x65)) {
                                                        addr_0x1001423_75:
                                                        esp78 = esp28 - 4;
                                                        *reinterpret_cast<void***>(esp78) = esi30;
                                                        esp79 = esp78 - 4;
                                                        *reinterpret_cast<void***>(esp79) = edx33;
                                                        eax80 = eax25 - 1;
                                                        ebx81 = ebx26 + 1 + 1 - 1;
                                                        *reinterpret_cast<void***>(eax80) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax80)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax80)));
                                                        *reinterpret_cast<void***>(eax80) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax80)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax80)));
                                                        esp82 = esp79 - 4;
                                                        *reinterpret_cast<void***>(esp82) = ebx81;
                                                        esp83 = esp82 - 4;
                                                        *reinterpret_cast<void***>(esp83) = esp83;
                                                        eax25 = eax80 - 1;
                                                        ebp84 = ebp47 + 1 + 1 + 1 + 1;
                                                        *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                                                        *reinterpret_cast<unsigned char*>(ebp84 + 88) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp84 + 88) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                                                        esp85 = esp83 - 4;
                                                        *reinterpret_cast<void***>(esp85) = esp85;
                                                        esp86 = esp85 - 4;
                                                        *reinterpret_cast<void***>(esp86) = edx33;
                                                        ebx87 = ebx81 + 1 + 1 + 1 - 1 + 1;
                                                        esp88 = esp86 - 4;
                                                        *reinterpret_cast<void***>(esp88) = esp88;
                                                        esp89 = esp88 - 4;
                                                        *reinterpret_cast<void***>(esp89) = eax25;
                                                        esp90 = esp89 - 4;
                                                        *reinterpret_cast<void***>(esp90) = esp90;
                                                        *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                                                        esp91 = esp90 - 4;
                                                        *reinterpret_cast<void***>(esp91) = esp91;
                                                        esp92 = esp91 - 4;
                                                        *reinterpret_cast<void***>(esp92) = esp92;
                                                        ebp93 = ebp84 + 1;
                                                        *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                                                        *reinterpret_cast<signed char*>(eax25 + 79) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax25 + 79) + *reinterpret_cast<signed char*>(&edx33));
                                                        esp94 = esp92 - 1 - 4;
                                                        *reinterpret_cast<void***>(esp94) = ebx87;
                                                        esp95 = esp94 - 4;
                                                        *reinterpret_cast<void***>(esp95) = esp95;
                                                        esp96 = esp95 - 4;
                                                        *reinterpret_cast<void***>(esp96) = edx33;
                                                        esp97 = esp96 - 4;
                                                        *reinterpret_cast<void***>(esp97) = ebp93;
                                                        esp98 = esp97 - 4;
                                                        *reinterpret_cast<void***>(esp98) = eax25;
                                                        esp99 = esp98 - 4;
                                                        *reinterpret_cast<void***>(esp99) = edx33;
                                                        esp100 = esp99 - 4;
                                                        *reinterpret_cast<void***>(esp100) = edx33;
                                                        ebp101 = ebp93 - 1;
                                                        *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                                                        esp102 = esp100 - 4;
                                                        *reinterpret_cast<void***>(esp102) = edx33;
                                                        esp103 = esp102 - 4;
                                                        *reinterpret_cast<void***>(esp103) = ebp101;
                                                        esi30 = esi30 - 1 - 1 - 1 - 1;
                                                        esp104 = esp103 - 4;
                                                        *reinterpret_cast<void***>(esp104) = eax25;
                                                        esp105 = esp104 - 4;
                                                        *reinterpret_cast<void***>(esp105) = edx33;
                                                        esp106 = esp105 - 4;
                                                        *reinterpret_cast<void***>(esp106) = edx33;
                                                        ecx = ecx - 1 + 1 + 1 - 1 + 1 + 1;
                                                        ebp107 = ebp101 - 1;
                                                        *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                                                        esp108 = esp106 - 4;
                                                        *reinterpret_cast<void***>(esp108) = ebp107;
                                                        esp109 = esp108 - 4;
                                                        *reinterpret_cast<void***>(esp109) = ebx87;
                                                        esp110 = esp109 - 4;
                                                        *reinterpret_cast<void***>(esp110) = edx33;
                                                        esp111 = esp110 - 4;
                                                        *reinterpret_cast<void***>(esp111) = ecx;
                                                        *reinterpret_cast<unsigned char*>(ecx + 68) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ecx + 68) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                                                        esp112 = esp111 + 1 - 4;
                                                        *reinterpret_cast<void***>(esp112) = ecx;
                                                        ebx26 = ebx87 + 1 + 1;
                                                        ebp47 = ebp107 - 1 - 1 - 1;
                                                        *reinterpret_cast<signed char*>(ebx26 + 72) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx26 + 72) + *reinterpret_cast<signed char*>(&edx33));
                                                        edi48 = edi48 - 1 - 1 + 1 - 1 + 1 - 1;
                                                        esp28 = esp112 + 1 - 4;
                                                        *reinterpret_cast<void***>(esp28) = edi48;
                                                        goto addr_0x1001484_47;
                                                    } else {
                                                        __asm__("arpl [ebp+0x2e], sp");
                                                        *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                                                        *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                                                        esp113 = esp28 - 4;
                                                        *reinterpret_cast<void***>(esp113) = eax25;
                                                        ebx26 = ebx26 + 1 - 1;
                                                        ecx = ecx + 1 - 1;
                                                        --esi30;
                                                        esp28 = esp113 - 4;
                                                        *reinterpret_cast<void***>(esp28) = ebx26;
                                                        goto addr_0x10013bf_45;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        __asm__("insb ");
                        goto addr_0x100130c_79;
                    }
                }
            }
        } else {
            esp37 = esp37 + 1 - 1 - 1;
            esi30 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi30) ^ *edx114);
            *reinterpret_cast<unsigned char*>(ecx + 100) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ecx + 100) + *reinterpret_cast<unsigned char*>(&eax25 + 1));
            if (__intrinsic() | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(ecx + 100) == 0)) {
                addr_0x100130c_79:
                __asm__("insb ");
                *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                esp28 = esp37 - 4;
                *reinterpret_cast<void***>(esp28) = esi30;
                if (__intrinsic()) 
                    goto addr_0x1001387_37; else 
                    goto addr_0x1001314_81;
            } else {
                __asm__("popad ");
                __asm__("arpl [ebx+0x2e], bp");
                __asm__("insb ");
                __asm__("insb ");
                edi115->f105 = reinterpret_cast<signed char>(edi116->f105 + dh117);
                __asm__("outsb ");
                ebp34 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(esi30 + 0x69) * 0x6e692e74);
                eax25 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) * 0x756c25);
                esp28 = esp37 - 4;
                *reinterpret_cast<void***>(esp28) = ebx26;
                __asm__("outsd ");
                if (__undefined()) {
                    addr_0x1001330_12:
                    ebx26 = *reinterpret_cast<void***>(esp28);
                    esp28 = esp28 + 4;
                    *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                    *reinterpret_cast<void***>(esi30) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi30)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx + 1)));
                    --ecx;
                    esi30 = esi30 - 1 + 1;
                    *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                    goto addr_0x1001339_9;
                } else {
                    __asm__("popad ");
                    if (__intrinsic()) {
                        addr_0x1001321_84:
                        esi30 = esi30 - 1 + 1;
                        goto addr_0x1001323_85;
                    } else {
                        --ebp34;
                        esp28 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(ebx26 + 0x72) * 0x666f736f);
                        if (__undefined()) {
                            addr_0x1001323_85:
                            *reinterpret_cast<signed char*>(edx33 + 0x65) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(edx33 + 0x65) + *reinterpret_cast<signed char*>(&edx33));
                            if (!*reinterpret_cast<signed char*>(edx33 + 0x65)) 
                                goto addr_0x100132b_87; else 
                                goto addr_0x100132b_87;
                        } else {
                            addr_0x10012c7_3:
                            esp28 = esp28 - 4;
                            *reinterpret_cast<void***>(esp28) = edi118;
                            ebp34 = reinterpret_cast<void**>(*reinterpret_cast<unsigned char*>(esi30 + 100) * 0x5c73776f);
                            cf31 = __intrinsic();
                            goto addr_0x10012c9_5;
                        }
                    }
                }
            }
        }
    }
    if (!*reinterpret_cast<void***>(eax25)) {
        addr_0x100136d_29:
        esp119 = esp37 - 4;
        *reinterpret_cast<void***>(esp119) = esp119;
        --ebp34;
        esp120 = esp119 - 4;
        *reinterpret_cast<void***>(esp120) = eax25;
        *reinterpret_cast<signed char*>(edx33 + 0x65) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(edx33 + 0x65) + *reinterpret_cast<signed char*>(&edx33));
        esp37 = esp120 - 4;
        *reinterpret_cast<void***>(esp37) = ebx26;
        if (__intrinsic()) {
            addr_0x10013f1_41:
            *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
            esp28 = esp37 - 1;
            --ecx;
            ++ebx26;
            ++ebp34;
            --esi30;
            goto addr_0x10013f9_35;
        }
    } else {
        if (__intrinsic()) {
            addr_0x100135b_16:
            ++ebx26;
            ++edx33;
            ecx = ecx + 1 - 1;
            --esi30;
            ++ebp34;
            esp37 = esp37 - 4;
            *reinterpret_cast<void***>(esp37) = esp37;
            *reinterpret_cast<unsigned char*>(ecx + 88) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ecx + 88) + *reinterpret_cast<signed char*>(&ecx));
            goto addr_0x1001365_91;
        } else {
            if (__intrinsic()) {
                addr_0x1001365_91:
                esp121 = esp37 - 4;
                *reinterpret_cast<void***>(esp121) = eax25;
                *reinterpret_cast<unsigned char*>(ecx + 88) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ecx + 88) + *reinterpret_cast<signed char*>(&ecx));
                esp37 = esp121 - 4;
                *reinterpret_cast<void***>(esp37) = eax25;
                goto addr_0x100136b_28;
            } else {
                __asm__("insb ");
                __asm__("insb ");
                goto addr_0x1001300_27;
            }
        }
    }
    addr_0x100137e_32:
    *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
    --esp37;
    zf45 = esp37 == 0;
    __asm__("outsd ");
    goto addr_0x1001382_34;
    addr_0x1001552_70:
    *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
    *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
    gfe000001 = reinterpret_cast<unsigned char>(gfe000001 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx26 + 1)));
    *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
    *reinterpret_cast<void***>(ecx63) = *reinterpret_cast<void***>(ecx63) + 1;
    *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
    *reinterpret_cast<void***>(edx69) = *reinterpret_cast<void***>(edx69) + 1;
    *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
    *reinterpret_cast<void***>(ebx26) = *reinterpret_cast<void***>(ebx26) + 1;
    *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
    g7fe0000 = reinterpret_cast<signed char>(g7fe0000 + 1);
    *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
    *reinterpret_cast<void***>(ebx26) = *reinterpret_cast<void***>(ebx26) - 1;
    *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
    *reinterpret_cast<void***>(edi70) = *reinterpret_cast<void***>(edi70) - 1;
    *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
    addr_0x1001314_81:
    ebp34 = reinterpret_cast<void**>(edi122->f110 * 0x76644100);
    __asm__("popad ");
    __asm__("outsb ");
    __asm__("arpl [ebp+0x64], sp");
    --ecx;
    goto addr_0x1001321_84;
    addr_0x100132b_87:
    *reinterpret_cast<void***>(ebp34) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebp34)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx26)));
    goto addr_0x100132d_11;
}

void fun_100151f() {
    int32_t* eax1;
    int32_t* eax2;
    signed char* eax3;
    signed char* eax4;
    signed char al5;

    *eax1 = *eax2 + 1;
    *eax3 = reinterpret_cast<signed char>(*eax4 + al5);
}

void fun_100157d() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
}

void fun_1001581() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
}

void fun_1001585() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;

    __asm__("das ");
    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
}

void fun_1001589() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;

    __asm__("aas ");
    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
}

void fun_100158d() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
}

void fun_1001591() {
    int1_t less_or_equal1;
    signed char* eax2;
    signed char* eax3;
    signed char al4;

    *eax2 = reinterpret_cast<signed char>(*eax3 + al4);
}

int32_t g7fffe00;

int32_t gffffe00;

int32_t g17fffe00;

struct s53 {
    signed char[83] pad83;
    signed char f83;
};

int32_t g1ffffe00;

struct s54 {
    signed char[101] pad101;
    signed char f101;
};

struct s55 {
    signed char[101] pad101;
    signed char f101;
};

struct s56 {
    signed char[101] pad101;
    signed char f101;
};

void fun_100159d(int32_t* ecx) {
    int1_t less_or_equal2;
    signed char dh3;
    signed char dh4;
    signed char bh5;
    int32_t* edx6;
    signed char bh7;
    int32_t* ebx8;
    int32_t* ebx9;
    int32_t* ebx10;
    int32_t* ebx11;
    int32_t* ebx12;
    int32_t* ebx13;
    struct s53* edx14;
    signed char bh15;
    signed char bh16;
    signed char bh17;
    signed char bh18;
    signed char bh19;
    signed char bh20;
    signed char bh21;
    signed char bh22;
    signed char bh23;
    signed char bh24;
    signed char bh25;
    signed char dl26;
    unsigned char* eax27;
    struct s54* edi28;
    struct s55* edi29;
    struct s56* edi30;

    if (less_or_equal2) {
        dh3 = reinterpret_cast<signed char>(dh4 + bh5);
    }
    *ecx = *ecx + 1;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx6) + 1) = reinterpret_cast<signed char>(dh3 + bh7);
    *edx6 = *edx6 + 1;
    *ebx8 = *ebx9 + 1;
    ++g7fffe00;
    *ecx = *ecx - 1;
    *ebx10 = *ebx11 - 1;
    --gffffe00;
    *ecx(__return_address());
    *ebx12(__return_address());
    g17fffe00(__return_address());
    *ecx(__return_address());
    *ebx13(__return_address());
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx14) + 1) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx6) + 1) + bh15) + bh16) + bh17) + bh18) + bh19) + bh20) + bh21) + bh22) + bh23) + bh24) + bh25);
    g1ffffe00(__return_address());
    edx14->f83 = reinterpret_cast<signed char>(edx14->f83 + dl26);
    __asm__("salc ");
    __asm__("xlatb ");
    if (__intrinsic()) {
        eax27 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 + 1 - 4 + 2);
        __asm__("fcmovb st0, st7");
        *reinterpret_cast<unsigned char*>(&eax27) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ecx) - 1)))));
        *eax27 = reinterpret_cast<unsigned char>(*eax27 + *reinterpret_cast<unsigned char*>(&eax27));
        edi28->f101 = reinterpret_cast<signed char>(edi29->f101 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx14) + 1));
        if (edi30->f101 < 0) 
            goto 0x1001674;
        if (__intrinsic()) 
            goto 0x1001663;
        __asm__("arpl [esi+ebp+0x70], si");
        *eax27 = reinterpret_cast<unsigned char>(*eax27 + *reinterpret_cast<unsigned char*>(&eax27));
        *eax27 = reinterpret_cast<unsigned char>(*eax27 + *reinterpret_cast<unsigned char*>(&eax27));
        *eax27 = reinterpret_cast<unsigned char>(*eax27 + *reinterpret_cast<unsigned char*>(&eax27));
    }
}

struct s57 {
    signed char[160] pad160;
    int32_t f160;
};

void fun_1009cef() {
    struct s57* eax1;

    goto eax1->f160;
}

void fun_1009d03() {
    int32_t edx1;

    goto *reinterpret_cast<int32_t*>(edx1 - 90);
}

void fun_1009d17() {
    int32_t eax1;
    int32_t eax2;
    unsigned char* eax3;
    signed char* eax4;
    signed char al5;
    uint1_t cf6;
    signed char* eax7;
    signed char* eax8;
    signed char dl9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;

    *reinterpret_cast<int32_t*>(eax1 + 0x440000a6) = *reinterpret_cast<int32_t*>(eax2 + 0x440000a6) + 1;
    *eax3 = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*eax4 + al5) + cf6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + dl9);
    __asm__("lahf ");
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
}

signed char gac000011;

void fun_1009d2c() {
    int1_t sf1;
    signed char* eax2;
    signed char* eax3;
    signed char al4;
    signed char* eax5;

    if (!sf1) {
        *eax2 = reinterpret_cast<signed char>(*eax3 + al4);
        *reinterpret_cast<signed char*>(&eax5) = gac000011;
        *eax5 = reinterpret_cast<signed char>(*eax5 + *reinterpret_cast<signed char*>(&eax5));
    }
}

void fun_1009d3f() {
    int32_t eax1;
    int32_t ebp2;
    int32_t eax3;
    int32_t ebp4;
    signed char* eax5;
    signed char* eax6;
    signed char al7;
    signed char* eax8;
    signed char* eax9;
    signed char al10;

    *reinterpret_cast<int32_t*>(eax1 + ebp2 * 4 + 0x103c0000) = *reinterpret_cast<int32_t*>(eax3 + ebp4 * 4 + 0x103c0000) + 1;
    *eax5 = reinterpret_cast<signed char>(*eax6 + al7);
    __asm__("lahf ");
    *eax8 = reinterpret_cast<signed char>(*eax9 + al10);
}

void fun_1009d53() {
    unsigned char* eax1;

    eax1 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4(__return_address()));
    *eax1 = reinterpret_cast<unsigned char>(*eax1 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1));
    *reinterpret_cast<unsigned char*>(&eax1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1) + *eax1) + __intrinsic());
    *eax1 = reinterpret_cast<unsigned char>(*eax1 + *reinterpret_cast<unsigned char*>(&eax1));
    *eax1 = reinterpret_cast<unsigned char>(*eax1 + *reinterpret_cast<unsigned char*>(&eax1));
    *eax1 = reinterpret_cast<unsigned char>(*eax1 + *reinterpret_cast<unsigned char*>(&eax1));
    *eax1 = reinterpret_cast<unsigned char>(*eax1 + *reinterpret_cast<unsigned char*>(&eax1));
    *eax1 = reinterpret_cast<unsigned char>(*eax1 + *reinterpret_cast<unsigned char*>(&eax1));
    *eax1 = reinterpret_cast<unsigned char>(*eax1 + *reinterpret_cast<unsigned char*>(&eax1));
    *eax1 = reinterpret_cast<unsigned char>(*eax1 + *reinterpret_cast<unsigned char*>(&eax1));
    *eax1 = reinterpret_cast<unsigned char>(*eax1 + *reinterpret_cast<unsigned char*>(&eax1));
    *eax1 = reinterpret_cast<unsigned char>(*eax1 + *reinterpret_cast<unsigned char*>(&eax1));
    *eax1 = reinterpret_cast<unsigned char>(*eax1 + *reinterpret_cast<unsigned char*>(&eax1));
    *reinterpret_cast<signed char*>(eax1 - 0x55ffff61) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax1 - 0x55ffff61) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1));
    __asm__("lahf ");
    *eax1 = reinterpret_cast<unsigned char>(*eax1 + *reinterpret_cast<unsigned char*>(&eax1));
}

signed char ga06e0000;

void fun_1009d79(signed char* ecx) {
    signed char* eax2;
    signed char* eax3;
    signed char al4;
    signed char* eax5;
    signed char* eax6;
    signed char al7;
    signed char* eax8;
    signed char* eax9;
    signed char al10;
    unsigned char* eax11;
    signed char al12;
    unsigned char* eax13;
    signed char* eax14;
    signed char dl15;

    __asm__("lahf ");
    *eax2 = reinterpret_cast<signed char>(*eax3 + al4);
    __asm__("rcr byte [edi+0x9fe80000], cl");
    *eax5 = reinterpret_cast<signed char>(*eax6 + al7);
    __asm__("lahf ");
    *eax8 = reinterpret_cast<signed char>(*eax9 + al10);
    *reinterpret_cast<unsigned char*>(&eax11) = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(al12 - 96) + __intrinsic());
    *eax11 = reinterpret_cast<unsigned char>(*eax11 + *reinterpret_cast<unsigned char*>(&eax11));
    *reinterpret_cast<unsigned char*>(&eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax11) + 96);
    *eax13 = reinterpret_cast<unsigned char>(*eax13 + *reinterpret_cast<unsigned char*>(&eax13));
    *eax13 = reinterpret_cast<unsigned char>(*eax13 + *reinterpret_cast<unsigned char*>(&eax13));
    *reinterpret_cast<signed char*>(&eax14) = ga06e0000;
    *eax14 = reinterpret_cast<signed char>(*eax14 + *reinterpret_cast<signed char*>(&eax14));
    *reinterpret_cast<unsigned char*>(eax14 - 0x5f6c0000) = 0;
    *eax14 = reinterpret_cast<signed char>(*eax14 + *reinterpret_cast<signed char*>(&eax14));
    *eax14 = reinterpret_cast<signed char>(*eax14 + *reinterpret_cast<signed char*>(&eax14));
    *ecx = reinterpret_cast<signed char>(*ecx + dl15);
    *eax14 = reinterpret_cast<signed char>(*eax14 + *reinterpret_cast<signed char*>(&eax14));
    *eax14 = reinterpret_cast<signed char>(static_cast<int32_t>(*eax14));
    *eax14 = reinterpret_cast<signed char>(*eax14 + *reinterpret_cast<signed char*>(&eax14));
    if (__intrinsic()) 
        goto 0x1009d5c;
    *eax14 = reinterpret_cast<signed char>(*eax14 + *reinterpret_cast<signed char*>(&eax14));
    *eax14 = reinterpret_cast<signed char>(*eax14 + *reinterpret_cast<signed char*>(&eax14));
    *eax14 = reinterpret_cast<signed char>(*eax14 + *reinterpret_cast<signed char*>(&eax14));
    __asm__("hlt ");
}

int32_t g1001180 = 0x7c80180e;

uint32_t fun_1002fe5(uint32_t a1, signed char* a2, uint32_t a3) {
    uint32_t eax4;
    int32_t ecx5;
    int32_t eax6;
    int32_t edx7;
    uint32_t edx8;
    signed char* esi9;
    signed char* edi10;
    uint32_t ebx11;
    uint32_t ecx12;
    uint32_t ecx13;

    eax4 = a1 + a1 * 2 << 3;
    ecx5 = *reinterpret_cast<int32_t*>(eax4 + 0x100c4c4);
    if (!ecx5) {
        eax6 = reinterpret_cast<int32_t>(g1001180());
        if (eax6) {
            goto a2;
        } else {
            goto a2;
        }
    } else {
        if (ecx5 - 1) {
            return a1;
        } else {
            edx7 = *reinterpret_cast<int32_t*>(eax4 + 0x100c4d0);
            edx8 = edx7 - *reinterpret_cast<uint32_t*>(eax4 + 0x100c4cc);
            if (a3 < edx8) {
                edx8 = a3;
            }
            esi9 = reinterpret_cast<signed char*>(*reinterpret_cast<int32_t*>(eax4 + 0x100c4c8) + *reinterpret_cast<uint32_t*>(eax4 + 0x100c4cc));
            edi10 = a2;
            ebx11 = edx8;
            ecx12 = edx8 >> 2;
            while (ecx12) {
                --ecx12;
                *edi10 = *esi9;
                edi10 = edi10 + 4;
                esi9 = esi9 + 4;
            }
            ecx13 = ebx11 & 3;
            while (ecx13) {
                --ecx13;
                *edi10 = *esi9;
                ++edi10;
                ++esi9;
            }
            *reinterpret_cast<uint32_t*>(eax4 + 0x100c4cc) = *reinterpret_cast<uint32_t*>(eax4 + 0x100c4cc) + edx8;
            return edx8;
        }
    }
}

int32_t g10010e8 = 0x7c810f9f;

int16_t fun_1003bf2(void** a1) {
    void** eax2;
    void** edi3;
    void** esi4;
    void** ebx5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    int32_t eax13;
    int32_t v14;
    int32_t eax15;
    void** eax16;

    eax2 = g100b2d0;
    g1001088(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8, 0x100bc44, edi3, esi4, ebx5);
    fun_10066cf(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8, 0x104, v6, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8, 0x100bc44, edi3, esi4, ebx5, 0, 1, v7, v8, v9, v10, v11, v12);
    eax13 = reinterpret_cast<int32_t>(g1001108());
    if (eax13 != -1) {
        eax15 = reinterpret_cast<int32_t>(g10010e8(eax13, v14, a1, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0x110, 0));
        if (!eax15 || a1) {
            g100ba5c = reinterpret_cast<void**>(0x80070052);
        }
        g10010e4(eax13, eax13, v14, a1, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0x110, 0);
    } else {
        g100ba5c = reinterpret_cast<void**>(0x80070052);
    }
    eax16 = fun_10064de(eax2, eax2);
    return *reinterpret_cast<int16_t*>(&eax16);
}

int32_t g1001158 = 0x7c801eee;

int32_t g1001154 = 0x7c80b529;

int32_t g100115c = 0x7c812c8d;

void fun_10063db(void** ecx) {
    void* esp2;
    void** esi3;
    void* ebp4;
    void** v5;
    void* esp6;
    void* esp7;
    void** eax8;
    uint16_t v9;
    void** eax10;
    void** v11;
    void** v12;
    void** v13;
    void* esp14;
    void** eax15;

    esp2 = __zero_stack_offset();
    goto addr_0x10063e0_2;
    while (1) {
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(esi3)) > reinterpret_cast<signed char>(32)) {
            do {
                ++esi3;
            } while (reinterpret_cast<signed char>(*reinterpret_cast<void***>(esi3)) > reinterpret_cast<signed char>(32));
        }
        while (1) {
            if (!*reinterpret_cast<void***>(esi3) || reinterpret_cast<signed char>(*reinterpret_cast<void***>(esi3)) > reinterpret_cast<signed char>(32)) {
                g1001158(reinterpret_cast<int32_t>(ebp4) + 0xffffffbc, v5);
                esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 + 4);
                if (1) {
                    eax8 = reinterpret_cast<void**>(10);
                    esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) - 4 + 4);
                } else {
                    eax8 = reinterpret_cast<void**>(static_cast<uint32_t>(v9));
                }
                eax10 = reinterpret_cast<void**>(g1001154(0, 0, esi3, eax8, reinterpret_cast<int32_t>(ebp4) + 0xffffffbc, v5));
                *reinterpret_cast<int16_t*>(&eax10) = fun_100637a(ecx, eax10, 0, 0, esi3, eax8, reinterpret_cast<int32_t>(ebp4) + 0xffffffbc, v5, v11, v12, v13);
                g1001104(eax10, eax8, reinterpret_cast<int32_t>(ebp4) + 0xffffffbc, v5);
                fun_100646b(eax10, eax8, reinterpret_cast<int32_t>(ebp4) + 0xffffffbc, v5);
                esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 + 16 + 4 - 4 - 4 + 4 - 4 + 4);
                addr_0x10063e0_2:
                esp14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4);
                ebp4 = esp14;
                v5 = esi3;
                eax15 = reinterpret_cast<void**>(g100115c(v5));
                esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp14) - 68 - 4 - 4 + 4);
                esi3 = eax15;
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi3) == 34)) 
                    break;
                do {
                    ++esi3;
                    if (!*reinterpret_cast<void***>(esi3)) 
                        break;
                } while (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi3) == 34));
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi3) == 34)) 
                    continue;
            }
            ++esi3;
        }
    }
}

void fun_1009cf5() {
    unsigned char* eax1;
    signed char* eax2;
    signed char al3;
    uint1_t cf4;
    int32_t ebp5;
    int32_t ebx6;
    int32_t ebp7;
    int32_t ebx8;
    signed char bh9;

    *eax1 = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*eax2 + al3) + cf4);
    *reinterpret_cast<signed char*>(ebp5 + ebx6 * 4 - 0x10000) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebp7 + ebx8 * 4 - 0x10000) + bh9);
}

void fun_1009d06() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    unsigned char* eax4;
    signed char* eax5;
    signed char al6;
    int32_t ebp7;
    int32_t ebx8;
    int32_t ebp9;
    int32_t ebx10;
    signed char dh11;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*eax5 + al6) + __intrinsic());
    *reinterpret_cast<signed char*>(ebp7 + ebx8 * 4 - 0x10000) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebp9 + ebx10 * 4 - 0x10000) + dh11);
}

signed char ga1000000;

unsigned char* ga11e0000;

signed char* ga16a0000;

struct s58 {
    unsigned char f0;
    signed char f1;
};

unsigned char* ga1e80000;

unsigned char ga23c0000;

unsigned char ga25c0000;

unsigned char ga3040000;

unsigned char* ga3640000;

struct s59 {
    unsigned char f0;
    signed char f1;
};

struct s60 {
    signed char f0;
    signed char f1;
    signed char[2] pad4;
    int32_t f4;
};

struct s61 {
    signed char f0;
    signed char f1;
    signed char[2] pad4;
    int32_t f4;
};

unsigned char* ga3b80000;

struct s62 {
    signed char f0;
    signed char f1;
};

struct s63 {
    signed char f0;
    signed char f1;
};

struct s64 {
    signed char f0;
    signed char f1;
};

struct s65 {
    signed char f0;
    signed char f1;
};

unsigned char gb80000a4;

struct s66 {
    signed char f0;
    unsigned char f1;
};

struct s67 {
    signed char f0;
    unsigned char f1;
};

struct s68 {
    int32_t f0;
    int32_t f4;
};

struct s69 {
    int32_t f0;
    int32_t f4;
};

struct s70 {
    int32_t f0;
    int32_t f4;
};

struct s71 {
    int32_t f0;
    int32_t f4;
};

struct s72 {
    int32_t f0;
    int32_t f4;
};

struct s73 {
    int32_t f0;
    int32_t f4;
};

struct s74 {
    signed char[838860960] pad838860960;
    signed char f838860960;
};

unsigned char* g0;

void fun_1009dbd(unsigned char* ecx) {
    signed char* eax2;
    unsigned char* eax3;
    signed char* eax4;
    struct s58* esi5;
    unsigned char* edx6;
    uint16_t fs7;
    int32_t ebx8;
    int32_t ebx9;
    int32_t ebx10;
    uint16_t fs11;
    struct s59* edi12;
    struct s60* edi13;
    struct s61* esi14;
    int32_t ebx15;
    int32_t ebx16;
    struct s62* edi17;
    struct s63* esi18;
    unsigned char* tmp32_19;
    struct s64* edi20;
    struct s65* esi21;
    struct s66* edi22;
    struct s67* esi23;
    struct s60* edi24;
    struct s61* esi25;
    int32_t ebp26;
    int32_t ebp27;
    int32_t edx28;
    struct s68* edi29;
    struct s69* esi30;
    struct s70* edi31;
    struct s71* esi32;
    struct s72* edi33;
    struct s73* esi34;
    int32_t ebp35;
    int32_t ebp36;
    int32_t ebp37;
    int32_t* esi38;
    struct s74* esi39;
    int32_t ebx40;
    int32_t ebp41;
    int32_t ebp42;

    *reinterpret_cast<signed char*>(&eax2) = ga1000000;
    *eax2 = reinterpret_cast<signed char>(*eax2 + *reinterpret_cast<signed char*>(&eax2));
    eax3 = ga11e0000;
    *eax3 = reinterpret_cast<unsigned char>(*eax3 + *reinterpret_cast<unsigned char*>(&eax3));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax3) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax3) + 1) ^ *(ecx - 0x5ec20000));
    while (1) {
        *eax3 = reinterpret_cast<unsigned char>(*eax3 + *reinterpret_cast<unsigned char*>(&eax3));
        eax4 = ga16a0000;
        *eax4 = reinterpret_cast<signed char>(*eax4 + *reinterpret_cast<signed char*>(&eax4));
        if (!*eax4) 
            goto 0x1009d7f;
        *eax4 = reinterpret_cast<signed char>(*eax4 + *reinterpret_cast<signed char*>(&eax4));
        if (reinterpret_cast<uint1_t>(*eax4 < 0 != __intrinsic()) | reinterpret_cast<uint1_t>(*eax4 == 0)) 
            goto 0x1009d83;
        *eax4 = reinterpret_cast<signed char>(*eax4 + *reinterpret_cast<signed char*>(&eax4));
        *reinterpret_cast<signed char*>(ecx - 0x5e5a0000) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax4) + 1);
        *eax4 = reinterpret_cast<signed char>(*eax4 + *reinterpret_cast<signed char*>(&eax4));
        esi5 = reinterpret_cast<struct s58*>(0xd20000a1);
        eax3 = ga1e80000;
        while (1) {
            *eax3 = reinterpret_cast<unsigned char>(*eax3 + *reinterpret_cast<unsigned char*>(&eax3));
            *reinterpret_cast<unsigned char*>(&eax3) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax3) - 94);
            *eax3 = reinterpret_cast<unsigned char>(*eax3 + *reinterpret_cast<unsigned char*>(&eax3));
            *(edx6 - 0x5de20000) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*(edx6 - 0x5de20000) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax3) + 1)) + __intrinsic());
            *eax3 = reinterpret_cast<unsigned char>(*eax3 + *reinterpret_cast<unsigned char*>(&eax3));
            ga23c0000 = *reinterpret_cast<unsigned char*>(&eax3);
            *eax3 = reinterpret_cast<unsigned char>(*eax3 + *reinterpret_cast<unsigned char*>(&eax3));
            --edx6;
            ga25c0000 = *reinterpret_cast<unsigned char*>(&eax3);
            *eax3 = reinterpret_cast<unsigned char>(*eax3 + *reinterpret_cast<unsigned char*>(&eax3));
            if (__intrinsic()) 
                goto 0x1009db8;
            *eax3 = reinterpret_cast<unsigned char>(*eax3 + *reinterpret_cast<unsigned char*>(&eax3));
            *reinterpret_cast<uint32_t*>(edx6 - 0x5d5c0000) = static_cast<uint32_t>(fs7);
            *eax3 = reinterpret_cast<unsigned char>(*eax3 + *reinterpret_cast<unsigned char*>(&eax3));
            *reinterpret_cast<unsigned char*>(&eax3) = 0xa2;
            *eax3 = reinterpret_cast<unsigned char>(*eax3 + 0xa2);
            __asm__("les esp, [edx+0xa2d00000]");
            *eax3 = reinterpret_cast<unsigned char>(*eax3 + 0xa2);
            --ecx;
            if (reinterpret_cast<uint1_t>(!!ecx) & reinterpret_cast<uint1_t>(!!*eax3)) 
                break;
            *eax3 = reinterpret_cast<unsigned char>(*eax3 + 0xa2);
            __asm__("out dx, al");
            ga3040000 = 0xa2;
            *eax3 = reinterpret_cast<unsigned char>(*eax3 + 0xa2);
            *reinterpret_cast<unsigned char*>(ebx8 - 0x5cde0000) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(ebx9 - 0x5cde0000) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax3) + 1)) + __intrinsic());
            *eax3 = reinterpret_cast<unsigned char>(*eax3 + 0xa2);
            __asm__("les esp, [eax+0xa3420000]");
            do {
                *eax3 = reinterpret_cast<unsigned char>(*eax3 + *reinterpret_cast<unsigned char*>(&eax3));
                ga3640000 = eax3;
                *eax3 = reinterpret_cast<unsigned char>(*eax3 + *reinterpret_cast<unsigned char*>(&eax3));
                if (!*eax3) 
                    break;
                *eax3 = reinterpret_cast<unsigned char>(*eax3 + *reinterpret_cast<unsigned char*>(&eax3));
                __asm__("out 0xa0, al");
                *eax3 = reinterpret_cast<unsigned char>(*eax3 + *reinterpret_cast<unsigned char*>(&eax3));
                *reinterpret_cast<uint32_t*>(ebx10 - 0x5c680000) = static_cast<uint32_t>(fs11);
                *eax3 = reinterpret_cast<unsigned char>(*eax3 + *reinterpret_cast<unsigned char*>(&eax3));
                edi12->f0 = *reinterpret_cast<unsigned char*>(&eax3);
                edi13 = reinterpret_cast<struct s60*>(&edi12->f1);
                esi14 = reinterpret_cast<struct s61*>(&esi5->f1);
                ga3b80000 = eax3;
                *eax3 = reinterpret_cast<unsigned char>(*eax3 + *reinterpret_cast<unsigned char*>(&eax3));
                *reinterpret_cast<signed char*>(ebx15 - 0x5c160000) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx16 - 0x5c160000) << *reinterpret_cast<unsigned char*>(&ecx));
                *eax3 = reinterpret_cast<unsigned char>(*eax3 + *reinterpret_cast<unsigned char*>(&eax3));
                *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax3) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax3) + 1) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax3) + reinterpret_cast<int32_t>(eax3) + 0xa41600));
                *eax3 = reinterpret_cast<unsigned char>(*eax3 + *reinterpret_cast<unsigned char*>(&eax3));
                *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax3) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax3) + 1) ^ *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax3) + reinterpret_cast<int32_t>(eax3) + 0xa44400));
                *reinterpret_cast<signed char*>(eax3 - 92) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax3 - 92) + *reinterpret_cast<signed char*>(&edx6));
                *eax3 = reinterpret_cast<unsigned char>(*eax3 + *reinterpret_cast<unsigned char*>(&eax3));
                edi13->f0 = esi14->f0;
                edi17 = reinterpret_cast<struct s62*>(&edi13->f1);
                esi18 = reinterpret_cast<struct s63*>(&esi14->f1);
                *eax3 = reinterpret_cast<unsigned char>(*eax3 + *reinterpret_cast<unsigned char*>(&eax3));
                tmp32_19 = edx6;
                edx6 = eax3;
                eax3 = tmp32_19;
                edi17->f0 = esi18->f0;
                edi20 = reinterpret_cast<struct s64*>(&edi17->f1);
                esi21 = reinterpret_cast<struct s65*>(&esi18->f1);
                *eax3 = reinterpret_cast<unsigned char>(*eax3 + *reinterpret_cast<unsigned char*>(&eax3));
                gb80000a4 = *reinterpret_cast<unsigned char*>(&eax3);
                edi20->f0 = esi21->f0;
                edi22 = reinterpret_cast<struct s66*>(&edi20->f1);
                esi23 = reinterpret_cast<struct s67*>(&esi21->f1);
                *eax3 = reinterpret_cast<unsigned char>(*eax3 + *reinterpret_cast<unsigned char*>(&eax3));
                __asm__("into ");
                edi22->f0 = esi23->f0;
                edi12 = reinterpret_cast<struct s59*>(&edi22->f1);
                esi5 = reinterpret_cast<struct s58*>(&esi23->f1);
                *eax3 = reinterpret_cast<unsigned char>(*eax3 + *reinterpret_cast<unsigned char*>(&eax3));
                --ecx;
            } while (reinterpret_cast<uint1_t>(!!ecx) & reinterpret_cast<uint1_t>(!!*eax3));
            goto addr_0x1009ea2_25;
        }
    }
    addr_0x1009ea2_25:
    *eax3 = reinterpret_cast<unsigned char>(*eax3 + *reinterpret_cast<unsigned char*>(&eax3));
    edi12->f0 = esi5->f0;
    edi24 = reinterpret_cast<struct s60*>(&edi12->f1);
    esi25 = reinterpret_cast<struct s61*>(&esi5->f1);
    *eax3 = reinterpret_cast<unsigned char>(*eax3 + *reinterpret_cast<unsigned char*>(&eax3));
    *reinterpret_cast<unsigned char*>(ebp26 - 0x5af00000) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(ebp27 - 0x5af00000) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax3) + 1));
    *eax3 = reinterpret_cast<unsigned char>(*eax3 + *reinterpret_cast<unsigned char*>(&eax3));
    *reinterpret_cast<unsigned char*>(&eax3) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax3) - reinterpret_cast<unsigned char>(91 - reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) < reinterpret_cast<unsigned char>(91 - __intrinsic()))));
    *eax3 = reinterpret_cast<unsigned char>(*eax3 + *reinterpret_cast<unsigned char*>(&eax3));
    *reinterpret_cast<unsigned char*>(&eax3) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax3) + 91);
    *eax3 = reinterpret_cast<unsigned char>(*eax3 + *reinterpret_cast<unsigned char*>(&eax3));
    *eax3 = reinterpret_cast<unsigned char>(*eax3 + *reinterpret_cast<unsigned char*>(&eax3));
    edx28 = reinterpret_cast<int32_t>(edx6 - 1);
    edi24->f0 = esi25->f0;
    edi29 = reinterpret_cast<struct s68*>(&edi24->f4);
    esi30 = reinterpret_cast<struct s69*>(&esi25->f4);
    *eax3 = reinterpret_cast<unsigned char>(*eax3 + *reinterpret_cast<unsigned char*>(&eax3));
    edi29->f0 = esi30->f0;
    edi31 = reinterpret_cast<struct s70*>(&edi29->f4);
    esi32 = reinterpret_cast<struct s71*>(&esi30->f4);
    *eax3 = reinterpret_cast<unsigned char>(*eax3 + *reinterpret_cast<unsigned char*>(&eax3));
    __asm__("insb ");
    edi31->f0 = esi32->f0;
    edi33 = reinterpret_cast<struct s72*>(&edi31->f4);
    esi34 = reinterpret_cast<struct s73*>(&esi32->f4);
    *eax3 = reinterpret_cast<unsigned char>(*eax3 + *reinterpret_cast<unsigned char*>(&eax3));
    *reinterpret_cast<unsigned char*>(ebp35 - 0x5a6e0000) = 0;
    *reinterpret_cast<unsigned char*>(ebp36 - 0x5a420000) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(ebp37 - 0x5a420000) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax3) + 1));
    *eax3 = reinterpret_cast<unsigned char>(*eax3 + *reinterpret_cast<unsigned char*>(&eax3));
    __asm__("into ");
    edi33->f0 = esi34->f0;
    esi38 = &esi34->f4;
    *eax3 = reinterpret_cast<unsigned char>(*eax3 + *reinterpret_cast<unsigned char*>(&eax3));
    __asm__("in al, 0xa5");
    *eax3 = reinterpret_cast<unsigned char>(*eax3 + *reinterpret_cast<unsigned char*>(&eax3));
    __asm__("cli ");
    edi33->f4 = *esi38;
    esi39 = reinterpret_cast<struct s74*>(esi38 + 1);
    *eax3 = reinterpret_cast<unsigned char>(*eax3 + *reinterpret_cast<unsigned char*>(&eax3));
    *reinterpret_cast<unsigned char*>(&eax3) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax3) - 90) + __intrinsic());
    *eax3 = reinterpret_cast<unsigned char>(*eax3 + *reinterpret_cast<unsigned char*>(&eax3));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esi39) - 0x59bc0000) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esi39) - 0x59bc0000) - *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax3) + 1));
    *eax3 = reinterpret_cast<unsigned char>(*eax3 + *reinterpret_cast<unsigned char*>(&eax3));
    *reinterpret_cast<unsigned char*>(ebx40 - 0x5f2a0000) = 0;
    ecx[ebp41 * 4] = reinterpret_cast<unsigned char>(ecx[ebp42 * 4] + *reinterpret_cast<unsigned char*>(&eax3));
    *eax3 = reinterpret_cast<unsigned char>(*eax3 + *reinterpret_cast<unsigned char*>(&eax3));
    __asm__("cli ");
    *reinterpret_cast<unsigned char*>(&eax3) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax3) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax3) + 1));
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esi39) + 0x320000a0) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esi39) + 0x320000a0) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx28) + 1));
    g0 = eax3;
    *eax3 = reinterpret_cast<unsigned char>(*eax3 + *reinterpret_cast<unsigned char*>(&eax3));
    __asm__("fsub dword [esi+0xa6e80000]");
    *eax3 = reinterpret_cast<unsigned char>(*eax3 + *reinterpret_cast<unsigned char*>(&eax3));
    __asm__("hlt ");
}

struct s75 {
    int32_t f0;
    int32_t f4;
};

struct s76 {
    signed char[1] pad1;
    int32_t f1;
};

struct s77 {
    int32_t f0;
    int32_t f4;
};

struct s78 {
    signed char[1] pad1;
    int32_t f1;
};

struct s79 {
    int32_t f0;
    int32_t f4;
};

struct s80 {
    int32_t f0;
    int32_t f4;
};

struct s81 {
    int32_t f0;
    int32_t f4;
};

struct s82 {
    int32_t f0;
    int32_t f4;
};

struct s83 {
    int32_t f0;
    int32_t f4;
};

struct s84 {
    int32_t f0;
    int32_t f4;
};

void fun_1009f19() {
    signed char* edi1;
    signed char* esi2;
    struct s75* edi3;
    struct s76* edi4;
    struct s77* esi5;
    struct s78* esi6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char ah10;
    signed char* eax11;
    signed char* eax12;
    signed char al13;
    signed char* eax14;
    signed char ah15;
    unsigned char ah16;
    signed char al17;
    struct s79* edi18;
    struct s80* esi19;
    signed char al20;
    struct s81* edi21;
    struct s82* esi22;
    signed char al23;
    struct s83* edi24;
    struct s84* esi25;
    signed char al26;
    signed char al27;
    signed char al28;
    signed char al29;

    *edi1 = *esi2;
    edi3 = reinterpret_cast<struct s75*>(&edi4->f1);
    esi5 = reinterpret_cast<struct s77*>(&esi6->f1);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *reinterpret_cast<signed char*>(&(edi3 - 0xb1e4000)->f0) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&(edi3 - 0xb1e4000)->f0) + ah10);
    *eax11 = reinterpret_cast<signed char>(*eax12 + al13);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax14) + 1) = reinterpret_cast<unsigned char>(ah15 - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&(edi3 - 0xb1a8000)->f0) + reinterpret_cast<uint1_t>(ah16 < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&(edi3 - 0xb1a8000)->f0) + __intrinsic()))));
    *eax14 = reinterpret_cast<signed char>(*eax14 + al17);
    edi3->f0 = esi5->f0;
    edi18 = reinterpret_cast<struct s79*>(&edi3->f4);
    esi19 = reinterpret_cast<struct s80*>(&esi5->f4);
    *eax14 = reinterpret_cast<signed char>(*eax14 + al20);
    edi18->f0 = esi19->f0;
    edi21 = reinterpret_cast<struct s81*>(&edi18->f4);
    esi22 = reinterpret_cast<struct s82*>(&esi19->f4);
    *eax14 = reinterpret_cast<signed char>(*eax14 + al23);
    edi21->f0 = esi22->f0;
    edi24 = reinterpret_cast<struct s83*>(&edi21->f4);
    esi25 = reinterpret_cast<struct s84*>(&esi22->f4);
    *eax14 = reinterpret_cast<signed char>(*eax14 + al26);
    *reinterpret_cast<unsigned char*>(&(edi24 - 0xb0e0000)->f0) = 0;
    *reinterpret_cast<unsigned char*>(eax14 - 0x4fffff59) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax14 - 0x4fffff59) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax14) + 1));
    edi24->f0 = esi25->f0;
    *eax14 = reinterpret_cast<signed char>(*eax14 + al27);
    edi24->f4 = esi25->f4;
    *eax14 = reinterpret_cast<signed char>(*eax14 + al28);
    __asm__("aam 0xa7");
    *eax14 = reinterpret_cast<signed char>(*eax14 + al29);
}

struct s85 {
    signed char f0;
    signed char f1;
};

struct s86 {
    signed char[1] pad1;
    signed char f1;
};

struct s87 {
    signed char f0;
    signed char f1;
};

struct s88 {
    signed char[1] pad1;
    signed char f1;
};

struct s89 {
    signed char f0;
    void** f1;
};

signed char g8a0000a6;

struct s90 {
    void** f0;
    signed char f1;
};

void** ga6;

struct s91 {
    signed char f0;
    signed char f1;
};

struct s92 {
    signed char f0;
    signed char f1;
};

struct s93 {
    signed char f0;
    void** f1;
};

struct s94 {
    signed char[114] pad114;
    unsigned char f114;
};

int32_t g169;

int32_t g14c;

struct s95 {
    signed char[1] pad1;
    void** f1;
};

struct s96 {
    signed char[110] pad110;
    int32_t f110;
};

void** gfffffffc;

void** gfffffff8;

struct s97 {
    signed char[110] pad110;
    int32_t f110;
};

unsigned char g7a695303;

void** g61655202;

void** g73694400;

struct s98 {
    signed char[1] pad1;
    void** f1;
};

void fun_1009f5b(unsigned char* ecx) {
    unsigned char* esi2;
    signed char* esi3;
    signed char* eax4;
    signed char* eax5;
    signed char ah6;
    signed char* esi7;
    signed char* esi8;
    int32_t eax9;
    int32_t eax10;
    signed char* eax11;
    signed char* eax12;
    signed char al13;
    int32_t esi14;
    int32_t esi15;
    signed char ah16;
    signed char* eax17;
    signed char* eax18;
    signed char al19;
    signed char* edi20;
    signed char* esi21;
    struct s85* edi22;
    struct s86* edi23;
    struct s87* esi24;
    struct s88* esi25;
    signed char* eax26;
    signed char* eax27;
    signed char al28;
    struct s89* edi29;
    signed char* esi30;
    void** eax31;
    struct s90* edi32;
    struct s91* edi33;
    struct s92* esi34;
    struct s93* edi35;
    signed char* esi36;
    void** edi37;
    struct s94* esi38;
    int32_t edx39;
    int32_t edx40;
    signed char dl41;
    void* esp42;
    void** ecx43;
    void** esi44;
    int32_t ebp45;
    int32_t ebx46;
    void** esp47;
    void** edx48;
    uint1_t cf49;
    void** ebx50;
    struct s95* ebx51;
    void** ebx52;
    struct s96* ebp53;
    int1_t sf54;
    int1_t zf55;
    int1_t sf56;
    void** esp57;
    int1_t zf58;
    int32_t edx59;
    int32_t edx60;
    int32_t edx61;
    uint1_t zf62;
    void** ebp63;
    uint1_t cf64;
    uint1_t zf65;
    void** tmp32_66;
    uint1_t cf67;
    uint1_t zf68;
    signed char bl69;
    struct s97* ebp70;
    void** esp71;
    int1_t zf72;
    void** esp73;
    int1_t of74;
    uint1_t below_or_equal75;
    void** esp76;
    int1_t cf77;
    void** esp78;
    uint1_t cf79;
    int1_t zf80;
    int1_t zf81;
    uint1_t zf82;
    int1_t sf83;
    int1_t of84;
    uint1_t below_or_equal85;
    int1_t cf86;
    uint1_t zf87;
    void** esp88;
    int1_t zf89;
    int1_t sf90;
    int1_t zf91;
    uint1_t below_or_equal92;
    int1_t of93;
    uint1_t below_or_equal94;
    void* ebp95;
    int1_t sf96;
    int1_t sf97;
    int1_t zf98;
    void* dl99;
    void** esp100;
    int1_t zf101;
    int1_t of102;
    int1_t below_or_equal103;
    int1_t cf104;
    int1_t zf105;
    int1_t zf106;
    int1_t zf107;
    uint1_t zf108;
    struct s98* ebp109;
    int1_t zf110;
    int1_t sf111;
    void** esp112;
    void** esp113;
    void** ecx114;
    void** edi115;
    int1_t zf116;
    void** esp117;
    int1_t zf118;
    void** esp119;
    void** ecx120;
    int1_t cf121;

    *esi2 = reinterpret_cast<unsigned char>(*esi3 + *reinterpret_cast<unsigned char*>(&ecx));
    *eax4 = reinterpret_cast<signed char>(*eax5 + ah6);
    *esi7 = reinterpret_cast<signed char>(*esi8 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx) + 1));
    *reinterpret_cast<unsigned char*>(eax9 - 88) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(eax10 - 88) + *reinterpret_cast<unsigned char*>(&ecx));
    *eax11 = reinterpret_cast<signed char>(*eax12 + al13);
    *reinterpret_cast<signed char*>(esi14 - 88) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(esi15 - 88) + ah16);
    *eax17 = reinterpret_cast<signed char>(*eax18 + al19);
    *edi20 = *esi21;
    edi22 = reinterpret_cast<struct s85*>(&edi23->f1);
    esi24 = reinterpret_cast<struct s87*>(&esi25->f1);
    *eax26 = reinterpret_cast<signed char>(*eax27 + al28);
    edi22->f0 = esi24->f0;
    edi29 = reinterpret_cast<struct s89*>(&edi22->f1);
    esi30 = &esi24->f1;
    g8a0000a6 = reinterpret_cast<signed char>(g8a0000a6 - 90);
    eax31 = reinterpret_cast<void**>(0xa6);
    edi29->f0 = *esi30;
    edi32 = reinterpret_cast<struct s90*>(&edi29->f1);
    ga6 = ga6 + 0xa6;
    edi32->f0 = reinterpret_cast<void**>(0xa6);
    edi33 = reinterpret_cast<struct s91*>(&edi32->f1);
    esi34 = reinterpret_cast<struct s92*>(esi30 + 1 + 1);
    edi33->f0 = esi34->f0;
    edi35 = reinterpret_cast<struct s93*>(&edi33->f1);
    esi36 = &esi34->f1;
    ga6 = ga6 + 0xa6;
    *ecx = reinterpret_cast<unsigned char>(*ecx - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx) + 1) + reinterpret_cast<uint1_t>(*ecx < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx) + 1) + __intrinsic()))));
    ga6 = ga6 + 0xa6;
    edi35->f0 = *esi36;
    edi37 = reinterpret_cast<void**>(&edi35->f1);
    esi38 = reinterpret_cast<struct s94*>(esi36 + 1);
    *reinterpret_cast<signed char*>(edx39 - 0x45ffff58) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(edx40 - 0x45ffff58) + dl41);
    ga6 = ga6 + 0xa6;
    ga6 = ga6 + 0xa6;
    *reinterpret_cast<unsigned char*>(&ecx) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax31 + 1)));
    esi38->f114 = reinterpret_cast<unsigned char>(esi38->f114 + 0xa6);
    esp42 = reinterpret_cast<void*>(g169 * 0x6c6c4100);
    __asm__("outsd ");
    __asm__("arpl [ecx+0x74], sp");
    __asm__("outsb ");
    ecx43 = reinterpret_cast<void**>(ecx + 1 - 1);
    __asm__("outsb ");
    esi44 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ecx43 + ebp45 * 2) + 97) * 0x657a696c);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp42) - 4) = ebx46;
    esp47 = reinterpret_cast<void**>(g14c * 0x714500d8);
    if (!__undefined()) {
        addr_0x100a02d_20:
        *reinterpret_cast<void**>(edx48 + 0x65) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(edx48 + 0x65)) + reinterpret_cast<unsigned char>(edx48));
        cf49 = __intrinsic();
        ebx50 = reinterpret_cast<void**>(&ebx51->f1);
        __asm__("insb ");
        __asm__("outsd ");
        if (!cf49) {
            goto addr_0x100a09c_22;
        }
    } else {
        __asm__("insb ");
        *reinterpret_cast<void***>(esp47 - 4) = ebx52;
        esp47 = reinterpret_cast<void**>(g14c * 0x65470119);
        if (__undefined()) {
            addr_0x100a02c_24:
            goto addr_0x100a02d_20;
        } else {
            __asm__("outsd ");
            esp47 = reinterpret_cast<void**>(ebp53->f110 * 73);
            cf49 = __intrinsic();
            __asm__("outsb ");
            __asm__("outsw ");
            if (cf49) {
                addr_0x100a04f_26:
                --edi37;
                if (__intrinsic()) {
                    addr_0x100a0b9_27:
                    goto addr_0x100a0bb_28;
                } else {
                    __asm__("outsb ");
                    --ebx50;
                    sf54 = reinterpret_cast<signed char>(ebx50) < reinterpret_cast<signed char>(0);
                    if (!sf54) {
                        addr_0x100a09e_30:
                        --ecx43;
                        __asm__("outsb ");
                        __asm__("outsw ");
                        --ebx50;
                        if (reinterpret_cast<signed char>(ebx50) >= reinterpret_cast<signed char>(0)) {
                            addr_0x100a0e7_31:
                            ++ebx50;
                            __asm__("insb ");
                            __asm__("outsd ");
                            if (!cf49) {
                                addr_0x100a152_32:
                                *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                                *reinterpret_cast<void**>(&edx48 + 1) = reinterpret_cast<void*>(1);
                                ++edi37;
                                zf55 = edi37 == 0;
                                if (zf55) {
                                    addr_0x100a1ad_33:
                                    esi44 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(edx48 + 0x65)) * 0x726f7463);
                                    sf56 = __undefined();
                                    goto addr_0x100a1b4_34;
                                } else {
                                    if (reinterpret_cast<signed char>(edi37) >= reinterpret_cast<signed char>(0)) {
                                        goto addr_0x100a1d0_37;
                                    }
                                    if (zf55) 
                                        goto addr_0x100a1c3_39; else 
                                        goto addr_0x100a15e_40;
                                }
                            } else {
                                --eax31;
                                __asm__("popad ");
                                goto addr_0x100a0ef_42;
                            }
                        } else {
                            *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                            ++ecx43;
                            esp57 = esp47 + 1;
                            goto addr_0x100a0aa_44;
                        }
                    } else {
                        if (sf54) 
                            goto addr_0x100a09c_22;
                        *reinterpret_cast<void**>(&edx48) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx48)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx50 + 1)));
                        *reinterpret_cast<void**>(edx48 + 0x65) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(edx48 + 0x65)) + reinterpret_cast<unsigned char>(edx48));
                        cf49 = __intrinsic();
                        zf58 = *reinterpret_cast<void**>(edx48 + 0x65) == 0;
                        goto addr_0x100a060_47;
                    }
                }
            } else {
                __asm__("popad ");
                if (__undefined()) {
                    addr_0x100a04e_49:
                    goto addr_0x100a04f_26;
                } else {
                    __asm__("outsd ");
                    __asm__("outsb ");
                    *reinterpret_cast<unsigned char*>(edx59 + 0x65704f01) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(edx60 + 0x65704f01) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx43 + 1)));
                    cf49 = __intrinsic();
                    zf58 = *reinterpret_cast<signed char*>(edx61 + 0x65704f01) == 0;
                    __asm__("outsb ");
                    esp47 = esp47 - 4;
                    *reinterpret_cast<void***>(esp47) = reinterpret_cast<void**>(0xa6);
                    if (cf49) {
                        addr_0x100a060_47:
                        esp47 = esp47 - 4;
                        *reinterpret_cast<void***>(esp47) = ebx50;
                        if (zf58) {
                            addr_0x100a0bb_28:
                            esp47 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(edx48 + 0x72)) * 0x797261);
                            goto addr_0x100a0c1_51;
                        } else {
                            __asm__("popad ");
                            __asm__("insb ");
                            if (!zf58) {
                                addr_0x100a0ce_53:
                                if (cf49) {
                                    if (cf49) {
                                        addr_0x100a1a5_55:
                                        *reinterpret_cast<void**>(edi37 + 0x65) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(edi37 + 0x65)) + reinterpret_cast<unsigned char>(eax31));
                                        zf62 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(edi37 + 0x65) == 0);
                                        goto addr_0x100a1aa_56;
                                    } else {
                                        __asm__("outsb ");
                                        goto addr_0x100a13b_58;
                                    }
                                } else {
                                    if (!cf49) {
                                        goto addr_0x100a148_61;
                                    }
                                }
                            } else {
                                ++ebp63;
                                if (reinterpret_cast<signed char>(ebp63) < reinterpret_cast<signed char>(0)) {
                                    addr_0x100a0ad_63:
                                    --ecx43;
                                    esi44 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi44) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx48)));
                                    goto addr_0x100a0af_64;
                                } else {
                                    ga6 = ga6 + 0xa6;
                                    __asm__("in eax, dx");
                                    *reinterpret_cast<void**>(edx48 + 0x65) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(edx48 + 0x65)) + reinterpret_cast<unsigned char>(edx48));
                                    cf64 = __intrinsic();
                                    zf65 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(edx48 + 0x65) == 0);
                                    esp47 = esp47 - 4;
                                    *reinterpret_cast<void***>(esp47) = ecx43;
                                    if (!zf65) {
                                        addr_0x100a0db_66:
                                        esp47 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(edx48 + 0x72)) * 0x41797261);
                                        goto addr_0x100a0e2_67;
                                    } else {
                                        addr_0x100a076_68:
                                        if (cf64) {
                                            addr_0x100a0f1_69:
                                            goto addr_0x100a0f2_70;
                                        } else {
                                            addr_0x100a078_71:
                                            esp47 = esp47 - 4;
                                            *reinterpret_cast<void***>(esp47) = esi44;
                                            __asm__("popad ");
                                            __asm__("insb ");
                                            if (!zf65) {
                                                addr_0x100a0e2_67:
                                                *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                                                *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) ^ reinterpret_cast<unsigned char>(eax31));
                                                cf49 = 0;
                                                goto addr_0x100a0e7_31;
                                            } else {
                                                ++ebp63;
                                                if (reinterpret_cast<signed char>(ebp63) < reinterpret_cast<signed char>(0)) {
                                                    addr_0x100a0c1_51:
                                                    tmp32_66 = edi37;
                                                    edi37 = eax31;
                                                    eax31 = tmp32_66;
                                                    *reinterpret_cast<void**>(edi37 + 0x65) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(edi37 + 0x65)) + reinterpret_cast<unsigned char>(eax31));
                                                    cf49 = __intrinsic();
                                                    if (!*reinterpret_cast<void**>(edi37 + 0x65)) 
                                                        goto addr_0x100a11a_73; else 
                                                        goto addr_0x100a0ca_74;
                                                } else {
                                                    ga6 = ga6 + 0xa6;
                                                    __asm__("into ");
                                                    *reinterpret_cast<void**>(edx48 + 0x65) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(edx48 + 0x65)) + reinterpret_cast<unsigned char>(edx48));
                                                    cf67 = __intrinsic();
                                                    ++ebx50;
                                                    zf68 = reinterpret_cast<uint1_t>(ebx50 == 0);
                                                    goto addr_0x100a088_76;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        __asm__("arpl [ebp+0x73], sp");
                        if (!cf49) 
                            goto addr_0x100a04a_78;
                        __asm__("outsd ");
                        *reinterpret_cast<signed char*>(&g14c) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&g14c) + bl69);
                        ++ecx43;
                        zf65 = reinterpret_cast<uint1_t>(ecx43 == 0);
                        esp47 = reinterpret_cast<void**>(0xfffffffc);
                        gfffffffc = reinterpret_cast<void**>(0x75);
                        if (!__intrinsic()) 
                            goto addr_0x100a078_71;
                        gfffffff8 = reinterpret_cast<void**>(-8);
                        __asm__("outsd ");
                        esp47 = reinterpret_cast<void**>(ebp70->f110 * 80);
                        cf64 = __intrinsic();
                        zf65 = __undefined();
                        if (cf64) 
                            goto addr_0x100a075_81; else 
                            goto addr_0x100a00c_82;
                    }
                }
            }
        }
    }
    --ebx50;
    __asm__("rol dword [ecx], cl");
    esp71 = esp47 - 4;
    *reinterpret_cast<void***>(esp71) = edx48;
    esp57 = esp71 + 1;
    zf72 = esp57 == 0;
    __asm__("insb ");
    if (zf72) {
        addr_0x100a0aa_44:
        esp73 = esp57 - 4;
        *reinterpret_cast<void***>(esp73) = esi44;
        ++ecx43;
        *reinterpret_cast<void***>(esp73 - 4) = eax31;
        goto addr_0x100a0ad_63;
    } else {
        esp47 = esp57 - 4;
        *reinterpret_cast<void***>(esp47) = esi44;
        __asm__("popad ");
        __asm__("insb ");
        if (!zf72) {
            addr_0x100a0af_64:
            __asm__("insb ");
            __asm__("insb ");
            *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
            *reinterpret_cast<void**>(esi44 + 0x72) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(esi44 + 0x72)) + reinterpret_cast<unsigned char>(eax31));
            goto addr_0x100a0b9_27;
        } else {
            addr_0x100a04a_78:
            ++ecx43;
            *reinterpret_cast<void**>(&ebx50) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx50)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax31 + 1)));
            *reinterpret_cast<void**>(edx48 + 0x65) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(edx48 + 0x65)) + reinterpret_cast<unsigned char>(edx48));
            cf49 = __intrinsic();
            goto addr_0x100a04e_49;
        }
    }
    addr_0x100a1c3_39:
    if (zf55) {
        addr_0x100a22b_86:
        *reinterpret_cast<void**>(&ecx43 + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx43 + 1)) + 1);
        *reinterpret_cast<void**>(edi37 + 0x6c) = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(edi37 + 0x6c)) + reinterpret_cast<unsigned char>(eax31));
        __asm__("outsd ");
        --esp47;
        __asm__("outsd ");
        __asm__("arpl [ebx+0x0], bp");
        *reinterpret_cast<void**>(&edx48) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx48)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx43 + 1)));
        *reinterpret_cast<void**>(edi37 + 0x6c) = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(edi37 + 0x6c)) + reinterpret_cast<unsigned char>(eax31));
        __asm__("outsd ");
        __asm__("insb ");
        __asm__("insb ");
        __asm__("outsd ");
        __asm__("arpl [eax], ax");
        cf49 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx48)) < reinterpret_cast<unsigned char>(eax31));
        *reinterpret_cast<void***>(edx48) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx48)) - reinterpret_cast<unsigned char>(eax31));
        ecx43 = ecx43 + 1 - 1;
        zf62 = reinterpret_cast<uint1_t>(ecx43 == 0);
        of74 = __intrinsic();
        below_or_equal75 = reinterpret_cast<uint1_t>(cf49 | zf62);
        if (cf49) {
            addr_0x100a24f_88:
            ++ebx50;
            esp76 = esp47 - 4;
            *reinterpret_cast<void***>(esp76) = ebx50;
            esp47 = esp76 - 1;
            __asm__("popad ");
            edx48 = edx48 + 1 + 1;
            zf62 = reinterpret_cast<uint1_t>(edx48 == 0);
            if (reinterpret_cast<signed char>(edx48) >= reinterpret_cast<signed char>(0)) {
                addr_0x100a2cd_89:
                if (!cf49) {
                    addr_0x100a334_90:
                    __asm__("outsd ");
                    __asm__("arpl [ebx+0x52], bp");
                    if (!cf49) {
                        addr_0x100a3ab_91:
                        edx48 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx48) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(ebx50 + 0x65)));
                        if (!edx48) {
                            goto addr_0x100a3f7_93;
                        }
                    } else {
                        addr_0x100a33c_94:
                        if (!zf62) {
                            ebp63 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(ebp63 + 84) * 0x656d69);
                            --ecx43;
                            *reinterpret_cast<void**>(&ecx43) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx43)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edi37 + reinterpret_cast<unsigned char>(ebp63) * 2) + 99)));
                            goto addr_0x100a3bb_96;
                        } else {
                            __asm__("arpl [ebp+0x0], sp");
                            *reinterpret_cast<unsigned char*>(esi44 + 2) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(esi44 + 2) + reinterpret_cast<unsigned char>(eax31));
                            cf49 = __intrinsic();
                            goto addr_0x100a343_98;
                        }
                    }
                } else {
                    *reinterpret_cast<void**>(&ecx43) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx43)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx50)));
                    *reinterpret_cast<unsigned char*>(esi44 + 0x69) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(esi44 + 0x69) + reinterpret_cast<unsigned char>(eax31));
                    goto addr_0x100a2d2_100;
                }
            } else {
                *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                *reinterpret_cast<void***>(edi37) = eax31;
                ++edi37;
                ++esi44;
                goto addr_0x100a25d_104;
            }
        }
    } else {
        ++esp47;
        esi44 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(edx48 + 0x65)) * 0x726f7463);
        if (!__undefined()) {
            addr_0x100a211_106:
            *reinterpret_cast<void**>(edi37 + 0x6c) = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(edi37 + 0x6c)) + reinterpret_cast<unsigned char>(eax31));
            __asm__("outsd ");
            ++esi44;
            if (__intrinsic()) {
                addr_0x100a280_107:
                goto addr_0x100a286_108;
            } else {
                *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                goto addr_0x100a21e_110;
            }
        } else {
            addr_0x100a1d0_37:
            *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
            esp47 = esp47 - 4;
            *reinterpret_cast<void***>(esp47) = esi44;
            *reinterpret_cast<void**>(edi37 + 0x65) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(edi37 + 0x65)) + reinterpret_cast<unsigned char>(eax31));
            if (!*reinterpret_cast<void**>(edi37 + 0x65)) {
                addr_0x100a21e_110:
                *reinterpret_cast<void**>(edi37 + 0x6c) = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(edi37 + 0x6c)) + reinterpret_cast<unsigned char>(eax31));
                __asm__("outsd ");
                esp47 = esp47 - 4;
                *reinterpret_cast<void***>(esp47) = ebp63;
                goto addr_0x100a227_111;
            } else {
                addr_0x100a1d8_112:
                ebp63 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(ebp63 + 65) * 0x69727474);
                cf77 = __intrinsic();
                goto addr_0x100a1e0_113;
            }
        }
    }
    addr_0x100a294_114:
    if (below_or_equal75) {
        addr_0x100a2f7_115:
        goto addr_0x100a2fd_116;
    } else {
        if (zf62) {
            addr_0x100a2fd_116:
            if (!cf49) {
                addr_0x100a343_98:
                esp78 = esp47 - 1;
                __asm__("outsd ");
                __asm__("popad ");
                esp47 = esp78 - 4;
                *reinterpret_cast<void***>(esp47) = edx48;
                if (!cf49) {
                    addr_0x100a3bb_96:
                    __asm__("popad ");
                    __asm__("insb ");
                    ++esi44;
                    goto addr_0x100a3c0_118;
                } else {
                    if (esp78) {
                        addr_0x100a3c0_118:
                        __asm__("outsd ");
                        ++esi44;
                        ebp63 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(*reinterpret_cast<int32_t*>(ebp63 + 84) * 0x54656d69 + 84) * 0x656d69);
                        cf79 = __intrinsic();
                        goto addr_0x100a3cd_120;
                    } else {
                        addr_0x100a34e_121:
                        __asm__("arpl [ebp+0x0], sp");
                        goto addr_0x100a34f_122;
                    }
                }
            } else {
                *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                goto addr_0x100a303_124;
            }
        } else {
            esp47 = esp47 - 4;
            *reinterpret_cast<void***>(esp47) = eax31;
            if (!cf49) {
                *reinterpret_cast<int16_t*>(&ebp63) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(ebp63 + 73) * 0x746e);
                ++ecx43;
                *reinterpret_cast<unsigned char*>(edx48 + 0x74736c03) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edx48 + 0x74736c03) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx43 + 1)));
                zf80 = *reinterpret_cast<unsigned char*>(edx48 + 0x74736c03) == 0;
                if (__intrinsic()) 
                    goto addr_0x100a30e_128;
                __asm__("insd ");
                if (__intrinsic()) 
                    goto addr_0x100a317_130; else 
                    goto addr_0x100a2ae_131;
            }
        }
    }
    addr_0x100a30b_132:
    __asm__("insd ");
    if (of74) {
        addr_0x100a34f_122:
        g7a695303 = reinterpret_cast<unsigned char>(g7a695303 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx50 + 1)));
        cf79 = __intrinsic();
        zf81 = g7a695303 == 0;
        __asm__("outsd ");
        esp47 = esp47 - 2;
        *reinterpret_cast<void***>(esp47) = edx48;
        if (!cf79) {
            addr_0x100a3cd_120:
            goto addr_0x100a3d2_133;
        } else {
            if (!zf81) {
                addr_0x100a3d2_133:
                eax31 = eax31;
                ++esp47;
                zf82 = reinterpret_cast<uint1_t>(esp47 == 0);
                sf83 = reinterpret_cast<signed char>(esp47) < reinterpret_cast<signed char>(0);
                of84 = __intrinsic();
                below_or_equal85 = reinterpret_cast<uint1_t>(cf79 | zf82);
                __asm__("outsd ");
                if (cf79) {
                    __asm__("popad ");
                    if (zf82) {
                        addr_0x100a440_137:
                        if (sf83) {
                            goto addr_0x100a484_139;
                        } else {
                            addr_0x100a442_140:
                            *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                            cf79 = __intrinsic();
                            zf82 = reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(eax31) == 0);
                            sf83 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax31)) < reinterpret_cast<signed char>(0);
                            of84 = __intrinsic();
                            below_or_equal85 = reinterpret_cast<uint1_t>(cf79 | zf82);
                            eax31 = reinterpret_cast<void**>(3);
                            __asm__("insb ");
                            if (!cf79) {
                                addr_0x100a4bd_141:
                                goto addr_0x100a4be_142;
                            } else {
                                if (cf79) {
                                    addr_0x100a4ae_144:
                                    if (cf79) {
                                        addr_0x100a521_145:
                                        __asm__("popad ");
                                        if (zf82) 
                                            goto addr_0x100a589_146; else 
                                            goto addr_0x100a524_147;
                                    } else {
                                        __asm__("arpl [ebp+0x73], sp");
                                        if (!cf79) 
                                            goto addr_0x100a4b7_149; else 
                                            goto addr_0x100a4b7_149;
                                    }
                                } else {
                                    if (of84) {
                                        addr_0x100a4c6_151:
                                        --edi37;
                                        goto addr_0x100a4c7_152;
                                    } else {
                                        __asm__("outsb ");
                                        ++ecx43;
                                        *reinterpret_cast<void**>(&ecx43 + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx43 + 1)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx50)));
                                        *reinterpret_cast<void**>(edi37 + 0x65) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(edi37 + 0x65)) + reinterpret_cast<unsigned char>(eax31));
                                        cf79 = __intrinsic();
                                        zf82 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(edi37 + 0x65) == 0);
                                        sf83 = reinterpret_cast<signed char>(*reinterpret_cast<void**>(edi37 + 0x65)) < reinterpret_cast<signed char>(0);
                                        of84 = __intrinsic();
                                        below_or_equal85 = reinterpret_cast<uint1_t>(cf79 | zf82);
                                        goto addr_0x100a452_154;
                                    }
                                }
                            }
                        }
                    } else {
                        esp47 = esp47 - 4;
                        *reinterpret_cast<void***>(esp47) = esp47;
                        ebp63 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(ebp63 + 0x65)) * 0x69466f54);
                        goto addr_0x100a3dd_156;
                    }
                }
            } else {
                __asm__("arpl [ebp+0x0], sp");
                goto addr_0x100a362_158;
            }
        }
    } else {
        addr_0x100a30e_128:
        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
        __asm__("rol byte [eax], 1");
        ++esi44;
        ebp63 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(esi44 + 100) * 0x73726946);
        zf80 = __undefined();
        goto addr_0x100a317_130;
    }
    if (cf79) {
        addr_0x100a48e_160:
        if (!sf83) {
            addr_0x100a4d1_161:
            __asm__("popad ");
            if (zf82) {
                addr_0x100a53b_162:
                esp47 = reinterpret_cast<void**>(0x73655202);
                if (zf82) {
                    addr_0x100a589_146:
                    goto addr_0x100a58a_163;
                } else {
                    if (below_or_equal85) 
                        goto addr_0x100a5ab_165;
                    __asm__("outsb ");
                }
            } else {
                esp47 = esp47 - 4;
                *reinterpret_cast<void***>(esp47) = eax31;
                if (!cf79) {
                    __asm__("arpl [ebp+0x73], sp");
                    goto addr_0x100a4db_170;
                }
            }
        } else {
            *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
            cf86 = __intrinsic();
            goto addr_0x100a491_172;
        }
    } else {
        __asm__("arpl [ebp+0x73], sp");
        --edi37;
        *reinterpret_cast<void**>(ebx50 + 0x72) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(ebx50 + 0x72)) + reinterpret_cast<unsigned char>(eax31));
        cf86 = __intrinsic();
        __asm__("popad ");
        if (!*reinterpret_cast<void**>(ebx50 + 0x72)) {
            addr_0x100a491_172:
            __asm__("fild dword [ecx]");
            ++edi37;
            if (!edi37) {
                addr_0x100a4ee_175:
                *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                cf79 = __intrinsic();
                zf82 = reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(eax31) == 0);
                sf83 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax31)) < reinterpret_cast<signed char>(0);
                below_or_equal85 = reinterpret_cast<uint1_t>(cf79 | zf82);
                goto addr_0x100a4ef_176;
            } else {
                if (cf86) 
                    goto addr_0x100a50e_178;
                ebp63 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(edi37 + 0x6e) * 0x417845);
                esp47 = esp47 - 4;
                *reinterpret_cast<void***>(esp47) = edx48;
                *reinterpret_cast<void**>(edi37 + 0x65) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(edi37 + 0x65)) + reinterpret_cast<unsigned char>(eax31));
                cf79 = __intrinsic();
                zf82 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(edi37 + 0x65) == 0);
                sf83 = reinterpret_cast<signed char>(*reinterpret_cast<void**>(edi37 + 0x65)) < reinterpret_cast<signed char>(0);
                of84 = __intrinsic();
                below_or_equal85 = reinterpret_cast<uint1_t>(cf79 | zf82);
                if (zf82) 
                    goto addr_0x100a4ed_180;
                if (sf83) 
                    goto addr_0x100a513_182; else 
                    goto addr_0x100a4aa_183;
            }
        } else {
            ++esi44;
            ebp63 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(ebp63 + 65) * 0x4c024200);
            goto addr_0x100a433_185;
        }
    }
    *reinterpret_cast<unsigned char*>(edi37 + 3) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edi37 + 3) + reinterpret_cast<unsigned char>(eax31));
    esp47 = esp47 - 4;
    *reinterpret_cast<void***>(esp47) = esp47;
    if (__intrinsic()) {
        goto addr_0x100a5be_188;
    }
    addr_0x100a550_189:
    ebp63 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(esi44 + 97) * 0x68546574);
    cf79 = __intrinsic();
    goto addr_0x100a555_190;
    addr_0x100a513_182:
    if (zf82) {
        addr_0x100a55b_191:
        ++edi37;
        zf82 = reinterpret_cast<uint1_t>(edi37 == 0);
        sf83 = reinterpret_cast<signed char>(edi37) < reinterpret_cast<signed char>(0);
        below_or_equal85 = reinterpret_cast<uint1_t>(cf79 | zf82);
        goto addr_0x100a55f_192;
    } else {
        if (below_or_equal85) {
            addr_0x100a57d_194:
            *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
            goto addr_0x100a57f_195;
        } else {
            __asm__("outsb ");
        }
    }
    *reinterpret_cast<void***>(ebx50) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx50)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx43)));
    cf79 = __intrinsic();
    ++ebx50;
    zf82 = reinterpret_cast<uint1_t>(ebx50 == 0);
    sf83 = reinterpret_cast<signed char>(ebx50) < reinterpret_cast<signed char>(0);
    of84 = __intrinsic();
    below_or_equal85 = reinterpret_cast<uint1_t>(cf79 | zf82);
    goto addr_0x100a51f_198;
    addr_0x100a4aa_183:
    if (zf82) {
        addr_0x100a4ef_176:
        eax31 = reinterpret_cast<void**>(0x74654701);
        goto addr_0x100a4f4_199;
    } else {
        addr_0x100a4ac_200:
        __asm__("outsd ");
        esp47 = esp47 - 4;
        *reinterpret_cast<void***>(esp47) = eax31;
        goto addr_0x100a4ae_144;
    }
    addr_0x100a524_147:
    ++ebp63;
    zf87 = reinterpret_cast<uint1_t>(ebp63 == 0);
    if (cf79 | zf87) 
        goto addr_0x100a58c_201;
    __asm__("outsb ");
    if (zf87) 
        goto addr_0x100a56b_203;
    *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
    __asm__("insb ");
    *reinterpret_cast<void**>(ebx50 + 0x72) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(ebx50 + 0x72)) + reinterpret_cast<unsigned char>(eax31));
    __asm__("popad ");
    if (!*reinterpret_cast<void**>(ebx50 + 0x72)) {
        addr_0x100a599_205:
        __asm__("insd ");
        __asm__("insd ");
        __asm__("popad ");
        __asm__("outsb ");
        --esp47;
        ebp63 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(esi44 + 0x65)) * 0x2910041);
        cf79 = __intrinsic();
        zf82 = __undefined();
        goto addr_0x100a5a6_206;
    } else {
        esp88 = esp47 - 4;
        *reinterpret_cast<void***>(esp88) = esp88;
        *reinterpret_cast<void***>(esp88 - 4) = reinterpret_cast<void**>(0x64616572);
        goto addr_0x100a53a_208;
    }
    addr_0x100a4b7_149:
    *reinterpret_cast<unsigned char*>(edx48 + 3) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edx48 + 3) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx50 + 1)));
    esp47 = esp47 - 4;
    *reinterpret_cast<void***>(esp47) = edi37;
    __asm__("popad ");
    esi44 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi44 + reinterpret_cast<unsigned char>(eax31) * 2) + 0x6f) * 0x6e695372);
    goto addr_0x100a4bd_141;
    addr_0x100a317_130:
    if (zf80) {
        addr_0x100a362_158:
        *reinterpret_cast<void**>(&ebx50 + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx50 + 1)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx50)));
        *reinterpret_cast<unsigned char*>(esi44 + 0x69) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(esi44 + 0x69) + reinterpret_cast<unsigned char>(eax31));
        zf89 = *reinterpret_cast<unsigned char*>(esi44 + 0x69) == 0;
        __asm__("outsb ");
        esp47 = esp47 - 4;
        *reinterpret_cast<void***>(esp47) = edx48;
        if (!__intrinsic()) {
            addr_0x100a3dd_156:
            goto addr_0x100a3e2_209;
        } else {
            addr_0x100a36e_210:
            if (!zf89) {
                addr_0x100a3e2_209:
                __asm__("insb ");
                goto addr_0x100a3e4_211;
            } else {
                __asm__("arpl [ebp+0x41], sp");
                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx50) + reinterpret_cast<unsigned char>(eax31) + 0x7274736c) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ebx50) + reinterpret_cast<unsigned char>(eax31) + 0x7274736c) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax31 + 1)));
                __asm__("arpl [ecx+0x74], sp");
                ++ecx43;
                *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                g61655202 = eax31;
                ++esi44;
                ebp63 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebp63)) * 0x57038b00);
                cf49 = __intrinsic();
                sf90 = __undefined();
                zf91 = __undefined();
                goto addr_0x100a38c_213;
            }
        }
    } else {
        ebp63 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(ebp63 + 65) * 0xf20000);
        cf49 = __intrinsic();
        goto addr_0x100a31d_215;
    }
    addr_0x100a2ae_131:
    ++ecx43;
    *reinterpret_cast<unsigned char*>(edx48 + 0x6d655202) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edx48 + 0x6d655202) + 1);
    cf49 = __intrinsic();
    below_or_equal92 = reinterpret_cast<uint1_t>(cf49 | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(edx48 + 0x6d655202) == 0));
    goto addr_0x100a2b5_216;
    addr_0x100a1e0_113:
    if (!cf77) {
        addr_0x100a227_111:
        __asm__("outsb ");
        __asm__("insb ");
        __asm__("outsd ");
        __asm__("arpl [ebx+0x0], bp");
        goto addr_0x100a22b_86;
    } else {
        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
        cf49 = __intrinsic();
        ecx43 = reinterpret_cast<void**>(0x70784500);
        goto addr_0x100a1ea_218;
    }
    addr_0x100a15e_40:
    __asm__("insd ");
    ++esp47;
    goto addr_0x100a160_219;
    addr_0x100a0ca_74:
    if (cf49) {
        addr_0x100a13b_58:
        ++ecx43;
        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
        cf49 = __intrinsic();
        zf62 = reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(eax31) == 0);
        sf56 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax31)) < reinterpret_cast<signed char>(0);
        of93 = __intrinsic();
        below_or_equal94 = reinterpret_cast<uint1_t>(cf49 | zf62);
        if (cf49) {
            ++edi37;
            zf62 = reinterpret_cast<uint1_t>(edi37 == 0);
            sf56 = reinterpret_cast<signed char>(edi37) < reinterpret_cast<signed char>(0);
            of93 = __intrinsic();
            below_or_equal94 = reinterpret_cast<uint1_t>(cf49 | zf62);
        }
    } else {
        __asm__("arpl [ecx+0x64], ax");
        goto addr_0x100a0ce_53;
    }
    if (zf62) {
        addr_0x100a191_223:
        if (!zf62) {
            esp47 = esp47 - 4;
            *reinterpret_cast<void***>(esp47) = eax31;
            if (cf49) {
                addr_0x100a208_226:
                if (cf49) {
                    addr_0x100a26e_227:
                    *reinterpret_cast<unsigned char*>(ebx50 + 0x74654701) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebx50 + 0x74654701) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx48)));
                    cf49 = __intrinsic();
                    zf62 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(ebx50 + 0x74654701) == 0);
                    below_or_equal94 = reinterpret_cast<uint1_t>(cf49 | zf62);
                    goto addr_0x100a270_228;
                } else {
                    if (of93) {
                        addr_0x100a286_108:
                        ebp63 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(esi44 + 0x67) * 0x8d000041);
                        *reinterpret_cast<void**>(edi37 + 0x65) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(edi37 + 0x65)) + reinterpret_cast<unsigned char>(eax31));
                        cf49 = __intrinsic();
                        zf62 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(edi37 + 0x65) == 0);
                        of74 = __intrinsic();
                        below_or_equal75 = reinterpret_cast<uint1_t>(cf49 | zf62);
                        if (zf62) {
                            addr_0x100a2e2_230:
                            __asm__("insb ");
                            if (zf62) {
                                goto addr_0x100a34e_121;
                            } else {
                                ++esi44;
                                ebp63 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(ebp63 + 65) * 0x53030400);
                                zf62 = __undefined();
                                goto addr_0x100a2ee_233;
                            }
                        } else {
                            if (cf49) 
                                goto addr_0x100a2fd_116; else 
                                goto addr_0x100a294_114;
                        }
                    } else {
                        ++ecx43;
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        __asm__("int1 ");
                        goto addr_0x100a211_106;
                    }
                }
            } else {
                addr_0x100a199_236:
                goto addr_0x100a19c_237;
            }
        }
    } else {
        __asm__("outsd ");
        if (!zf62) {
            addr_0x100a1b4_34:
            if (!sf56) {
                goto addr_0x100a1fe_240;
            } else {
                *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                ++edi37;
                *reinterpret_cast<void**>(ebx50 + 0x72) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(ebx50 + 0x72)) + reinterpret_cast<unsigned char>(eax31));
                zf55 = *reinterpret_cast<void**>(ebx50 + 0x72) == 0;
                __asm__("popad ");
                goto addr_0x100a1c3_39;
            }
        } else {
            addr_0x100a148_61:
            ++esi44;
            ebp63 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(ebp63 + 78) * 0x41656d61);
            goto addr_0x100a152_32;
        }
    }
    addr_0x100a1fc_242:
    if (zf62) {
        addr_0x100a270_228:
        esp47 = esp47 - 4;
        *reinterpret_cast<void***>(esp47) = eax31;
        if (cf49) 
            goto addr_0x100a2e1_243;
    } else {
        addr_0x100a1fe_240:
        ebp63 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(esi44 + 0x67) * 0xad004173);
        goto addr_0x100a203_244;
    }
    if (below_or_equal94) {
        addr_0x100a2db_246:
        ebp63 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(ebp63 + 65) * 0x44008100);
        zf62 = __undefined();
        goto addr_0x100a2e1_243;
    } else {
        if (zf62) {
            addr_0x100a2e1_243:
            goto addr_0x100a2e2_230;
        } else {
            esp47 = esp47 - 4;
            *reinterpret_cast<void***>(esp47) = eax31;
            if (cf49) {
                addr_0x100a2ee_233:
                if (zf62) {
                    goto addr_0x100a33c_94;
                } else {
                    ebp63 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(ebp63 + 65) * 0x69727474);
                    cf49 = __intrinsic();
                    goto addr_0x100a2f7_115;
                }
            } else {
                goto addr_0x100a280_107;
            }
        }
    }
    addr_0x100a075_81:
    goto addr_0x100a076_68;
    addr_0x100a00c_82:
    if (cf64 | zf65) {
        goto addr_0x100a078_71;
    }
    __asm__("insb ");
    ebp63 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp95) - 1);
    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(edi37 + reinterpret_cast<unsigned char>(ebp63) * 2) + 0x6f) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi37 + reinterpret_cast<unsigned char>(ebp63) * 2) + 0x6f) + reinterpret_cast<unsigned char>(ecx43);
    esi44 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(ebp63 + 0x70) * 80);
    cf67 = __intrinsic();
    sf96 = __undefined();
    zf68 = __undefined();
    if (cf67) {
        addr_0x100a088_76:
        if (cf67) {
            addr_0x100a0ef_42:
            __asm__("outsb ");
            __asm__("insb ");
            goto addr_0x100a0f1_69;
        } else {
            addr_0x100a08a_255:
            __asm__("popad ");
            if (zf68) {
                addr_0x100a0f2_70:
                *reinterpret_cast<unsigned char*>(ebx50 + 2) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebx50 + 2) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx43)));
                --esp47;
                __asm__("outsd ");
                __asm__("arpl [ecx+0x6c], sp");
                ++esi44;
                zf62 = reinterpret_cast<uint1_t>(esi44 == 0);
                sf97 = reinterpret_cast<signed char>(esi44) < reinterpret_cast<signed char>(0);
                if (__intrinsic()) {
                    addr_0x100a163_256:
                    goto addr_0x100a167_257;
                } else {
                    *reinterpret_cast<unsigned char*>(edi37 + 2) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edi37 + 2) + reinterpret_cast<unsigned char>(eax31));
                    goto addr_0x100a101_259;
                }
            } else {
                --ebx50;
                sf96 = reinterpret_cast<signed char>(ebx50) < reinterpret_cast<signed char>(0);
                if (!sf96) {
                    addr_0x100a0d6_261:
                    ++ecx43;
                    *reinterpret_cast<void**>(&ecx43) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx43)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edi37 + reinterpret_cast<unsigned char>(ebp63) * 2) + 97)));
                    goto addr_0x100a0db_66;
                } else {
                    addr_0x100a091_262:
                    if (sf96) {
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        goto addr_0x100a0d6_261;
                    } else {
                        eax31 = reinterpret_cast<void**>(0xa6 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx43 + 1)));
                        *reinterpret_cast<void**>(edx48 + 0x65) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(edx48 + 0x65)) + reinterpret_cast<unsigned char>(edx48));
                        cf49 = __intrinsic();
                        zf98 = *reinterpret_cast<void**>(edx48 + 0x65) == 0;
                        esp47 = esp47 - 4;
                        *reinterpret_cast<void***>(esp47) = ecx43;
                        if (!zf98) {
                            addr_0x100a101_259:
                            --esp47;
                            __asm__("outsd ");
                            __asm__("arpl [ecx+0x6c], sp");
                            ++ecx43;
                            __asm__("insb ");
                            __asm__("insb ");
                            __asm__("outsd ");
                            __asm__("arpl [eax], ax");
                            *reinterpret_cast<void***>(eax31 + 1) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31 + 1)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx43 + 1)));
                            cf49 = __intrinsic();
                            ++edi37;
                            if (!edi37) {
                                addr_0x100a160_219:
                                esi44 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(edx48 + 0x65)) * 0x726f7463);
                                sf97 = __undefined();
                                zf62 = __undefined();
                                goto addr_0x100a163_256;
                            } else {
                                __asm__("popad ");
                                if (!cf49) {
                                    addr_0x100a18b_266:
                                    goto addr_0x100a18c_267;
                                } else {
                                    addr_0x100a117_268:
                                    ++ebp63;
                                    if (cf49) {
                                        addr_0x100a18c_267:
                                        esi44 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(ebp63 + 80) * 0x61766972);
                                        cf49 = __intrinsic();
                                        of93 = __intrinsic();
                                        zf62 = __undefined();
                                        below_or_equal94 = reinterpret_cast<uint1_t>(cf49 | zf62);
                                    } else {
                                        addr_0x100a11a_73:
                                        __asm__("outsd ");
                                        if (cf49) 
                                            goto addr_0x100a11d_269; else 
                                            goto addr_0x100a11d_269;
                                    }
                                }
                            }
                        } else {
                            addr_0x100a09c_22:
                            if (cf49) 
                                goto addr_0x100a117_268; else 
                                goto addr_0x100a09e_30;
                        }
                    }
                }
            }
        }
    } else {
        if (cf67 | zf68) 
            goto addr_0x100a08a_255;
        __asm__("insb ");
        esp47 = esp47 - 4;
        *reinterpret_cast<void***>(esp47) = esi44;
        __asm__("popad ");
        __asm__("insb ");
        if (!zf68) {
            goto addr_0x100a091_262;
        } else {
            ++ecx43;
            *reinterpret_cast<void**>(&edx48) = reinterpret_cast<void*>(reinterpret_cast<signed char>(dl99) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx43)));
            goto addr_0x100a02c_24;
        }
    }
    addr_0x100a18d_274:
    goto addr_0x100a191_223;
    addr_0x100a11d_269:
    *reinterpret_cast<void***>(ebx50) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx50)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx50 + 1)));
    *reinterpret_cast<void**>(edi37 + 0x65) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(edi37 + 0x65)) + reinterpret_cast<unsigned char>(eax31));
    cf49 = __intrinsic();
    zf62 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(edi37 + 0x65) == 0);
    sf97 = reinterpret_cast<signed char>(*reinterpret_cast<void**>(edi37 + 0x65)) < reinterpret_cast<signed char>(0);
    of93 = __intrinsic();
    below_or_equal94 = reinterpret_cast<uint1_t>(cf49 | zf62);
    if (zf62) {
        addr_0x100a167_257:
        if (!sf97) {
            addr_0x100a1aa_56:
            if (zf62) {
                addr_0x100a203_244:
                ebp63 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp63) + reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebx50 + reinterpret_cast<unsigned char>(esi44) * 2) + 0x74)));
                cf49 = __intrinsic();
                of93 = __intrinsic();
                goto addr_0x100a208_226;
            } else {
                addr_0x100a1ac_275:
                ebp63 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(esi44 + 100) * 0x4473776f);
                goto addr_0x100a1ad_33;
            }
        } else {
            *reinterpret_cast<unsigned char*>(ebp63 + 0x636c5f03) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp63 + 0x636c5f03) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx50)));
            __asm__("insb ");
            __asm__("outsd ");
            if (!__intrinsic()) 
                goto addr_0x100a1d8_112;
            *reinterpret_cast<unsigned char*>(edi37 + 0x6c6c5f03) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edi37 + 0x6c6c5f03) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx50)));
            cf77 = __intrinsic();
            if (!cf77) 
                goto addr_0x100a1e0_113; else 
                goto addr_0x100a17b_278;
        }
    } else {
        if (!zf62) {
            goto addr_0x100a199_236;
        }
        if (cf49) 
            goto addr_0x100a18d_274;
    }
    __asm__("outsb ");
    if (zf62) {
        addr_0x100a17b_278:
        eax31 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) * 0xffffffa0);
        ebx50 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx50) + reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(edi37 + 0x6c)));
        cf49 = __intrinsic();
        __asm__("outsd ");
        if (__intrinsic()) {
            addr_0x100a1ea_218:
            __asm__("popad ");
            __asm__("outsb ");
            ++ebp63;
            zf62 = reinterpret_cast<uint1_t>(ebp63 == 0);
            below_or_equal94 = reinterpret_cast<uint1_t>(cf49 | zf62);
            __asm__("outsb ");
            if (below_or_equal94) {
                addr_0x100a25d_104:
                *reinterpret_cast<void**>(edi37 + 0x65) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(edi37 + 0x65)) + reinterpret_cast<unsigned char>(eax31));
                cf49 = __intrinsic();
                zf62 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(edi37 + 0x65) == 0);
                below_or_equal92 = reinterpret_cast<uint1_t>(cf49 | zf62);
                if (zf62) {
                    addr_0x100a2b5_216:
                    __asm__("outsd ");
                    if (below_or_equal92) {
                        addr_0x100a31d_215:
                        ++esi44;
                        zf91 = esi44 == 0;
                        sf90 = reinterpret_cast<signed char>(esi44) < reinterpret_cast<signed char>(0);
                        if (cf49) {
                            addr_0x100a38c_213:
                            if (cf49) {
                                addr_0x100a3fa_283:
                                if (!sf90) {
                                    goto addr_0x100a442_140;
                                }
                            } else {
                                if (zf91) {
                                    addr_0x100a3f8_286:
                                    goto addr_0x100a3fa_283;
                                } else {
                                    ++esi44;
                                    ebp63 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebp63)) * 0x65530306);
                                    zf91 = __undefined();
                                    goto addr_0x100a39b_288;
                                }
                            }
                        } else {
                            esp47 = esp47 - 4;
                            *reinterpret_cast<void***>(esp47) = edx48;
                            if (!cf49) {
                                addr_0x100a39b_288:
                                if (zf91) {
                                    addr_0x100a3e4_211:
                                    esp47 = esp47 - 4;
                                    *reinterpret_cast<void***>(esp47) = esp47;
                                    ebp63 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(ebp63 + 0x65)) * 0x5302f700);
                                    cf79 = __intrinsic();
                                    sf83 = __undefined();
                                    zf82 = __undefined();
                                    if (zf82) {
                                        addr_0x100a433_185:
                                        __asm__("outsd ");
                                        __asm__("popad ");
                                        esp47 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(edx48 + 0x72)) * 0x45797261);
                                        sf83 = __undefined();
                                        zf82 = __undefined();
                                        goto addr_0x100a43b_290;
                                    } else {
                                        if (!zf82) 
                                            goto addr_0x100a464_292;
                                        if (cf79) 
                                            goto addr_0x100a459_294; else 
                                            goto addr_0x100a3f4_295;
                                    }
                                } else {
                                    ebp63 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(ebp63 + 80) * 0x746e696f);
                                    cf49 = __intrinsic();
                                    goto addr_0x100a3a0_297;
                                }
                            } else {
                                if (!zf91) {
                                    addr_0x100a3a0_297:
                                    if (cf49) 
                                        goto addr_0x100a3a9_299; else 
                                        goto addr_0x100a3a9_299;
                                } else {
                                    __asm__("arpl [ebp+0x0], sp");
                                    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx48) + reinterpret_cast<unsigned char>(eax31) + 76) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(edx48) + reinterpret_cast<unsigned char>(eax31) + 76) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx48)));
                                    cf49 = __intrinsic();
                                    zf62 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(edx48) + reinterpret_cast<unsigned char>(eax31) + 76) == 0);
                                    goto addr_0x100a334_90;
                                }
                            }
                        }
                    } else {
                        ++esp47;
                        esi44 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(edx48 + 0x65)) * 0x726f7463);
                        if (!__undefined()) {
                            addr_0x100a303_124:
                            goto label_302;
                        } else {
                            *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                            *reinterpret_cast<unsigned char*>(esi44 + 0x69) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(esi44 + 0x69) + reinterpret_cast<unsigned char>(eax31));
                            cf49 = __intrinsic();
                            __asm__("outsb ");
                            ++ebx50;
                            zf62 = reinterpret_cast<uint1_t>(ebx50 == 0);
                            __asm__("insb ");
                            __asm__("outsd ");
                            goto addr_0x100a2cd_89;
                        }
                    }
                } else {
                    esp47 = esp47 - 4;
                    *reinterpret_cast<void***>(esp47) = reinterpret_cast<void**>(0x5074726f);
                    goto addr_0x100a265_305;
                }
            } else {
                if (cf49) {
                    addr_0x100a265_305:
                    __asm__("popad ");
                    if (zf62) {
                        addr_0x100a2d2_100:
                        __asm__("outsb ");
                        --esi44;
                        if (reinterpret_cast<signed char>(esi44) < reinterpret_cast<signed char>(0)) 
                            goto addr_0x100a34e_121; else 
                            goto addr_0x100a2da_307;
                    } else {
                        --esi44;
                        __asm__("popad ");
                        __asm__("insd ");
                        ++ecx43;
                        goto addr_0x100a26e_227;
                    }
                } else {
                    __asm__("outsb ");
                    __asm__("insd ");
                    __asm__("outsb ");
                    if (zf62) 
                        goto addr_0x100a24f_88; else 
                        goto addr_0x100a1fc_242;
                }
            }
        } else {
            __asm__("outsb ");
            *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
            edx48 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx48) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(edi37 + 0x72)));
            goto addr_0x100a18b_266;
        }
    } else {
        if (cf49) {
            addr_0x100a19c_237:
            ebp63 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(esi44 + 0x67) * 0xe5000041);
            goto addr_0x100a1a5_55;
        } else {
            __asm__("arpl [ebp+0x73], sp");
            *reinterpret_cast<void**>(&ebx50) = reinterpret_cast<void*>(3);
            __asm__("insb ");
            if (!cf49) {
                goto addr_0x100a1ac_275;
            }
        }
    }
    *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
    cf79 = __intrinsic();
    zf82 = reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(eax31) == 0);
    sf83 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax31)) < reinterpret_cast<signed char>(0);
    of84 = __intrinsic();
    below_or_equal85 = reinterpret_cast<uint1_t>(cf79 | zf82);
    *reinterpret_cast<void***>(ecx43) = reinterpret_cast<void**>(71);
    if (zf82) {
        addr_0x100a45c_316:
        __asm__("outsb ");
        __asm__("outsw ");
        if (cf79) {
            addr_0x100a4ce_317:
            *reinterpret_cast<void**>(ebx50 + 0x72) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(ebx50 + 0x72)) + reinterpret_cast<unsigned char>(eax31));
            cf79 = __intrinsic();
            zf82 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(ebx50 + 0x72) == 0);
            sf83 = reinterpret_cast<signed char>(*reinterpret_cast<void**>(ebx50 + 0x72)) < reinterpret_cast<signed char>(0);
            of84 = __intrinsic();
            below_or_equal85 = reinterpret_cast<uint1_t>(cf79 | zf82);
            goto addr_0x100a4d1_161;
        } else {
            __asm__("popad ");
            if (zf82) {
                addr_0x100a4cd_319:
                goto addr_0x100a4ce_317;
            } else {
                addr_0x100a464_292:
                __asm__("outsd ");
                __asm__("outsb ");
                ++ecx43;
                *reinterpret_cast<void**>(&ebx50) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx50)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx43 + 1)));
                *reinterpret_cast<unsigned char*>(esi44 + 0x6f) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(esi44 + 0x6f) + reinterpret_cast<unsigned char>(eax31));
                cf79 = __intrinsic();
                zf82 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(esi44 + 0x6f) == 0);
                sf83 = reinterpret_cast<signed char>(*reinterpret_cast<unsigned char*>(esi44 + 0x6f)) < reinterpret_cast<signed char>(0);
                of84 = __intrinsic();
                below_or_equal85 = reinterpret_cast<uint1_t>(cf79 | zf82);
                if (cf79) {
                    addr_0x100a4db_170:
                    if (!cf79) {
                        addr_0x100a51f_198:
                        if (cf79) 
                            goto addr_0x100a586_320; else 
                            goto addr_0x100a521_145;
                    } else {
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        cf79 = __intrinsic();
                        zf82 = reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(eax31) == 0);
                        of84 = __intrinsic();
                        __asm__("enter 0x4701, 0x65");
                        if (zf82) 
                            goto addr_0x100a53a_208;
                        __asm__("insd ");
                        goto addr_0x100a4e7_323;
                    }
                } else {
                    addr_0x100a46e_324:
                    __asm__("popad ");
                    if (zf82) {
                        addr_0x100a4be_142:
                        goto addr_0x100a4c3_325;
                    } else {
                        if (!cf79) {
                            addr_0x100a4e7_323:
                            if (of84) {
                                addr_0x100a53a_208:
                                *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                                cf79 = __intrinsic();
                                zf82 = reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(eax31) == 0);
                                sf83 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax31)) < reinterpret_cast<signed char>(0);
                                of84 = __intrinsic();
                                below_or_equal85 = reinterpret_cast<uint1_t>(cf79 | zf82);
                                goto addr_0x100a53b_162;
                            } else {
                                addr_0x100a4ea_327:
                                __asm__("popad ");
                                if (zf82) {
                                    addr_0x100a555_190:
                                    if (cf79) {
                                        addr_0x100a5be_188:
                                        __asm__("rol dword [ecx], 1");
                                        goto addr_0x100a5bf_328;
                                    } else {
                                        __asm__("popad ");
                                        *reinterpret_cast<void***>(ebx50 + 1) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx50 + 1)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx43)));
                                        cf79 = __intrinsic();
                                        goto addr_0x100a55b_191;
                                    }
                                } else {
                                    addr_0x100a4ed_180:
                                    ++ecx43;
                                    goto addr_0x100a4ee_175;
                                }
                            }
                        } else {
                            __asm__("popad ");
                            ++ecx43;
                            *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                            cf79 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx43)) < reinterpret_cast<unsigned char>(eax31));
                            ++edi37;
                            zf82 = reinterpret_cast<uint1_t>(edi37 == 0);
                            sf83 = reinterpret_cast<signed char>(edi37) < reinterpret_cast<signed char>(0);
                            below_or_equal85 = reinterpret_cast<uint1_t>(cf79 | zf82);
                            if (zf82) {
                                addr_0x100a4c3_325:
                                __asm__("a16 insb ");
                                goto addr_0x100a4c6_151;
                            } else {
                                if (!zf82) {
                                    addr_0x100a4f4_199:
                                    esp47 = esp47 - 4;
                                    *reinterpret_cast<void***>(esp47) = ebx50;
                                    if (!sf83) {
                                        addr_0x100a56b_203:
                                        *reinterpret_cast<void***>(ebp63 + 1) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebp63 + 1)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx48 + 1)));
                                        goto addr_0x100a56d_332;
                                    } else {
                                        if (zf82) {
                                            addr_0x100a55f_192:
                                            if (zf82) {
                                                addr_0x100a5a6_206:
                                                esp47 = esp47 - 4;
                                                *reinterpret_cast<void***>(esp47) = ecx43;
                                                if (!zf82) {
                                                    addr_0x100a60e_334:
                                                    esp47 = esp47 - 4;
                                                    *reinterpret_cast<void***>(esp47) = esp47;
                                                    ebp63 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(ebp63 + 0x65)) * 0x54034600);
                                                    cf79 = __intrinsic();
                                                    goto addr_0x100a615_335;
                                                } else {
                                                    if (cf79) {
                                                        addr_0x100a624_337:
                                                    } else {
                                                        addr_0x100a5ab_165:
                                                        esp47 = esp47 - 4;
                                                        *reinterpret_cast<void***>(esp47) = eax31;
                                                        if (cf79) {
                                                            addr_0x100a615_335:
                                                            goto addr_0x100a617_338;
                                                        } else {
                                                            __asm__("outsd ");
                                                            if (cf79) {
                                                                addr_0x100a61f_340:
                                                                goto addr_0x100a621_341;
                                                            } else {
                                                                __asm__("popad ");
                                                                __asm__("outsb ");
                                                                __asm__("arpl [ebp+0x43], sp");
                                                                __asm__("outsd ");
                                                                if (!zf82) {
                                                                    addr_0x100a628_343:
                                                                    esp100 = esp47 - 4;
                                                                    *reinterpret_cast<void***>(esp100) = ebp63;
                                                                    __asm__("outsb ");
                                                                    esp47 = esp100 - 4;
                                                                    *reinterpret_cast<void***>(esp47) = reinterpret_cast<void**>(0x6c646e61);
                                                                    goto addr_0x100a62d_344;
                                                                } else {
                                                                    if (zf82) {
                                                                        addr_0x100a621_341:
                                                                        __asm__("outsd ");
                                                                        __asm__("arpl [ebp+0x73], sp");
                                                                        goto addr_0x100a624_337;
                                                                    } else {
                                                                        if (cf79) 
                                                                            goto addr_0x100a5be_188; else 
                                                                            goto addr_0x100a5be_188;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (cf79) {
                                                    addr_0x100a5cd_348:
                                                    *reinterpret_cast<void***>(esi44) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi44)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx50 + 1)));
                                                    *reinterpret_cast<void**>(edi37 + 0x65) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(edi37 + 0x65)) + reinterpret_cast<unsigned char>(eax31));
                                                    cf79 = __intrinsic();
                                                    zf82 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(edi37 + 0x65) == 0);
                                                    if (zf82) {
                                                        addr_0x100a617_338:
                                                        if (cf79) {
                                                            addr_0x100a687_349:
                                                            __asm__("insb ");
                                                            *reinterpret_cast<void**>(&ebx50) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx50)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx50)));
                                                            *reinterpret_cast<void**>(ebp63 + 0x65) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(ebp63 + 0x65)) + reinterpret_cast<unsigned char>(ecx43));
                                                            cf79 = __intrinsic();
                                                            zf101 = *reinterpret_cast<void**>(ebp63 + 0x65) == 0;
                                                            of102 = __intrinsic();
                                                            if (!cf79) {
                                                                addr_0x100a703_350:
                                                                esp47 = esp47 - 4;
                                                                *reinterpret_cast<void***>(esp47) = reinterpret_cast<void**>(0x70557261);
                                                                goto addr_0x100a708_351;
                                                            } else {
                                                                __asm__("popad ");
                                                                ++edx48;
                                                                if (__intrinsic()) 
                                                                    goto addr_0x100a698_353; else 
                                                                    goto addr_0x100a698_353;
                                                            }
                                                        } else {
                                                            addr_0x100a61a_354:
                                                            ebp63 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(esi44 + 97) * 0x72506574);
                                                            cf79 = __intrinsic();
                                                            goto addr_0x100a61f_340;
                                                        }
                                                    } else {
                                                        if (!zf82) {
                                                            addr_0x100a648_356:
                                                            if (zf82) {
                                                                addr_0x100a69f_357:
                                                                --ecx43;
                                                                zf101 = ecx43 == 0;
                                                                of102 = __intrinsic();
                                                                if (zf101) {
                                                                    addr_0x100a708_351:
                                                                    if (of102) {
                                                                        addr_0x100a76f_358:
                                                                        goto addr_0x100a772_359;
                                                                    } else {
                                                                        if (cf79) {
                                                                            addr_0x100a74d_361:
                                                                            __asm__("arpl [ecx+0x0], ax");
                                                                            eax31 = g73694400;
                                                                            if (of102) {
                                                                                goto addr_0x100a7b9_363;
                                                                            } else {
                                                                                if (zf101) {
                                                                                    addr_0x100a7bc_365:
                                                                                    ++edi37;
                                                                                    if (!edi37) 
                                                                                        goto addr_0x100a806_366; else 
                                                                                        goto addr_0x100a7c2_367;
                                                                                } else {
                                                                                    *reinterpret_cast<void***>(esp47 - 4) = reinterpret_cast<void**>(0x7373654d);
                                                                                    goto addr_0x100a75a_369;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                                                                            cf79 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax31) < reinterpret_cast<unsigned char>(0x61684300));
                                                                            below_or_equal103 = reinterpret_cast<unsigned char>(eax31) <= reinterpret_cast<unsigned char>(0x61684300);
                                                                            eax31 = eax31 - 0x61684300;
                                                                            if (cf79) {
                                                                                esi44 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi44 + reinterpret_cast<unsigned char>(eax31) * 2) + 0x6f) * 0x6c754d72);
                                                                                cf79 = __intrinsic();
                                                                                of102 = __intrinsic();
                                                                                zf101 = __undefined();
                                                                                goto addr_0x100a76f_358;
                                                                            } else {
                                                                                if (cf79) {
                                                                                    addr_0x100a77c_374:
                                                                                    __asm__("arpl [ebx+esi*2+0x0], si");
                                                                                    *reinterpret_cast<void**>(eax31 + 0x65) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(eax31 + 0x65)) + reinterpret_cast<unsigned char>(edx48));
                                                                                    ecx43 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(ebp63 + 0x65)) * 0x73);
                                                                                    cf104 = __intrinsic();
                                                                                    zf105 = __undefined();
                                                                                    goto addr_0x100a789_375;
                                                                                } else {
                                                                                    if (below_or_equal103) {
                                                                                        addr_0x100a75a_369:
                                                                                        __asm__("popad ");
                                                                                        goto addr_0x100a75f_377;
                                                                                    } else {
                                                                                        *reinterpret_cast<unsigned char*>(eax31 + 0x74655302) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax31 + 0x74655302) + reinterpret_cast<unsigned char>(eax31));
                                                                                        goto addr_0x100a71c_379;
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    __asm__("insd ");
                                                                    esp47 = esp47 - 4;
                                                                    *reinterpret_cast<void***>(esp47) = esp47;
                                                                    if (reinterpret_cast<signed char>(ecx43) < reinterpret_cast<signed char>(0)) {
                                                                        addr_0x100a71c_379:
                                                                        esp47 = esp47 - 4;
                                                                        *reinterpret_cast<void***>(esp47) = edi37;
                                                                        ebp63 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(esi44 + 100) * 0x6f4c776f);
                                                                        goto addr_0x100a725_381;
                                                                    } else {
                                                                        ++ecx43;
                                                                        eax31 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax31) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx43)));
                                                                        *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(edi37 + reinterpret_cast<unsigned char>(ebp63) * 2) + 97) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi37 + reinterpret_cast<unsigned char>(ebp63) * 2) + 97) + reinterpret_cast<unsigned char>(ecx43);
                                                                        zf106 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi37 + reinterpret_cast<unsigned char>(ebp63) * 2) + 97) == 0;
                                                                        goto addr_0x100a6ad_383;
                                                                    }
                                                                }
                                                            } else {
                                                                __asm__("outsb ");
                                                                esp47 = esp47 - 4;
                                                                *reinterpret_cast<void***>(esp47) = reinterpret_cast<void**>(0x6c646e61);
                                                                ++ebp63;
                                                                sf83 = reinterpret_cast<signed char>(ebp63) < reinterpret_cast<signed char>(0);
                                                                of84 = __intrinsic();
                                                                goto addr_0x100a653_385;
                                                            }
                                                        } else {
                                                            if (cf79) {
                                                                addr_0x100a63d_387:
                                                                if (cf79) 
                                                                    goto addr_0x100a643_388; else 
                                                                    goto addr_0x100a643_388;
                                                            } else {
                                                                __asm__("outsb ");
                                                                goto addr_0x100a5d9_390;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (below_or_equal85) {
                                                        addr_0x100a5cb_392:
                                                        if (zf82) 
                                                            goto addr_0x100a5cd_348; else 
                                                            goto addr_0x100a5cd_348;
                                                    } else {
                                                        esp47 = esp47 - 4;
                                                        *reinterpret_cast<void***>(esp47) = esp47;
                                                        if (!sf83) 
                                                            goto addr_0x100a5d9_390;
                                                        ++ecx43;
                                                        goto addr_0x100a56a_395;
                                                    }
                                                }
                                            }
                                        } else {
                                            __asm__("insd ");
                                            --ecx43;
                                            __asm__("outsb ");
                                            __asm__("outsw ");
                                            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax31) + reinterpret_cast<unsigned char>(eax31) + 67) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax31) + reinterpret_cast<unsigned char>(eax31) + 67) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx50)));
                                            if (__intrinsic()) {
                                                addr_0x100a56a_395:
                                                goto addr_0x100a56b_203;
                                            } else {
                                                __asm__("popad ");
                                                if (!*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax31) + reinterpret_cast<unsigned char>(eax31) + 67)) {
                                                    addr_0x100a56d_332:
                                                    ++edi37;
                                                    zf107 = edi37 == 0;
                                                    if (zf107) {
                                                        addr_0x100a5bf_328:
                                                        ++edi37;
                                                        if (!edi37) {
                                                            goto addr_0x100a61a_354;
                                                        } else {
                                                            esp47 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(ebx50 + 0x6b) * 0x6e756f43);
                                                            zf82 = __undefined();
                                                            goto addr_0x100a5cb_392;
                                                        }
                                                    } else {
                                                        __asm__("outsd ");
                                                        if (!zf107) {
                                                            addr_0x100a5e2_401:
                                                            cf79 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax31) < 1);
                                                            ++edi37;
                                                            zf82 = reinterpret_cast<uint1_t>(edi37 == 0);
                                                            sf83 = reinterpret_cast<signed char>(edi37) < reinterpret_cast<signed char>(0);
                                                            of84 = __intrinsic();
                                                            if (zf82) {
                                                                addr_0x100a62d_344:
                                                                goto addr_0x100a62f_402;
                                                            } else {
                                                                addr_0x100a5ea_403:
                                                                if (!zf82) {
                                                                    addr_0x100a65e_404:
                                                                    if (cf79) 
                                                                        goto addr_0x100a662_405; else 
                                                                        goto addr_0x100a662_405;
                                                                } else {
                                                                    if (cf79) {
                                                                        addr_0x100a653_385:
                                                                        if (sf83) {
                                                                            addr_0x100a6b8_407:
                                                                            goto addr_0x100a6ba_408;
                                                                        } else {
                                                                            if (of84) {
                                                                                addr_0x100a6cc_410:
                                                                                *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(69);
                                                                                __asm__("outsb ");
                                                                                esp47 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(ecx43 + 0x6c)) * 0xe100676f);
                                                                                *reinterpret_cast<unsigned char*>(ebp63 + 0x78) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp63 + 0x78) + reinterpret_cast<unsigned char>(eax31));
                                                                                esi44 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi37 + reinterpret_cast<unsigned char>(edx48) * 2) + 0x69) * 0x776f646e);
                                                                                cf79 = __intrinsic();
                                                                                of84 = __intrinsic();
                                                                                sf83 = __undefined();
                                                                                below_or_equal85 = reinterpret_cast<uint1_t>(cf79 | __undefined());
                                                                                goto addr_0x100a6e2_411;
                                                                            } else {
                                                                                ebp63 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(edi37 + 0x6e) * 0x746c6946);
                                                                                cf79 = __intrinsic();
                                                                                goto addr_0x100a65e_404;
                                                                            }
                                                                        }
                                                                    } else {
                                                                        __asm__("outsb ");
                                                                        if (zf82) 
                                                                            goto addr_0x100a641_414;
                                                                        if (cf79) 
                                                                            goto addr_0x100a662_405; else 
                                                                            goto addr_0x100a5f3_416;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            --eax31;
                                                            __asm__("popad ");
                                                            __asm__("outsb ");
                                                            __asm__("insb ");
                                                            ++ecx43;
                                                            goto addr_0x100a57d_194;
                                                        }
                                                    }
                                                } else {
                                                    --ebp63;
                                                    if (ebp63) {
                                                        addr_0x100a57f_195:
                                                        __asm__("lodsb ");
                                                        *reinterpret_cast<void**>(edi37 + 0x65) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(edi37 + 0x65)) + reinterpret_cast<unsigned char>(eax31));
                                                        cf79 = __intrinsic();
                                                        zf82 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(edi37 + 0x65) == 0);
                                                        sf83 = reinterpret_cast<signed char>(*reinterpret_cast<void**>(edi37 + 0x65)) < reinterpret_cast<signed char>(0);
                                                        of84 = __intrinsic();
                                                        below_or_equal85 = reinterpret_cast<uint1_t>(cf79 | zf82);
                                                        if (zf82) {
                                                            addr_0x100a5d9_390:
                                                            if (zf82) {
                                                                addr_0x100a62f_402:
                                                                ++ebp63;
                                                                zf106 = ebp63 == 0;
                                                                if (reinterpret_cast<signed char>(ebp63) < reinterpret_cast<signed char>(0)) {
                                                                    addr_0x100a699_419:
                                                                    *reinterpret_cast<void**>(&edx48) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx48)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(ebx50 + 0x65)));
                                                                    cf79 = __intrinsic();
                                                                    zf108 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(&edx48) == 0);
                                                                    sf83 = reinterpret_cast<signed char>(*reinterpret_cast<void**>(&edx48)) < reinterpret_cast<signed char>(0);
                                                                    of84 = __intrinsic();
                                                                    below_or_equal85 = reinterpret_cast<uint1_t>(cf79 | zf108);
                                                                    if (zf108) {
                                                                        addr_0x100a6e2_411:
                                                                        if (!cf79) {
                                                                            addr_0x100a72b_420:
                                                                            goto addr_0x100a72c_421;
                                                                        } else {
                                                                            __asm__("fadd dword [edx]");
                                                                            if (!below_or_equal85) {
                                                                                addr_0x100a75f_377:
                                                                                goto addr_0x100a760_424;
                                                                            } else {
                                                                                if (of84) {
                                                                                    addr_0x100a760_424:
                                                                                    *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                                                                                    goto addr_0x67796271_426;
                                                                                } else {
                                                                                    ebp63 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(esi44 + 0x74) * 0x2a004166);
                                                                                    goto addr_0x100a6f2_428;
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        __asm__("insb ");
                                                                        goto addr_0x100a69f_357;
                                                                    }
                                                                } else {
                                                                    if (__intrinsic()) {
                                                                        addr_0x100a6ad_383:
                                                                        esp47 = esp47 - 4;
                                                                        *reinterpret_cast<void***>(esp47) = ebx50;
                                                                        if (zf106) {
                                                                            addr_0x100a725_381:
                                                                            __asm__("outsb ");
                                                                            ++ecx43;
                                                                            *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                                                                            goto addr_0x100a72b_420;
                                                                        } else {
                                                                            ebp63 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(esi44 + 0x67) * 0x10e0041);
                                                                            cf79 = __intrinsic();
                                                                            goto addr_0x100a6b8_407;
                                                                        }
                                                                    } else {
                                                                        ebp63 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(edi37 + 0x6e) * 0x746c6946);
                                                                        cf79 = __intrinsic();
                                                                        goto addr_0x100a63d_387;
                                                                    }
                                                                }
                                                            } else {
                                                                addr_0x100a5db_433:
                                                                esp47 = esp47 - 4;
                                                                *reinterpret_cast<void***>(esp47) = reinterpret_cast<void**>(0x64616572);
                                                                --ecx43;
                                                                *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                                                                goto addr_0x100a5e2_401;
                                                            }
                                                        } else {
                                                            addr_0x100a586_320:
                                                            if (zf82) {
                                                                goto addr_0x100a5ea_403;
                                                            }
                                                        }
                                                    } else {
                                                        if (reinterpret_cast<signed char>(ebp63) < reinterpret_cast<signed char>(0)) {
                                                            goto addr_0x100a550_189;
                                                        } else {
                                                            addr_0x100a50e_178:
                                                            *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                                                            *reinterpret_cast<void***>(ebx50) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx50)) + reinterpret_cast<unsigned char>(eax31));
                                                            cf79 = __intrinsic();
                                                            zf82 = reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(ebx50) == 0);
                                                            below_or_equal85 = reinterpret_cast<uint1_t>(cf79 | zf82);
                                                            esp47 = esp47 - 4;
                                                            *reinterpret_cast<void***>(esp47) = ebx50;
                                                            goto addr_0x100a513_182;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (cf79) {
                                        goto addr_0x100a4ea_327;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        __asm__("insd ");
        if (of84) {
            addr_0x100a452_154:
            if (zf82) 
                goto addr_0x100a4ac_200; else 
                goto addr_0x100a456_440;
        } else {
            ebp109 = reinterpret_cast<struct s98*>(*reinterpret_cast<int32_t*>(ebp63 + 78) * 0x41656d61);
            *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
            cf79 = __intrinsic();
            *reinterpret_cast<void**>(&edx48 + 1) = reinterpret_cast<void*>(0);
            ebp63 = reinterpret_cast<void**>(&ebp109->f1);
            zf82 = reinterpret_cast<uint1_t>(ebp63 == 0);
            sf83 = reinterpret_cast<signed char>(ebp63) < reinterpret_cast<signed char>(0);
            of84 = __intrinsic();
            below_or_equal85 = reinterpret_cast<uint1_t>(cf79 | zf82);
            if (sf83) {
                addr_0x100a484_139:
                __asm__("outsb ");
                if (zf82) {
                    addr_0x100a4cb_442:
                    __asm__("arpl [eax+eax+0x62], si");
                    goto addr_0x100a4cd_319;
                } else {
                    esi44 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(edx48 + 0x65)) * 0x726f7463);
                    cf79 = __intrinsic();
                    of84 = __intrinsic();
                    sf83 = __undefined();
                    zf82 = __undefined();
                    below_or_equal85 = reinterpret_cast<uint1_t>(cf79 | zf82);
                    goto addr_0x100a48e_160;
                }
            } else {
                if (zf82) {
                    goto addr_0x100a46e_324;
                }
            }
        }
    }
    *reinterpret_cast<unsigned char*>(edi37 + 3) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edi37 + 3) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx48)));
    goto addr_0x100a628_343;
    addr_0x100a698_353:
    esp47 = esp47 - 4;
    *reinterpret_cast<void***>(esp47) = ebx50;
    goto addr_0x100a699_419;
    addr_0x100a7b9_363:
    ++esp47;
    ++ebx50;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ecx43) + reinterpret_cast<unsigned char>(eax31)) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ecx43) + reinterpret_cast<unsigned char>(eax31)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx43)));
    goto addr_0x100a7bc_365;
    addr_0x100a7c2_367:
    ++ebx50;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ecx43) + reinterpret_cast<unsigned char>(eax31) + 71) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ecx43) + reinterpret_cast<unsigned char>(eax31) + 71) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx48 + 1)));
    cf79 = __intrinsic();
    if (!*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ecx43) + reinterpret_cast<unsigned char>(eax31) + 71)) {
        addr_0x100a821_447:
        --ebp63;
        zf110 = ebp63 == 0;
        if (cf79) {
            __asm__("popad ");
            ++edx48;
            zf110 = edx48 == 0;
            sf111 = reinterpret_cast<signed char>(edx48) < reinterpret_cast<signed char>(0);
            __asm__("outsd ");
            if (sf111) {
                addr_0x100a86e_450:
                if (zf110) {
                    addr_0x100a8d6_451:
                    esp112 = esp47 - 4;
                    *reinterpret_cast<void***>(esp112) = edx48;
                    esp113 = esp112 - 4;
                    *reinterpret_cast<void***>(esp113) = ebx50;
                    ecx114 = ecx43 - 1;
                    --edi37;
                    __asm__("insb ");
                    __asm__("insb ");
                    *reinterpret_cast<unsigned char*>(ecx114 + 0x756e4500) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ecx114 + 0x756e4500) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax31 + 1)));
                    cf79 = __intrinsic();
                    zf110 = *reinterpret_cast<unsigned char*>(ecx114 + 0x756e4500) == 0;
                    __asm__("insd ");
                    esp47 = esp113 - 4;
                    *reinterpret_cast<void***>(esp47) = edx48;
                    if (!cf79) {
                        addr_0x100a959_452:
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        goto addr_0x100a95e_453;
                    } else {
                        addr_0x100a8ea_454:
                        if (!zf110) {
                            addr_0x100a95e_453:
                            *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                            *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                            *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                            *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                            *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                            *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                            *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                            goto addr_0x100a96b_455;
                        } else {
                            __asm__("arpl [ebp+0x4c], sp");
                            __asm__("popad ");
                            goto addr_0x100a8f0_457;
                        }
                    }
                } else {
                    __asm__("insd ");
                    esp47 = esp47 - 4;
                    *reinterpret_cast<void***>(esp47) = esp47;
                    goto addr_0x100a873_459;
                }
            } else {
                *reinterpret_cast<unsigned char*>(ebx50 + 0x61694400) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebx50 + 0x61694400) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx50)));
                __asm__("insb ");
                goto addr_0x100a834_461;
            }
        }
    } else {
        ebp63 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(esi44 + 100) * 0x6552776f);
        __asm__("arpl [eax+eax+0x36], si");
        *reinterpret_cast<void**>(&edx48) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx48)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(ebx50 + 0x65)));
        cf79 = __intrinsic();
        __asm__("outsb ");
        ++esp47;
        __asm__("insb ");
        --ecx43;
        zf101 = ecx43 == 0;
        goto addr_0x100a7de_463;
    }
    addr_0x100a89a_464:
    if (cf79) {
        addr_0x100a915_465:
        *reinterpret_cast<void***>(ebp63 + 1) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebp63 + 1)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx50)));
        edi115 = edi37 + 1;
        zf116 = edi115 == 0;
        if (zf116) {
            addr_0x100a971_466:
            *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
            *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
            goto addr_0x100a975_467;
        } else {
            if (reinterpret_cast<signed char>(edi115) >= reinterpret_cast<signed char>(0)) {
                addr_0x100a993_469:
                *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                goto addr_0x100a999_470;
            } else {
                if (zf116) {
                    addr_0x100a987_472:
                    *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                    *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                    *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                    *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                    *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                    *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                    goto addr_0x100a993_469;
                } else {
                    __asm__("insd ");
                    if (!(ebp63 - 1)) {
                        addr_0x100a999_470:
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                    } else {
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        goto addr_0x100a939_475;
                    }
                }
            }
        }
    } else {
        esp47 = esp47 - 4;
        *reinterpret_cast<void***>(esp47) = esi44;
        __asm__("popad ");
        __asm__("insb ");
        if (!zf110) 
            goto addr_0x100a906_477;
        ++ecx43;
        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
        cf79 = __intrinsic();
        goto addr_0x100a8a6_479;
    }
    addr_0x100a643_388:
    *reinterpret_cast<void***>(edx48) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx48)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx48 + 1)));
    edx48 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx48) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(ebx50 + 0x65)));
    cf79 = __intrinsic();
    zf82 = reinterpret_cast<uint1_t>(edx48 == 0);
    goto addr_0x100a648_356;
    addr_0x100a662_405:
    --ebx50;
    esp117 = esp47 - 4;
    *reinterpret_cast<void***>(esp117) = edx48;
    ebp63 = ebp63 + 1 + 1;
    esp47 = esp117 - 1;
    esi44 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi44 - 1) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx48)));
    goto addr_0x100a669_480;
    addr_0x100a5f3_416:
    __asm__("arpl [ebp+0x73], sp");
    if (!cf79) {
        addr_0x100a641_414:
        goto addr_0x100a643_388;
    } else {
        *reinterpret_cast<unsigned char*>(ebp63 + 0x74654701) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp63 + 0x74654701) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx50 + 1)));
        cf79 = __intrinsic();
        zf82 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(ebp63 + 0x74654701) == 0);
        sf83 = reinterpret_cast<signed char>(*reinterpret_cast<unsigned char*>(ebp63 + 0x74654701)) < reinterpret_cast<signed char>(0);
        of84 = __intrinsic();
        below_or_equal85 = reinterpret_cast<uint1_t>(cf79 | zf82);
        goto addr_0x100a5fc_482;
    }
    addr_0x67796271_426:
    if (cf79) {
        addr_0x100a5fe_484:
        esp47 = esp47 - 4;
        *reinterpret_cast<void***>(esp47) = ebx50;
        if (!sf83) {
            goto addr_0x100a676_486;
        }
    } else {
        addr_0x100a58a_163:
        if (!zf82) {
            addr_0x100a5fc_482:
            goto addr_0x100a5fe_484;
        } else {
            addr_0x100a58c_201:
            __asm__("outsb ");
            __asm__("outsw ");
            ecx43 = ecx43 - 1 + 1;
            *reinterpret_cast<void***>(ecx43) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx43)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx43)));
            *reinterpret_cast<void**>(edi37 + 0x65) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(edi37 + 0x65)) + reinterpret_cast<unsigned char>(eax31));
            if (!*reinterpret_cast<void**>(edi37 + 0x65)) 
                goto addr_0x100a5db_433; else 
                goto addr_0x100a598_487;
        }
    }
    if (zf82) {
        addr_0x100a669_480:
        __asm__("insb ");
        __asm__("insb ");
        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
        eax31 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx43)) * 71);
        cf79 = __intrinsic();
        of84 = __intrinsic();
        sf83 = __undefined();
        below_or_equal85 = reinterpret_cast<uint1_t>(cf79 | __undefined());
        if (__undefined()) {
            addr_0x100a6ba_408:
            ++edi37;
            zf118 = edi37 == 0;
            if (zf118) {
                addr_0x100a702_489:
                ++ebx50;
                zf101 = ebx50 == 0;
                of102 = __intrinsic();
                goto addr_0x100a703_350;
            } else {
                if (!cf79) {
                    addr_0x100a72c_421:
                    __asm__("outsb ");
                    *reinterpret_cast<void**>(edi37 + 0x65) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(edi37 + 0x65)) + reinterpret_cast<unsigned char>(eax31));
                    cf104 = __intrinsic();
                    zf105 = *reinterpret_cast<void**>(edi37 + 0x65) == 0;
                    if (zf105) {
                        addr_0x100a789_375:
                        if (!cf104) {
                            addr_0x100a7ec_491:
                            if (zf105) {
                                addr_0x100a834_461:
                                __asm__("outsd ");
                                ++edx48;
                                __asm__("outsd ");
                                if (reinterpret_cast<signed char>(edx48) < reinterpret_cast<signed char>(0)) {
                                    addr_0x100a883_492:
                                    --edi37;
                                    --ebp63;
                                    ebx50 = ebx50 + 1 + 1;
                                    esp119 = esp47 - 4;
                                    *reinterpret_cast<void***>(esp119) = esp119;
                                    esp47 = esp119 - 1;
                                    esi44 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi44) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx48)));
                                    __asm__("insb ");
                                    __asm__("insb ");
                                    *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                                    goto addr_0x100a891_493;
                                } else {
                                    __asm__("outsb ");
                                    esi44 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(edx48 + 0x65)) * 0x61507463);
                                    cf79 = __intrinsic();
                                    if (cf79) 
                                        goto addr_0x100a8a6_479; else 
                                        goto addr_0x100a845_495;
                                }
                            } else {
                                __asm__("insb ");
                                --ecx43;
                                if (!ecx43) {
                                    addr_0x100a85a_497:
                                    __asm__("popad ");
                                    ebp63 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(esi44 + 100) * 0x776f);
                                    cf79 = __intrinsic();
                                    goto addr_0x100a866_498;
                                } else {
                                    __asm__("insd ");
                                    *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                                    esp47 = esp47 - 4;
                                    *reinterpret_cast<void***>(esp47) = edi37;
                                    *reinterpret_cast<void**>(&edx48) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx48)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(ebx50 + 0x65)));
                                    cf79 = __intrinsic();
                                    zf110 = *reinterpret_cast<void**>(&edx48) == 0;
                                    sf111 = reinterpret_cast<signed char>(*reinterpret_cast<void**>(&edx48)) < reinterpret_cast<signed char>(0);
                                    if (zf110) {
                                        goto addr_0x100a845_495;
                                    } else {
                                        addr_0x100a7fe_501:
                                        __asm__("outsd ");
                                        if (cf79) {
                                            addr_0x100a866_498:
                                            eax31 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax31) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx43)) + cf79);
                                            cf79 = __intrinsic();
                                            ++edi37;
                                            if (!edi37) {
                                                addr_0x100a8b0_502:
                                                __asm__("outsd ");
                                                __asm__("outsb ");
                                                __asm__("outsb ");
                                                __asm__("outsw ");
                                                ecx120 = ecx43 - 1 + 1;
                                                *reinterpret_cast<void***>(ecx120) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx120)) + reinterpret_cast<unsigned char>(eax31));
                                                *reinterpret_cast<void**>(edi37 + 0x65) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(edi37 + 0x65)) + reinterpret_cast<unsigned char>(eax31));
                                                zf110 = *reinterpret_cast<void**>(edi37 + 0x65) == 0;
                                                if (zf110) {
                                                    addr_0x100a906_477:
                                                    if (zf110) {
                                                        addr_0x100a94e_503:
                                                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                                                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                                                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                                                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                                                        goto addr_0x100a955_504;
                                                    } else {
                                                        *reinterpret_cast<void***>(esp47 - 4) = ebx50;
                                                        if (__intrinsic()) {
                                                            addr_0x100a975_467:
                                                            *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                                                            *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                                                            *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                                                            *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                                                            *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                                                            *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                                                            *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                                                            *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                                                            *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                                                            goto addr_0x100a987_472;
                                                        } else {
                                                            __asm__("arpl [ebp+0x41], sp");
                                                            goto addr_0x100a915_465;
                                                        }
                                                    }
                                                } else {
                                                    ebp63 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(ebp63 + 86) * 0x69737265);
                                                    __asm__("outsd ");
                                                    __asm__("outsb ");
                                                    ecx43 = ecx120 - 1;
                                                    __asm__("outsb ");
                                                    __asm__("outsw ");
                                                    esp47 = esp47 - 4;
                                                    *reinterpret_cast<void***>(esp47) = ebx50;
                                                    edi37 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(edx48 + 0x65)) * 0x45560041);
                                                    goto addr_0x100a8d6_451;
                                                }
                                            } else {
                                                addr_0x100a86c_508:
                                                __asm__("insb ");
                                                --ecx43;
                                                zf110 = ecx43 == 0;
                                                sf111 = reinterpret_cast<signed char>(ecx43) < reinterpret_cast<signed char>(0);
                                                goto addr_0x100a86e_450;
                                            }
                                        } else {
                                            if (cf79) {
                                                addr_0x100a873_459:
                                                if (sf111) 
                                                    goto addr_0x100a8ea_454;
                                            } else {
                                                if (zf110) {
                                                    addr_0x100a806_366:
                                                    esp47 = esp47 - 4;
                                                    *reinterpret_cast<void***>(esp47) = edi37;
                                                    ebp63 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(esi44 + 100) * 0x8600776f);
                                                    goto addr_0x100a80d_512;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            ++ecx43;
                            *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                            cf121 = reinterpret_cast<unsigned char>(eax31) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx48));
                            esp47 = esp47 - 4;
                            *reinterpret_cast<void***>(esp47) = ebx50;
                            __asm__("outsb ");
                            --ebp63;
                            if (!cf121) {
                                addr_0x100a80d_512:
                                *reinterpret_cast<void**>(&edx48) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx48)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(ebx50 + 0x65)));
                                cf79 = __intrinsic();
                                if (!*reinterpret_cast<void**>(&edx48)) {
                                    goto addr_0x100a86c_508;
                                }
                            } else {
                                __asm__("popad ");
                                ++ecx43;
                                *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                                *reinterpret_cast<void***>(edx48) = *reinterpret_cast<void***>(edx48) + 83;
                                cf79 = __intrinsic();
                                zf110 = *reinterpret_cast<void***>(edx48) == 0;
                                sf111 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(edx48)) < reinterpret_cast<signed char>(0);
                                if (zf110) {
                                    goto addr_0x100a7fe_501;
                                }
                                ebp63 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(esi44 + 100) * 0x6f50776f);
                                *reinterpret_cast<void***>(edx48) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx48)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx43 + 1)));
                                *reinterpret_cast<void**>(&edx48) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx48)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(edx48 + 0x65)));
                                __asm__("insb ");
                                __asm__("popad ");
                                if (!__intrinsic()) 
                                    goto addr_0x100a81e_519; else 
                                    goto addr_0x100a7b9_363;
                            }
                        }
                    } else {
                        addr_0x100a732_520:
                        __asm__("outsb ");
                        ++ecx43;
                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                        ++ebx50;
                        __asm__("popad ");
                        __asm__("insb ");
                        __asm__("insb ");
                        esp47 = esp47 - 4;
                        *reinterpret_cast<void***>(esp47) = edi37;
                        ebp63 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(esi44 + 100) * 0x7250776f);
                        of102 = __intrinsic();
                        zf101 = __undefined();
                        goto addr_0x100a749_521;
                    }
                } else {
                    if (zf118) 
                        goto addr_0x100a732_520;
                    if (__intrinsic()) 
                        goto addr_0x100a71c_379; else 
                        goto addr_0x100a6c5_524;
                }
            }
        } else {
            addr_0x100a676_486:
            if (below_or_equal85) 
                goto addr_0x100a6e2_411; else 
                goto addr_0x100a679_525;
        }
    } else {
        __asm__("insd ");
        esp47 = esp47 - 4;
        *reinterpret_cast<void***>(esp47) = esp47;
        ebp63 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(ebp63 + 0x65)) * 0x69467341);
        __asm__("insb ");
        goto addr_0x100a60e_334;
    }
    ++ecx43;
    *reinterpret_cast<void***>(ebp63 + 83) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebp63 + 83)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx48)));
    ++ebp63;
    esp47 = esp47 - 4;
    *reinterpret_cast<void***>(esp47) = edx48;
    esi44 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi44) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx48)));
    __asm__("insb ");
    __asm__("insb ");
    *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
    goto addr_0x100a883_492;
    ebp63 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(esi44 + 100) * 0x6554776f);
    if (__undefined()) {
        addr_0x100a891_493:
        eax31 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax31) | reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)));
        cf79 = 0;
        zf110 = eax31 == 0;
        esp47 = esp47 - 4;
        *reinterpret_cast<void***>(esp47) = esi44;
        if (0) {
            goto addr_0x100a8ea_454;
        } else {
            if (!zf110) 
                goto addr_0x100a8ff_531; else 
                goto addr_0x100a89a_464;
        }
    } else {
        ++ecx43;
    }
    addr_0x100a81e_519:
    *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
    cf79 = __intrinsic();
    __asm__("fadd qword [ecx]");
    goto addr_0x100a821_447;
    addr_0x100a6c5_524:
    ebp63 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(esi44 + 100) * 0x776f);
    goto addr_0x100a6cc_410;
    addr_0x100a679_525:
    __asm__("arpl [ebp+0x43], sp");
    __asm__("popad ");
    if (of84) {
        addr_0x100a6f2_428:
        *reinterpret_cast<unsigned char*>(ebx50 + 0x68) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebx50 + 0x68) + reinterpret_cast<unsigned char>(eax31));
        cf79 = __intrinsic();
        zf101 = *reinterpret_cast<unsigned char*>(ebx50 + 0x68) == 0;
        of102 = __intrinsic();
        __asm__("popad ");
        if (cf79) {
            addr_0x100a749_521:
            __asm__("outsd ");
            goto addr_0x100a74d_361;
        } else {
            if (reinterpret_cast<signed char>(*reinterpret_cast<unsigned char*>(ebx50 + 0x68)) < reinterpret_cast<signed char>(0)) {
                addr_0x100a772_359:
                if (zf101) {
                    addr_0x100a7de_463:
                    if (zf101) {
                        addr_0x100a845_495:
                        __asm__("insd ");
                        ++ecx43;
                        *reinterpret_cast<unsigned char*>(edx48 + 0x6f685302) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edx48 + 0x6f685302) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx48)));
                        cf79 = __intrinsic();
                        if (!reinterpret_cast<uint1_t>(cf79 | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(edx48 + 0x6f685302) == 0))) {
                            addr_0x100a8a6_479:
                            ++edi37;
                            zf110 = edi37 == 0;
                            if (zf110) {
                                addr_0x100a8f0_457:
                                __asm__("outsb ");
                                if (!zf110) {
                                    addr_0x100a955_504:
                                    *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                                    *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                                    goto addr_0x100a959_452;
                                } else {
                                    if (!cf79) {
                                        addr_0x100a939_475:
                                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                                        goto addr_0x100a94e_503;
                                    } else {
                                        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                                        __asm__("arpl [edx], ax");
                                        --ebp63;
                                        if (ebp63) {
                                            addr_0x100a96b_455:
                                            *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                                            *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                                            *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax31)) + reinterpret_cast<unsigned char>(eax31));
                                            goto addr_0x100a971_466;
                                        } else {
                                            addr_0x100a8ff_531:
                                            ++esp47;
                                            zf110 = __undefined();
                                            goto addr_0x100a906_477;
                                        }
                                    }
                                }
                            } else {
                                ebp63 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(ebp63 + 86) * 0x69737265);
                                goto addr_0x100a8b0_502;
                            }
                        } else {
                            __asm__("les eax, [eax]");
                            goto addr_0x100a858_538;
                        }
                    } else {
                        __asm__("insd ");
                        --ebp63;
                        if (!cf79) {
                            addr_0x100a858_538:
                            __asm__("outsb ");
                            goto addr_0x100a85a_497;
                        } else {
                            addr_0x100a7e5_540:
                            __asm__("popad ");
                            ++ecx43;
                            *reinterpret_cast<void***>(ecx43) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx43)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx48)));
                            *reinterpret_cast<void**>(edi37 + 0x65) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(edi37 + 0x65)) + reinterpret_cast<unsigned char>(eax31));
                            zf105 = *reinterpret_cast<void**>(edi37 + 0x65) == 0;
                            goto addr_0x100a7ec_491;
                        }
                    }
                } else {
                    if (of102) {
                        goto addr_0x100a7e5_540;
                    } else {
                        --edi37;
                        goto addr_0x100a77c_374;
                    }
                }
            } else {
                ++ecx43;
                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax31) + reinterpret_cast<unsigned char>(eax31)) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax31) + reinterpret_cast<unsigned char>(eax31)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx48 + 1)));
                cf79 = __intrinsic();
                goto addr_0x100a702_489;
            }
        }
    } else {
        *reinterpret_cast<unsigned char*>(edi37 + 68) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edi37 + 68) + reinterpret_cast<unsigned char>(eax31));
        --ecx43;
        esi44 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi44) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx48)));
        __asm__("insb ");
        goto addr_0x100a687_349;
    }
    addr_0x100a598_487:
    __asm__("outsd ");
    goto addr_0x100a599_205;
    addr_0x100a456_440:
    __asm__("outsd ");
    __asm__("insb ");
    if (!zf82) {
        addr_0x100a4c7_152:
        goto addr_0x100a4cb_442;
    } else {
        addr_0x100a45a_546:
        --ecx43;
        zf82 = reinterpret_cast<uint1_t>(ecx43 == 0);
        goto addr_0x100a45c_316;
    }
    addr_0x100a459_294:
    goto addr_0x100a45a_546;
    addr_0x100a3f4_295:
    __asm__("outsb ");
    if (zf82) {
        addr_0x100a43b_290:
        goto addr_0x100a440_137;
    } else {
        addr_0x100a3f7_93:
        esi44 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(edx48 + 0x65)) * 0x726f7463);
        sf90 = __undefined();
        goto addr_0x100a3f8_286;
    }
    addr_0x100a3a9_299:
    *reinterpret_cast<void***>(edx48) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx48)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx43)));
    goto addr_0x100a3ab_91;
    label_302:
    *reinterpret_cast<void***>(edi37) = *reinterpret_cast<void***>(esi44);
    edi37 = edi37 + 4;
    esi44 = esi44 + 4;
    ebp63 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp63) + reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebx50 + reinterpret_cast<unsigned char>(esi44) * 2) + 0x74)));
    zf89 = ebp63 == 0;
    of74 = __intrinsic();
    if (__intrinsic()) 
        goto addr_0x100a36e_210; else 
        goto addr_0x100a30b_132;
    addr_0x100a2da_307:
    ++esi44;
    goto addr_0x100a2db_246;
}

int32_t g1001208 = 0x77d4d7bb;

int32_t g1001210 = 0x77d660d5;

int32_t g1001204 = 0x77d56cc9;

int16_t fun_100189d(void** a1, int32_t a2, uint32_t a3, int32_t a4) {
    void** eax5;
    int32_t eax6;
    int32_t eax7;
    void** esi8;
    void** v9;
    void** v10;
    void** eax11;

    eax5 = g100b2d0;
    eax6 = a2 - 0x110;
    if (!eax6) {
        eax7 = reinterpret_cast<int32_t>(g1001208());
        fun_1002d83(a1, eax7, esi8, v9);
        v10 = g100c4a4;
        g1001214(v10, a4, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0x204, 0x200);
        g1001210(a1, 0x83f, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0x204, v10, a4, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0x204, 0x200);
        g100120c(0xff, a1, 0x83f, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0x204, v10, a4, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0x204, 0x200);
    } else {
        if (eax6 - 1 || (a3 < 0x83d || a3 > 0x83e)) {
            goto addr_0x1001930_5;
        } else {
            g1001204(a1, a3);
        }
    }
    addr_0x1001930_5:
    eax11 = fun_10064de(eax5, eax5);
    return *reinterpret_cast<int16_t*>(&eax11);
}

void fun_1009ce4() {
    int1_t of1;
    signed char* eax2;
    signed char* eax3;
    signed char al4;

    if (of1) 
        goto 0x1009c83;
    *eax2 = reinterpret_cast<signed char>(*eax3 + al4);
}

int16_t fun_1002d5a(int32_t a1, int32_t a2) {
    int32_t v3;

    if (!(a2 - 1)) {
        g10011cc(a1, 0x466, 1, v3);
    }
    return 0;
}

int32_t g100be60;

int32_t g10011e0 = 0x77d6152f;

int32_t fun_1003072(int32_t a1, int32_t a2, int32_t a3) {
    void** v4;
    void** ebp5;
    int1_t zf6;
    int32_t eax7;
    int1_t zf8;
    void** ecx9;
    int32_t eax10;
    uint32_t eax11;

    v4 = g100ba50;
    fun_1002c91(v4, ebp5, __return_address());
    zf6 = g100bc38 == 0;
    if (zf6) {
        eax7 = reinterpret_cast<int32_t>(g10010e8());
        if (eax7) {
            if (a3 != -1 && ((g100be60 = g100be60 + a3, zf8 = g100b2c4 == 0, !zf8) && (ecx9 = g100ba4c, !!ecx9))) {
                eax10 = g100be60;
                eax11 = eax10 * 100 / reinterpret_cast<uint32_t>(g100be58);
                g10011e0(ecx9, 0x83a, 0x402, eax11, 0);
            }
        }
        goto a3;
    } else {
        return -1;
    }
}

int32_t g10010ec = 0x7c810da6;

int32_t fun_1003165(int32_t a1, int32_t a2, int32_t a3) {
    int32_t eax4;
    int32_t ecx5;
    int32_t ecx6;
    int32_t ecx7;
    int32_t v8;
    int32_t ecx9;
    int32_t ecx10;
    int32_t ecx11;

    eax4 = a1 + a1 * 2 << 3;
    if (*reinterpret_cast<int32_t*>(eax4 + 0x100c4c4) != 1) {
        ecx5 = a3;
        if (!ecx5) {
            ecx6 = 0;
        } else {
            ecx7 = ecx5 - 1;
            if (!ecx7) {
                ecx6 = 1;
            } else {
                if (ecx7 - 1) {
                    ecx6 = a1;
                } else {
                    ecx6 = 2;
                }
            }
        }
        v8 = *reinterpret_cast<int32_t*>(eax4 + 0x100c4d4);
        eax4 = reinterpret_cast<int32_t>(g10010ec(v8, a2, 0, ecx6));
        if (eax4 == -1) 
            goto addr_0x10031e4_10;
    } else {
        ecx9 = a3;
        if (!ecx9) {
            ecx10 = a2;
            goto addr_0x10031a3_13;
        } else {
            ecx11 = ecx9 - 1;
            if (!ecx11) {
                *reinterpret_cast<int32_t*>(eax4 + 0x100c4cc) = *reinterpret_cast<int32_t*>(eax4 + 0x100c4cc) + a2;
                goto addr_0x10031a9_16;
            } else {
                if (ecx11 - 1) {
                    addr_0x10031e4_10:
                } else {
                    ecx10 = *reinterpret_cast<int32_t*>(eax4 + 0x100c4d0) + a2;
                    goto addr_0x10031a3_13;
                }
            }
        }
    }
    goto __return_address();
    addr_0x10031a3_13:
    *reinterpret_cast<int32_t*>(eax4 + 0x100c4cc) = ecx10;
    addr_0x10031a9_16:
    return *reinterpret_cast<int32_t*>(eax4 + 0x100c4cc);
}

void fun_1003275(int32_t a1) {
    g1001098();
    goto a1;
}

int16_t fun_1003bb6(int32_t a1) {
    uint32_t esi2;
    uint32_t ecx3;
    uint32_t edx4;
    uint32_t edx5;

    esi2 = 0x200;
    ecx3 = 0;
    do {
        edx4 = a1 % esi2;
        edx5 = -edx4;
        *reinterpret_cast<uint32_t*>(ecx3 + 0x100cbc0) = *reinterpret_cast<uint32_t*>(ecx3 + 0x100cbc0) + ((edx5 - (edx5 + reinterpret_cast<uint1_t>(edx5 < edx5 + reinterpret_cast<uint1_t>(!!edx4))) & esi2) + a1 / esi2 * esi2);
        ecx3 = ecx3 + 4;
        esi2 = esi2 << 1;
    } while (ecx3 < 32);
    return 1;
}

int32_t g100be54;

void** fun_100502e(void** ecx, void* a2, struct s14* a3) {
    int1_t zf4;
    void** eax5;
    void** v6;
    void** v7;
    void* eax8;
    void* eax9;
    void* eax10;
    void** eax11;
    int32_t v12;
    int32_t v13;
    void** eax14;
    void** esi15;
    void** v16;
    void** v17;
    void* eax18;
    int32_t v19;
    int32_t eax20;
    void** v21;
    void** v22;
    uint32_t eax23;
    void** eax24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;

    zf4 = g100bc38 == 0;
    eax5 = g100b2d0;
    v6 = eax5;
    if (!zf4) {
        if (reinterpret_cast<int1_t>(a2 == 3)) {
            v7 = a3->f20;
            fun_1003108(v7);
            goto addr_0x100505d_4;
        }
    }
    eax8 = a2;
    if (!eax8) {
        fun_10032a1(a3);
    } else {
        eax9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax8) - 1);
        if (!eax9) {
            addr_0x100507d_8:
        } else {
            eax10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax9) - 1);
            if (!eax10) {
                eax11 = g100ba4c;
                if (eax11) {
                    v12 = a3->f4;
                    g1001210(eax11, 0x837, v12);
                }
                v13 = a3->f4;
                eax5 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8);
                *reinterpret_cast<int16_t*>(&eax5) = fun_1002efd(eax5, 0x104, 0x100bc44, v13);
                if (!eax5) 
                    goto addr_0x100505d_4;
                eax14 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8);
                *reinterpret_cast<int16_t*>(&eax14) = fun_1004faf(ecx, eax14, esi15, v16, v17);
                if (!eax14) 
                    goto addr_0x100507d_8; else 
                    goto addr_0x1005138_14;
            } else {
                eax18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax10) - 1);
                if (!eax18) {
                    v19 = a3->f4;
                    eax5 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8);
                    *reinterpret_cast<int16_t*>(&eax5) = fun_1002efd(eax5, 0x104, 0x100bc44, v19);
                    if (!eax5) 
                        goto addr_0x100505d_4;
                    eax20 = 0;
                    *reinterpret_cast<int16_t*>(&eax20) = a3->f26;
                    eax5 = reinterpret_cast<void**>(0);
                    *reinterpret_cast<int16_t*>(&eax5) = a3->f24;
                    v21 = a3->f20;
                    *reinterpret_cast<int16_t*>(&eax5) = fun_10031ee(v21, eax5, eax20);
                    if (!eax5) 
                        goto addr_0x100505d_4;
                    v22 = a3->f20;
                    fun_1003108(v22);
                    eax23 = 0;
                    *reinterpret_cast<int16_t*>(&eax23) = a3->f28;
                    *reinterpret_cast<int16_t*>(&eax23) = fun_1003255(v22, eax23);
                    g10010c0(v22, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0x108, eax23);
                } else {
                    if (!(reinterpret_cast<int32_t>(eax18) - 1)) 
                        goto addr_0x100505d_4; else 
                        goto addr_0x100507d_8;
                }
            }
        }
    }
    addr_0x1005180_20:
    eax24 = fun_10064de(v6);
    return eax24;
    addr_0x1005138_14:
    eax5 = fun_10041d8(ecx, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8, 0x8302, 0x180, esi15, v25, v26, v27, v28, v29, v30, v31);
    if (eax5 == 0xffffffff || (eax5 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffef8), *reinterpret_cast<int16_t*>(&eax5) = fun_100409f(ecx, eax5, esi15, v32, v33, v34, v35, v36, v37), eax5 == 0)) {
        addr_0x100505d_4:
        goto addr_0x1005180_20;
    } else {
        ++g100be54;
        goto addr_0x1005180_20;
    }
}

int32_t g10011ec = 0x77d4dc5a;

int32_t g10011fc = 0x77d4c4d4;

int32_t g1001200 = 0x77d9ac06;

signed char g100bc44;

signed char g100bc45;

int16_t fun_1005670(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void* eax8;
    void** v9;
    uint32_t eax10;
    int32_t eax11;
    void** edi12;
    void** esi13;
    int1_t zf14;
    int32_t eax15;
    void** eax16;
    int32_t eax17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    int32_t eax22;
    void** edi23;
    void** ebx24;
    void** ebp25;
    void** eax26;
    void** v27;
    void** v28;
    int32_t eax29;
    void** eax30;
    int1_t zf31;
    int1_t zf32;
    int32_t eax33;

    eax8 = reinterpret_cast<void*>(a3 - 16);
    if (!eax8) {
        v9 = reinterpret_cast<void**>(0);
    } else {
        eax10 = reinterpret_cast<uint32_t>(eax8) - 0x100;
        if (!eax10) {
            eax11 = reinterpret_cast<int32_t>(g1001208());
            fun_1002d83(a2, eax11, edi12, esi13);
            g10011ec(a2, 0x100bbb4);
            g10011e0(a2, 0x835, 0xc5, 0x103, 0, a2, 0x100bbb4);
            zf14 = g100ba64 == 1;
            if (zf14) {
                eax15 = reinterpret_cast<int32_t>(g10011e4(a2, 0x836, 0, a2, 0x835, 0xc5, 0x103, 0, a2, 0x100bbb4));
                g10011fc(eax15, a2, 0x836, 0, a2, 0x835, 0xc5, 0x103, 0, a2, 0x100bbb4);
                goto addr_0x1005810_6;
            }
        } else {
            if (!(eax10 - 1)) {
                eax16 = a4 - 1;
                if (!eax16) {
                    eax17 = reinterpret_cast<int32_t>(g1001200(a2, 0x835, 0x100bc44, 0x104));
                    if (!eax17 || (*reinterpret_cast<int16_t*>(&eax17) = fun_1002c57(0x100bc44, a2, 0x835, 0x100bc44, 0x104, edi12), eax17 == 0)) {
                        v18 = reinterpret_cast<void**>(0);
                        v19 = reinterpret_cast<void**>(16);
                        v20 = reinterpret_cast<void**>(0);
                        v21 = reinterpret_cast<void**>(0x4bf);
                        goto addr_0x1005820_11;
                    } else {
                        v18 = reinterpret_cast<void**>(0x100bc44);
                        eax22 = reinterpret_cast<int32_t>(g1001080(0x100bc44, a2, 0x835, 0x100bc44, 0x104));
                        edi23 = reinterpret_cast<void**>(0);
                        if (eax22 != -1) 
                            goto addr_0x10057c1_13;
                        *reinterpret_cast<int16_t*>(&eax22) = fun_1003ebe(ecx, a2, 0x54a, 0x100bc44, 0, 32, 4, 0x100bc44, a2, 0x835, 0x100bc44, 0x104, edi12, esi13, ebx24, ebp25, __return_address(), a2, a3, a4, a5, a6);
                        if (eax22 != 6) 
                            goto addr_0x100588c_15; else 
                            goto addr_0x10057a9_16;
                    }
                } else {
                    eax26 = eax16 - 1;
                    if (!eax26) {
                        g1001204(a2, 0);
                        g100ba5c = reinterpret_cast<void**>(0x800704c7);
                        goto addr_0x100588c_15;
                    }
                    if (eax26 - 0x834) 
                        goto addr_0x100588c_15;
                    v9 = reinterpret_cast<void**>(0x200);
                    v27 = reinterpret_cast<void**>(0x100b640);
                    v28 = g100c4a4;
                    eax29 = reinterpret_cast<int32_t>(g1001214(v28, 0x3e8, 0x100b640, 0x200));
                    if (eax29) 
                        goto addr_0x10056ef_21; else 
                        goto addr_0x10056d5_22;
                }
            } else {
                eax30 = reinterpret_cast<void**>(0);
                goto addr_0x100588f_24;
            }
        }
    }
    addr_0x1005883_25:
    v27 = a2;
    addr_0x1005886_26:
    g1001204(v27, v9);
    goto addr_0x100588c_15;
    addr_0x1005810_6:
    eax30 = reinterpret_cast<void**>(1);
    addr_0x100588f_24:
    return *reinterpret_cast<int16_t*>(&eax30);
    addr_0x1005820_11:
    fun_1003ebe(ecx, a2, v21, 0, v20, v19, v18, a2, 0x835, 0x100bc44, 0x104, edi12, esi13, ebx24, ebp25, __return_address(), a2, a3, a4, a5, a6, a7);
    goto addr_0x100588c_15;
    addr_0x10057a9_16:
    v19 = reinterpret_cast<void**>(0);
    v20 = reinterpret_cast<void**>(0x100bc44);
    eax22 = reinterpret_cast<int32_t>(g100107c(0x100bc44, 0, 0x100bc44, a2, 0x835, 0x100bc44, 0x104));
    if (eax22) {
        addr_0x10057c1_13:
        fun_10066cf(0x100bc44, 0x104, 0x1001271, 0x100bc44, a2, 0x835, 0x100bc44, 0x104, edi12, esi13, ebx24, ebp25, __return_address(), a2, a3, a4);
        *reinterpret_cast<int16_t*>(&eax22) = fun_10044bd(ecx, 0x100bc44, 0x100bc44, a2, 0x835, 0x100bc44, 0x104, edi12);
        if (eax22) {
            zf31 = g100bc44 == 92;
            if (!zf31 || (zf32 = g100bc45 == 92, !zf32)) {
                edi23 = reinterpret_cast<void**>(1);
            }
            *reinterpret_cast<int16_t*>(&eax22) = fun_100456a(ecx, 0x100bc44, edi23, 1, 0x100bc44, a2, 0x835, 0x100bc44, 0x104, edi12, esi13, ebx24, ebp25);
            if (eax22) {
                g1001204(a2, 1, 0x100bc44, a2, 0x835, 0x100bc44, 0x104);
                goto addr_0x1005810_6;
            }
        } else {
            v19 = reinterpret_cast<void**>(0);
            v20 = reinterpret_cast<void**>(16);
            v21 = reinterpret_cast<void**>(0);
            goto addr_0x1005820_11;
        }
    } else {
        v21 = reinterpret_cast<void**>(16);
        goto addr_0x1005820_11;
    }
    addr_0x10056ef_21:
    *reinterpret_cast<int16_t*>(&eax29) = fun_1004e73(ecx, a2, 0x100b640, 0x100b338, v28, 0x3e8, 0x100b640, 0x200);
    if (!eax29 || (eax33 = reinterpret_cast<int32_t>(g1001210(a2, 0x835, 0x100b338, v28, 0x3e8, 0x100b640, 0x200)), !!eax33)) {
        addr_0x100588c_15:
        eax30 = reinterpret_cast<void**>(1);
        goto addr_0x100588f_24;
    } else {
        fun_1003ebe(ecx, a2, 0x4c0, 0, 0, 16, 0, a2, 0x835, 0x100b338, v28, 0x3e8, 0x100b640, 0x200, edi12, esi13, ebx24, ebp25, __return_address(), a2, a3, a4);
        goto addr_0x1005886_26;
    }
    addr_0x10056d5_22:
    fun_1003ebe(ecx, a2, 0x4b1, 0, 0, 16, 0, v28, 0x3e8, 0x100b640, 0x200, edi12, esi13, ebx24, ebp25, __return_address(), a2, a3, a4, a5, a6, a7);
    goto addr_0x1005883_25;
}

int32_t g1001144 = 0x7c81082f;

void** g100b43c;

int32_t g1001148 = 0x7c809c4c;

int32_t g100114c = 0x7c81cacb;

int16_t fun_100589b(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12) {
    void* eax13;
    void* eax14;
    void** eax15;
    void* eax16;
    void** edi17;
    void** edi18;
    int32_t eax19;
    void** esi20;
    int1_t zf21;
    int32_t esi22;
    int32_t ebx23;
    int32_t eax24;
    int32_t edi25;
    void** eax26;
    void** ebp27;
    void** eax28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;

    eax13 = reinterpret_cast<void*>(a3 - 16);
    if (eax13) {
        eax14 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax13) - 0xf2);
        if (!eax14) {
            if (!reinterpret_cast<int1_t>(a4 == 27)) {
                addr_0x1005a2a_5:
                eax15 = reinterpret_cast<void**>(1);
                goto addr_0x1005a2c_6;
            }
        } else {
            eax16 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax14) - 14);
            if (!eax16) {
                edi17 = a2;
                g100ba4c = edi17;
                eax19 = reinterpret_cast<int32_t>(g1001208(edi18));
                fun_1002d83(edi17, eax19, edi18, esi20);
                zf21 = g100b2c4 == 0;
                if (!zf21) {
                    esi22 = g10011e4;
                    eax24 = reinterpret_cast<int32_t>(esi22(edi17, 0x83b, 0x464, 0, 0xbb9, ebx23, edi18));
                    edi25 = g10011cc;
                    edi25(eax24, edi17, 0x83b, 0x464, 0, 0xbb9, ebx23, edi18);
                    esi22(a2, 0x83b, 0x465, 0xff, 0xffff0000, eax24, edi17, 0x83b, 0x464, 0, 0xbb9, ebx23, edi18);
                    edi25();
                    edi17 = a2;
                }
                g10011ec(edi17, 0x100bbb4, edi18);
                eax26 = reinterpret_cast<void**>(g1001144());
                g100b43c = eax26;
                if (!eax26) {
                    fun_1003ebe(ecx, edi17, 0x4b8, 0, 0, 16, 0, 0, 0, fun_1005190, 0, 0, 0x100ba48, edi17, 0x100bbb4, edi18, esi20, ebp27, __return_address(), a2, a3, a4);
                    g1001204(edi17, 0);
                }
                eax15 = reinterpret_cast<void**>(1);
                goto addr_0x1005a2c_6;
            } else {
                eax28 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax16) - 1);
                if (!eax28) {
                    if (!reinterpret_cast<int1_t>(a4 == 2)) 
                        goto addr_0x1005a2a_5;
                    v29 = g100ba50;
                    g1001148(v29);
                    v30 = g100ba4c;
                    *reinterpret_cast<int16_t*>(&eax28) = fun_1003ebe(ecx, v30, 0x4b2, 0x1001271, 0, 32, 4, v29, esi20, ebp27, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
                    if (eax28 == 6) 
                        goto addr_0x1005942_17;
                    if (eax28 == 1) 
                        goto addr_0x1005942_17; else 
                        goto addr_0x1005931_19;
                } else {
                    if (!(eax28 - 0xe90)) {
                        v31 = g100b43c;
                        g100114c(v31, 0);
                        g1001204(a2, a4, v31, 0);
                        eax15 = reinterpret_cast<void**>(1);
                        goto addr_0x1005a2c_6;
                    } else {
                        eax15 = reinterpret_cast<void**>(0);
                        goto addr_0x1005a2c_6;
                    }
                }
            }
        }
    }
    g100bc38 = reinterpret_cast<void**>(1);
    addr_0x1005a1f_24:
    g1001204(a2, 0);
    goto addr_0x1005a2a_5;
    addr_0x1005a2c_6:
    return *reinterpret_cast<int16_t*>(&eax15);
    addr_0x1005942_17:
    v32 = g100ba50;
    g100bc38 = reinterpret_cast<void**>(1);
    g100113c(v32, v29);
    v33 = g100b43c;
    fun_1002c91(v33, v32, v29);
    goto addr_0x1005a1f_24;
    addr_0x1005931_19:
    v34 = g100ba50;
    g100113c(v34, v29);
    goto addr_0x1005a2a_5;
}

struct s99 {
    uint16_t f0;
    signed char[2] pad4;
    int32_t f4;
    int32_t f8;
};

int16_t fun_10067ed() {
    int32_t eax1;
    int32_t v2;
    struct s99* v3;
    int32_t edx4;
    int32_t v5;
    int32_t esi6;

    eax1 = 1;
    if (v2 == v3->f8 && (edx4 = v5, esi6 = edx4, v3->f0 == (*reinterpret_cast<uint16_t*>(&esi6) & 0x3ff))) {
        v3->f4 = 1;
        v3->f0 = *reinterpret_cast<uint16_t*>(&edx4);
        eax1 = 0;
    }
    return *reinterpret_cast<int16_t*>(&eax1);
}

void fun_100328c(int32_t a1) {
    int32_t ebp2;

    g100108c();
    goto ebp2;
}

int32_t g10011bc = 0x77d4e34b;

int16_t fun_1002c18(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t v5;

    if (a2 != 0xb1 || (a3 || a4 != -2)) {
        v5 = g100c4a0;
        g10011bc(v5, a1, a2, a3, a4);
    }
    goto __return_address();
}

int32_t g10011e8 = 0x77d566a7;

int16_t fun_1003e28(void** a1, int32_t a2, uint32_t a3) {
    int32_t eax4;
    int32_t eax5;
    int32_t eax6;
    void** esi7;
    void** ebp8;
    void** v9;
    int32_t eax10;

    eax4 = a2 - 16;
    if (!eax4) {
        g1001204(a1, 2);
        goto addr_0x1003eb1_3;
    }
    eax5 = eax4 - 0x100;
    if (!eax5) {
        eax6 = reinterpret_cast<int32_t>(g1001208());
        fun_1002d83(a1, eax6, esi7, ebp8);
        g10011ec(a1, 0x100bbb4);
        v9 = g100be64;
        g1001210(a1, 0x838, v9, a1, 0x100bbb4);
        g10011e8(a1, a1, 0x838, v9, a1, 0x100bbb4);
        goto addr_0x1003eb1_3;
    }
    if (eax5 - 1) 
        goto addr_0x1003e40_7;
    if (a3 < 6) 
        goto addr_0x1003eb1_3;
    if (a3 > 7) 
        goto addr_0x1003e54_10;
    addr_0x1003e61_11:
    g1001204(a1, a3);
    eax10 = 1;
    addr_0x1003eb4_12:
    return *reinterpret_cast<int16_t*>(&eax10);
    addr_0x1003e54_10:
    if (a3 != 0x839) {
        addr_0x1003eb1_3:
        eax10 = 1;
        goto addr_0x1003eb4_12;
    } else {
        g100bc3c = 1;
        goto addr_0x1003e61_11;
    }
    addr_0x1003e40_7:
    eax10 = 0;
    goto addr_0x1003eb4_12;
}

int32_t g100ba58;

int32_t g100b840;

int16_t fun_1003d57(void** a1, int32_t a2, int32_t a3) {
    int32_t eax4;
    int1_t zf5;
    int32_t eax6;
    int32_t eax7;
    int32_t eax8;
    void** edi9;
    void** esi10;
    int32_t eax11;
    void** v12;
    int32_t eax13;
    int32_t eax14;
    int32_t v15;

    eax4 = a2 - 15;
    if (!eax4) {
        zf5 = g100ba58 == 0;
        if (zf5) {
            eax6 = reinterpret_cast<int32_t>(g10011e0(a1, 0x834, 0xb1, 0xff, 0));
            g100b840 = eax6;
            g100ba58 = 1;
            goto addr_0x1003e1d_4;
        }
    }
    eax7 = eax4 - 1;
    if (!eax7) 
        goto addr_0x1003d89_6;
    eax8 = eax7 - 0x100;
    if (eax8) 
        goto addr_0x1003d72_8;
    eax11 = reinterpret_cast<int32_t>(g1001208(edi9, esi10));
    fun_1002d83(a1, eax11, edi9, esi10);
    v12 = g100c49c;
    g1001210(a1, 0x834, v12, edi9, esi10);
    g10011ec(a1, 0x100bbb4, a1, 0x834, v12, edi9, esi10);
    g10011e8(a1, a1, 0x100bbb4, a1, 0x834, v12, edi9, esi10);
    eax13 = reinterpret_cast<int32_t>(g10011e4(a1));
    fun_1002bec(eax13, a1);
    eax14 = 1;
    addr_0x1003e1f_10:
    return *reinterpret_cast<int16_t*>(&eax14);
    addr_0x1003d72_8:
    if (eax8 - 1) {
        addr_0x1003e1d_4:
        eax14 = 0;
        goto addr_0x1003e1f_10;
    } else {
        if (a3 != 6) {
            if (a3 != 7) {
                addr_0x1003d94_13:
                eax14 = 1;
                goto addr_0x1003e1f_10;
            } else {
                addr_0x1003d89_6:
                v15 = 0;
            }
        } else {
            v15 = 1;
        }
    }
    g1001204(a1, v15);
    goto addr_0x1003d94_13;
}
