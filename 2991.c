void fun()
{
  int entity_8 = 94;
  char* entity_4;
  char entity_0[entity_8] = "";
  entity_0 = NULL;
  entity_4 = (char*)malloc(89*sizeof(char));
  entity_4[89-1]='';
  memset(entity_0, 'j', entity_8-1);
  entity_0[entity_8-1]='';
  entity_8 = 80;
  memcpy(entity_4, entity_0, entity_8*sizeof(char));
}