void fun()
{
  int entity_5 = 18;
  char entity_3[entity_5] = "";
  char* entity_8;
  memset(entity_3, 'a', entity_5-1);
  entity_3[entity_5-1]='0';
  entity_8 = (char*)malloc(21*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_3);
}