void fun()
{
  int entity_8 = 86;
  char entity_0[77] = "";
  char* entity_5;
  char entity_4 = 'r';
  memset(entity_0, 'a', 77-1);
  entity_0[77-1]='0';
  entity_5 = (char*)malloc(4*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_0, 77*sizeof(char));
}