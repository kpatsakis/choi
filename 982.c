void fun()
{
  int entity_0 = 12;
  char entity_5[entity_0] = "";
  entity_5 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(51*sizeof(char));
  entity_2[51-1]='';
  memset(entity_5, 'I', entity_0-1);
  entity_5[entity_0-1]='';
  strcpy(entity_2, entity_5);
}