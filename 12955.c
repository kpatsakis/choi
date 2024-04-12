void fun()
{
  int entity_1 = 40;
  char* entity_0;
  char* entity_4;
  char entity_5 = 'w';
  char entity_2[40] = "";
  memset(entity_2, 'J', 40-1);
  entity_2[40-1]='0';
  entity_0 = (char*)malloc(25*sizeof(char));
  entity_0[0]='0';
  entity_4 = (char*)malloc(entity_1*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_4, entity_2);
}