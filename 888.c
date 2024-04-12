void fun()
{
  int entity_3 = 68;
  entity_3 = 25;
  char entity_2[98] = "";
  entity_2 = NULL;
  char entity_5[95] = "";
  entity_5 = NULL;
  memset(entity_2, 'Q', 98-1);
  entity_2[98-1]='';
  memset(entity_5, 'Q', 95-1);
  entity_5[95-1]='';
  entity_5[entity_3] = 'o';
}