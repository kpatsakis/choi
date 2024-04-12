void fun()
{
  int entity_7 = 98;
  char* entity_2;
  char entity_5[41] = "";
  char* entity_4;
  entity_2 = (char*)malloc(entity_7*sizeof(char));
  entity_2[0]='0';
  entity_4 = (char*)malloc(4*sizeof(char));
  entity_4[0]='0';
  memset(entity_5, 'J', 41-1);
  entity_5[41-1]='0';
  memcpy(entity_2, entity_5, 41*sizeof(char));
}