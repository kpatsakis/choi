void fun()
{
  int entity_2 = 62;
  char* entity_6;
  char entity_5[entity_2] = "";
  char entity_4 = 'D';
  memset(entity_5, 'l', entity_2-1);
  entity_5[entity_2-1]='0';
  entity_6 = (char*)malloc(85*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_6, entity_5);
}