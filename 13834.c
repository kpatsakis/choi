void fun()
{
  int entity_8 = 23;
  char* entity_5;
  char entity_9[2] = "";
  entity_5 = (char*)malloc(entity_8*sizeof(char));
  entity_5[0]='0';
  memset(entity_9, 'a', 2-1);
  entity_9[2-1]='0';
  entity_8 = 30;
  memcpy(entity_5, entity_9, 2*sizeof(char));
}