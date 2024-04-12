void fun()
{
  int entity_2 = 65;
  char entity_8[83] = "";
  char* entity_5;
  char* entity_6;
  entity_5 = (char*)malloc(entity_2*sizeof(char));
  entity_5[0]='0';
  memset(entity_8, 'P', 83-1);
  entity_8[83-1]='0';
  entity_6 = (char*)malloc(94*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_5, entity_8);
}