void fun()
{
  int entity_9 = 84;
  char entity_5[77] = "";
  entity_5 = NULL;
  memset(entity_5, 's', 77-1);
  entity_5[77-1]='';
  entity_5[entity_9] = 'u';
}