void fun()
{
  int entity_9 = 45;
  entity_9 = 48;
  char entity_6[entity_9] = "";
  entity_6 = NULL;
  memset(entity_6, 'F', entity_9-1);
  entity_6[entity_9-1]='';
  entity_6[26] = 'U';
}