void fun()
{
  int entity_1 = 28;
  int entity_3 = 29;
  entity_1 = 42;
  char entity_9 = 'g';
  char entity_6[entity_1] = "";
  entity_6 = NULL;
  memset(entity_6, 'j', entity_1-1);
  entity_6[entity_1-1]='';
  entity_6[16] = 'E';
}