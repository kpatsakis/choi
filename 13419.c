void fun()
{
  int entity_9 = 63;
  int entity_3 = 66;
  char entity_8[46] = "";
  char* entity_5;
  char* entity_2;
  memset(entity_8, 'b', 46-1);
  entity_8[46-1]='0';
  entity_5 = (char*)malloc(42*sizeof(char));
  entity_5[0]='0';
  entity_2 = (char*)malloc(entity_3*sizeof(char));
  entity_2[0]='0';
  entity_3 = 79;
  strcpy(entity_2, entity_8);
}