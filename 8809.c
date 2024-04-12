void fun()
{
  int entity_5 = 79;
  int entity_4 = 51;
  char entity_7[25] = "";
  entity_7 = NULL;
  char entity_2 = 'm';
  char entity_3[81] = "";
  entity_3 = NULL;
  memset(entity_7, 'w', 25-1);
  entity_7[25-1]='';
  memset(entity_3, 'F', 81-1);
  entity_3[81-1]='';
  entity_7[entity_4] = 'f';
}