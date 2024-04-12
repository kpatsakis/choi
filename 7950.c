void fun()
{
  int entity_5 = 67;
  char entity_6[76] = "";
  entity_6 = NULL;
  char* entity_0;
  char entity_9[66] = "";
  entity_9 = NULL;
  memset(entity_6, 'h', 76-1);
  entity_6[76-1]='';
  entity_0 = (char*)malloc(entity_5*sizeof(char));
  entity_0[entity_5-1]='';
  memset(entity_9, 'S', 66-1);
  entity_9[66-1]='';
  entity_5 = 74;
  strcpy(entity_0, entity_6);
}