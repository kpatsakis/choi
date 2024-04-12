void fun()
{
  int entity_3 = 75;
  char* entity_8;
  char entity_2[82] = "";
  entity_8 = (char*)malloc(entity_3*sizeof(char));
  entity_8[0]='0';
  memset(entity_2, 'J', 82-1);
  entity_2[82-1]='0';
  strcpy(entity_8, entity_2);
}