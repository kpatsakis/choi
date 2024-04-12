void fun()
{
  int entity_4 = 79;
  int entity_9 = 1;
  char entity_5[entity_4] = "";
  entity_5 = NULL;
  memset(entity_5, 'e', entity_4-1);
  entity_5[entity_4-1]='';
  entity_5[30] = 'j';
}