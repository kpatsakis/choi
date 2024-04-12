void fun()
{
  int entity_6 = 8;
  char entity_1[entity_6] = "";
  entity_1 = NULL;
  memset(entity_1, 'n', entity_6-1);
  entity_1[entity_6-1]='';
  entity_6 = 33;
  entity_1[70] = 'I';
}