void fun()
{
  int entity_8 = 6;
  int entity_0 = 48;
  char entity_6[entity_8] = "";
  char* entity_1;
  entity_1 = (char*)malloc(77*sizeof(char));
  entity_1[0]='0';
  memset(entity_6, 'B', entity_8-1);
  entity_6[entity_8-1]='0';
  entity_8 = 60;
  strcpy(entity_1, entity_6);
}