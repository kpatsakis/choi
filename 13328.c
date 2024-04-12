void fun()
{
  int entity_2 = 66;
  int entity_7 = 30;
  char* entity_4;
  char entity_5[entity_7] = "";
  char* entity_1;
  char entity_3 = 'g';
  memset(entity_5, 'h', entity_7-1);
  entity_5[entity_7-1]='0';
  entity_1 = (char*)malloc(68*sizeof(char));
  entity_1[0]='0';
  entity_4 = (char*)malloc(17*sizeof(char));
  entity_4[0]='0';
  entity_7 = 18;
  memcpy(entity_4, entity_5, entity_7*sizeof(char));
}