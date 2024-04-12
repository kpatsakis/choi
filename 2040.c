void fun()
{
  int entity_7 = 63;
  int entity_1 = 65;
  char* entity_9;
  char* entity_2;
  char entity_6[entity_7] = "";
  entity_6 = NULL;
  entity_2 = (char*)malloc(79*sizeof(char));
  entity_2[79-1]='';
  memset(entity_6, 'G', entity_7-1);
  entity_6[entity_7-1]='';
  entity_9 = (char*)malloc(97*sizeof(char));
  entity_9[97-1]='';
  memcpy(entity_9, entity_6, entity_7*sizeof(char));
}