void fun()
{
  int entity_2 = 74;
  int entity_7 = 90;
  int entity_5 = 68;
  char* entity_6;
  char entity_8[77] = "";
  char entity_3[90] = "";
  entity_6 = (char*)malloc(entity_7*sizeof(char));
  entity_6[0]='0';
  memset(entity_8, 'D', 77-1);
  entity_8[77-1]='0';
  memset(entity_3, 'b', 90-1);
  entity_3[90-1]='0';
  strcpy(entity_6, entity_8);
}