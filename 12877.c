void fun()
{
  int entity_8 = 51;
  int entity_4 = 10;
  char* entity_3;
  char entity_0[54] = "";
  memset(entity_0, 'i', 54-1);
  entity_0[54-1]='0';
  entity_3 = (char*)malloc(entity_4*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_0);
}