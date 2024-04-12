void fun()
{
  int entity_0 = 9;
  char entity_6[2] = "";
  char* entity_3;
  char* entity_9;
  entity_9 = (char*)malloc(79*sizeof(char));
  entity_9[0]='0';
  memset(entity_6, 'J', 2-1);
  entity_6[2-1]='0';
  entity_3 = (char*)malloc(entity_0*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_3, entity_6, 2*sizeof(char));
}