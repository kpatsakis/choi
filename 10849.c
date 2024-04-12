void fun()
{
  char entity_8[7] = "";
  char entity_7[96] = "";
  memset(entity_8, 'q', 7-1);
  entity_8[7-1]='0';
  memset(entity_7, 'P', 96-1);
  entity_7[96-1]='0';
  entity_7[78] = 'k';
}