void fun()
{
  int entity_1 = 35;
  char entity_3[71] = "";
  char entity_7 = 'P';
  char* entity_5;
  entity_5 = (char*)malloc(42*sizeof(char));
  entity_5[0]='0';
  memset(entity_3, 'E', 71-1);
  entity_3[71-1]='0';
  strcpy(entity_5, entity_3);
}