void fun()
{
  char entity_3[96] = "";
  char entity_7[0] = "";
  memset(entity_3, 'w', 96-1);
  entity_3[96-1]='0';
  memset(entity_7, 'Y', 0-1);
  entity_7[0-1]='0';
  entity_3[14] = 'd';
}