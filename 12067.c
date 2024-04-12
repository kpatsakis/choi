void fun()
{
  int entity_1 = 31;
  char* entity_3;
  char entity_4[9] = "";
  entity_3 = (char*)malloc(entity_1*sizeof(char));
  entity_3[0]='0';
  memset(entity_4, 'B', 9-1);
  entity_4[9-1]='0';
  strcpy(entity_3, entity_4);
}