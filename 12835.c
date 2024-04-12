void fun()
{
  int entity_6 = 88;
  char entity_3[50] = "";
  char entity_9 = 'd';
  char* entity_7;
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[0]='0';
  memset(entity_3, 'K', 50-1);
  entity_3[50-1]='0';
  memcpy(entity_7, entity_3, 50*sizeof(char));
}