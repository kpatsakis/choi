void fun()
{
  int entity_5 = 71;
  char* entity_3;
  char entity_7[entity_5] = "";
  memset(entity_7, 'M', entity_5-1);
  entity_7[entity_5-1]='0';
  entity_3 = (char*)malloc(21*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_7);
}