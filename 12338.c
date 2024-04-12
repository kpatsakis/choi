void fun()
{
  int entity_5 = 33;
  char entity_9[5] = "";
  char* entity_6;
  char entity_4[82] = "";
  entity_6 = (char*)malloc(entity_5*sizeof(char));
  entity_6[0]='0';
  memset(entity_9, 'c', 5-1);
  entity_9[5-1]='0';
  memset(entity_4, 'w', 82-1);
  entity_4[82-1]='0';
  memcpy(entity_6, entity_4, 82*sizeof(char));
}