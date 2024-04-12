void fun()
{
  char* entity_3;
  char* entity_4;
  char entity_0 = 'v';
  char entity_8[90] = "";
  entity_3 = (char*)malloc(34*sizeof(char));
  entity_3[0]='0';
  entity_4 = (char*)malloc(28*sizeof(char));
  entity_4[0]='0';
  memset(entity_8, 'z', 90-1);
  entity_8[90-1]='0';
  memcpy(entity_3, entity_8, 90*sizeof(char));
}