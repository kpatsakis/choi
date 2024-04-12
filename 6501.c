void fun()
{
  int entity_9 = 4;
  char entity_7 = 'V';
  char entity_1 = 'B';
  char entity_6[33] = "";
  entity_6 = NULL;
  memset(entity_6, 'g', 33-1);
  entity_6[33-1]='';
  entity_6[entity_9] = 'e';
}