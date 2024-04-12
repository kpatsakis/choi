void fun()
{
  int entity_0 = 48;
  entity_0 = 33;
  char entity_3 = 'H';
  char* entity_2;
  char* entity_4;
  char entity_1[49] = "";
  char entity_7[82] = "";
  memset(entity_7, 'C', 82-1);
  entity_7[82-1]='0';
  entity_4 = (char*)malloc(entity_0*sizeof(char));
  entity_4[0]='0';
  memset(entity_1, 'x', 49-1);
  entity_1[49-1]='0';
  entity_2 = (char*)malloc(9*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_4, entity_7, 82*sizeof(char));
}