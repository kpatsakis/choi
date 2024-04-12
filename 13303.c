void fun()
{
  int entity_0 = 44;
  int entity_5 = 17;
  char entity_1[69] = "";
  char* entity_8;
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[0]='0';
  memset(entity_1, 'o', 69-1);
  entity_1[69-1]='0';
  entity_0 = 81;
  memcpy(entity_8, entity_1, 69*sizeof(char));
}