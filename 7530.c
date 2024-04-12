void fun()
{
  char entity_3[23] = "";
  entity_3 = NULL;
  char entity_5[85] = "";
  entity_5 = NULL;
  memset(entity_5, 'k', 85-1);
  entity_5[85-1]='';
  memset(entity_3, 'v', 23-1);
  entity_3[23-1]='';
  entity_3[77] = 'S';
}