void fun()
{
  int entity_9 = 39;
  char entity_3[60] = "";
  entity_3 = NULL;
  char* entity_7;
  char entity_4 = 'K';
  char entity_6[19] = "";
  entity_6 = NULL;
  entity_7 = (char*)malloc(entity_9*sizeof(char));
  entity_7[entity_9-1]='';
  memset(entity_3, 'f', 60-1);
  entity_3[60-1]='';
  memset(entity_6, 'u', 19-1);
  entity_6[19-1]='';
  strcpy(entity_7, entity_3);
}