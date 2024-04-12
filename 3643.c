void fun()
{
  int entity_1 = 27;
  entity_1 = 46;
  char entity_5[entity_1] = "";
  entity_5 = NULL;
  memset(entity_5, 'D', entity_1-1);
  entity_5[entity_1-1]='';
  entity_5[71] = 'p';
}