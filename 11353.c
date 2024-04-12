void fun()
{
  int entity_6 = 86;
  char entity_4[29] = "";
  char* entity_8;
  char* entity_3;
  memset(entity_4, 'E', 29-1);
  entity_4[29-1]='0';
  entity_8 = (char*)malloc(98*sizeof(char));
  entity_8[0]='0';
  entity_3 = (char*)malloc(41*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_8, entity_4);
}