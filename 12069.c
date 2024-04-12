void fun()
{
  int entity_4 = 75;
  int entity_9 = 66;
  int entity_2 = 92;
  int entity_7 = 42;
  char* entity_8;
  char entity_3[20] = "";
  memset(entity_3, 'o', 20-1);
  entity_3[20-1]='0';
  entity_8 = (char*)malloc(entity_2*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_3);
}