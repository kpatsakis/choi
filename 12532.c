void fun()
{
  int entity_5 = 67;
  char* entity_8;
  char entity_7[3] = "";
  entity_8 = (char*)malloc(entity_5*sizeof(char));
  entity_8[0]='0';
  memset(entity_7, 'O', 3-1);
  entity_7[3-1]='0';
  strcpy(entity_8, entity_7);
}