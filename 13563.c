void fun()
{
  int entity_5 = 32;
  char* entity_2;
  char entity_3[100] = "";
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[0]='0';
  memset(entity_3, 'J', 100-1);
  entity_3[100-1]='0';
  entity_5 = 38;
  memcpy(entity_2, entity_3, 100*sizeof(char));
}