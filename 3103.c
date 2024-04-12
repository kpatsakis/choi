void fun()
{
  int entity_7 = 68;
  int entity_4 = 19;
  char entity_3[entity_7] = "";
  entity_3 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(22*sizeof(char));
  entity_6[22-1]='';
  memset(entity_3, 'A', entity_7-1);
  entity_3[entity_7-1]='';
  memcpy(entity_6, entity_3, entity_7*sizeof(char));
}