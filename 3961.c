void fun()
{
  int entity_9 = 75;
  char entity_7 = 'X';
  char entity_8[43] = "";
  entity_8 = NULL;
  char entity_3[entity_9] = "";
  entity_3 = NULL;
  memset(entity_8, 'f', 43-1);
  entity_8[43-1]='';
  memset(entity_3, 'a', entity_9-1);
  entity_3[entity_9-1]='';
  entity_9 = 75;
  entity_3[30] = 'q';
}