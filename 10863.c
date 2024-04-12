void fun()
{
  char entity_2[31] = "";
  char entity_0[28] = "";
  memset(entity_2, 'z', 31-1);
  entity_2[31-1]='0';
  memset(entity_0, 'P', 28-1);
  entity_0[28-1]='0';
  entity_2[56] = 'c';
}