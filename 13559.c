void fun()
{
  int entity_1 = 75;
  int entity_6 = 20;
  char* entity_0;
  char entity_9[entity_1] = "";
  memset(entity_9, 't', entity_1-1);
  entity_9[entity_1-1]='0';
  entity_0 = (char*)malloc(84*sizeof(char));
  entity_0[0]='0';
  entity_1 = 97;
  strcpy(entity_0, entity_9);
}