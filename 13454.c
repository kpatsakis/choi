void fun()
{
  int entity_3 = 25;
  int entity_5 = 92;
  entity_3 = 69;
  char* entity_7;
  char entity_1[39] = "";
  memset(entity_1, 'F', 39-1);
  entity_1[39-1]='0';
  entity_7 = (char*)malloc(entity_3*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_1);
}