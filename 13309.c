void fun()
{
  int entity_2 = 78;
  entity_2 = 42;
  char* entity_3;
  char entity_8[54] = "";
  entity_3 = (char*)malloc(entity_2*sizeof(char));
  entity_3[0]='0';
  memset(entity_8, 'y', 54-1);
  entity_8[54-1]='0';
  strcpy(entity_3, entity_8);
}