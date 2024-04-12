void fun()
{
  int entity_6 = 18;
  char entity_0[59] = "";
  char* entity_2;
  char entity_3[1] = "";
  memset(entity_0, 'n', 59-1);
  entity_0[59-1]='0';
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[0]='0';
  memset(entity_3, 'e', 1-1);
  entity_3[1-1]='0';
  memcpy(entity_2, entity_0, 59*sizeof(char));
}