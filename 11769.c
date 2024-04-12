void fun()
{
  char* entity_1;
  char entity_0[55] = "";
  char entity_5 = 'T';
  char entity_2 = 'c';
  char* entity_7;
  memset(entity_0, 'X', 55-1);
  entity_0[55-1]='0';
  entity_7 = (char*)malloc(89*sizeof(char));
  entity_7[0]='0';
  entity_1 = (char*)malloc(54*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_7, entity_0, 55*sizeof(char));
}