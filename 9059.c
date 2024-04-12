void fun()
{
  int entity_9 = 94;
  char entity_2[entity_9] = "";
  entity_2 = NULL;
  memset(entity_2, 'A', entity_9-1);
  entity_2[entity_9-1]='';
  entity_2[31] = 'k';
}