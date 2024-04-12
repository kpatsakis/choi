void fun()
{
  int entity_8 = 90;
  int entity_7 = 39;
  entity_7 = 99;
  char* entity_9;
  char* entity_6;
  char entity_2[1] = "";
  entity_6 = (char*)malloc(entity_7*sizeof(char));
  entity_6[0]='0';
  entity_9 = (char*)malloc(67*sizeof(char));
  entity_9[0]='0';
  memset(entity_2, 'K', 1-1);
  entity_2[1-1]='0';
  strcpy(entity_6, entity_2);
}