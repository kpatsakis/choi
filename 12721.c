void fun()
{
  int entity_6 = 93;
  char* entity_7;
  char entity_0[entity_6] = "";
  char entity_9 = 'O';
  char* entity_4;
  memset(entity_0, 'B', entity_6-1);
  entity_0[entity_6-1]='0';
  entity_7 = (char*)malloc(31*sizeof(char));
  entity_7[0]='0';
  entity_4 = (char*)malloc(48*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_4, entity_0);
}