void fun()
{
  int entity_3 = 84;
  int entity_8 = 43;
  int entity_2 = 56;
  char entity_9[6] = "";
  entity_9 = NULL;
  char* entity_1;
  char entity_7 = 'h';
  memset(entity_9, 'B', 6-1);
  entity_9[6-1]='';
  entity_1 = (char*)malloc(entity_8*sizeof(char));
  entity_1[entity_8-1]='';
  strcpy(entity_1, entity_9);
}