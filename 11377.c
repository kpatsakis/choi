void fun()
{
  int entity_0 = 47;
  char* entity_4;
  char entity_2[65] = "";
  entity_4 = (char*)malloc(45*sizeof(char));
  entity_4[0]='0';
  memset(entity_2, 'r', 65-1);
  entity_2[65-1]='0';
  memcpy(entity_4, entity_2, 65*sizeof(char));
}