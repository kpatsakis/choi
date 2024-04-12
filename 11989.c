void fun()
{
  char entity_0[8] = "";
  char* entity_5;
  char* entity_8;
  entity_8 = (char*)malloc(22*sizeof(char));
  entity_8[0]='0';
  entity_5 = (char*)malloc(69*sizeof(char));
  entity_5[0]='0';
  memset(entity_0, 'r', 8-1);
  entity_0[8-1]='0';
  memcpy(entity_8, entity_0, 8*sizeof(char));
}