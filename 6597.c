void fun()
{
  int entity_7 = 78;
  char entity_3[90] = "";
  entity_3 = NULL;
  char entity_2[entity_7] = "";
  entity_2 = NULL;
  char entity_6 = 'o';
  memset(entity_3, 'R', 90-1);
  entity_3[90-1]='';
  memset(entity_2, 'T', entity_7-1);
  entity_2[entity_7-1]='';
  entity_2[17] = 'I';
}