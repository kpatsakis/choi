void fun()
{
  int entity_2 = 22;
  char* entity_8;
  char entity_1[48] = "";
  char entity_3 = 'X';
  memset(entity_1, 'z', 48-1);
  entity_1[48-1]='0';
  entity_8 = (char*)malloc(entity_2*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_1);
}