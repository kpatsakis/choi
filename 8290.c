void fun()
{
  int entity_8 = 22;
  char* entity_2;
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  entity_2 = (char*)malloc(54*sizeof(char));
  entity_2[54-1]='';
  memset(entity_4, 'm', entity_8-1);
  entity_4[entity_8-1]='';
  entity_8 = 27;
  strcpy(entity_2, entity_4);
}