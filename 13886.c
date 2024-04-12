void fun()
{
  int entity_3 = 83;
  entity_3 = 8;
  char entity_7[42] = "";
  char entity_4 = 'S';
  char* entity_8;
  entity_8 = (char*)malloc(entity_3*sizeof(char));
  entity_8[0]='0';
  memset(entity_7, 'q', 42-1);
  entity_7[42-1]='0';
  strcpy(entity_8, entity_7);
}