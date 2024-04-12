void fun()
{
  int entity_2 = 55;
  char* entity_7;
  char entity_1[18] = "";
  char entity_0[3] = "";
  memset(entity_0, 'z', 3-1);
  entity_0[3-1]='0';
  entity_7 = (char*)malloc(entity_2*sizeof(char));
  entity_7[0]='0';
  memset(entity_1, 'k', 18-1);
  entity_1[18-1]='0';
  memcpy(entity_7, entity_0, 3*sizeof(char));
}