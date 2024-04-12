void fun()
{
  int entity_7 = 9;
  char entity_4[entity_7] = "";
  entity_4 = NULL;
  char* entity_9;
  char entity_5 = 'T';
  char* entity_1;
  entity_9 = (char*)malloc(97*sizeof(char));
  entity_9[97-1]='';
  memset(entity_4, 'K', entity_7-1);
  entity_4[entity_7-1]='';
  entity_1 = (char*)malloc(24*sizeof(char));
  entity_1[24-1]='';
  entity_7 = 56;
  memcpy(entity_9, entity_4, entity_7*sizeof(char));
}