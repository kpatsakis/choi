void fun()
{
  int entity_6 = 35;
  entity_6 = 35;
  char* entity_0;
  char entity_2[entity_6] = "";
  entity_2 = NULL;
  memset(entity_2, 't', entity_6-1);
  entity_2[entity_6-1]='';
  entity_0 = (char*)malloc(58*sizeof(char));
  entity_0[58-1]='';
  strcpy(entity_0, entity_2);
}