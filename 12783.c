void fun()
{
  int entity_9 = 32;
  char entity_0[60] = "";
  char* entity_2;
  memset(entity_0, 'o', 60-1);
  entity_0[60-1]='0';
  entity_2 = (char*)malloc(entity_9*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_0, 60*sizeof(char));
}