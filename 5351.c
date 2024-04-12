void fun()
{
  int entity_7 = 69;
  char entity_2 = 'W';
  char entity_1[88] = "";
  entity_1 = NULL;
  char* entity_6;
  char entity_4[84] = "";
  entity_4 = NULL;
  entity_6 = (char*)malloc(entity_7*sizeof(char));
  entity_6[entity_7-1]='';
  memset(entity_4, 'B', 84-1);
  entity_4[84-1]='';
  memset(entity_1, 'X', 88-1);
  entity_1[88-1]='';
  memcpy(entity_6, entity_4, 84*sizeof(char));
}