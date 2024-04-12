void fun()
{
  int entity_9 = 16;
  entity_9 = 16;
  char entity_6[72] = "";
  char* entity_2;
  entity_2 = (char*)malloc(entity_9*sizeof(char));
  entity_2[0]='0';
  memset(entity_6, 'v', 72-1);
  entity_6[72-1]='0';
  memcpy(entity_2, entity_6, 72*sizeof(char));
}