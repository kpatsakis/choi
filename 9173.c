void fun()
{
  int entity_2 = 9;
  int entity_8 = 44;
  char entity_3[75] = "";
  entity_3 = NULL;
  char entity_7 = 'W';
  char entity_9[entity_2] = "";
  entity_9 = NULL;
  memset(entity_9, 'G', entity_2-1);
  entity_9[entity_2-1]='';
  memset(entity_3, 'C', 75-1);
  entity_3[75-1]='';
  entity_9[50] = 'Q';
}