void fun()
{
  int entity_0 = 65;
  char* entity_6;
  char entity_3[28] = "";
  entity_3 = NULL;
  memset(entity_3, 'e', 28-1);
  entity_3[28-1]='';
  entity_6 = (char*)malloc(entity_0*sizeof(char));
  entity_6[entity_0-1]='';
  memcpy(entity_6, entity_3, 28*sizeof(char));
}