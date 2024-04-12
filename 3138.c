void fun()
{
  int entity_7 = 67;
  entity_7 = 4;
  char* entity_6;
  char entity_5[31] = "";
  entity_5 = NULL;
  entity_6 = (char*)malloc(entity_7*sizeof(char));
  entity_6[entity_7-1]='';
  memset(entity_5, 'g', 31-1);
  entity_5[31-1]='';
  memcpy(entity_6, entity_5, 31*sizeof(char));
}