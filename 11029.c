void fun()
{
  int entity_2 = 18;
  int entity_8 = 14;
  char* entity_1;
  char* entity_5;
  char entity_0[5] = "";
  memset(entity_0, 'q', 5-1);
  entity_0[5-1]='0';
  entity_5 = (char*)malloc(65*sizeof(char));
  entity_5[0]='0';
  entity_1 = (char*)malloc(44*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_5, entity_0, 5*sizeof(char));
}