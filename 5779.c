void fun()
{
  int entity_3 = 51;
  char* entity_7;
  char* entity_0;
  char entity_8[entity_3] = "";
  entity_8 = NULL;
  entity_0 = (char*)malloc(81*sizeof(char));
  entity_0[81-1]='';
  entity_7 = (char*)malloc(80*sizeof(char));
  entity_7[80-1]='';
  memset(entity_8, 'K', entity_3-1);
  entity_8[entity_3-1]='';
  entity_3 = 41;
  memcpy(entity_7, entity_8, entity_3*sizeof(char));
}