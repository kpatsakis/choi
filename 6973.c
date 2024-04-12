void fun()
{
  int entity_8 = 38;
  int entity_5 = 61;
  char* entity_0;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  memset(entity_7, 'M', entity_8-1);
  entity_7[entity_8-1]='';
  entity_0 = (char*)malloc(74*sizeof(char));
  entity_0[74-1]='';
  entity_8 = 36;
  memcpy(entity_0, entity_7, entity_8*sizeof(char));
}