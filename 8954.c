void fun()
{
  int entity_1 = 20;
  entity_1 = 9;
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  memset(entity_3, 'b', entity_1-1);
  entity_3[entity_1-1]='';
  entity_3[11] = 'P';
}