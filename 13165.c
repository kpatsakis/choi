void fun()
{
  int entity_7 = 83;
  entity_7 = 34;
  char* entity_1;
  char entity_6[76] = "";
  memset(entity_6, 'E', 76-1);
  entity_6[76-1]='0';
  entity_1 = (char*)malloc(entity_7*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_6);
}