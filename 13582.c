void fun()
{
  int entity_3 = 98;
  char entity_0[2] = "";
  char entity_7[54] = "";
  char* entity_8;
  memset(entity_7, 'C', 54-1);
  entity_7[54-1]='0';
  entity_8 = (char*)malloc(entity_3*sizeof(char));
  entity_8[0]='0';
  memset(entity_0, 'O', 2-1);
  entity_0[2-1]='0';
  entity_3 = 69;
  strcpy(entity_8, entity_0);
}