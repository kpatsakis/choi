void fun()
{
  int entity_8 = 39;
  char* entity_6;
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  char entity_7[1] = "";
  entity_7 = NULL;
  char* entity_9;
  entity_6 = (char*)malloc(72*sizeof(char));
  entity_6[72-1]='';
  entity_9 = (char*)malloc(9*sizeof(char));
  entity_9[9-1]='';
  memset(entity_7, 'x', 1-1);
  entity_7[1-1]='';
  memset(entity_4, 'e', entity_8-1);
  entity_4[entity_8-1]='';
  strcpy(entity_9, entity_4);
}