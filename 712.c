void fun()
{
  int entity_7 = 16;
  char* entity_1;
  char entity_3[entity_7] = "";
  entity_3 = NULL;
  memset(entity_3, 'T', entity_7-1);
  entity_3[entity_7-1]='';
  entity_1 = (char*)malloc(67*sizeof(char));
  entity_1[67-1]='';
  entity_7 = 65;
  memcpy(entity_1, entity_3, entity_7*sizeof(char));
}