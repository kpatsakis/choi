void fun()
{
  int entity_3 = 31;
  char* entity_1;
  char entity_9[entity_3] = "";
  memset(entity_9, 'D', entity_3-1);
  entity_9[entity_3-1]='0';
  entity_1 = (char*)malloc(40*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_9);
}