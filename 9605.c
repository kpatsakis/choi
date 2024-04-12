void fun()
{
  int entity_8 = 53;
  entity_8 = 2;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  memset(entity_7, 'q', entity_8-1);
  entity_7[entity_8-1]='';
  entity_7[30] = 'Y';
}