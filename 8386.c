void fun()
{
  int entity_1 = 36;
  char* entity_0;
  char entity_6[entity_1] = "";
  entity_6 = NULL;
  entity_0 = (char*)malloc(66*sizeof(char));
  entity_0[66-1]='';
  memset(entity_6, 'W', entity_1-1);
  entity_6[entity_1-1]='';
  memcpy(entity_0, entity_6, entity_1*sizeof(char));
}