void fun()
{
  int entity_7 = 25;
  char* entity_4;
  char entity_5 = 'n';
  char* entity_9;
  char entity_6[21] = "";
  entity_4 = (char*)malloc(0*sizeof(char));
  entity_4[0]='0';
  entity_9 = (char*)malloc(entity_7*sizeof(char));
  entity_9[0]='0';
  memset(entity_6, 'Q', 21-1);
  entity_6[21-1]='0';
  entity_7 = 79;
  strcpy(entity_9, entity_6);
}