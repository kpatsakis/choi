void fun()
{
  int entity_3 = 69;
  char entity_9[78] = "";
  entity_9 = NULL;
  memset(entity_9, 'v', 78-1);
  entity_9[78-1]='';
  entity_9[entity_3] = 'w';
}