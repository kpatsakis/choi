void fun()
{
  int entity_2 = 49;
  char entity_5[26] = "";
  entity_5 = NULL;
  char* entity_6;
  memset(entity_5, 'S', 26-1);
  entity_5[26-1]='';
  entity_6 = (char*)malloc(entity_2*sizeof(char));
  entity_6[entity_2-1]='';
  entity_2 = 55;
  memcpy(entity_6, entity_5, 26*sizeof(char));
}