void fun()
{
  int entity_5 = 57;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  char entity_7[25] = "";
  entity_7 = NULL;
  char entity_3 = 'E';
  memset(entity_2, 'Q', entity_5-1);
  entity_2[entity_5-1]='';
  memset(entity_7, 'Q', 25-1);
  entity_7[25-1]='';
  entity_5 = 80;
  entity_2[34] = 'D';
}