void fun()
{
  int entity_5 = 52;
  entity_5 = 49;
  char entity_7[89] = "";
  char* entity_6;
  memset(entity_7, 'K', 89-1);
  entity_7[89-1]='0';
  entity_6 = (char*)malloc(entity_5*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_7, 89*sizeof(char));
}