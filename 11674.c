void fun()
{
  char entity_2 = 'b';
  char* entity_7;
  char entity_3[53] = "";
  char* entity_4;
  char* entity_0;
  memset(entity_3, 'e', 53-1);
  entity_3[53-1]='0';
  entity_7 = (char*)malloc(8*sizeof(char));
  entity_7[0]='0';
  entity_0 = (char*)malloc(10*sizeof(char));
  entity_0[0]='0';
  entity_4 = (char*)malloc(21*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_3, 53*sizeof(char));
}