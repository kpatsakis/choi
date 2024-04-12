void fun()
{
  int entity_0 = 76;
  char* entity_1;
  char entity_3[35] = "";
  entity_3 = NULL;
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[entity_0-1]='';
  memset(entity_3, 'U', 35-1);
  entity_3[35-1]='';
  entity_0 = 48;
  strcpy(entity_1, entity_3);
}