void fun()
{
  int entity_4 = 55;
  char entity_6[78] = "";
  entity_6 = NULL;
  char entity_7[19] = "";
  entity_7 = NULL;
  char* entity_3;
  char* entity_9;
  char entity_2 = 'f';
  entity_9 = (char*)malloc(entity_4*sizeof(char));
  entity_9[entity_4-1]='';
  entity_3 = (char*)malloc(0*sizeof(char));
  entity_3[0-1]='';
  memset(entity_6, 'V', 78-1);
  entity_6[78-1]='';
  memset(entity_7, 'G', 19-1);
  entity_7[19-1]='';
  strcpy(entity_9, entity_6);
}