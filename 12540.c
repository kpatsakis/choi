void fun()
{
  int entity_5 = 45;
  int entity_8 = 16;
  char* entity_0;
  char entity_2[64] = "";
  char entity_4 = 'M';
  char entity_7[entity_5] = "";
  memset(entity_2, 'r', 64-1);
  entity_2[64-1]='0';
  entity_0 = (char*)malloc(77*sizeof(char));
  entity_0[0]='0';
  memset(entity_7, 'w', entity_5-1);
  entity_7[entity_5-1]='0';
  memcpy(entity_0, entity_7, entity_5*sizeof(char));
}