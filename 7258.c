void fun()
{
  int entity_9 = 12;
  entity_9 = 24;
  char entity_3[entity_9] = "";
  entity_3 = NULL;
  memset(entity_3, 'u', entity_9-1);
  entity_3[entity_9-1]='';
  entity_3[75] = 'A';
}