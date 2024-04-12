void fun()
{
  char* entity_3;
  char entity_5[33] = "";
  char* entity_0;
  char* entity_9;
  memset(entity_5, 'w', 33-1);
  entity_5[33-1]='0';
  entity_9 = (char*)malloc(74*sizeof(char));
  entity_9[0]='0';
  entity_0 = (char*)malloc(57*sizeof(char));
  entity_0[0]='0';
  entity_3 = (char*)malloc(44*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_9, entity_5);
}