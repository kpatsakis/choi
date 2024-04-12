void fun()
{
  int entity_7 = 31;
  char entity_1[64] = "";
  char* entity_2;
  memset(entity_1, 'f', 64-1);
  entity_1[64-1]='0';
  entity_2 = (char*)malloc(entity_7*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_1);
}