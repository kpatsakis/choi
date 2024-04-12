void fun()
{
  int entity_8 = 88;
  int entity_1 = 89;
  char* entity_2;
  char entity_5[72] = "";
  entity_5 = NULL;
  memset(entity_5, 'K', 72-1);
  entity_5[72-1]='';
  entity_2 = (char*)malloc(entity_1*sizeof(char));
  entity_2[entity_1-1]='';
  strcpy(entity_2, entity_5);
}