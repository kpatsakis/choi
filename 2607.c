void fun()
{
  int entity_0 = 60;
  char entity_6[53] = "";
  entity_6 = NULL;
  char* entity_4;
  memset(entity_6, 'S', 53-1);
  entity_6[53-1]='';
  entity_4 = (char*)malloc(entity_0*sizeof(char));
  entity_4[entity_0-1]='';
  strcpy(entity_4, entity_6);
}