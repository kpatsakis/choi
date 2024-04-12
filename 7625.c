void fun()
{
  int entity_9 = 99;
  char entity_8 = 'W';
  char entity_0[entity_9] = "";
  entity_0 = NULL;
  memset(entity_0, 'Z', entity_9-1);
  entity_0[entity_9-1]='';
  entity_0[59] = 'A';
}