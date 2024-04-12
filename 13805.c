void fun()
{
  int entity_2 = 41;
  int entity_0 = 87;
  entity_2 = 12;
  char entity_5[22] = "";
  char* entity_7;
  char entity_8 = 'J';
  entity_7 = (char*)malloc(entity_2*sizeof(char));
  entity_7[0]='0';
  memset(entity_5, 'b', 22-1);
  entity_5[22-1]='0';
  strcpy(entity_7, entity_5);
}