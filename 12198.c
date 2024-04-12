void fun()
{
  int entity_4 = 34;
  char entity_6[15] = "";
  char* entity_3;
  entity_3 = (char*)malloc(entity_4*sizeof(char));
  entity_3[0]='0';
  memset(entity_6, 'Q', 15-1);
  entity_6[15-1]='0';
  strcpy(entity_3, entity_6);
}