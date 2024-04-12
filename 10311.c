void fun()
{
  char entity_0[42] = "";
  char entity_4[20] = "";
  memset(entity_0, 'U', 42-1);
  entity_0[42-1]='0';
  memset(entity_4, 'q', 20-1);
  entity_4[20-1]='0';
  entity_0[59] = 'R';
}