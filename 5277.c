void fun()
{
  int entity_0 = 20;
  char* entity_1;
  char entity_4 = 'q';
  char entity_6[22] = "";
  entity_6 = NULL;
  memset(entity_6, 'Z', 22-1);
  entity_6[22-1]='';
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[entity_0-1]='';
  memcpy(entity_1, entity_6, 22*sizeof(char));
}