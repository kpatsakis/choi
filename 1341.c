void fun()
{
  int entity_4 = 7;
  char entity_1 = 'n';
  char entity_7[entity_4] = "";
  entity_7 = NULL;
  char entity_3[20] = "";
  entity_3 = NULL;
  memset(entity_7, 'N', entity_4-1);
  entity_7[entity_4-1]='';
  memset(entity_3, 'J', 20-1);
  entity_3[20-1]='';
  entity_7[43] = 'A';
}