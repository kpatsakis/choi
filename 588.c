void fun()
{
  int entity_0 = 60;
  entity_0 = 64;
  char* entity_6;
  char entity_8[60] = "";
  entity_8 = NULL;
  memset(entity_8, 'R', 60-1);
  entity_8[60-1]='';
  entity_6 = (char*)malloc(entity_0*sizeof(char));
  entity_6[entity_0-1]='';
  strcpy(entity_6, entity_8);
}