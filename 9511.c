void fun()
{
  int entity_0 = 83;
  char entity_3 = 'n';
  char* entity_5;
  char entity_6[entity_0] = "";
  entity_6 = NULL;
  memset(entity_6, 'E', entity_0-1);
  entity_6[entity_0-1]='';
  entity_5 = (char*)malloc(73*sizeof(char));
  entity_5[73-1]='';
  entity_0 = 49;
  memcpy(entity_5, entity_6, entity_0*sizeof(char));
}