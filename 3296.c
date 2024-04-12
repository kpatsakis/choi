void fun()
{
  int entity_5 = 83;
  char entity_8[26] = "";
  entity_8 = NULL;
  char* entity_9;
  char entity_4[78] = "";
  entity_4 = NULL;
  char entity_6[entity_5] = "";
  entity_6 = NULL;
  memset(entity_6, 'p', entity_5-1);
  entity_6[entity_5-1]='';
  entity_9 = (char*)malloc(57*sizeof(char));
  entity_9[57-1]='';
  memset(entity_4, 'I', 78-1);
  entity_4[78-1]='';
  memset(entity_8, 'O', 26-1);
  entity_8[26-1]='';
  strcpy(entity_9, entity_6);
}