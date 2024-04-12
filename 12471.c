void fun()
{
  int entity_6 = 98;
  char entity_5[55] = "";
  char* entity_8;
  memset(entity_5, 'e', 55-1);
  entity_5[55-1]='0';
  entity_8 = (char*)malloc(entity_6*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_5);
}