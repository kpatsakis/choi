void fun()
{
  int entity_7 = 40;
  entity_7 = 40;
  char entity_4[entity_7] = "";
  entity_4 = NULL;
  char* entity_2;
  char entity_5 = 'v';
  memset(entity_4, 'J', entity_7-1);
  entity_4[entity_7-1]='';
  entity_2 = (char*)malloc(54*sizeof(char));
  entity_2[54-1]='';
  strcpy(entity_2, entity_4);
}