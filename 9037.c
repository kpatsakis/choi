void fun()
{
  int entity_3 = 90;
  char* entity_0;
  char entity_4[entity_3] = "";
  entity_4 = NULL;
  entity_0 = (char*)malloc(87*sizeof(char));
  entity_0[87-1]='';
  memset(entity_4, 'd', entity_3-1);
  entity_4[entity_3-1]='';
  entity_3 = 38;
  strcpy(entity_0, entity_4);
}