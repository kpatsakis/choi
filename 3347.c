void fun()
{
  int entity_4 = 1;
  char* entity_7;
  char* entity_1;
  char entity_6[entity_4] = "";
  entity_6 = NULL;
  entity_7 = (char*)malloc(64*sizeof(char));
  entity_7[64-1]='';
  memset(entity_6, 'W', entity_4-1);
  entity_6[entity_4-1]='';
  entity_1 = (char*)malloc(65*sizeof(char));
  entity_1[65-1]='';
  strcpy(entity_1, entity_6);
}