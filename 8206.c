void fun()
{
  char entity_5[35] = "";
  entity_5 = NULL;
  char entity_6[14] = "";
  entity_6 = NULL;
  memset(entity_5, 'U', 35-1);
  entity_5[35-1]='';
  memset(entity_6, 'C', 14-1);
  entity_6[14-1]='';
  entity_5[40] = 'M';
}