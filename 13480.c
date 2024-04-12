void fun()
{
  int entity_4 = 39;
  entity_4 = 18;
  char entity_6[35] = "";
  char* entity_1;
  char entity_3 = 'S';
  memset(entity_6, 'a', 35-1);
  entity_6[35-1]='0';
  entity_1 = (char*)malloc(entity_4*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_6);
}