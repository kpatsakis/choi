void fun()
{
  int entity_1 = 76;
  int entity_8 = 53;
  char* entity_2;
  char entity_9 = 'j';
  char entity_4[entity_8] = "";
  char* entity_5;
  entity_2 = (char*)malloc(44*sizeof(char));
  entity_2[0]='0';
  memset(entity_4, 'Q', entity_8-1);
  entity_4[entity_8-1]='0';
  entity_5 = (char*)malloc(11*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_2, entity_4);
}