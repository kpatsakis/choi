void fun()
{
  int entity_7 = 3;
  int entity_9 = 52;
  entity_9 = 44;
  char entity_4[entity_9] = "";
  entity_4 = NULL;
  char entity_3[89] = "";
  entity_3 = NULL;
  char entity_6[5] = "";
  entity_6 = NULL;
  memset(entity_4, 'n', entity_9-1);
  entity_4[entity_9-1]='';
  memset(entity_3, 'v', 89-1);
  entity_3[89-1]='';
  memset(entity_6, 'r', 5-1);
  entity_6[5-1]='';
  entity_4[26] = 'i';
}