void fun()
{
  int entity_5 = 78;
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  memset(entity_1, 'A', entity_5-1);
  entity_1[entity_5-1]='';
  entity_1[24] = 'o';
}