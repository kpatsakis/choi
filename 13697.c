void fun()
{
  int entity_2 = 92;
  char entity_4[4] = "";
  char* entity_1;
  memset(entity_4, 'X', 4-1);
  entity_4[4-1]='0';
  entity_1 = (char*)malloc(entity_2*sizeof(char));
  entity_1[0]='0';
  entity_2 = 36;
  strcpy(entity_1, entity_4);
}