void fun()
{
  int entity_7 = 29;
  entity_7 = 67;
  char entity_1[entity_7] = "";
  entity_1 = NULL;
  memset(entity_1, 'Q', entity_7-1);
  entity_1[entity_7-1]='';
  entity_1[22] = 'Z';
}