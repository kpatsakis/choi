void fun()
{
  int entity_6 = 48;
  entity_6 = 48;
  char* entity_1;
  char entity_0[entity_6] = "";
  entity_0 = NULL;
  entity_1 = (char*)malloc(47*sizeof(char));
  entity_1[47-1]='';
  memset(entity_0, 'Y', entity_6-1);
  entity_0[entity_6-1]='';
  strcpy(entity_1, entity_0);
}