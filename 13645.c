void fun()
{
  int entity_9 = 14;
  entity_9 = 14;
  char entity_2 = 'M';
  char entity_4[entity_9] = "";
  char* entity_3;
  memset(entity_4, 'm', entity_9-1);
  entity_4[entity_9-1]='0';
  entity_3 = (char*)malloc(64*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_4);
}