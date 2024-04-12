void fun()
{
  int entity_2 = 59;
  entity_2 = 83;
  char* entity_4;
  char entity_8[74] = "";
  entity_8 = NULL;
  memset(entity_8, 'c', 74-1);
  entity_8[74-1]='';
  entity_4 = (char*)malloc(entity_2*sizeof(char));
  entity_4[entity_2-1]='';
  memcpy(entity_4, entity_8, 74*sizeof(char));
}