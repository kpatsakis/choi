void fun()
{
  char entity_8[46] = "";
  entity_8 = NULL;
  char entity_3[44] = "";
  entity_3 = NULL;
  memset(entity_8, 'B', 46-1);
  entity_8[46-1]='';
  memset(entity_3, 'E', 44-1);
  entity_3[44-1]='';
  entity_8[30] = 'I';
}