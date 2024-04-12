void fun()
{
  int entity_5 = 92;
  entity_5 = 58;
  char* entity_1;
  char entity_4[85] = "";
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[0]='0';
  memset(entity_4, 'c', 85-1);
  entity_4[85-1]='0';
  strcpy(entity_1, entity_4);
}