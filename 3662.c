void fun()
{
  int entity_9 = 91;
  char* entity_6;
  char* entity_8;
  char* entity_4;
  char entity_7[entity_9] = "";
  entity_7 = NULL;
  char entity_3 = 'o';
  entity_4 = (char*)malloc(9*sizeof(char));
  entity_4[9-1]='';
  entity_8 = (char*)malloc(81*sizeof(char));
  entity_8[81-1]='';
  memset(entity_7, 'K', entity_9-1);
  entity_7[entity_9-1]='';
  entity_6 = (char*)malloc(9*sizeof(char));
  entity_6[9-1]='';
  strcpy(entity_8, entity_7);
}