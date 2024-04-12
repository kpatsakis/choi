void fun()
{
  int entity_5 = 52;
  int entity_3 = 42;
  entity_5 = 61;
  char entity_1[50] = "";
  char* entity_2;
  char entity_6[29] = "";
  char* entity_4;
  memset(entity_1, 'X', 50-1);
  entity_1[50-1]='0';
  memset(entity_6, 'q', 29-1);
  entity_6[29-1]='0';
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[0]='0';
  entity_4 = (char*)malloc(57*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_2, entity_1, 50*sizeof(char));
}