void fun()
{
  int entity_4 = 7;
  char entity_1[100] = "";
  char* entity_3;
  entity_3 = (char*)malloc(18*sizeof(char));
  entity_3[0]='0';
  memset(entity_1, 'l', 100-1);
  entity_1[100-1]='0';
  strcpy(entity_3, entity_1);
}