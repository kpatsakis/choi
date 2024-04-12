void fun()
{
  int entity_3 = 100;
  entity_3 = 25;
  char entity_5[entity_3] = "";
  entity_5 = NULL;
  memset(entity_5, 'm', entity_3-1);
  entity_5[entity_3-1]='';
  entity_5[29] = 'c';
}