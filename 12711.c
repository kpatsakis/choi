void fun()
{
  int entity_0 = 3;
  char* entity_5;
  char entity_1[85] = "";
  memset(entity_1, 'x', 85-1);
  entity_1[85-1]='0';
  entity_5 = (char*)malloc(entity_0*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_5, entity_1);
}