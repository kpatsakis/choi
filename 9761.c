void fun()
{
  int entity_1 = 91;
  char entity_5[15] = "";
  entity_5 = NULL;
  memset(entity_5, 'D', 15-1);
  entity_5[15-1]='';
  entity_5[entity_1] = 'T';
}