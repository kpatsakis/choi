void fun()
{
  int entity_4 = 6;
  char entity_8 = 'B';
  char* entity_7;
  char entity_9[97] = "";
  memset(entity_9, 'R', 97-1);
  entity_9[97-1]='0';
  entity_7 = (char*)malloc(entity_4*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_9);
}