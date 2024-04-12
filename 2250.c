void fun()
{
  int entity_9 = 56;
  entity_9 = 34;
  char entity_4[entity_9] = "";
  entity_4 = NULL;
  memset(entity_4, 'p', entity_9-1);
  entity_4[entity_9-1]='';
  entity_4[59] = 'K';
}