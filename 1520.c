void fun()
{
  int entity_5 = 52;
  int entity_6 = 90;
  entity_5 = 63;
  char entity_4[entity_5] = "";
  entity_4 = NULL;
  char* entity_2;
  memset(entity_4, 'T', entity_5-1);
  entity_4[entity_5-1]='';
  entity_2 = (char*)malloc(100*sizeof(char));
  entity_2[100-1]='';
  memcpy(entity_2, entity_4, entity_5*sizeof(char));
}