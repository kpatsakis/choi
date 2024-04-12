void fun()
{
  int entity_9 = 1;
  char* entity_6;
  char entity_7[15] = "";
  memset(entity_7, 'O', 15-1);
  entity_7[15-1]='0';
  entity_6 = (char*)malloc(1*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_7, 15*sizeof(char));
}