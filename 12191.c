void fun()
{
  int entity_0 = 27;
  char* entity_8;
  char entity_6[entity_0] = "";
  char entity_2 = 'n';
  char* entity_7;
  char entity_9 = 'X';
  memset(entity_6, 'z', entity_0-1);
  entity_6[entity_0-1]='0';
  entity_8 = (char*)malloc(68*sizeof(char));
  entity_8[0]='0';
  entity_7 = (char*)malloc(53*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_8, entity_6);
}