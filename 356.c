void fun()
{
  int entity_1 = 48;
  char entity_7[36] = "";
  entity_7 = NULL;
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  memset(entity_3, 'W', entity_1-1);
  entity_3[entity_1-1]='';
  memset(entity_7, 'f', 36-1);
  entity_7[36-1]='';
  entity_1 = 30;
  entity_3[16] = 'm';
}