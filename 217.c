void fun()
{
  int entity_5 = 39;
  int entity_8 = 84;
  char entity_7[entity_5] = "";
  entity_7 = NULL;
  char* entity_2;
  char entity_1 = 's';
  memset(entity_7, 'r', entity_5-1);
  entity_7[entity_5-1]='';
  entity_2 = (char*)malloc(39*sizeof(char));
  entity_2[39-1]='';
  strcpy(entity_2, entity_7);
}