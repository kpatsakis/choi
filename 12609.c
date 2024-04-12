void fun()
{
  int entity_0 = 48;
  char entity_9[57] = "";
  char entity_3[58] = "";
  char entity_8 = 'L';
  char entity_5 = 'a';
  char* entity_6;
  entity_6 = (char*)malloc(entity_0*sizeof(char));
  entity_6[0]='0';
  memset(entity_3, 'O', 58-1);
  entity_3[58-1]='0';
  memset(entity_9, 'J', 57-1);
  entity_9[57-1]='0';
  memcpy(entity_6, entity_9, 57*sizeof(char));
}