void fun()
{
  int entity_3 = 25;
  char entity_7[40] = "";
  char* entity_8;
  entity_8 = (char*)malloc(entity_3*sizeof(char));
  entity_8[0]='0';
  memset(entity_7, 't', 40-1);
  entity_7[40-1]='0';
  strcpy(entity_8, entity_7);
}