void fun()
{
  int entity_1 = 68;
  char entity_6[55] = "";
  entity_6 = NULL;
  char entity_8 = 'W';
  char entity_7[53] = "";
  entity_7 = NULL;
  char* entity_2;
  memset(entity_6, 'u', 55-1);
  entity_6[55-1]='';
  entity_2 = (char*)malloc(entity_1*sizeof(char));
  entity_2[entity_1-1]='';
  memset(entity_7, 'n', 53-1);
  entity_7[53-1]='';
  entity_1 = 9;
  memcpy(entity_2, entity_6, 55*sizeof(char));
}