void fun()
{
  int entity_3 = 65;
  int entity_2 = 66;
  entity_3 = 95;
  char entity_0[50] = "";
  char* entity_9;
  memset(entity_0, 'p', 50-1);
  entity_0[50-1]='0';
  entity_9 = (char*)malloc(entity_3*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_0, 50*sizeof(char));
}