void fun()
{
  int entity_9 = 12;
  char* entity_2;
  char entity_5[75] = "";
  entity_2 = (char*)malloc(4*sizeof(char));
  entity_2[0]='0';
  memset(entity_5, 'i', 75-1);
  entity_5[75-1]='0';
  memcpy(entity_2, entity_5, 75*sizeof(char));
}