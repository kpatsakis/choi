void fun()
{
  int entity_4 = 71;
  char entity_1[12] = "";
  entity_1 = NULL;
  char entity_3 = 'W';
  char* entity_6;
  entity_6 = (char*)malloc(entity_4*sizeof(char));
  entity_6[entity_4-1]='';
  memset(entity_1, 'z', 12-1);
  entity_1[12-1]='';
  strcpy(entity_6, entity_1);
}