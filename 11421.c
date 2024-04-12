void fun()
{
  int entity_2 = 92;
  char* entity_6;
  char entity_4[7] = "";
  entity_6 = (char*)malloc(63*sizeof(char));
  entity_6[0]='0';
  memset(entity_4, 'U', 7-1);
  entity_4[7-1]='0';
  strcpy(entity_6, entity_4);
}