void fun()
{
  int entity_1 = 90;
  entity_1 = 85;
  char entity_2[46] = "";
  char* entity_8;
  entity_8 = (char*)malloc(entity_1*sizeof(char));
  entity_8[0]='0';
  memset(entity_2, 'm', 46-1);
  entity_2[46-1]='0';
  strcpy(entity_8, entity_2);
}