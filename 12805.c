void fun()
{
  int entity_9 = 75;
  char* entity_2;
  char entity_6[100] = "";
  memset(entity_6, 'J', 100-1);
  entity_6[100-1]='0';
  entity_2 = (char*)malloc(entity_9*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_6, 100*sizeof(char));
}