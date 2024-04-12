void fun()
{
  int entity_0 = 4;
  entity_0 = 7;
  char* entity_2;
  char entity_6[28] = "";
  entity_6 = NULL;
  memset(entity_6, 'p', 28-1);
  entity_6[28-1]='';
  entity_2 = (char*)malloc(entity_0*sizeof(char));
  entity_2[entity_0-1]='';
  memcpy(entity_2, entity_6, 28*sizeof(char));
}