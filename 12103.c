void fun()
{
  int entity_9 = 61;
  char entity_1[64] = "";
  char* entity_2;
  memset(entity_1, 'X', 64-1);
  entity_1[64-1]='0';
  entity_2 = (char*)malloc(entity_9*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_1);
}