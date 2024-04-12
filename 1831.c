void fun()
{
  int entity_0 = 38;
  char entity_3[entity_0] = "";
  entity_3 = NULL;
  char* entity_9;
  char* entity_6;
  char* entity_5;
  char* entity_4;
  entity_9 = (char*)malloc(50*sizeof(char));
  entity_9[50-1]='';
  entity_5 = (char*)malloc(29*sizeof(char));
  entity_5[29-1]='';
  entity_6 = (char*)malloc(34*sizeof(char));
  entity_6[34-1]='';
  entity_4 = (char*)malloc(93*sizeof(char));
  entity_4[93-1]='';
  memset(entity_3, 'j', entity_0-1);
  entity_3[entity_0-1]='';
  strcpy(entity_9, entity_3);
}