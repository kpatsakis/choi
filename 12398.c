void fun()
{
  int entity_4 = 69;
  char* entity_7;
  char entity_8[20] = "";
  entity_7 = (char*)malloc(entity_4*sizeof(char));
  entity_7[0]='0';
  memset(entity_8, 'B', 20-1);
  entity_8[20-1]='0';
  strcpy(entity_7, entity_8);
}