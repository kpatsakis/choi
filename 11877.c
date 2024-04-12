void fun()
{
  char* entity_1;
  char entity_0 = 's';
  char entity_4[85] = "";
  char entity_5[54] = "";
  memset(entity_4, 'I', 85-1);
  entity_4[85-1]='0';
  entity_1 = (char*)malloc(15*sizeof(char));
  entity_1[0]='0';
  memset(entity_5, 'X', 54-1);
  entity_5[54-1]='0';
  memcpy(entity_1, entity_5, 54*sizeof(char));
}