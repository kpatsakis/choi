void fun()
{
  int entity_1 = 86;
  int entity_9 = 43;
  char entity_7[entity_9] = "";
  entity_7 = NULL;
  char entity_0[26] = "";
  entity_0 = NULL;
  char entity_6[12] = "";
  entity_6 = NULL;
  memset(entity_0, 'a', 26-1);
  entity_0[26-1]='';
  memset(entity_7, 'z', entity_9-1);
  entity_7[entity_9-1]='';
  memset(entity_6, 'g', 12-1);
  entity_6[12-1]='';
  entity_7[89] = 'X';
}