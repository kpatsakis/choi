void fun()
{
  int entity_6 = 22;
  int entity_1 = 26;
  char entity_5[entity_6] = "";
  entity_5 = NULL;
  char* entity_2;
  memset(entity_5, 'm', entity_6-1);
  entity_5[entity_6-1]='';
  entity_2 = (char*)malloc(67*sizeof(char));
  entity_2[67-1]='';
  memcpy(entity_2, entity_5, entity_6*sizeof(char));
}