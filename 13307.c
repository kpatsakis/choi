void fun()
{
  int entity_1 = 29;
  int entity_7 = 72;
  entity_7 = 36;
  char entity_4[84] = "";
  char* entity_3;
  entity_3 = (char*)malloc(entity_7*sizeof(char));
  entity_3[0]='0';
  memset(entity_4, 'b', 84-1);
  entity_4[84-1]='0';
  strcpy(entity_3, entity_4);
}