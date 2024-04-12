void fun()
{
  int entity_4 = 40;
  char* entity_3;
  char entity_6[5] = "";
  entity_3 = (char*)malloc(entity_4*sizeof(char));
  entity_3[0]='0';
  memset(entity_6, 'r', 5-1);
  entity_6[5-1]='0';
  entity_4 = 91;
  memcpy(entity_3, entity_6, 5*sizeof(char));
}