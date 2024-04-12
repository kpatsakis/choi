void fun()
{
  int entity_6 = 58;
  int entity_0 = 13;
  char* entity_9;
  char entity_1[55] = "";
  entity_1 = NULL;
  char entity_4[93] = "";
  entity_4 = NULL;
  memset(entity_1, 'W', 55-1);
  entity_1[55-1]='';
  entity_9 = (char*)malloc(entity_6*sizeof(char));
  entity_9[entity_6-1]='';
  memset(entity_4, 't', 93-1);
  entity_4[93-1]='';
  strcpy(entity_9, entity_4);
}