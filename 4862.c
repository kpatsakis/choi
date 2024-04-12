void fun()
{
  int entity_3 = 39;
  entity_3 = 12;
  char entity_7[47] = "";
  entity_7 = NULL;
  char entity_2[entity_3] = "";
  entity_2 = NULL;
  memset(entity_2, 'h', entity_3-1);
  entity_2[entity_3-1]='';
  memset(entity_7, 'D', 47-1);
  entity_7[47-1]='';
  entity_2[5] = 'c';
}