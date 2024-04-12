void fun()
{
  int entity_6 = 63;
  char* entity_4;
  char entity_8[entity_6] = "";
  entity_8 = NULL;
  entity_4 = (char*)malloc(65*sizeof(char));
  entity_4[65-1]='';
  memset(entity_8, 'v', entity_6-1);
  entity_8[entity_6-1]='';
  memcpy(entity_4, entity_8, entity_6*sizeof(char));
}