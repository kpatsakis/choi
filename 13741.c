void fun()
{
  int entity_1 = 2;
  char entity_5[64] = "";
  char* entity_6;
  char entity_7[72] = "";
  char entity_2 = 'e';
  memset(entity_7, 'h', 72-1);
  entity_7[72-1]='0';
  memset(entity_5, 'Z', 64-1);
  entity_5[64-1]='0';
  entity_6 = (char*)malloc(entity_1*sizeof(char));
  entity_6[0]='0';
  entity_1 = 33;
  memcpy(entity_6, entity_5, 64*sizeof(char));
}