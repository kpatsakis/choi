void fun()
{
  int entity_9 = 62;
  char entity_3[16] = "";
  entity_3 = NULL;
  char* entity_6;
  char entity_4[81] = "";
  entity_4 = NULL;
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[entity_9-1]='';
  memset(entity_4, 'Y', 81-1);
  entity_4[81-1]='';
  memset(entity_3, 't', 16-1);
  entity_3[16-1]='';
  strcpy(entity_6, entity_3);
}