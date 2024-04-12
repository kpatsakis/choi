void fun()
{
  int entity_5 = 12;
  char entity_7[19] = "";
  entity_7 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(entity_5*sizeof(char));
  entity_0[entity_5-1]='';
  memset(entity_7, 'D', 19-1);
  entity_7[19-1]='';
  strcpy(entity_0, entity_7);
}