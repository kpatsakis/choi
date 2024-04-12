void fun()
{
  int entity_7 = 62;
  int entity_5 = 89;
  char entity_4 = 'I';
  char* entity_9;
  char entity_1[26] = "";
  entity_9 = (char*)malloc(entity_5*sizeof(char));
  entity_9[0]='0';
  memset(entity_1, 'J', 26-1);
  entity_1[26-1]='0';
  strcpy(entity_9, entity_1);
}