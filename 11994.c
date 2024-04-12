void fun()
{
  int entity_2 = 82;
  char entity_6[10] = "";
  char entity_1[7] = "";
  char* entity_3;
  entity_3 = (char*)malloc(67*sizeof(char));
  entity_3[0]='0';
  memset(entity_6, 'q', 10-1);
  entity_6[10-1]='0';
  memset(entity_1, 'a', 7-1);
  entity_1[7-1]='0';
  memcpy(entity_3, entity_6, 10*sizeof(char));
}