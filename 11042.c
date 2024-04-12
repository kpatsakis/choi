void fun()
{
  int entity_7 = 78;
  char entity_3 = 'O';
  char* entity_4;
  char entity_5[83] = "";
  memset(entity_5, 'I', 83-1);
  entity_5[83-1]='0';
  entity_4 = (char*)malloc(39*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_4, entity_5);
}