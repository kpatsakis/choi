void fun()
{
  int entity_6 = 76;
  int entity_1 = 12;
  entity_6 = 62;
  char entity_2[80] = "";
  char* entity_8;
  memset(entity_2, 'X', 80-1);
  entity_2[80-1]='0';
  entity_8 = (char*)malloc(entity_6*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_2);
}