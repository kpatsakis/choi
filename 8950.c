void fun()
{
  int entity_8 = 89;
  char entity_0[entity_8] = "";
  entity_0 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(15*sizeof(char));
  entity_6[15-1]='';
  memset(entity_0, 'G', entity_8-1);
  entity_0[entity_8-1]='';
  strcpy(entity_6, entity_0);
}