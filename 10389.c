void fun()
{
  int entity_1 = 12;
  char* entity_2;
  char entity_7[65] = "";
  entity_2 = (char*)malloc(61*sizeof(char));
  entity_2[0]='0';
  memset(entity_7, 'W', 65-1);
  entity_7[65-1]='0';
  entity_7[32] = 'z';
}