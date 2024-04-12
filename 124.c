void fun()
{
  int entity_2 = 82;
  char entity_5[entity_2] = "";
  entity_5 = NULL;
  char* entity_7;
  memset(entity_5, 'H', entity_2-1);
  entity_5[entity_2-1]='';
  entity_7 = (char*)malloc(41*sizeof(char));
  entity_7[41-1]='';
  memcpy(entity_7, entity_5, entity_2*sizeof(char));
}