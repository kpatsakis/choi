void fun()
{
  int entity_3 = 11;
  int entity_9 = 50;
  entity_3 = 11;
  char* entity_5;
  char entity_4[entity_3] = "";
  entity_5 = (char*)malloc(28*sizeof(char));
  entity_5[0]='0';
  memset(entity_4, 'W', entity_3-1);
  entity_4[entity_3-1]='0';
  strcpy(entity_5, entity_4);
}