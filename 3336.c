void fun()
{
  int entity_8 = 37;
  char entity_1[63] = "";
  entity_1 = NULL;
  char* entity_9;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  memset(entity_1, 'g', 63-1);
  entity_1[63-1]='';
  entity_9 = (char*)malloc(60*sizeof(char));
  entity_9[60-1]='';
  memset(entity_7, 'i', entity_8-1);
  entity_7[entity_8-1]='';
  strcpy(entity_9, entity_7);
}