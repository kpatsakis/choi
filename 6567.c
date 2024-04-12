void fun()
{
  int entity_7 = 24;
  char* entity_6;
  char entity_1[22] = "";
  entity_1 = NULL;
  memset(entity_1, 'u', 22-1);
  entity_1[22-1]='';
  entity_6 = (char*)malloc(entity_7*sizeof(char));
  entity_6[entity_7-1]='';
  memcpy(entity_6, entity_1, 22*sizeof(char));
}