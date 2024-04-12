void fun()
{
  int entity_1 = 60;
  char entity_9[85] = "";
  char* entity_2;
  memset(entity_9, 'K', 85-1);
  entity_9[85-1]='0';
  entity_2 = (char*)malloc(84*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_9, 85*sizeof(char));
}