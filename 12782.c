void fun()
{
  int entity_4 = 78;
  int entity_9 = 11;
  int entity_6 = 93;
  char entity_3[14] = "";
  char entity_8 = 'k';
  char* entity_5;
  memset(entity_3, 'c', 14-1);
  entity_3[14-1]='0';
  entity_5 = (char*)malloc(entity_4*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_5, entity_3);
}