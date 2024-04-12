void fun()
{
  int entity_1 = 80;
  char entity_5[21] = "";
  entity_5 = NULL;
  char entity_9[59] = "";
  entity_9 = NULL;
  memset(entity_5, 'D', 21-1);
  entity_5[21-1]='';
  memset(entity_9, 'F', 59-1);
  entity_9[59-1]='';
  entity_1 = 95;
  entity_5[entity_1] = 'v';
}