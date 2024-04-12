void fun()
{
  int entity_1 = 5;
  char* entity_5;
  char entity_2[41] = "";
  memset(entity_2, 'w', 41-1);
  entity_2[41-1]='0';
  entity_5 = (char*)malloc(entity_1*sizeof(char));
  entity_5[0]='0';
  entity_1 = 20;
  memcpy(entity_5, entity_2, 41*sizeof(char));
}