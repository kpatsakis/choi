void fun()
{
  int entity_3 = 42;
  int entity_7 = 14;
  int entity_0 = 17;
  char* entity_1;
  char entity_2[entity_7] = "";
  entity_2 = NULL;
  memset(entity_2, 'k', entity_7-1);
  entity_2[entity_7-1]='';
  entity_1 = (char*)malloc(89*sizeof(char));
  entity_1[89-1]='';
  strcpy(entity_1, entity_2);
}