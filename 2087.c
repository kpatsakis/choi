void fun()
{
  int entity_4 = 33;
  int entity_8 = 52;
  int entity_6 = 52;
  char entity_1[entity_8] = "";
  entity_1 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(38*sizeof(char));
  entity_0[38-1]='';
  memset(entity_1, 't', entity_8-1);
  entity_1[entity_8-1]='';
  entity_8 = 22;
  memcpy(entity_0, entity_1, entity_8*sizeof(char));
}