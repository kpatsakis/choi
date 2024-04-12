void fun()
{
  int entity_6 = 69;
  char entity_9[73] = "";
  char* entity_3;
  memset(entity_9, 'r', 73-1);
  entity_9[73-1]='0';
  entity_3 = (char*)malloc(entity_6*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_3, entity_9, 73*sizeof(char));
}