void fun()
{
  int entity_6 = 36;
  char* entity_2;
  char entity_1[71] = "";
  memset(entity_1, 'B', 71-1);
  entity_1[71-1]='0';
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_1);
}