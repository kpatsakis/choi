void fun()
{
  int entity_4 = 23;
  char* entity_2;
  char entity_0[96] = "";
  entity_0 = NULL;
  entity_2 = (char*)malloc(28*sizeof(char));
  entity_2[28-1]='';
  memset(entity_0, 'w', 96-1);
  entity_0[96-1]='';
  memcpy(entity_2, entity_0, 96*sizeof(char));
}