void fun()
{
  int entity_6 = 43;
  char* entity_8;
  char entity_7[3] = "";
  memset(entity_7, 'a', 3-1);
  entity_7[3-1]='0';
  entity_8 = (char*)malloc(entity_6*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_7);
}