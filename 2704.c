void fun()
{
  int entity_6 = 25;
  char* entity_8;
  char entity_0[entity_6] = "";
  entity_0 = NULL;
  entity_8 = (char*)malloc(96*sizeof(char));
  entity_8[96-1]='';
  memset(entity_0, 'I', entity_6-1);
  entity_0[entity_6-1]='';
  memcpy(entity_8, entity_0, entity_6*sizeof(char));
}