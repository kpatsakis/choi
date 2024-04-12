void fun()
{
  int entity_9 = 38;
  char* entity_0;
  char entity_5[entity_9] = "";
  char* entity_2;
  entity_2 = (char*)malloc(30*sizeof(char));
  entity_2[0]='0';
  memset(entity_5, 'e', entity_9-1);
  entity_5[entity_9-1]='0';
  entity_0 = (char*)malloc(20*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_2, entity_5);
}