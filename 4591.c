void fun()
{
  int entity_0 = 45;
  entity_0 = 14;
  char entity_5[19] = "";
  entity_5 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(entity_0*sizeof(char));
  entity_6[entity_0-1]='';
  memset(entity_5, 'w', 19-1);
  entity_5[19-1]='';
  strcpy(entity_6, entity_5);
}