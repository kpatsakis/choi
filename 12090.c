void fun()
{
  int entity_8 = 31;
  char* entity_1;
  char entity_9[entity_8] = "";
  entity_1 = (char*)malloc(15*sizeof(char));
  entity_1[0]='0';
  memset(entity_9, 'O', entity_8-1);
  entity_9[entity_8-1]='0';
  strcpy(entity_1, entity_9);
}