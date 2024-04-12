void fun()
{
  char entity_1[4] = "";
  char entity_2[33] = "";
  memset(entity_2, 'w', 33-1);
  entity_2[33-1]='0';
  memset(entity_1, 'L', 4-1);
  entity_1[4-1]='0';
  entity_2[76] = 'B';
}