void fun()
{
  int entity_5 = 53;
  char entity_0[73] = "";
  entity_0 = NULL;
  char* entity_7;
  char* entity_1;
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[entity_5-1]='';
  memset(entity_0, 'K', 73-1);
  entity_0[73-1]='';
  entity_7 = (char*)malloc(56*sizeof(char));
  entity_7[56-1]='';
  memcpy(entity_1, entity_0, 73*sizeof(char));
}