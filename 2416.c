void fun()
{
  int entity_6 = 22;
  int entity_5 = 4;
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  memset(entity_1, 'b', entity_5-1);
  entity_1[entity_5-1]='';
  entity_1[92] = 'H';
}