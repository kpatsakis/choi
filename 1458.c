void fun()
{
  int entity_2 = 39;
  int entity_0 = 27;
  entity_0 = 81;
  char entity_7[48] = "";
  entity_7 = NULL;
  char* entity_1;
  char entity_6[96] = "";
  entity_6 = NULL;
  memset(entity_7, 'S', 48-1);
  entity_7[48-1]='';
  memset(entity_6, 'Y', 96-1);
  entity_6[96-1]='';
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[entity_0-1]='';
  strcpy(entity_1, entity_6);
}