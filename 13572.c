void fun()
{
  int entity_7 = 11;
  entity_7 = 9;
  char* entity_3;
  char entity_9[65] = "";
  char* entity_8;
  entity_8 = (char*)malloc(34*sizeof(char));
  entity_8[0]='0';
  entity_3 = (char*)malloc(entity_7*sizeof(char));
  entity_3[0]='0';
  memset(entity_9, 'e', 65-1);
  entity_9[65-1]='0';
  strcpy(entity_3, entity_9);
}