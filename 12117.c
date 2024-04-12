void fun()
{
  int entity_7 = 71;
  char* entity_3;
  char entity_9[12] = "";
  entity_3 = (char*)malloc(entity_7*sizeof(char));
  entity_3[0]='0';
  memset(entity_9, 'O', 12-1);
  entity_9[12-1]='0';
  memcpy(entity_3, entity_9, 12*sizeof(char));
}