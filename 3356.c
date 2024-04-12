void fun()
{
  int entity_9 = 2;
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  memset(entity_8, 'd', entity_9-1);
  entity_8[entity_9-1]='';
  entity_9 = 10;
  entity_8[87] = 'x';
}