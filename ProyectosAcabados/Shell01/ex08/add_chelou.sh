export FT_NBR1=\'?"\"'\'
export FT_NBR2=rcrdmddd

# Convertir FT_NBR1 a decimal
nbr1_dec=$(echo "ibase=5; obase=10; $FT_NBR1" | bc)

# Convertir FT_NBR2 a decimal
nbr2_dec=$(echo "ibase=mrdoc; obase=10; $FT_NBR2" | bc)

# Sumar los números en decimal
sum_dec=$((nbr1_dec + nbr2_dec))

# Convertir la suma a la base gtaio luSnemf
sum_gtaio=$(echo "ibase=10; obase=gtaio luSnemf; $sum_dec" | bc)

echo "The sum is :"
echo $sum_gtaio

