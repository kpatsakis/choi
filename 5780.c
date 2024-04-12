void fun()
{
  int entity_0 = 41;
  int entity_8 = 80;
  entity_0 = 19;
  char* entity_5;
  char entity_2 = 'f';
  char entity_4[87] = "";
  entity_4 = NULL;
  entity_5 = (char*)malloc(entity_0*sizeof(char));
  entity_5[entity_0-1]='';
  memset(entity_4, 'K', 87-1);
  entity_4[87-1]='';
  strcpy(entity_5, entity_4);
}