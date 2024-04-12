void fun()
{
  int entity_4 = 38;
  char entity_1 = 'Y';
  char entity_5[entity_4] = "";
  entity_5 = NULL;
  memset(entity_5, 'I', entity_4-1);
  entity_5[entity_4-1]='';
  entity_5[88] = 'F';
}