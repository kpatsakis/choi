void fun()
{
  int entity_6 = 15;
  char entity_3[81] = "";
  entity_3 = NULL;
  char entity_5 = 'P';
  char entity_8[61] = "";
  entity_8 = NULL;
  char entity_9[21] = "";
  entity_9 = NULL;
  memset(entity_9, 'n', 21-1);
  entity_9[21-1]='';
  memset(entity_3, 'S', 81-1);
  entity_3[81-1]='';
  memset(entity_8, 'j', 61-1);
  entity_8[61-1]='';
  entity_8[entity_6] = 'O';
}