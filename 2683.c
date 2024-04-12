void fun()
{
  int entity_7 = 32;
  char entity_6[entity_7] = "";
  entity_6 = NULL;
  char* entity_8;
  char* entity_9;
  char* entity_2;
  char entity_4[32] = "";
  entity_4 = NULL;
  entity_2 = (char*)malloc(32*sizeof(char));
  entity_2[32-1]='';
  memset(entity_6, 'E', entity_7-1);
  entity_6[entity_7-1]='';
  memset(entity_4, 'R', 32-1);
  entity_4[32-1]='';
  entity_8 = (char*)malloc(32*sizeof(char));
  entity_8[32-1]='';
  entity_9 = (char*)malloc(55*sizeof(char));
  entity_9[55-1]='';
  strcpy(entity_9, entity_6);
}