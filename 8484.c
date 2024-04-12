void fun()
{
  int entity_2 = 24;
  entity_2 = 24;
  char* entity_3;
  char entity_1 = 'f';
  char entity_0[entity_2] = "";
  entity_0 = NULL;
  memset(entity_0, 'Y', entity_2-1);
  entity_0[entity_2-1]='';
  entity_3 = (char*)malloc(30*sizeof(char));
  entity_3[30-1]='';
  strcpy(entity_3, entity_0);
}