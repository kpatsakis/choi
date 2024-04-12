void fun()
{
  int entity_2 = 84;
  char* entity_9;
  char entity_3[49] = "";
  char entity_4[15] = "";
  char* entity_0;
  entity_9 = (char*)malloc(41*sizeof(char));
  entity_9[0]='0';
  memset(entity_4, 'G', 15-1);
  entity_4[15-1]='0';
  memset(entity_3, 'u', 49-1);
  entity_3[49-1]='0';
  entity_0 = (char*)malloc(entity_2*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_4);
}