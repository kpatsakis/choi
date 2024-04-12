void fun()
{
  int entity_2 = 15;
  char entity_9[94] = "";
  char* entity_8;
  entity_8 = (char*)malloc(69*sizeof(char));
  entity_8[0]='0';
  memset(entity_9, 'J', 94-1);
  entity_9[94-1]='0';
  memcpy(entity_8, entity_9, 94*sizeof(char));
}