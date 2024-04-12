void fun()
{
  int entity_4 = 16;
  char* entity_9;
  char entity_2[80] = "";
  entity_9 = (char*)malloc(entity_4*sizeof(char));
  entity_9[0]='0';
  memset(entity_2, 'O', 80-1);
  entity_2[80-1]='0';
  entity_4 = 42;
  memcpy(entity_9, entity_2, 80*sizeof(char));
}