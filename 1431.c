void fun()
{
  int entity_1 = 54;
  int entity_8 = 37;
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  char entity_4 = 'F';
  char* entity_3;
  entity_3 = (char*)malloc(60*sizeof(char));
  entity_3[60-1]='';
  memset(entity_0, 'C', entity_1-1);
  entity_0[entity_1-1]='';
  strcpy(entity_3, entity_0);
}