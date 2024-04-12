void fun()
{
  int entity_3 = 9;
  char* entity_0;
  char entity_6[20] = "";
  char entity_8 = 'W';
  entity_0 = (char*)malloc(33*sizeof(char));
  entity_0[0]='0';
  memset(entity_6, 'N', 20-1);
  entity_6[20-1]='0';
  strcpy(entity_0, entity_6);
}