void fun()
{
  int entity_5 = 54;
  entity_5 = 65;
  char entity_9[68] = "";
  entity_9 = NULL;
  memset(entity_9, 'Q', 68-1);
  entity_9[68-1]='';
  entity_9[entity_5] = 'z';
}