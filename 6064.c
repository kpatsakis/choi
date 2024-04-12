void fun()
{
  int entity_5 = 97;
  char entity_3 = 'S';
  char entity_9[51] = "";
  entity_9 = NULL;
  char* entity_4;
  char* entity_8;
  memset(entity_9, 'j', 51-1);
  entity_9[51-1]='';
  entity_4 = (char*)malloc(entity_5*sizeof(char));
  entity_4[entity_5-1]='';
  entity_8 = (char*)malloc(3*sizeof(char));
  entity_8[3-1]='';
  memcpy(entity_4, entity_9, 51*sizeof(char));
}