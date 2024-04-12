void fun()
{
  int entity_0 = 9;
  char entity_6[61] = "";
  entity_6 = NULL;
  char entity_7 = 'p';
  char* entity_9;
  char* entity_5;
  entity_9 = (char*)malloc(entity_0*sizeof(char));
  entity_9[entity_0-1]='';
  entity_5 = (char*)malloc(4*sizeof(char));
  entity_5[4-1]='';
  memset(entity_6, 'O', 61-1);
  entity_6[61-1]='';
  entity_0 = 90;
  memcpy(entity_9, entity_6, 61*sizeof(char));
}