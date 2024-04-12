void fun()
{
  int entity_7 = 42;
  char entity_0 = 'e';
  char entity_9[entity_7] = "";
  entity_9 = NULL;
  memset(entity_9, 'M', entity_7-1);
  entity_9[entity_7-1]='';
  entity_9[3] = 'b';
}