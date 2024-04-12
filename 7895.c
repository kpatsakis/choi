void fun()
{
  int entity_8 = 19;
  char entity_0[entity_8] = "";
  entity_0 = NULL;
  char* entity_7;
  memset(entity_0, 's', entity_8-1);
  entity_0[entity_8-1]='';
  entity_7 = (char*)malloc(65*sizeof(char));
  entity_7[65-1]='';
  memcpy(entity_7, entity_0, entity_8*sizeof(char));
}