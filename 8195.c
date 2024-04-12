void fun()
{
  int entity_2 = 47;
  int entity_7 = 89;
  char entity_1[entity_2] = "";
  entity_1 = NULL;
  char* entity_5;
  memset(entity_1, 'w', entity_2-1);
  entity_1[entity_2-1]='';
  entity_5 = (char*)malloc(81*sizeof(char));
  entity_5[81-1]='';
  strcpy(entity_5, entity_1);
}