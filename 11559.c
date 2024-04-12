void fun()
{
  int entity_8 = 5;
  char entity_2[41] = "";
  char entity_6 = 'K';
  char* entity_3;
  memset(entity_2, 'U', 41-1);
  entity_2[41-1]='0';
  entity_3 = (char*)malloc(6*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_3, entity_2, 41*sizeof(char));
}