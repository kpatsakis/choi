void fun()
{
  char entity_4[89] = "";
  char entity_1[38] = "";
  memset(entity_4, 'y', 89-1);
  entity_4[89-1]='0';
  memset(entity_1, 'u', 38-1);
  entity_1[38-1]='0';
  entity_4[76] = 'U';
}