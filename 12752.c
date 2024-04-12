void fun()
{
  int entity_3 = 20;
  char* entity_2;
  char entity_0[36] = "";
  memset(entity_0, 'v', 36-1);
  entity_0[36-1]='0';
  entity_2 = (char*)malloc(entity_3*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_0, 36*sizeof(char));
}