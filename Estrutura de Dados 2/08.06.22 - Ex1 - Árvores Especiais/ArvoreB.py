# Criando No
class noArvore:
  def __init__(self, folha=False):
    self.folha = folha
    self.chaves = []
    self.filho = []

# Arvore
class Arvore:
  def __init__(self, a):
    self.raiz = noArvore(True)
    self.a = a

    # Insere No
  def insere(self, ch):
    raiz = self.raiz
    if len(raiz.chaves) == (2 * self.a) - 1:
      temp = noArvore()
      self.raiz = temp
      temp.filho.insere(0, raiz)
      self.split_filho(temp, 0)
      self.insert_not_full(temp, ch)
    else:
      self.insert_not_full(raiz, ch)

    # Insere - not full
  def insert_not_full(self, x, ch):
    i = len(x.chaves) - 1

    if x.folha:

      x.chaves.append((None, None))
      while i >= 0 and ch[0] < x.chaves[i][0]:

        x.chaves[i + 1] = x.chaves[i]
        i -= 1

      x.chaves[i + 1] = ch

    else:
      while i >= 0 and ch[0] < x.chaves[i][0]:
        i -= 1
      i += 1

      if len(x.filho[i].chaves) == (2 * self.a) - 1:

        self.split_filho(x, i)
        
        if ch[0] > x.chaves[i][0]:
          i += 1

      self.insert_not_full(x.filho[i], ch)

    # Divide o filho
  def split_filho(self, x, i):
    a = self.a
    y = x.filho[i]
    z = noArvore(y.folha)

    x.filho.insere(i + 1, z)
    x.chaves.insere(i, y.chaves[a - 1])

    z.chaves = y.chaves[a: (2 * a) - 1]
    y.chaves = y.chaves[0: a - 1]

    if not y.folha:
      z.filho = y.filho[a: 2 * a]
      y.filho = y.filho[0: a - 1]

  # Imprime a Arvore
  def imprime(self, x, l=0):
    print("Nivel ", l, " ", len(x.chaves), end=":")
    for i in x.chaves:
      print(i, end=" ")
    print()
    l += 1
    if len(x.filho) > 0:
      for i in x.filho:
        self.imprime(i, l)

  # Busca Chave da Arvore
  def busca_chave(self, ch, x=None):
    if x is not None:
      i = 0
      while i < len(x.chaves) and ch > x.chaves[i][0]:
        i += 1
      if i < len(x.chaves) and ch == x.chaves[i][0]:
        return (x, i)
      elif x.folha:
        return None
      else:
        return self.busca_chave(ch, x.filho[i])

    else:
      return self.busca_chave(ch, self.raiz)

def main():
  B = Arvore(3)

  for i in range(10):
    B.insere((i, 2 * i))

  B.imprime(B.raiz)

  if B.busca_chave(8) is not None:
    print("\n Encontrado! ")
  else:
    print("\nNao Encontrado!")


if __name__ == '__main__':
  main()