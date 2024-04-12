void fun()
{
  int entity_5 = 69;
  char entity_1[37] = "";
  entity_1 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(entity_5*sizeof(char));
  entity_0[entity_5-1]='';
  memset(entity_1, 'j', 37-1);
  entity_1[37-1]='';
  strcpy(entity_0, entity_1);
}