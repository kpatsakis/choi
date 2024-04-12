void fun()
{
  int entity_5 = 100;
  char entity_6[60] = "";
  entity_6 = NULL;
  memset(entity_6, 'b', 60-1);
  entity_6[60-1]='';
  entity_6[entity_5] = 'c';
}