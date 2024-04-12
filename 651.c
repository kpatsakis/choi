void fun()
{
  int entity_8 = 64;
  char entity_9[entity_8] = "";
  entity_9 = NULL;
  memset(entity_9, 'Y', entity_8-1);
  entity_9[entity_8-1]='';
  entity_8 = 77;
  entity_9[93] = 'Y';
}