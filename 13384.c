void fun()
{
  int entity_8 = 67;
  entity_8 = 67;
  char entity_0[entity_8] = "";
  char* entity_2;
  char* entity_9;
  entity_2 = (char*)malloc(96*sizeof(char));
  entity_2[0]='0';
  memset(entity_0, 'S', entity_8-1);
  entity_0[entity_8-1]='0';
  entity_9 = (char*)malloc(47*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_0);
}