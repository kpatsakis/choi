void fun()
{
  int entity_8 = 85;
  char entity_7[4] = "";
  entity_7 = NULL;
  char entity_4[0] = "";
  entity_4 = NULL;
  char* entity_9;
  char entity_0[89] = "";
  entity_0 = NULL;
  memset(entity_4, 'I', 0-1);
  entity_4[0-1]='';
  memset(entity_7, 'c', 4-1);
  entity_7[4-1]='';
  memset(entity_0, 'F', 89-1);
  entity_0[89-1]='';
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[entity_8-1]='';
  strcpy(entity_9, entity_7);
}