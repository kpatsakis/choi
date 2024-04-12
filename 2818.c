void fun()
{
  int entity_1 = 10;
  int entity_5 = 90;
  char* entity_3;
  char entity_6[46] = "";
  entity_6 = NULL;
  char* entity_9;
  entity_3 = (char*)malloc(6*sizeof(char));
  entity_3[6-1]='';
  memset(entity_6, 'x', 46-1);
  entity_6[46-1]='';
  entity_9 = (char*)malloc(entity_1*sizeof(char));
  entity_9[entity_1-1]='';
  memcpy(entity_9, entity_6, 46*sizeof(char));
}