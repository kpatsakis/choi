void fun()
{
  int entity_2 = 93;
  char entity_9[54] = "";
  char* entity_3;
  char* entity_0;
  char entity_4 = 'U';
  memset(entity_9, 'h', 54-1);
  entity_9[54-1]='0';
  entity_3 = (char*)malloc(73*sizeof(char));
  entity_3[0]='0';
  entity_0 = (char*)malloc(entity_2*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_9);
}