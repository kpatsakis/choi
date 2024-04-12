void fun()
{
  int entity_7 = 87;
  char* entity_4;
  char entity_1[76] = "";
  entity_1 = NULL;
  memset(entity_1, 'Y', 76-1);
  entity_1[76-1]='';
  entity_4 = (char*)malloc(entity_7*sizeof(char));
  entity_4[entity_7-1]='';
  strcpy(entity_4, entity_1);
}