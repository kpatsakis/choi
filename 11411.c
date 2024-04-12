void fun()
{
  int entity_4 = 12;
  char* entity_3;
  char entity_1[33] = "";
  entity_3 = (char*)malloc(27*sizeof(char));
  entity_3[0]='0';
  memset(entity_1, 'r', 33-1);
  entity_1[33-1]='0';
  strcpy(entity_3, entity_1);
}