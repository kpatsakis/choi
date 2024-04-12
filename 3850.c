void fun()
{
  int entity_9 = 22;
  char* entity_4;
  char entity_6[entity_9] = "";
  entity_6 = NULL;
  char* entity_5;
  memset(entity_6, 'y', entity_9-1);
  entity_6[entity_9-1]='';
  entity_5 = (char*)malloc(29*sizeof(char));
  entity_5[29-1]='';
  entity_4 = (char*)malloc(15*sizeof(char));
  entity_4[15-1]='';
  memcpy(entity_5, entity_6, entity_9*sizeof(char));
}