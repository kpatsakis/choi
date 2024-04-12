void fun()
{
  int entity_6 = 79;
  char entity_2 = 'C';
  char* entity_8;
  char entity_0[60] = "";
  memset(entity_0, 'h', 60-1);
  entity_0[60-1]='0';
  entity_8 = (char*)malloc(entity_6*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_0);
}