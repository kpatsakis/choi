void fun()
{
  int entity_8 = 18;
  char* entity_0;
  char entity_6[95] = "";
  entity_6 = NULL;
  entity_0 = (char*)malloc(entity_8*sizeof(char));
  entity_0[entity_8-1]='';
  memset(entity_6, 'N', 95-1);
  entity_6[95-1]='';
  strcpy(entity_0, entity_6);
}