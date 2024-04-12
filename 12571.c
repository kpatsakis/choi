void fun()
{
  int entity_5 = 88;
  char* entity_6;
  char entity_8 = 'b';
  char entity_3[entity_5] = "";
  entity_6 = (char*)malloc(58*sizeof(char));
  entity_6[0]='0';
  memset(entity_3, 'V', entity_5-1);
  entity_3[entity_5-1]='0';
  strcpy(entity_6, entity_3);
}