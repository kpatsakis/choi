void fun()
{
  int entity_2 = 73;
  char entity_4[entity_2] = "";
  entity_4 = NULL;
  char* entity_0;
  char* entity_7;
  entity_7 = (char*)malloc(61*sizeof(char));
  entity_7[61-1]='';
  entity_0 = (char*)malloc(55*sizeof(char));
  entity_0[55-1]='';
  memset(entity_4, 'N', entity_2-1);
  entity_4[entity_2-1]='';
  strcpy(entity_0, entity_4);
}