void fun()
{
  int entity_7 = 39;
  char* entity_8;
  char entity_6[entity_7] = "";
  entity_6 = NULL;
  memset(entity_6, 'x', entity_7-1);
  entity_6[entity_7-1]='';
  entity_8 = (char*)malloc(60*sizeof(char));
  entity_8[60-1]='';
  entity_7 = 68;
  memcpy(entity_8, entity_6, entity_7*sizeof(char));
}