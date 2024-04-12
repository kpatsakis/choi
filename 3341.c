void fun()
{
  int entity_2 = 84;
  char entity_8[60] = "";
  entity_8 = NULL;
  char entity_3[entity_2] = "";
  entity_3 = NULL;
  char entity_7 = 's';
  char* entity_5;
  memset(entity_3, 'I', entity_2-1);
  entity_3[entity_2-1]='';
  memset(entity_8, 'x', 60-1);
  entity_8[60-1]='';
  entity_5 = (char*)malloc(79*sizeof(char));
  entity_5[79-1]='';
  memcpy(entity_5, entity_3, entity_2*sizeof(char));
}