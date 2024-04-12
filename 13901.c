void fun()
{
  int entity_3 = 53;
  char* entity_5;
  char entity_6[49] = "";
  entity_5 = (char*)malloc(entity_3*sizeof(char));
  entity_5[0]='0';
  memset(entity_6, 'o', 49-1);
  entity_6[49-1]='0';
  entity_3 = 26;
  memcpy(entity_5, entity_6, 49*sizeof(char));
}