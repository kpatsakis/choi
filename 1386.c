void fun()
{
  int entity_3 = 39;
  char* entity_4;
  char entity_5[entity_3] = "";
  entity_5 = NULL;
  char* entity_9;
  memset(entity_5, 'C', entity_3-1);
  entity_5[entity_3-1]='';
  entity_4 = (char*)malloc(65*sizeof(char));
  entity_4[65-1]='';
  entity_9 = (char*)malloc(13*sizeof(char));
  entity_9[13-1]='';
  memcpy(entity_4, entity_5, entity_3*sizeof(char));
}