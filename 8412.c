void fun()
{
  int entity_5 = 71;
  char entity_2[39] = "";
  entity_2 = NULL;
  char* entity_9;
  char* entity_6;
  char* entity_1;
  memset(entity_2, 'E', 39-1);
  entity_2[39-1]='';
  entity_9 = (char*)malloc(47*sizeof(char));
  entity_9[47-1]='';
  entity_6 = (char*)malloc(10*sizeof(char));
  entity_6[10-1]='';
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[entity_5-1]='';
  strcpy(entity_1, entity_2);
}