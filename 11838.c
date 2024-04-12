void fun()
{
  int entity_8 = 18;
  char entity_1[4] = "";
  char entity_4[2] = "";
  char* entity_7;
  memset(entity_4, 'i', 2-1);
  entity_4[2-1]='0';
  memset(entity_1, 'G', 4-1);
  entity_1[4-1]='0';
  entity_7 = (char*)malloc(30*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_4, 2*sizeof(char));
}