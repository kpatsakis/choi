void fun()
{
  int entity_7 = 44;
  int entity_6 = 70;
  char entity_2[89] = "";
  entity_2 = NULL;
  char entity_5[4] = "";
  entity_5 = NULL;
  memset(entity_5, 'L', 4-1);
  entity_5[4-1]='';
  memset(entity_2, 'p', 89-1);
  entity_2[89-1]='';
  entity_2[entity_6] = 'm';
}