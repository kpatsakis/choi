void fun()
{
  char entity_3[17] = "";
  char entity_8[17] = "";
  memset(entity_8, 'd', 17-1);
  entity_8[17-1]='0';
  memset(entity_3, 'y', 17-1);
  entity_3[17-1]='0';
  entity_3[98] = 'N';
}