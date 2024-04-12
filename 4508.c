void fun()
{
  int entity_1 = 50;
  char entity_5[51] = "";
  entity_5 = NULL;
  char* entity_3;
  memset(entity_5, 'h', 51-1);
  entity_5[51-1]='';
  entity_3 = (char*)malloc(entity_1*sizeof(char));
  entity_3[entity_1-1]='';
  memcpy(entity_3, entity_5, 51*sizeof(char));
}