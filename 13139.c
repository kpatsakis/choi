void fun()
{
  int entity_7 = 50;
  char* entity_8;
  char entity_2[17] = "";
  memset(entity_2, 'J', 17-1);
  entity_2[17-1]='0';
  entity_8 = (char*)malloc(entity_7*sizeof(char));
  entity_8[0]='0';
  entity_7 = 55;
  memcpy(entity_8, entity_2, 17*sizeof(char));
}