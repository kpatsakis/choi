void fun()
{
  int entity_1 = 3;
  char entity_5[entity_1] = "";
  entity_5 = NULL;
  memset(entity_5, 'b', entity_1-1);
  entity_5[entity_1-1]='';
  entity_5[20] = 'N';
}