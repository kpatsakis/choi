void fun()
{
  int entity_8 = 36;
  entity_8 = 36;
  char entity_2[entity_8] = "";
  char entity_6[68] = "";
  char* entity_0;
  entity_0 = (char*)malloc(77*sizeof(char));
  entity_0[0]='0';
  memset(entity_6, 'P', 68-1);
  entity_6[68-1]='0';
  memset(entity_2, 'F', entity_8-1);
  entity_2[entity_8-1]='0';
  strcpy(entity_0, entity_2);
}