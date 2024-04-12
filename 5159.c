void fun()
{
  int entity_9 = 28;
  char entity_7[entity_9] = "";
  entity_7 = NULL;
  memset(entity_7, 'v', entity_9-1);
  entity_7[entity_9-1]='';
  entity_9 = 22;
  entity_7[10] = 'z';
}