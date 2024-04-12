void fun()
{
  int entity_1 = 85;
  char* entity_7;
  char* entity_4;
  char entity_5[entity_1] = "";
  entity_5 = NULL;
  char* entity_9;
  entity_4 = (char*)malloc(59*sizeof(char));
  entity_4[59-1]='';
  entity_7 = (char*)malloc(66*sizeof(char));
  entity_7[66-1]='';
  entity_9 = (char*)malloc(30*sizeof(char));
  entity_9[30-1]='';
  memset(entity_5, 'y', entity_1-1);
  entity_5[entity_1-1]='';
  strcpy(entity_9, entity_5);
}