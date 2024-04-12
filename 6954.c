void fun()
{
  int entity_7 = 26;
  int entity_0 = 44;
  char* entity_5;
  char entity_6[19] = "";
  entity_6 = NULL;
  memset(entity_6, 'G', 19-1);
  entity_6[19-1]='';
  entity_5 = (char*)malloc(entity_7*sizeof(char));
  entity_5[entity_7-1]='';
  strcpy(entity_5, entity_6);
}