void fun()
{
  char entity_5[18] = "";
  entity_5 = NULL;
  char entity_0[40] = "";
  entity_0 = NULL;
  memset(entity_5, 'w', 18-1);
  entity_5[18-1]='';
  memset(entity_0, 'b', 40-1);
  entity_0[40-1]='';
  entity_5[29] = 'i';
}