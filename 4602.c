void fun()
{
  char entity_0[44] = "";
  entity_0 = NULL;
  char* entity_6;
  char* entity_5;
  char* entity_9;
  entity_6 = (char*)malloc(1*sizeof(char));
  entity_6[1-1]='';
  entity_5 = (char*)malloc(30*sizeof(char));
  entity_5[30-1]='';
  entity_9 = (char*)malloc(73*sizeof(char));
  entity_9[73-1]='';
  memset(entity_0, 'K', 44-1);
  entity_0[44-1]='';
  strcpy(entity_5, entity_0);
}