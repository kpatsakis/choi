void fun()
{
  int entity_9 = 32;
  int entity_3 = 42;
  char entity_7 = 'T';
  char entity_5[36] = "";
  entity_5 = NULL;
  memset(entity_5, 'T', 36-1);
  entity_5[36-1]='';
  entity_5[entity_3] = 'c';
}