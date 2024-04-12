void fun()
{
  int entity_5 = 68;
  int entity_6 = 69;
  char entity_7[entity_5] = "";
  entity_7 = NULL;
  char entity_3[28] = "";
  entity_3 = NULL;
  memset(entity_7, 'o', entity_5-1);
  entity_7[entity_5-1]='';
  memset(entity_3, 'q', 28-1);
  entity_3[28-1]='';
  entity_7[42] = 'D';
}