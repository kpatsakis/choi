void fun()
{
  int entity_3 = 32;
  char* entity_9;
  char entity_0[78] = "";
  memset(entity_0, 'X', 78-1);
  entity_0[78-1]='0';
  entity_9 = (char*)malloc(entity_3*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_0, 78*sizeof(char));
}