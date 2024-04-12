void fun()
{
  int entity_9 = 99;
  char entity_7[10] = "";
  entity_7 = NULL;
  memset(entity_7, 'B', 10-1);
  entity_7[10-1]='';
  entity_9 = 34;
  entity_7[entity_9] = 'N';
}