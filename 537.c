void fun()
{
  int entity_1 = 77;
  char* entity_6;
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  memset(entity_0, 'u', entity_1-1);
  entity_0[entity_1-1]='';
  entity_6 = (char*)malloc(53*sizeof(char));
  entity_6[53-1]='';
  memcpy(entity_6, entity_0, entity_1*sizeof(char));
}