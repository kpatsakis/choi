void fun()
{
  int entity_9 = 12;
  char* entity_6;
  char entity_2[31] = "";
  char entity_5 = 'G';
  entity_6 = (char*)malloc(99*sizeof(char));
  entity_6[0]='0';
  memset(entity_2, 'A', 31-1);
  entity_2[31-1]='0';
  memcpy(entity_6, entity_2, 31*sizeof(char));
}