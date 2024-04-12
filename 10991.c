void fun()
{
  char entity_8[28] = "";
  char entity_0[19] = "";
  memset(entity_0, 'z', 19-1);
  entity_0[19-1]='0';
  memset(entity_8, 'C', 28-1);
  entity_8[28-1]='0';
  entity_0[33] = 'B';
}