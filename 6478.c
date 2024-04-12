void fun()
{
  int entity_1 = 75;
  int entity_5 = 80;
  char entity_6[entity_5] = "";
  entity_6 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(10*sizeof(char));
  entity_7[10-1]='';
  memset(entity_6, 'u', entity_5-1);
  entity_6[entity_5-1]='';
  entity_5 = 70;
  memcpy(entity_7, entity_6, entity_5*sizeof(char));
}