void fun()
{
  int entity_2 = 65;
  int entity_9 = 57;
  int entity_1 = 12;
  char entity_4[88] = "";
  entity_4 = NULL;
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  memset(entity_3, 'e', entity_1-1);
  entity_3[entity_1-1]='';
  memset(entity_4, 'V', 88-1);
  entity_4[88-1]='';
  entity_3[5] = 'z';
}