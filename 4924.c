void fun()
{
  int entity_8 = 53;
  char entity_3[95] = "";
  entity_3 = NULL;
  char* entity_9;
  memset(entity_3, 'H', 95-1);
  entity_3[95-1]='';
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[entity_8-1]='';
  entity_8 = 41;
  memcpy(entity_9, entity_3, 95*sizeof(char));
}