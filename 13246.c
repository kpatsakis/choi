void fun()
{
  int entity_7 = 62;
  int entity_9 = 59;
  entity_7 = 62;
  char* entity_4;
  char entity_8[entity_7] = "";
  char entity_2[32] = "";
  memset(entity_8, 'o', entity_7-1);
  entity_8[entity_7-1]='0';
  entity_4 = (char*)malloc(81*sizeof(char));
  entity_4[0]='0';
  memset(entity_2, 'a', 32-1);
  entity_2[32-1]='0';
  strcpy(entity_4, entity_8);
}