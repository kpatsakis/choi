void fun()
{
  int entity_5 = 71;
  int entity_3 = 97;
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  char* entity_0;
  char* entity_9;
  entity_0 = (char*)malloc(73*sizeof(char));
  entity_0[73-1]='';
  memset(entity_1, 'Q', entity_5-1);
  entity_1[entity_5-1]='';
  entity_9 = (char*)malloc(1*sizeof(char));
  entity_9[1-1]='';
  entity_5 = 8;
  memcpy(entity_9, entity_1, entity_5*sizeof(char));
}