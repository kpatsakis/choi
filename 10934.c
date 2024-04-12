void fun()
{
  int entity_8 = 54;
  char entity_1[96] = "";
  char entity_9[89] = "";
  char* entity_7;
  entity_7 = (char*)malloc(20*sizeof(char));
  entity_7[0]='0';
  memset(entity_1, 'x', 96-1);
  entity_1[96-1]='0';
  memset(entity_9, 'G', 89-1);
  entity_9[89-1]='0';
  entity_1[79] = 'C';
}