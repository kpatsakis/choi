void fun()
{
  int entity_9 = 21;
  char entity_3[10] = "";
  char* entity_6;
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[0]='0';
  memset(entity_3, 'S', 10-1);
  entity_3[10-1]='0';
  entity_9 = 25;
  memcpy(entity_6, entity_3, 10*sizeof(char));
}