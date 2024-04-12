void fun()
{
  int entity_7 = 65;
  char* entity_8;
  char entity_0 = 'l';
  char entity_9 = 'Y';
  char entity_1[21] = "";
  memset(entity_1, 'Y', 21-1);
  entity_1[21-1]='0';
  entity_8 = (char*)malloc(entity_7*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_1);
}