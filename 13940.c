void fun()
{
  int entity_7 = 23;
  int entity_2 = 90;
  char entity_6[39] = "";
  char* entity_1;
  char entity_9 = 'u';
  memset(entity_6, 'b', 39-1);
  entity_6[39-1]='0';
  entity_1 = (char*)malloc(entity_7*sizeof(char));
  entity_1[0]='0';
  entity_7 = 96;
  strcpy(entity_1, entity_6);
}