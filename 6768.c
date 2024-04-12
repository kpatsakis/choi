void fun()
{
  int entity_8 = 36;
  char entity_3[entity_8] = "";
  entity_3 = NULL;
  char* entity_9;
  char* entity_4;
  entity_9 = (char*)malloc(97*sizeof(char));
  entity_9[97-1]='';
  memset(entity_3, 'C', entity_8-1);
  entity_3[entity_8-1]='';
  entity_4 = (char*)malloc(12*sizeof(char));
  entity_4[12-1]='';
  memcpy(entity_9, entity_3, entity_8*sizeof(char));
}