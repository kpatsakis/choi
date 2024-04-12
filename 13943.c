void fun()
{
  int entity_2 = 53;
  entity_2 = 72;
  char* entity_7;
  char entity_5[28] = "";
  char entity_6[51] = "";
  memset(entity_5, 'y', 28-1);
  entity_5[28-1]='0';
  entity_7 = (char*)malloc(entity_2*sizeof(char));
  entity_7[0]='0';
  memset(entity_6, 'K', 51-1);
  entity_6[51-1]='0';
  strcpy(entity_7, entity_6);
}