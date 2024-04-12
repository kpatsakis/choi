void fun()
{
  int entity_6 = 36;
  entity_6 = 88;
  char entity_7[98] = "";
  entity_7 = NULL;
  char entity_1[entity_6] = "";
  entity_1 = NULL;
  char entity_8 = 'W';
  char* entity_4;
  memset(entity_1, 'v', entity_6-1);
  entity_1[entity_6-1]='';
  memset(entity_7, 'W', 98-1);
  entity_7[98-1]='';
  entity_4 = (char*)malloc(53*sizeof(char));
  entity_4[53-1]='';
  entity_1[79] = 'l';
}