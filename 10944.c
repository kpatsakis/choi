void fun()
{
  int entity_1 = 98;
  char entity_8[53] = "";
  char entity_4[42] = "";
  char entity_2[72] = "";
  memset(entity_8, 'o', 53-1);
  entity_8[53-1]='0';
  memset(entity_4, 'g', 42-1);
  entity_4[42-1]='0';
  memset(entity_2, 'e', 72-1);
  entity_2[72-1]='0';
  entity_4[38] = 'o';
}