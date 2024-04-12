void fun()
{
  int entity_4 = 78;
  entity_4 = 9;
  char entity_1[13] = "";
  char* entity_6;
  memset(entity_1, 'D', 13-1);
  entity_1[13-1]='0';
  entity_6 = (char*)malloc(entity_4*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_6, entity_1);
}