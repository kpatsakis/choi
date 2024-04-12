void fun()
{
  int entity_7 = 86;
  char entity_4[entity_7] = "";
  char* entity_2;
  char* entity_6;
  char entity_5[21] = "";
  memset(entity_4, 'h', entity_7-1);
  entity_4[entity_7-1]='0';
  entity_2 = (char*)malloc(83*sizeof(char));
  entity_2[0]='0';
  entity_6 = (char*)malloc(8*sizeof(char));
  entity_6[0]='0';
  memset(entity_5, 'h', 21-1);
  entity_5[21-1]='0';
  strcpy(entity_6, entity_4);
}