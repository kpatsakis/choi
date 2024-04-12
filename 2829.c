void fun()
{
  int entity_4 = 7;
  char entity_5[96] = "";
  entity_5 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(entity_4*sizeof(char));
  entity_3[entity_4-1]='';
  memset(entity_5, 'b', 96-1);
  entity_5[96-1]='';
  memcpy(entity_3, entity_5, 96*sizeof(char));
}