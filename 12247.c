void fun()
{
  int entity_8 = 52;
  char entity_6[6] = "";
  char* entity_5;
  char entity_7[11] = "";
  memset(entity_6, 'B', 6-1);
  entity_6[6-1]='0';
  memset(entity_7, 'J', 11-1);
  entity_7[11-1]='0';
  entity_5 = (char*)malloc(entity_8*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_5, entity_6);
}