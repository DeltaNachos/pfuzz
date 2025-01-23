int main(void)
{
    int a = 6;
    int b = 3;

    int c = a + b;
    int d = a * b;
    int e = a / b;

    __asm__(
        "nop\n\t"
        "nop\n\t"
        "nop\n\t"
    );

    // to implement i type
    // lui
    // auipc
    // addi
    // slti
    // sltiu
    // xori
    // ori
    // andi
    // slli
    // srli
    // srai
    // add
    // sub
    // sll
    // slt
    // sltu
    // xor
    // srl
    // sra
    // or
    // and
    // fence
    // fence.i
    // csrrw
    // csrrs
    // csrrc
    // csrrwi
    // csrrsi
    // csrrci
    // ecall
    // ebreak
    // uret
    // sret
    // mret
    // wfi
    // sfence.vma
    // lb
    // lh
    // lw
    // lbu
    // lhu
    // sb
    // sh
    // sw
    // jal
    // jalr
    // beq
    // bne
    // blt
    // bge
    // bltu
    // bgeu
    // to implement m type
    // mul
    // mulh
    // mulhsu
    // mulhu
    // div
    // divu
    // rem
    // remu

    return 0;
}
