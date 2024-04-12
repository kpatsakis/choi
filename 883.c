void fun()
{
  int entity_9 = 24;
  int entity_0 = 96;
  entity_0 = 39;
  char* entity_8;
  char* entity_5;
  char* entity_7;
  char entity_1[75] = "";
  entity_1 = NULL;
  entity_5 = (char*)malloc(60*sizeof(char));
  entity_5[60-1]='';
  memset(entity_1, 'G', 75-1);
  entity_1[75-1]='';
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[entity_0-1]='';
  entity_8 = (char*)malloc(89*sizeof(char));
  entity_8[89-1]='';
  strcpy(entity_7, entity_1);
}