void fun()
{
  int entity_5 = 5;
  char* entity_7;
  char entity_6[98] = "";
  char* entity_8;
  entity_7 = (char*)malloc(entity_5*sizeof(char));
  entity_7[0]='0';
  memset(entity_6, 'k', 98-1);
  entity_6[98-1]='0';
  entity_8 = (char*)malloc(93*sizeof(char));
  entity_8[0]='0';
  entity_5 = 84;
  memcpy(entity_7, entity_6, 98*sizeof(char));
}