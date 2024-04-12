void fun()
{
  int entity_7 = 67;
  char entity_1[entity_7] = "";
  entity_1 = NULL;
  memset(entity_1, 'F', entity_7-1);
  entity_1[entity_7-1]='';
  entity_7 = 9;
  entity_1[25] = 'I';
}