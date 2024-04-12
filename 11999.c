void fun()
{
  int entity_8 = 81;
  char* entity_1;
  char entity_9[72] = "";
  memset(entity_9, 'w', 72-1);
  entity_9[72-1]='0';
  entity_1 = (char*)malloc(93*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_1, entity_9, 72*sizeof(char));
}