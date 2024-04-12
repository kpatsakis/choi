void fun()
{
  int entity_8 = 40;
  entity_8 = 69;
  char entity_3[25] = "";
  char* entity_1;
  char* entity_5;
  char entity_7 = 'l';
  memset(entity_3, 'R', 25-1);
  entity_3[25-1]='0';
  entity_1 = (char*)malloc(entity_8*sizeof(char));
  entity_1[0]='0';
  entity_5 = (char*)malloc(98*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_1, entity_3, 25*sizeof(char));
}