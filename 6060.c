void fun()
{
  int entity_5 = 7;
  char* entity_6;
  char entity_9[entity_5] = "";
  entity_9 = NULL;
  char* entity_1;
  char* entity_7;
  entity_1 = (char*)malloc(65*sizeof(char));
  entity_1[65-1]='';
  entity_7 = (char*)malloc(97*sizeof(char));
  entity_7[97-1]='';
  memset(entity_9, 'a', entity_5-1);
  entity_9[entity_5-1]='';
  entity_6 = (char*)malloc(65*sizeof(char));
  entity_6[65-1]='';
  memcpy(entity_6, entity_9, entity_5*sizeof(char));
}