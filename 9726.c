void fun()
{
  char entity_4[23] = "";
  entity_4 = NULL;
  char entity_3[65] = "";
  entity_3 = NULL;
  memset(entity_4, 'o', 23-1);
  entity_4[23-1]='';
  memset(entity_3, 'o', 65-1);
  entity_3[65-1]='';
  entity_4[49] = 'R';
}