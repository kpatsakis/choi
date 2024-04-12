void fun()
{
  int entity_1 = 73;
  entity_1 = 7;
  char entity_7[entity_1] = "";
  entity_7 = NULL;
  memset(entity_7, 'f', entity_1-1);
  entity_7[entity_1-1]='';
  entity_7[8] = 'p';
}