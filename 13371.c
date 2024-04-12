void fun()
{
  int entity_3 = 91;
  char* entity_9;
  char entity_1[64] = "";
  entity_9 = (char*)malloc(entity_3*sizeof(char));
  entity_9[0]='0';
  memset(entity_1, 'G', 64-1);
  entity_1[64-1]='0';
  entity_3 = 78;
  strcpy(entity_9, entity_1);
}