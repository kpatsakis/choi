void fun()
{
  int entity_0 = 29;
  int entity_4 = 50;
  char entity_6[69] = "";
  entity_6 = NULL;
  char entity_9[10] = "";
  entity_9 = NULL;
  memset(entity_6, 'c', 69-1);
  entity_6[69-1]='';
  memset(entity_9, 's', 10-1);
  entity_9[10-1]='';
  entity_6[entity_4] = 'g';
}