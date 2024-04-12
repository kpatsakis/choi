void fun()
{
  int entity_1 = 86;
  char entity_4[entity_1] = "";
  entity_4 = NULL;
  char* entity_7;
  char entity_0[95] = "";
  entity_0 = NULL;
  memset(entity_0, 'X', 95-1);
  entity_0[95-1]='';
  memset(entity_4, 'E', entity_1-1);
  entity_4[entity_1-1]='';
  entity_7 = (char*)malloc(97*sizeof(char));
  entity_7[97-1]='';
  strcpy(entity_7, entity_4);
}