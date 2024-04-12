void fun()
{
  int entity_9 = 0;
  int entity_7 = 21;
  char entity_5 = 'S';
  char* entity_8;
  char* entity_1;
  char entity_4[entity_7] = "";
  entity_4 = NULL;
  entity_1 = (char*)malloc(64*sizeof(char));
  entity_1[64-1]='';
  memset(entity_4, 'W', entity_7-1);
  entity_4[entity_7-1]='';
  entity_8 = (char*)malloc(5*sizeof(char));
  entity_8[5-1]='';
  strcpy(entity_1, entity_4);
}