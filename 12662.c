void fun()
{
  int entity_9 = 95;
  int entity_6 = 39;
  char entity_8[48] = "";
  char* entity_2;
  char entity_4 = 'd';
  memset(entity_8, 'p', 48-1);
  entity_8[48-1]='0';
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_8, 48*sizeof(char));
}