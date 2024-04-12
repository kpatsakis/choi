void fun()
{
  int entity_5 = 25;
  entity_5 = 15;
  char entity_3[entity_5] = "";
  entity_3 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(82*sizeof(char));
  entity_4[82-1]='';
  memset(entity_3, 'Q', entity_5-1);
  entity_3[entity_5-1]='';
  memcpy(entity_4, entity_3, entity_5*sizeof(char));
}