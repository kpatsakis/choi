void fun()
{
  int entity_4 = 93;
  int entity_7 = 51;
  char entity_8[58] = "";
  char* entity_6;
  char entity_3 = 'D';
  memset(entity_8, 'o', 58-1);
  entity_8[58-1]='0';
  entity_6 = (char*)malloc(98*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_6, entity_8);
}