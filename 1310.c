void fun()
{
  int entity_3 = 93;
  char* entity_6;
  char entity_9 = 'b';
  char entity_0[13] = "";
  entity_0 = NULL;
  memset(entity_0, 'y', 13-1);
  entity_0[13-1]='';
  entity_6 = (char*)malloc(entity_3*sizeof(char));
  entity_6[entity_3-1]='';
  strcpy(entity_6, entity_0);
}