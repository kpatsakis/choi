void fun()
{
  int entity_8 = 94;
  char entity_0[entity_8] = "";
  entity_0 = NULL;
  char* entity_7;
  memset(entity_0, 'R', entity_8-1);
  entity_0[entity_8-1]='';
  entity_7 = (char*)malloc(51*sizeof(char));
  entity_7[51-1]='';
  memcpy(entity_7, entity_0, entity_8*sizeof(char));
}