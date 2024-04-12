void fun()
{
  int entity_5 = 27;
  int entity_4 = 23;
  char* entity_7;
  char* entity_0;
  char* entity_9;
  char entity_6[entity_4] = "";
  entity_6 = NULL;
  entity_7 = (char*)malloc(2*sizeof(char));
  entity_7[2-1]='';
  memset(entity_6, 'g', entity_4-1);
  entity_6[entity_4-1]='';
  entity_0 = (char*)malloc(93*sizeof(char));
  entity_0[93-1]='';
  entity_9 = (char*)malloc(85*sizeof(char));
  entity_9[85-1]='';
  strcpy(entity_0, entity_6);
}