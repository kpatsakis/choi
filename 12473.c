void fun()
{
  int entity_4 = 39;
  char entity_3[entity_4] = "";
  char* entity_8;
  char entity_2[2] = "";
  entity_8 = (char*)malloc(77*sizeof(char));
  entity_8[0]='0';
  memset(entity_2, 'Z', 2-1);
  entity_2[2-1]='0';
  memset(entity_3, 't', entity_4-1);
  entity_3[entity_4-1]='0';
  strcpy(entity_8, entity_3);
}