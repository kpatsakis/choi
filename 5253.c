void fun()
{
  int entity_2 = 17;
  char entity_3[entity_2] = "";
  entity_3 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(26*sizeof(char));
  entity_5[26-1]='';
  memset(entity_3, 'i', entity_2-1);
  entity_3[entity_2-1]='';
  entity_2 = 72;
  memcpy(entity_5, entity_3, entity_2*sizeof(char));
}