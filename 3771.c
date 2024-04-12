void fun()
{
  int entity_8 = 30;
  int entity_9 = 34;
  entity_8 = 15;
  char entity_2[entity_8] = "";
  entity_2 = NULL;
  char entity_1[95] = "";
  entity_1 = NULL;
  char entity_7 = 'h';
  memset(entity_2, 'O', entity_8-1);
  entity_2[entity_8-1]='';
  memset(entity_1, 'o', 95-1);
  entity_1[95-1]='';
  entity_2[41] = 'V';
}