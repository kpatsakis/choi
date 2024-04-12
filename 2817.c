void fun()
{
  int entity_1 = 74;
  char* entity_6;
  char entity_3[36] = "";
  entity_3 = NULL;
  memset(entity_3, 'P', 36-1);
  entity_3[36-1]='';
  entity_6 = (char*)malloc(entity_1*sizeof(char));
  entity_6[entity_1-1]='';
  memcpy(entity_6, entity_3, 36*sizeof(char));
}