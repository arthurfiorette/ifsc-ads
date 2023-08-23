FILES=$(find . -type f -regex '.*/.*\.\(c\)$')

for f in $FILES; do
  echo "Building $f"
  gcc -o ${f%.*}.o $f
done
