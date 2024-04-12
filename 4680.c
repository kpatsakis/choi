void fun()
{
  int entity_2 = 54;
  entity_2 = 65;
  char entity_9[entity_2] = "";
  entity_9 = NULL;
  memset(entity_9, 'k', entity_2-1);
  entity_9[entity_2-1]='';
  entity_9[78] = 'e';
}