void fun()
{
  int entity_2 = 40;
  char entity_5[12] = "";
  char entity_8[100] = "";
  char* entity_6;
  memset(entity_8, 'S', 100-1);
  entity_8[100-1]='0';
  entity_6 = (char*)malloc(entity_2*sizeof(char));
  entity_6[0]='0';
  memset(entity_5, 'B', 12-1);
  entity_5[12-1]='0';
  strcpy(entity_6, entity_8);
}