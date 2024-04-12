void fun()
{
  int entity_0 = 98;
  int entity_7 = 35;
  entity_7 = 96;
  char entity_2[42] = "";
  entity_2 = NULL;
  char* entity_9;
  char entity_1 = 'y';
  entity_9 = (char*)malloc(entity_7*sizeof(char));
  entity_9[entity_7-1]='';
  memset(entity_2, 'k', 42-1);
  entity_2[42-1]='';
  strcpy(entity_9, entity_2);
}