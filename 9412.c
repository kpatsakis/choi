void fun()
{
  int entity_9 = 67;
  char entity_0[25] = "";
  entity_0 = NULL;
  char* entity_2;
  memset(entity_0, 'w', 25-1);
  entity_0[25-1]='';
  entity_2 = (char*)malloc(20*sizeof(char));
  entity_2[20-1]='';
  memcpy(entity_2, entity_0, 25*sizeof(char));
}