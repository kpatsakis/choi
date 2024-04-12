void fun()
{
  int entity_8 = 4;
  entity_8 = 4;
  char* entity_0;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  memset(entity_7, 'W', entity_8-1);
  entity_7[entity_8-1]='';
  entity_0 = (char*)malloc(26*sizeof(char));
  entity_0[26-1]='';
  strcpy(entity_0, entity_7);
}