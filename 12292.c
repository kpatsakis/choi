void fun()
{
  int entity_3 = 61;
  char entity_1[99] = "";
  char* entity_6;
  char entity_5[6] = "";
  memset(entity_1, 'B', 99-1);
  entity_1[99-1]='0';
  entity_6 = (char*)malloc(entity_3*sizeof(char));
  entity_6[0]='0';
  memset(entity_5, 'M', 6-1);
  entity_5[6-1]='0';
  memcpy(entity_6, entity_5, 6*sizeof(char));
}