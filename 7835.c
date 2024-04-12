void fun()
{
  int entity_4 = 29;
  entity_4 = 76;
  char entity_1[entity_4] = "";
  entity_1 = NULL;
  memset(entity_1, 'f', entity_4-1);
  entity_1[entity_4-1]='';
  entity_1[42] = 'j';
}