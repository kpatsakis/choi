void fun()
{
  int entity_5 = 77;
  int entity_9 = 11;
  char entity_1 = 'q';
  char* entity_8;
  char entity_2[entity_9] = "";
  entity_8 = (char*)malloc(85*sizeof(char));
  entity_8[0]='0';
  memset(entity_2, 'p', entity_9-1);
  entity_2[entity_9-1]='0';
  strcpy(entity_8, entity_2);
}