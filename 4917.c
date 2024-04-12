void fun()
{
  int entity_4 = 24;
  char* entity_7;
  char entity_6 = 't';
  char entity_8[entity_4] = "";
  entity_8 = NULL;
  memset(entity_8, 'z', entity_4-1);
  entity_8[entity_4-1]='';
  entity_7 = (char*)malloc(60*sizeof(char));
  entity_7[60-1]='';
  memcpy(entity_7, entity_8, entity_4*sizeof(char));
}