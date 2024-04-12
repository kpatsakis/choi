void fun()
{
  char entity_7 = 's';
  char entity_8[12] = "";
  entity_8 = NULL;
  char entity_3[30] = "";
  entity_3 = NULL;
  memset(entity_3, 'Z', 30-1);
  entity_3[30-1]='';
  memset(entity_8, 'Z', 12-1);
  entity_8[12-1]='';
  entity_3[46] = 'q';
}