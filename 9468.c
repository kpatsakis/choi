void fun()
{
  int entity_1 = 64;
  char entity_3[39] = "";
  entity_3 = NULL;
  char entity_9[entity_1] = "";
  entity_9 = NULL;
  char* entity_0;
  char* entity_6;
  char* entity_7;
  memset(entity_3, 'U', 39-1);
  entity_3[39-1]='';
  entity_0 = (char*)malloc(23*sizeof(char));
  entity_0[23-1]='';
  entity_6 = (char*)malloc(74*sizeof(char));
  entity_6[74-1]='';
  entity_7 = (char*)malloc(42*sizeof(char));
  entity_7[42-1]='';
  memset(entity_9, 'q', entity_1-1);
  entity_9[entity_1-1]='';
  strcpy(entity_0, entity_9);
}