void fun()
{
  int entity_4 = 2;
  entity_4 = 38;
  char entity_1[entity_4] = "";
  entity_1 = NULL;
  char entity_8 = 'i';
  memset(entity_1, 'f', entity_4-1);
  entity_1[entity_4-1]='';
  entity_1[61] = 'u';
}