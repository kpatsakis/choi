void fun()
{
  int entity_2 = 78;
  int entity_8 = 61;
  char* entity_3;
  char entity_4[50] = "";
  memset(entity_4, 'm', 50-1);
  entity_4[50-1]='0';
  entity_3 = (char*)malloc(12*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_4);
}