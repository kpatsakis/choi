void fun()
{
  int entity_8 = 95;
  entity_8 = 14;
  char entity_6[51] = "";
  entity_6 = NULL;
  char* entity_3;
  char* entity_9;
  memset(entity_6, 'j', 51-1);
  entity_6[51-1]='';
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[entity_8-1]='';
  entity_3 = (char*)malloc(11*sizeof(char));
  entity_3[11-1]='';
  memcpy(entity_9, entity_6, 51*sizeof(char));
}