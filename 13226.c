void fun()
{
  int entity_1 = 26;
  char entity_3[59] = "";
  char* entity_8;
  entity_8 = (char*)malloc(entity_1*sizeof(char));
  entity_8[0]='0';
  memset(entity_3, 'e', 59-1);
  entity_3[59-1]='0';
  entity_1 = 42;
  memcpy(entity_8, entity_3, 59*sizeof(char));
}