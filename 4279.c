void fun()
{
  char entity_5[50] = "";
  entity_5 = NULL;
  memset(entity_5, 'b', 50-1);
  entity_5[50-1]='';
  entity_5[86] = 'T';
}