void fun()
{
  int entity_1 = 22;
  int entity_7 = 2;
  int entity_6 = 1;
  entity_1 = 22;
  char* entity_2;
  char* entity_9;
  char entity_4[entity_1] = "";
  entity_4 = NULL;
  entity_2 = (char*)malloc(83*sizeof(char));
  entity_2[83-1]='';
  memset(entity_4, 'k', entity_1-1);
  entity_4[entity_1-1]='';
  entity_9 = (char*)malloc(64*sizeof(char));
  entity_9[64-1]='';
  strcpy(entity_9, entity_4);
}