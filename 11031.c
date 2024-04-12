void fun()
{
  int entity_8 = 68;
  char* entity_2;
  char entity_1[41] = "";
  char entity_3 = 'M';
  memset(entity_1, 'r', 41-1);
  entity_1[41-1]='0';
  entity_2 = (char*)malloc(32*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_1, 41*sizeof(char));
}