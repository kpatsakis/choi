void fun()
{
  int entity_6 = 14;
  char entity_0 = 'l';
  char entity_8[55] = "";
  char entity_7[69] = "";
  char* entity_1;
  memset(entity_8, 'S', 55-1);
  entity_8[55-1]='0';
  memset(entity_7, 'M', 69-1);
  entity_7[69-1]='0';
  entity_1 = (char*)malloc(entity_6*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_1, entity_7, 69*sizeof(char));
}