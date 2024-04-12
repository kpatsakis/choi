void fun()
{
  int entity_9 = 86;
  char entity_3 = 'U';
  char entity_6[44] = "";
  char* entity_7;
  memset(entity_6, 'J', 44-1);
  entity_6[44-1]='0';
  entity_7 = (char*)malloc(entity_9*sizeof(char));
  entity_7[0]='0';
  entity_9 = 76;
  memcpy(entity_7, entity_6, 44*sizeof(char));
}