void fun()
{
  int entity_5 = 94;
  char entity_4[entity_5] = "";
  entity_4 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(21*sizeof(char));
  entity_8[21-1]='';
  memset(entity_4, 'A', entity_5-1);
  entity_4[entity_5-1]='';
  entity_5 = 41;
  entity_4[28] = 'j';
}