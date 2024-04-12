void fun()
{
  int entity_3 = 20;
  char entity_4[89] = "";
  entity_4 = NULL;
  char entity_0[19] = "";
  entity_0 = NULL;
  char entity_9[entity_3] = "";
  entity_9 = NULL;
  char* entity_7;
  memset(entity_9, 'z', entity_3-1);
  entity_9[entity_3-1]='';
  memset(entity_0, 'V', 19-1);
  entity_0[19-1]='';
  entity_7 = (char*)malloc(72*sizeof(char));
  entity_7[72-1]='';
  memset(entity_4, 'q', 89-1);
  entity_4[89-1]='';
  strcpy(entity_7, entity_9);
}