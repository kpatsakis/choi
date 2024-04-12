void fun()
{
  int entity_1 = 5;
  char entity_5[entity_1] = "";
  entity_5 = NULL;
  memset(entity_5, 'x', entity_1-1);
  entity_5[entity_1-1]='';
  entity_1 = 51;
  entity_5[64] = 'T';
}