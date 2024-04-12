void fun()
{
  int entity_8 = 3;
  char entity_0[entity_8] = "";
  entity_0 = NULL;
  char* entity_1;
  memset(entity_0, 'K', entity_8-1);
  entity_0[entity_8-1]='';
  entity_1 = (char*)malloc(13*sizeof(char));
  entity_1[13-1]='';
  strcpy(entity_1, entity_0);
}