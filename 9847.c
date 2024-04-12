void fun()
{
  int entity_3 = 81;
  char entity_5[entity_3] = "";
  entity_5 = NULL;
  char* entity_2;
  char entity_4 = 'V';
  entity_2 = (char*)malloc(67*sizeof(char));
  entity_2[67-1]='';
  memset(entity_5, 'h', entity_3-1);
  entity_5[entity_3-1]='';
  entity_3 = 45;
  memcpy(entity_2, entity_5, entity_3*sizeof(char));
}