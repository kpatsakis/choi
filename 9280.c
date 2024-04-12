void fun()
{
  int entity_1 = 37;
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  char entity_3[24] = "";
  entity_3 = NULL;
  char* entity_9;
  char* entity_4;
  memset(entity_3, 'j', 24-1);
  entity_3[24-1]='';
  entity_4 = (char*)malloc(10*sizeof(char));
  entity_4[10-1]='';
  entity_9 = (char*)malloc(29*sizeof(char));
  entity_9[29-1]='';
  memset(entity_0, 'e', entity_1-1);
  entity_0[entity_1-1]='';
  strcpy(entity_9, entity_0);
}