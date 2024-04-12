void fun()
{
  int entity_6 = 26;
  entity_6 = 26;
  char* entity_2;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  memset(entity_4, 'I', entity_6-1);
  entity_4[entity_6-1]='';
  entity_2 = (char*)malloc(39*sizeof(char));
  entity_2[39-1]='';
  strcpy(entity_2, entity_4);
}