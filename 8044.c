void fun()
{
  int entity_6 = 42;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  memset(entity_4, 'S', entity_6-1);
  entity_4[entity_6-1]='';
  entity_6 = 60;
  entity_4[14] = 'v';
}