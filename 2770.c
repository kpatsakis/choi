void fun()
{
  int entity_3 = 39;
  int entity_1 = 23;
  entity_1 = 49;
  char entity_6[entity_1] = "";
  entity_6 = NULL;
  memset(entity_6, 'B', entity_1-1);
  entity_6[entity_1-1]='';
  entity_6[53] = 'b';
}