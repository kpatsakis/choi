void fun()
{
  int entity_8 = 69;
  char* entity_7;
  char entity_3[25] = "";
  char entity_6[55] = "";
  entity_7 = (char*)malloc(entity_8*sizeof(char));
  entity_7[0]='0';
  memset(entity_6, 'Y', 55-1);
  entity_6[55-1]='0';
  memset(entity_3, 'g', 25-1);
  entity_3[25-1]='0';
  memcpy(entity_7, entity_6, 55*sizeof(char));
}