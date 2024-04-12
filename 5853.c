void fun()
{
  int entity_2 = 40;
  char entity_5[entity_2] = "";
  entity_5 = NULL;
  char entity_4[25] = "";
  entity_4 = NULL;
  memset(entity_5, 'p', entity_2-1);
  entity_5[entity_2-1]='';
  memset(entity_4, 'v', 25-1);
  entity_4[25-1]='';
  entity_5[90] = 'F';
}