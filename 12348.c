void fun()
{
  int entity_7 = 8;
  char entity_3[20] = "";
  char entity_4[1] = "";
  char* entity_2;
  char entity_1 = 'a';
  memset(entity_3, 'i', 20-1);
  entity_3[20-1]='0';
  entity_2 = (char*)malloc(entity_7*sizeof(char));
  entity_2[0]='0';
  memset(entity_4, 'M', 1-1);
  entity_4[1-1]='0';
  memcpy(entity_2, entity_3, 20*sizeof(char));
}