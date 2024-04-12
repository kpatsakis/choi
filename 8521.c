void fun()
{
  int entity_0 = 65;
  int entity_7 = 59;
  char entity_5 = 'f';
  char entity_6[entity_7] = "";
  entity_6 = NULL;
  char entity_9 = 'e';
  char* entity_4;
  memset(entity_6, 's', entity_7-1);
  entity_6[entity_7-1]='';
  entity_4 = (char*)malloc(100*sizeof(char));
  entity_4[100-1]='';
  entity_7 = 73;
  memcpy(entity_4, entity_6, entity_7*sizeof(char));
}