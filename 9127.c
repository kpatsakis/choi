void fun()
{
  int entity_9 = 23;
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  memset(entity_8, 'I', entity_9-1);
  entity_8[entity_9-1]='';
  entity_9 = 32;
  entity_8[43] = 'k';
}